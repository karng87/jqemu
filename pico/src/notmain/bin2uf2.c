#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>
#include<crcpico.h>
struct UF2_Block {
    // 32 byte header
    uint32_t magicStart0;
    uint32_t magicStart1;
    uint32_t flags;
    uint32_t targetAddr;
    uint32_t payloadSize;
    uint32_t blockNo;
    uint32_t numBlocks;
    uint32_t fileSize; // or familyID;
    uint8_t data[476]; // 512 - 4 * 9-word_magic == 512 - 36
    uint32_t magicEnd;
} __attribute__((packed)) UF2_Block;

FILE *fp;

unsigned int usbformat2[128]; // 128-word * 4 = 512-byte
unsigned char data[512]; // 512-byte = 128-word

int main(int argc, char* argv[]){
    printf("=========== UF2_Block.targetAddr = [ %x ] ==========\n",UF2_Block.targetAddr);
    unsigned int len;
    unsigned int ra;
    unsigned int rb;
    unsigned int crc=0xffffffff;

    if(argc<3){
        printf("Input and Output files not specified\n");
        return 1;
    }

    fp = fopen(argv[1],"rb");
    if(fp==NULL){
        printf("Eror open file [%s]\n",argv[1]);
        return 2;
    }

    memset(data,0x00,sizeof(data));
    len=fread(data,1,sizeof(data),fp);
    fclose(fp);
    printf("%u bytes read\n",len);
    if(len>(256-4)){
        printf("too big\n");
        return 3;
    }
    for(ra = 0;ra < (256-4);ra ++){
        unsigned char tableoff;
        tableoff = (crc>>24)&0xff;
        tableoff ^= data[ra];
        crc <<= 8;
        crc ^= crc_pico[tableoff];
    }

    printf("crc => 0x%08X\n",crc);
    data[ra++] = (crc >> 0) & 0xff;
    data[ra++] = (crc >> 8) & 0xff;
    data[ra++] = (crc >>16) & 0xff;
    data[ra++] = (crc >>24) & 0xff;

    printf("0x%02X%02X%02X%02X\n", data[255],data[254],data[253],data[252]);

    memset(&UF2_Block,0x00,sizeof(UF2_Block));
    UF2_Block.magicStart0 =0x0A324655;
    UF2_Block.magicStart1 =0x9E5D5157;
    UF2_Block.flags       =0x00002000;

#ifdef FLASH
    UF2_Block.targetAddr  =0x10000000;
#else
    UF2_Block.targetAddr  =0x20000000;
#endif
    printf("=========== UF2_Block.targetAddr = [ %x ] ==========\n",UF2_Block.targetAddr);
    UF2_Block.payloadSize =0x00000100;
    UF2_Block.blockNo     =0x00000000;
    UF2_Block.numBlocks   =0x00000001;
    UF2_Block.fileSize    =0xE48BFF56;
    memset(&UF2_Block.data,0x0,sizeof(UF2_Block.data));
    memcpy(&UF2_Block.data,data,256);
    UF2_Block.magicEnd    =0x0AB16F30;
    fp=fopen(argv[2],"wb");
    if(fp==NULL){
        printf("Error creating file [%s]\n",argv[2]);
        return 4;
    }
    fwrite(&UF2_Block,1,sizeof(UF2_Block),fp);
    fclose(fp);
    return 0;
}

