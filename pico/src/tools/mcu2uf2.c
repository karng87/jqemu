#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#define hex(x,y,...) (0x ## x ## y)
// --- definitions --------------
#ifndef O_BINARY
    #define O_BINARY 0
#endif

#define MAX_FILE_SIZE (16*1024*1024)

#define UF2_MAGIC_START_0 0x0a324655
#define UF2_MAGIC_START_1 0x9e5d5157
#define UF2_MAGIC_END     0x0ab16f30

#define UF2_FLAG_FAMILY_ID     0x00002000
#define UF2_FAMILY_ID_RP2040   0xe48bff56
#define UF2_BLOCK_SIZE         256

#define FLASH_START            0x10000000
#define BL2_SIZE               256


//---- Definitions ------
typedef struct // 4*9 = 36 + 476 = 512 byte
{
  uint32_t magic_start_0;
  uint32_t magic_start_1;
  uint32_t flags;
  uint32_t target_addr;
  uint32_t payload_size;
  uint32_t block_no;
  uint32_t num_blocks;
  uint32_t family_id;
  uint8_t  data[476];
  uint32_t magic_end;
} UF2Block;

//---- Variables ------
#include<getopt.h> // no_argument 
static const struct option long_options[] = 
{
    {"help",    no_argument,        0,'h'},
    {"update",  no_argument,        0,'u'},
    {"input",   required_argument,  0,'i'},
    {"output",  required_argument,  0,'o'},
    {0,0,0,0} // end args
};
static const char* short_options = "hui:o:";

static uint32_t crc32_table[256];
static uint8_t g_data[MAX_FILE_SIZE];
static int g_size = 0;

void crc32_table_gen(){
    for(int i=0; i<0x100; i++){ // 256 = 2^8 0b_1_0000_0000
        uint32_t value = i<<24; // 0b_0000_000i_0000_0000_0000_0000_0000_0000
        for(int j=0;j<8;j++){
            if(value &(1<<31)){ // 0b_1000_0000_0000_0000_0000_0000_0000_0000
                value = (value <<1) ^ 0x4c11db7ul; // 0b_0000_0100_1100_0001_0001_1101_1011_0111
            }else
                value = value <<1;
        }
        crc32_table[i] = value;
    }
}
static void print_help(char* name){
    printf("Usage: %s [options]\n",name);
    printf("Option:\n");
    printf("    -h, --help print this help message and exit\n");
    printf("    -u, --update generate raw binary file with an updated CRC\n");
    printf("    -i, --input input file name \n");
    printf("    -o, --output output file name \n");
    exit(0);
}
#include<stdbool.h>
static bool g_update = false;
static char* g_input = NULL;
static char* g_output = NULL;

#include<stdarg.h>
static void check(bool cond,char* fmt, ...){
    if(!cond){
        va_list args;
        va_start(args,fmt);
        fprintf(stderr, "Error: ");
        vfprintf(stderr, fmt, args);
        fprintf(stderr, "\n");
        va_end(args);
        exit(1);
    }
}

void parse_cmd_line(int argc, char**argv){
    int option_index = 0;
    int c;
    while((c=getopt_long(argc,argv,short_options,long_options,&option_index)) != -1){
        switch(c){
            case 'h': print_help(argv[0]); break;
            case 'u': g_update = true; break;
            case 'i': g_input = optarg; break;
            case 'o': g_output = optarg; break;
            default: exit(1); break;
        }
    }
    check(optind >= argc, "malformed command line, use '-h' for more information");
}

static uint32_t crc32(uint8_t* data, int size){
    uint32_t crc = 0xffffffff;
    for(int i=0;i<size;i++)
        crc= crc32_table[((crc>>24) & 0xff) ^ data[i]] ^ (crc << 8);
    return crc;
}

int main(int argc, char* argv[]){
    int fd;
    crc32_table_gen();
    parse_cmd_line(argc,argv);
    check(NULL != g_input, "input file name is not specified");
    check(NULL != g_output, "output file name is not specified");

#include<string.h>
    memset(g_data,0xff,sizeof(g_data));

#include<fcntl.h>
    fd = open(g_input,O_RDONLY | O_BINARY);
    if(fd<0) perror("open()");

#include<unistd.h>
    g_size = read(fd, g_data,sizeof(g_data));
    if(g_size <0) perror("read()");

    check(g_size < (int)sizeof(g_data),"input file is too big");
    close(fd);


    uint32_t crc = crc32(g_data, BL2_SIZE-4);
    g_data[BL2_SIZE-4] = (crc >> 0);
    g_data[BL2_SIZE-3] = (crc >> 8);
    g_data[BL2_SIZE-2] = (crc >> 16);
    g_data[BL2_SIZE-1] = (crc >> 24);

    fd = open(g_output, O_WRONLY | O_TRUNC | O_CREAT | O_BINARY, 0644);
    if(fd<0) perror("open()");

    if(g_update){
        if(write(fd,g_data,g_size)<0)
            perror("write()");
    }else{
        UF2Block block;
        while((g_size % UF2_BLOCK_SIZE) != 0)
            g_size++;
        int n_blocks = g_size / UF2_BLOCK_SIZE;
        block.magic_start_0 = UF2_MAGIC_START_0;
        block.magic_start_1 = UF2_MAGIC_START_1;
        block.flags = UF2_FLAG_FAMILY_ID;
        block.payload_size = UF2_BLOCK_SIZE;
        block.num_blocks = n_blocks;
        block.family_id = UF2_FAMILY_ID_RP2040;
        block.magic_end = UF2_MAGIC_END;
        memset(block.data,0,sizeof(block.data));
        uint32_t offset = 0;
        uint32_t addr = FLASH_START;
        for(int i=0;i<n_blocks;i++){
            block.target_addr = addr;
            block.block_no = i;
            memcpy(block.data, &g_data[offset],UF2_BLOCK_SIZE);
            if(write(fd,&block,sizeof(UF2Block))<0) perror("write()");
            addr += UF2_BLOCK_SIZE;
            offset += UF2_BLOCK_SIZE;
        }
    }

    close(fd);
    return 0;
}
