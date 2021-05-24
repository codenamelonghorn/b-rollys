// 0x07000000 - 0x07000800
ALIGNED8 static const u8 wf_seg7_texture_07000000[] = {
#include "levels/wf/0.rgba16.inc.c"
};

// 0x07000800 - 0x07001000
ALIGNED8 static const u8 wf_seg7_texture_07000800[] = {
#include "levels/wf/1.rgba16.inc.c"
};

// 0x07001000 - 0x07001800
ALIGNED8 static const u8 wf_seg7_texture_07001000[] = {
#include "levels/wf/2.rgba16.inc.c"
};

// 0x07001800 - 0x07002000
ALIGNED8 static const u8 wf_seg7_texture_07001800[] = {
#include "levels/wf/3.rgba16.inc.c"
};

// 0x07002000 - 0x07002800
ALIGNED8 static const u8 wf_seg7_texture_07002000[] = {
#include "levels/wf/4.rgba16.inc.c"
};

// 0x07002800 - 0x07002900
//ALIGNED8 static const u8 wf_seg7_texture_07002800[] = {
//#include "levels/wf/5.ia8.inc.c"
//};

static unsigned short castle_wall1_txt[] = {
    0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xde6d,  0xaf25,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xeff5,  0xfff9,  0xfff1,  0xff71,  0xf52f,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe39,  0xd6eb,  0xb727,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xe7f3,  0xfffb,  0xfff1,  0xe62d,  0xfdf5,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe39,  0xfe35,  0xd6e9,  0xaee5,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xfff9,  0xf7af,  0xe52d,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfdb3,  0xffb1,  0xdeeb,  0x9e61,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xf7f7,  0xe72d,  0xed2f,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfdb3,  0xfef1,  0xfff1,  0xf7af,  0x9de1,  0xcfad,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xeff1,  0xdeab,  0xe52f,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xfe79,  0xfe79,  0xfe79,  0xfd71,  0xee2f,  0xffb7,  0xfff5,  0xfff3,  0xbe25,  0xa6a5,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdfef,  0xe6ab,  0xe52d,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xfe79,  0xfe37,  0xed73,  0xdd77,  0xe63f,  0xf6ff,  0xf77f,  0xffff,  0xe72d,  0x9de1,  0xc76b,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xcfeb,  0xdfed,  0xe72d,  0xcce7,  0xfe37,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xf571,  0xed6d,  0xd5f3,  0xd5bb,  0xee7f,  0xee7f,  0xee7f,  0xeebf,  0xfffd,  0xd6eb,  0x9d9f,  0xb6e7,  0xbf29,  0xbf69,  0xbf69,  0xbf69,  0xaf25,  0xbee7,  0xfff1,  0xf7af,  0xc525,  0xedb3,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xe66d,  0xdead,  0xc577,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xff7f,  0xffb5,  0xe72d,  0xc667,  0xae23,  0xae23,  0xb6a7,  0xc6ad,  0xe773,  0xfff5,  0xfff3,  0xfff1,  0xd669,  0xc4a7,  0xf5f5,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe37,  0xed2f,  
    0xfff1,  0xc5af,  0xd5fb,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xffb3,  0xfff1,  0xfff1,  0xff37,  0xff3d,  0xff3d,  0xfefd,  0xfefd,  0xff7d,  0xffbd,  0xfffb,  0xf7b3,  0xc5e7,  0xc4a7,  0xf5f5,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xf5b5,  0xe4eb,  0xdd29,  0xe6ab,  
    0xef6d,  0xaceb,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xde39,  0xffb1,  0xfeb7,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfebb,  0xffbd,  0xf7b5,  0xc5e7,  0xbc65,  0xcc67,  0xdced,  0xdceb,  0xd529,  0xcd67,  0xdeab,  0xf7af,  0xfff1,  
    0xef6d,  0xa4ab,  0xd5fb,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xd5f9,  0xf6f3,  0xfdf5,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfebb,  0xffbd,  0xfff5,  0xef6d,  0xdeeb,  0xdeab,  0xcea9,  0xe771,  0xf7fb,  0xfffd,  0xfff9,  0xef71,  
    0xf7b3,  0xace9,  0xc575,  0xee7f,  0xee7f,  0xee7f,  0xcdb7,  0xee71,  0xfdf5,  0xfe39,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfebb,  0xfffb,  0xfff1,  0xfff1,  0xe7ed,  0xcfed,  0xdff1,  0xdff1,  0xe7f3,  0xeff5,  0xf7fb,  
    0xfffd,  0xce6b,  0x9c67,  0xb4f1,  0xb4f1,  0xbd73,  0xee71,  0xfdb5,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xff7d,  0xfff5,  0xf7ef,  0xbfe9,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  
    0xeff7,  0xfff7,  0xe72d,  0xc629,  0xdeab,  0xf76f,  0xfd71,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfefd,  0xfff7,  0xd72b,  0xc7a9,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  
    0xe7f3,  0xfffd,  0xfff1,  0xfff1,  0xfff1,  0xedad,  0xfe37,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfebb,  0xff79,  0xbf27,  0xd7ef,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  
    0xdff1,  0xf7fb,  0xfff5,  0xfff1,  0xf6ef,  0xf571,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe7b,  0xf6f5,  0xaea3,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  
    0xdff1,  0xeff7,  0xfff7,  0xfff1,  0xe56b,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xee71,  0xaee5,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  
    0xdff1,  0xe7f3,  0xfff7,  0xe6ed,  0xeced,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfdf5,  0xef2f,  0xae63,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  
    0xdff1,  0xe7f1,  0xfff7,  0xee6d,  0xed71,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe37,  0xfe71,  0xef6d,  0xa621,  0xcfad,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  
    0xdff1,  0xdff1,  0xf7f5,  0xdde9,  0xed71,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfdb1,  0xffb1,  0xfff1,  0xb665,  0xbf69,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  
    0xdff1,  0xdff1,  0xe7f1,  0xd5a9,  0xed71,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfdaf,  0xffb3,  0xfff5,  0xfff1,  0xd6eb,  0x9e61,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  
    0xdff1,  0xcfab,  0xe7ef,  0xd669,  0xdd2d,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xf5f5,  0xed2f,  0xee7b,  0xff7f,  0xffbf,  0xfffb,  0xf7b3,  0xa621,  0xc76b,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  
    0xb767,  0xc7a9,  0xfff1,  0xdeeb,  0xc4a5,  0xedf5,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe37,  0xeced,  0xd52b,  0xd5f9,  0xee7f,  0xee7f,  0xee7f,  0xeebf,  0xfffd,  0xcea9,  0x95df,  0xaee5,  0xcfad,  0xd7ef,  0xd7ef,  0xc76b,  
    0xd6eb,  0xf7af,  0xfff1,  0xf7af,  0xbd25,  0xccab,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe37,  0xed2f,  0xe52b,  0xde6b,  0xd5f9,  0xe63f,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xf73f,  0xffb5,  0xdf2b,  0xb625,  0x9ddf,  0x9de1,  0x9de1,  0xa621,  
    0xffbf,  0xfffd,  0xfffb,  0xfff5,  0xef6d,  0xb463,  0xe571,  0xf637,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe37,  0xed71,  0xdca9,  0xde2b,  0xf7af,  0xdeaf,  0xcd79,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xf739,  0xfff1,  0xf7af,  0xf771,  0xeef5,  0xf73b,  0xffbd,  
    0xfe79,  0xfe79,  0xfebb,  0xffbf,  0xfffb,  0xdeeb,  0xbce3,  0xbc25,  0xdced,  0xdd2f,  0xe52f,  0xdceb,  0xd529,  0xdeab,  0xf7af,  0xfff1,  0xfff1,  0xcdef,  0xd5fb,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xd5bb,  0xf7b3,  0xff73,  0xfe7b,  0xfebb,  0xfe7b,  0xfe79,  0xfe79,  
    0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xff7d,  0xfffd,  0xf7af,  0xd669,  0xc5a7,  0xd5e9,  0xce2b,  0xdef1,  0xf7b7,  0xfff9,  0xfff5,  0xfff1,  0xfff1,  0xbdab,  0xd5b9,  0xee7f,  0xee7f,  0xee7f,  0xee7f,  0xddfd,  0xd5f5,  0xfeb5,  0xfe39,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xff7d,  0xfff5,  0xfff1,  0xfff1,  0xcfab,  0xdfef,  0xe7f1,  0xe7f3,  0xeff5,  0xf7fb,  0xfffb,  0xfff5,  0xbd6b,  0xc577,  0xee7f,  0xee7f,  0xee7f,  0xd5fb,  0xcd75,  0xfe35,  0xfe39,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfebb,  0xfffd,  0xfff1,  0xe76d,  0xc7eb,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xeff5,  0xf7f9,  0xdeed,  0x9c67,  0xbcf3,  0xcdb9,  0xc535,  0xbd2d,  0xf5b3,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xff3d,  0xfff3,  0xbf27,  0xcfab,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xeff7,  0xfff7,  0xd6a9,  0xad67,  0xc5ab,  0xd6ab,  0xf5b1,  0xfe37,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
    0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfefb,  0xf775,  0xa6e3,  0xd7ed,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xdff1,  0xe7f1,  0xf7fb,  0xfff3,  0xfff1,  0xfff1,  0xff31,  0xfdb5,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  0xfe79,  
};

