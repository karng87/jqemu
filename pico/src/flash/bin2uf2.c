#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef hex //(x,y,args...)
    #define hex(x,y,args...) (0x ## x ## y)
#endif

//#include "crcpico.h"
static unsigned int crc_pico[256]=
{
    hex(0000,0000), //crc table 0
    hex(04C1,1DB7), //crc table 1
    hex(0982,3B6E), //crc table 2
    hex(0D43,26D9), //crc table 3
    hex(1304,76DC), //crc table 4
    hex(17C5,6B6B), //crc table 5
    hex(1A86,4DB2), //crc table 6
    hex(1E47,5005), //crc table 7
    hex(2608,EDB8), //crc table 8
    hex(22C9,F00F), //crc table 9
    hex(2F8A,D6D6), //crc table 10
    hex(2B4B,CB61), //crc table 11
    hex(350C,9B64), //crc table 12
    hex(31CD,86D3), //crc table 13
    hex(3C8E,A00A), //crc table 14
    hex(384F,BDBD), //crc table 15
    hex(4C11,DB70), //crc table 16
    hex(48D0,C6C7), //crc table 17
    hex(4593,E01E), //crc table 18
    hex(4152,FDA9), //crc table 19
    hex(5F15,ADAC), //crc table 20
    hex(5BD4,B01B), //crc table 21
    hex(5697,96C2), //crc table 22
    hex(5256,8B75), //crc table 23
    hex(6A19,36C8), //crc table 24
    hex(6ED8,2B7F), //crc table 25
    hex(639B,0DA6), //crc table 26
    hex(675A,1011), //crc table 27
    hex(791D,4014), //crc table 28
    hex(7DDC,5DA3), //crc table 29
    hex(709F,7B7A), //crc table 30
    hex(745E,66CD), //crc table 31
    hex(9823,B6E0), //crc table 32
    hex(9CE2,AB57), //crc table 33
    hex(91A1,8D8E), //crc table 34
    hex(9560,9039), //crc table 35
    hex(8B27,C03C), //crc table 36
    hex(8FE6,DD8B), //crc table 37
    hex(82A5,FB52), //crc table 38
    hex(8664,E6E5), //crc table 39
    hex(BE2B,5B58), //crc table 40
    hex(BAEA,46EF), //crc table 41
    hex(B7A9,6036), //crc table 42
    hex(B368,7D81), //crc table 43
    hex(AD2F,2D84), //crc table 44
    hex(A9EE,3033), //crc table 45
    hex(A4AD,16EA), //crc table 46
    hex(A06C,0B5D), //crc table 47
    hex(D432,6D90), //crc table 48
    hex(D0F3,7027), //crc table 49
    hex(DDB0,56FE), //crc table 50
    hex(D971,4B49), //crc table 51
    hex(C736,1B4C), //crc table 52
    hex(C3F7,06FB), //crc table 53
    hex(CEB4,2022), //crc table 54
    hex(CA75,3D95), //crc table 55
    hex(F23A,8028), //crc table 56
    hex(F6FB,9D9F), //crc table 57
    hex(FBB8,BB46), //crc table 58
    hex(FF79,A6F1), //crc table 59
    hex(E13E,F6F4), //crc table 60
    hex(E5FF,EB43), //crc table 61
    hex(E8BC,CD9A), //crc table 62
    hex(EC7D,D02D), //crc table 63
    hex(3486,7077), //crc table 64
    hex(3047,6DC0), //crc table 65
    hex(3D04,4B19), //crc table 66
    hex(39C5,56AE), //crc table 67
    hex(2782,06AB), //crc table 68
    hex(2343,1B1C), //crc table 69
    hex(2E00,3DC5), //crc table 70
    hex(2AC1,2072), //crc table 71
    hex(128E,9DCF), //crc table 72
    hex(164F,8078), //crc table 73
    hex(1B0C,A6A1), //crc table 74
    hex(1FCD,BB16), //crc table 75
    hex(018A,EB13), //crc table 76
    hex(054B,F6A4), //crc table 77
    hex(0808,D07D), //crc table 78
    hex(0CC9,CDCA), //crc table 79
    hex(7897,AB07), //crc table 80
    hex(7C56,B6B0), //crc table 81
    hex(7115,9069), //crc table 82
    hex(75D4,8DDE), //crc table 83
    hex(6B93,DDDB), //crc table 84
    hex(6F52,C06C), //crc table 85
    hex(6211,E6B5), //crc table 86
    hex(66D0,FB02), //crc table 87
    hex(5E9F,46BF), //crc table 88
    hex(5A5E,5B08), //crc table 89
    hex(571D,7DD1), //crc table 90
    hex(53DC,6066), //crc table 91
    hex(4D9B,3063), //crc table 92
    hex(495A,2DD4), //crc table 93
    hex(4419,0B0D), //crc table 94
    hex(40D8,16BA), //crc table 95
    hex(ACA5,C697), //crc table 96
    hex(A864,DB20), //crc table 97
    hex(A527,FDF9), //crc table 98
    hex(A1E6,E04E), //crc table 99
    hex(BFA1,B04B), //crc table 100
    hex(BB60,ADFC), //crc table 101
    hex(B623,8B25), //crc table 102
    hex(B2E2,9692), //crc table 103
    hex(8AAD,2B2F), //crc table 104
    hex(8E6C,3698), //crc table 105
    hex(832F,1041), //crc table 106
    hex(87EE,0DF6), //crc table 107
    hex(99A9,5DF3), //crc table 108
    hex(9D68,4044), //crc table 109
    hex(902B,669D), //crc table 110
    hex(94EA,7B2A), //crc table 111
    hex(E0B4,1DE7), //crc table 112
    hex(E475,0050), //crc table 113
    hex(E936,2689), //crc table 114
    hex(EDF7,3B3E), //crc table 115
    hex(F3B0,6B3B), //crc table 116
    hex(F771,768C), //crc table 117
    hex(FA32,5055), //crc table 118
    hex(FEF3,4DE2), //crc table 119
    hex(C6BC,F05F), //crc table 120
    hex(C27D,EDE8), //crc table 121
    hex(CF3E,CB31), //crc table 122
    hex(CBFF,D686), //crc table 123
    hex(D5B8,8683), //crc table 124
    hex(D179,9B34), //crc table 125
    hex(DC3A,BDED), //crc table 126
    hex(D8FB,A05A), //crc table 127
    hex(690C,E0EE), //crc table 128
    hex(6DCD,FD59), //crc table 129
    hex(608E,DB80), //crc table 130
    hex(644F,C637), //crc table 131
    hex(7A08,9632), //crc table 132
    hex(7EC9,8B85), //crc table 133
    hex(738A,AD5C), //crc table 134
    hex(774B,B0EB), //crc table 135
    hex(4F04,0D56), //crc table 136
    hex(4BC5,10E1), //crc table 137
    hex(4686,3638), //crc table 138
    hex(4247,2B8F), //crc table 139
    hex(5C00,7B8A), //crc table 140
    hex(58C1,663D), //crc table 141
    hex(5582,40E4), //crc table 142
    hex(5143,5D53), //crc table 143
    hex(251D,3B9E), //crc table 144
    hex(21DC,2629), //crc table 145
    hex(2C9F,00F0), //crc table 146
    hex(285E,1D47), //crc table 147
    hex(3619,4D42), //crc table 148
    hex(32D8,50F5), //crc table 149
    hex(3F9B,762C), //crc table 150
    hex(3B5A,6B9B), //crc table 151
    hex(0315,D626), //crc table 152
    hex(07D4,CB91), //crc table 153
    hex(0A97,ED48), //crc table 154
    hex(0E56,F0FF), //crc table 155
    hex(1011,A0FA), //crc table 156
    hex(14D0,BD4D), //crc table 157
    hex(1993,9B94), //crc table 158
    hex(1D52,8623), //crc table 159
    hex(F12F,560E), //crc table 160
    hex(F5EE,4BB9), //crc table 161
    hex(F8AD,6D60), //crc table 162
    hex(FC6C,70D7), //crc table 163
    hex(E22B,20D2), //crc table 164
    hex(E6EA,3D65), //crc table 165
    hex(EBA9,1BBC), //crc table 166
    hex(EF68,060B), //crc table 167
    hex(D727,BBB6), //crc table 168
    hex(D3E6,A601), //crc table 169
    hex(DEA5,80D8), //crc table 170
    hex(DA64,9D6F), //crc table 171
    hex(C423,CD6A), //crc table 172
    hex(C0E2,D0DD), //crc table 173
    hex(CDA1,F604), //crc table 174
    hex(C960,EBB3), //crc table 175
    hex(BD3E,8D7E), //crc table 176
    hex(B9FF,90C9), //crc table 177
    hex(B4BC,B610), //crc table 178
    hex(B07D,ABA7), //crc table 179
    hex(AE3A,FBA2), //crc table 180
    hex(AAFB,E615), //crc table 181
    hex(A7B8,C0CC), //crc table 182
    hex(A379,DD7B), //crc table 183
    hex(9B36,60C6), //crc table 184
    hex(9FF7,7D71), //crc table 185
    hex(92B4,5BA8), //crc table 186
    hex(9675,461F), //crc table 187
    hex(8832,161A), //crc table 188
    hex(8CF3,0BAD), //crc table 189
    hex(81B0,2D74), //crc table 190
    hex(8571,30C3), //crc table 191
    hex(5D8A,9099), //crc table 192
    hex(594B,8D2E), //crc table 193
    hex(5408,ABF7), //crc table 194
    hex(50C9,B640), //crc table 195
    hex(4E8E,E645), //crc table 196
    hex(4A4F,FBF2), //crc table 197
    hex(470C,DD2B), //crc table 198
    hex(43CD,C09C), //crc table 199
    hex(7B82,7D21), //crc table 200
    hex(7F43,6096), //crc table 201
    hex(7200,464F), //crc table 202
    hex(76C1,5BF8), //crc table 203
    hex(6886,0BFD), //crc table 204
    hex(6C47,164A), //crc table 205
    hex(6104,3093), //crc table 206
    hex(65C5,2D24), //crc table 207
    hex(119B,4BE9), //crc table 208
    hex(155A,565E), //crc table 209
    hex(1819,7087), //crc table 210
    hex(1CD8,6D30), //crc table 211
    hex(029F,3D35), //crc table 212
    hex(065E,2082), //crc table 213
    hex(0B1D,065B), //crc table 214
    hex(0FDC,1BEC), //crc table 215
    hex(3793,A651), //crc table 216
    hex(3352,BBE6), //crc table 217
    hex(3E11,9D3F), //crc table 218
    hex(3AD0,8088), //crc table 219
    hex(2497,D08D), //crc table 220
    hex(2056,CD3A), //crc table 221
    hex(2D15,EBE3), //crc table 222
    hex(29D4,F654), //crc table 223
    hex(C5A9,2679), //crc table 224
    hex(C168,3BCE), //crc table 225
    hex(CC2B,1D17), //crc table 226
    hex(C8EA,00A0), //crc table 227
    hex(D6AD,50A5), //crc table 228
    hex(D26C,4D12), //crc table 229
    hex(DF2F,6BCB), //crc table 230
    hex(DBEE,767C), //crc table 231
    hex(E3A1,CBC1), //crc table 232
    hex(E760,D676), //crc table 233
    hex(EA23,F0AF), //crc table 234
    hex(EEE2,ED18), //crc table 235
    hex(F0A5,BD1D), //crc table 236
    hex(F464,A0AA), //crc table 237
    hex(F927,8673), //crc table 238
    hex(FDE6,9BC4), //crc table 239
    hex(89B8,FD09), //crc table 240
    hex(8D79,E0BE), //crc table 241
    hex(803A,C667), //crc table 242
    hex(84FB,DBD0), //crc table 243
    hex(9ABC,8BD5), //crc table 244
    hex(9E7D,9662), //crc table 245
    hex(933E,B0BB), //crc table 246
    hex(97FF,AD0C), //crc table 247
    hex(AFB0,10B1), //crc table 248
    hex(AB71,0D06), //crc table 249
    hex(A632,2BDF), //crc table 250
    hex(A2F3,3668), //crc table 251
    hex(BCB4,666D), //crc table 252
    hex(B875,7BDA), //crc table 253
    hex(B536,5D03), //crc table 254
    hex(B1F7,40B4)  //crc table 255
};

/* << "512 byte block" : 9 x 4byte(meta data) + 476 byte(payload data) == 36+476 == 512-byte*/
struct UF2_Block {
    // 32 byte header
    unsigned int magicStart0;
    unsigned int magicStart1;
    unsigned int flags;
    unsigned int targetAddr;
    unsigned int payloadSize; // 256 byte ~ must be multiplied of page size
    unsigned int blockNo;
    unsigned int numBlocks;
    union {unsigned int fileSize; unsigned int familyID;}; //
    unsigned char data[476]; // 476 /4 == 119-word(data) + 9-word(meta) == 128 == 0~127
    unsigned int magicEnd;
} __attribute__((packed)) uf2; //unsigned int wdata[128];

#define DSIZE 0x10000 // 0x10000 == 2^{4*4} == 2^{16} = 2^{6} * 2^{10} == 2^{6}*1k == 64k
unsigned char data[DSIZE<<1]; // 0x100000 == 2^(4*5) = 2^20 == 1*2^10*2^10 = 1M byte
FILE *fp;

int main(int argc, char* argv[]){
    unsigned int len;
    unsigned int blocks;
    unsigned int crc;
    unsigned int ra;
    unsigned int address;

    if(argc<3){
        printf("input/output files not specified\n");
        return 1;
    }
    fp = fopen(argv[1],"rb");
    if(fp==NULL){
        printf("Error opening file [%s]\n",argv[1]);
        return 2;
    }

    memset(data, 0x00,sizeof(data));
    len= fread(data,1,sizeof(data),fp);
    fclose(fp);
    printf("%u bytes read (0x%x)\n",len,len);
    if(len>DSIZE){
        printf("too big\n");
        return 2;
    }
    if(len ==0){
        printf("too small\n");
        return 3;
    }

    blocks = (len+0xff)>>8; // 2^8 == 256 byte(1 block) round 
    printf("blocks 0x%x (0x%x)\n",blocks,len);

    crc=hex(ffff,ffff);
    for(ra=0;ra<(256-4);ra++){
        unsigned char tableoff;
        tableoff = (crc>>24) & 0xff;
        tableoff ^= data[ra];
        crc <<= 8;
        crc ^= crc_pico[tableoff];
    }
    data[ra++] = (crc >>  0) & 0xff;
    data[ra++] = (crc >>  8) & 0xff;
    data[ra++] = (crc >> 16) & 0xff;
    data[ra++] = (crc >> 24) & 0xff;
    fp = fopen(argv[2],"wb");
    if(fp==NULL){
        printf("Error creating file [%s]\n",argv[2]);
        return 4;
    }

    address = hex(1000,0000, XIP_FLASH address);
    unsigned int code_data_off=0;
    for(unsigned int i=0;i<blocks;i++){
        memset(&uf2, 0x00,sizeof(uf2));
        uf2.magicStart0 =0x0A324655;
        uf2.magicStart1 =0x9E5D5157;
        uf2.flags       =0x00002000; // pr2040 pico familyID present
        uf2.targetAddr  =address;
        printf("=========== uf2.targetAddr = [ %x ] ==========\n",uf2.targetAddr);
        uf2.payloadSize =0x00000100; // 256 byte (multiiple by page size)
        uf2.blockNo     =i;
        uf2.numBlocks   =blocks;
        uf2.fileSize    =0xE48BFF56;  // or familyID : rp2040 pico id
        memset(uf2.data,0x0,sizeof(uf2.data));
        memcpy(uf2.data,&data[code_data_off],256); // maxmum 256 byte
        uf2.magicEnd    =0x0AB16F30; // 
        fwrite(&uf2,1,sizeof(uf2),fp);
        address += 0x100; // 256 byte == payload size
        code_data_off +=0x100; // our code datal offset
    }
    fclose(fp);
    return 0;
}