unsigned short l_brbrbr_txt[] = {
    0x3101,  0x59c3,  0x59c3,  0x59c1,  0x59c1,  0x59c1,  0x61c3,  0x61c3,  0x6203,  0x59c1,  0x59c1,  0x6203,  0x59c1,  0x59c1,  0x59c1,  0x59c1,  0x61c3,  0x6203,  0x6203,  0x6203,  0x61c3,  0x59c3,  0x6203,  0x6203,  0x59c1,  0x61c3,  0x6203,  0x61c3,  0x59c1,  0x61c3,  0x6205,  0x51c5,  
    0x28c1,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x6205,  0x61c3,  0x6205,  0x61c3,  0x59c5,  0x6203,  0x6203,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x6203,  0x61c3,  0x61c3,  0x6205,  0x61c3,  0x6205,  0x59c5,  0x61c3,  0x61c3,  0x59c5,  0x59c5,  0x59c3,  
    0x2903,  0x59c5,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x59c5,  0x6205,  0x59c5,  0x6205,  0x6205,  0x61c3,  0x59c5,  0x6203,  0x59c5,  0x59c5,  0x6205,  0x59c5,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x59c5,  0x61c3,  0x59c5,  0x5a03,  0x6205,  
    0x28c1,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x6205,  0x61c3,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x61c3,  0x59c5,  0x59c5,  0x6205,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x61c3,  0x59c5,  0x59c3,  
    0x28c3,  0x61c3,  0x61c3,  0x59c1,  0x61c3,  0x59c5,  0x61c3,  0x59c5,  0x6205,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x61c3,  0x6205,  0x61c3,  0x61c3,  0x61c3,  0x6205,  0x6205,  0x6203,  0x6205,  0x6205,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x6205,  0x6205,  
    0x28c3,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x59c5,  0x6205,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x59c3,  
    0x2903,  0x59c5,  0x61c3,  0x59c5,  0x59c5,  0x6205,  0x6205,  0x61c3,  0x6205,  0x59c5,  0x61c3,  0x61c3,  0x6205,  0x61c3,  0x6205,  0x61c3,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x61c3,  0x59c5,  0x61c3,  0x59c5,  0x6205,  0x6205,  0x61c3,  0x61c3,  0x6205,  0x61c3,  0x59c5,  0x6205,  
    0x2081,  0x3903,  0x3101,  0x3903,  0x3101,  0x3943,  0x3903,  0x3101,  0x3943,  0x3943,  0x3943,  0x3903,  0x3903,  0x3943,  0x3101,  0x3101,  0x3943,  0x3903,  0x3943,  0x3101,  0x3101,  0x3903,  0x3943,  0x3943,  0x3943,  0x3943,  0x3943,  0x3903,  0x3943,  0x3101,  0x3903,  0x3901,  
    0x7289,  0x7289,  0x7289,  0x7ac9,  0x7289,  0x72cb,  0x7ac9,  0x7289,  0x7ac9,  0x72cb,  0x72cb,  0x7289,  0x7289,  0x7289,  0x7289,  0x6a89,  0x4985,  0x72cb,  0x7289,  0x72c9,  0x7ac9,  0x7289,  0x72cb,  0x7289,  0x7289,  0x7289,  0x7ac9,  0x7289,  0x7ac9,  0x7ac9,  0x7289,  0x7ac9,  
    0x7289,  0x7ac9,  0x7ac9,  0x72cb,  0x7acb,  0x7289,  0x7287,  0x7ac9,  0x7287,  0x72cb,  0x7acb,  0x7287,  0x7289,  0x7287,  0x7287,  0x7b0b,  0x3945,  0x72cb,  0x7acb,  0x7289,  0x7ac9,  0x7ac9,  0x7ac9,  0x7ac9,  0x72cb,  0x7ac9,  0x7289,  0x7acb,  0x72cb,  0x7acb,  0x72cb,  0x7acb,  
    0x7acb,  0x7289,  0x7ac9,  0x72cb,  0x72cb,  0x7ac9,  0x7acb,  0x7b0b,  0x7287,  0x7acb,  0x7acb,  0x7289,  0x7ac9,  0x7287,  0x7289,  0x7b0b,  0x4185,  0x7ac9,  0x7acb,  0x830b,  0x830d,  0x7acb,  0x7ac9,  0x7287,  0x72cb,  0x7ac9,  0x72cb,  0x72cb,  0x7acb,  0x72cb,  0x72cb,  0x72cb,  
    0x7acb,  0x7289,  0x7ac9,  0x7b0d,  0x7289,  0x72cb,  0x7ac9,  0x72cb,  0x7289,  0x7ac9,  0x72cb,  0x7ac9,  0x7289,  0x7289,  0x7acb,  0x72c9,  0x4185,  0x7acb,  0x7289,  0x7289,  0x7ac9,  0x72cb,  0x72c9,  0x7acb,  0x7289,  0x7ac9,  0x72cb,  0x7289,  0x7acb,  0x72cb,  0x72cb,  0x7acb,  
    0x7289,  0x7287,  0x72cb,  0x830d,  0x830d,  0x7289,  0x7b0b,  0x72cb,  0x7289,  0x7acb,  0x7ac9,  0x7acb,  0x7289,  0x72cb,  0x7289,  0x72c9,  0x4185,  0x7ac9,  0x72cb,  0x72cb,  0x7ac9,  0x7acb,  0x7ac9,  0x7289,  0x7289,  0x7ac9,  0x7acb,  0x7289,  0x7acb,  0x72cb,  0x7289,  0x7acb,  
    0x7acb,  0x7acb,  0x72cb,  0x72cb,  0x72cb,  0x7acb,  0x72cb,  0x72cb,  0x7acb,  0x72cb,  0x7ac9,  0x7289,  0x72cb,  0x7ac9,  0x72cb,  0x7289,  0x3945,  0x72cb,  0x7289,  0x72c9,  0x7acb,  0x72cb,  0x7ac9,  0x72cb,  0x7ac9,  0x7acb,  0x7289,  0x7acb,  0x72cb,  0x7ac9,  0x7acb,  0x72cb,  
    0x72cb,  0x7acb,  0x7ac9,  0x72cb,  0x7289,  0x72cb,  0x72cb,  0x7287,  0x72cb,  0x7acb,  0x7ac9,  0x7ac9,  0x72cb,  0x7289,  0x72cb,  0x7289,  0x3945,  0x72c9,  0x7289,  0x6a47,  0x7acb,  0x7289,  0x7289,  0x7ac9,  0x7ac9,  0x7289,  0x7289,  0x72cb,  0x72cb,  0x7289,  0x7289,  0x7287,  
    0x3945,  0x3945,  0x3945,  0x4185,  0x4187,  0x4185,  0x4185,  0x4187,  0x4185,  0x4185,  0x4185,  0x4187,  0x4187,  0x3985,  0x4185,  0x49c5,  0x28c3,  0x4185,  0x4185,  0x4185,  0x4185,  0x4185,  0x4185,  0x4185,  0x4145,  0x4187,  0x4187,  0x4185,  0x4185,  0x3945,  0x4187,  0x3945,  
    0x3101,  0x61c3,  0x59c1,  0x59c3,  0x61c3,  0x59c3,  0x59c1,  0x59c3,  0x59c3,  0x61c3,  0x6205,  0x6205,  0x61c3,  0x61c3,  0x59c3,  0x61c3,  0x59c3,  0x61c3,  0x61c3,  0x59c3,  0x59c3,  0x59c3,  0x51c3,  0x51c3,  0x59c3,  0x51c3,  0x51c3,  0x59c3,  0x59c3,  0x59c3,  0x59c3,  0x59c3,  
    0x28c1,  0x51c3,  0x59c5,  0x59c1,  0x59c1,  0x6205,  0x51c3,  0x59c1,  0x59c1,  0x6205,  0x59c5,  0x61c3,  0x51c3,  0x59c1,  0x61c3,  0x59c1,  0x61c3,  0x61c3,  0x61c3,  0x6203,  0x6205,  0x59c1,  0x61c3,  0x59c1,  0x59c1,  0x51c3,  0x59c1,  0x6205,  0x59c5,  0x6205,  0x59c5,  0x59c3,  
    0x28c1,  0x61c3,  0x61c3,  0x61c3,  0x6205,  0x59c1,  0x6205,  0x59c1,  0x6205,  0x6205,  0x59c1,  0x61c3,  0x61c3,  0x59c5,  0x59c5,  0x59c1,  0x6205,  0x6205,  0x51c3,  0x51c3,  0x61c3,  0x51c3,  0x6a05,  0x59c1,  0x61c3,  0x59c1,  0x51c3,  0x6205,  0x61c3,  0x6205,  0x6205,  0x6205,  
    0x3103,  0x61c3,  0x61c3,  0x6205,  0x59c5,  0x59c5,  0x59c1,  0x61c3,  0x59c1,  0x59c1,  0x59c5,  0x59c1,  0x61c3,  0x51c3,  0x61c3,  0x51c3,  0x61c3,  0x59c1,  0x6203,  0x61c3,  0x6205,  0x51c3,  0x6205,  0x61c3,  0x61c3,  0x61c3,  0x51c3,  0x61c3,  0x59c1,  0x51c3,  0x6205,  0x59c3,  
    0x28c3,  0x6205,  0x59c1,  0x59c1,  0x51c3,  0x59c1,  0x59c5,  0x6205,  0x6205,  0x59c1,  0x51c3,  0x61c3,  0x6205,  0x6205,  0x59c1,  0x59c1,  0x59c1,  0x59c1,  0x51c3,  0x6205,  0x59c1,  0x61c3,  0x59c1,  0x51c3,  0x51c3,  0x6205,  0x6205,  0x61c3,  0x51c3,  0x51c3,  0x51c3,  0x59c3,  
    0x28c3,  0x51c3,  0x59c1,  0x59c1,  0x6205,  0x59c1,  0x51c3,  0x59c1,  0x59c1,  0x61c3,  0x59c1,  0x6205,  0x6205,  0x59c1,  0x6205,  0x51c3,  0x59c1,  0x6205,  0x6205,  0x59c5,  0x59c5,  0x51c3,  0x6205,  0x59c1,  0x51c3,  0x51c3,  0x51c3,  0x6205,  0x6205,  0x6205,  0x5a03,  0x59c3,  
    0x28c1,  0x59c1,  0x61c3,  0x6205,  0x6205,  0x6205,  0x6203,  0x59c1,  0x59c1,  0x59c1,  0x6203,  0x59c5,  0x51c3,  0x59c1,  0x59c1,  0x59c1,  0x61c3,  0x59c5,  0x59c1,  0x51c3,  0x59c1,  0x6203,  0x61c3,  0x59c1,  0x6205,  0x51c3,  0x59c1,  0x59c1,  0x6205,  0x59c1,  0x6205,  0x59c3,  
    0x2081,  0x3903,  0x3903,  0x3901,  0x3901,  0x3901,  0x3101,  0x3901,  0x3903,  0x3101,  0x3903,  0x3903,  0x3101,  0x3101,  0x3901,  0x3903,  0x3943,  0x3101,  0x3903,  0x3101,  0x3901,  0x3903,  0x3903,  0x3101,  0x3903,  0x3101,  0x3903,  0x3101,  0x3101,  0x3903,  0x3901,  0x4143,  
    0x7b0b,  0x72c9,  0x6a89,  0x6a89,  0x7ac9,  0x7ac9,  0x7289,  0x72c9,  0x7ac9,  0x7ac9,  0x72c9,  0x7289,  0x7289,  0x72c9,  0x7ac9,  0x6a89,  0x3945,  0x72c9,  0x72c9,  0x6a49,  0x7ac9,  0x6a49,  0x72c9,  0x7ac9,  0x7289,  0x6a89,  0x7ac9,  0x72c9,  0x7ac9,  0x6a49,  0x7ac9,  0x7ac9,  
    0x7ac9,  0x7b0b,  0x7ac9,  0x7289,  0x72cb,  0x7289,  0x7ac9,  0x7ac9,  0x72cb,  0x7ac9,  0x7ac9,  0x7ac9,  0x7ac9,  0x7289,  0x72c9,  0x7ac9,  0x3943,  0x7289,  0x72c9,  0x7ac9,  0x7ac9,  0x7ac9,  0x7ac9,  0x7ac9,  0x7289,  0x7289,  0x7289,  0x7289,  0x7ac9,  0x7289,  0x7289,  0x72cb,  
    0x7289,  0x7289,  0x72c9,  0x7ac9,  0x72c9,  0x7289,  0x7289,  0x7289,  0x7ac9,  0x7289,  0x7ac9,  0x72c9,  0x72cb,  0x7289,  0x72c9,  0x72c9,  0x4185,  0x72c9,  0x7ac9,  0x7ac9,  0x7289,  0x7ac9,  0x7289,  0x7289,  0x72cb,  0x7289,  0x72cb,  0x7ac9,  0x7ac9,  0x7289,  0x7289,  0x72cb,  
    0x72c9,  0x7289,  0x7289,  0x7289,  0x7ac9,  0x72cb,  0x7ac9,  0x7289,  0x7289,  0x7289,  0x7ac9,  0x7ac9,  0x7ac9,  0x7289,  0x7289,  0x7289,  0x4185,  0x72cb,  0x72cb,  0x72cb,  0x7289,  0x7ac9,  0x7ac9,  0x7ac9,  0x7289,  0x7ac9,  0x7ac9,  0x72cb,  0x7ac9,  0x72cb,  0x72c9,  0x72cb,  
    0x7ac9,  0x7289,  0x7ac9,  0x7289,  0x7289,  0x7289,  0x7289,  0x7289,  0x7289,  0x7289,  0x7289,  0x72cb,  0x7ac9,  0x7289,  0x7ac9,  0x7ac9,  0x4185,  0x7289,  0x7ac9,  0x7289,  0x7289,  0x72cb,  0x7289,  0x7289,  0x7289,  0x72cb,  0x7289,  0x7289,  0x7289,  0x72c9,  0x72c9,  0x72c9,  
    0x72c9,  0x7289,  0x7289,  0x7289,  0x72cb,  0x72cb,  0x72c9,  0x7289,  0x7ac9,  0x7ac9,  0x7ac9,  0x7ac9,  0x7289,  0x7ac9,  0x7289,  0x7acb,  0x4185,  0x7ac9,  0x7ac9,  0x7ac9,  0x72cb,  0x7ac9,  0x7ac9,  0x72c9,  0x7289,  0x72cb,  0x7ac9,  0x7289,  0x7289,  0x7ac9,  0x7289,  0x7ac9,  
    0x72cb,  0x7289,  0x7289,  0x7289,  0x72cb,  0x72cb,  0x7289,  0x72c9,  0x7289,  0x7289,  0x7ac9,  0x7ac9,  0x7acb,  0x7289,  0x7289,  0x7acb,  0x4145,  0x7ac9,  0x7ac9,  0x7289,  0x72cb,  0x72c9,  0x7ac9,  0x7289,  0x72cb,  0x72c9,  0x7ac9,  0x7289,  0x72c9,  0x72cb,  0x72c9,  0x7ac9,  
    0x4185,  0x4185,  0x4185,  0x4185,  0x4185,  0x4185,  0x4185,  0x4185,  0x4185,  0x4187,  0x4185,  0x4187,  0x4187,  0x4187,  0x4187,  0x49c7,  0x2903,  0x4185,  0x4187,  0x4185,  0x4185,  0x4185,  0x4187,  0x4185,  0x4187,  0x4185,  0x4185,  0x4185,  0x4185,  0x4185,  0x4185,  0x4185,  
};
