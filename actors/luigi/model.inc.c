/********************************************************************************
						Ultra 64 MARIO Brothers

					  luigi hierarcky data module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

				This module was programmed by Y.Nishida

							June 20, 1995
 ********************************************************************************/

extern unsigned short meye1_txt[];
extern unsigned short meye2_txt[];
extern unsigned short meye3_txt[];
extern unsigned short meye4_txt[];
extern unsigned short meye5_txt[];
extern unsigned short m_button_txt[];

/********************************************************************************/
/*	Luigi texture																*/ 																
/********************************************************************************/

static unsigned short l_mark_txt[] = {
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0x97e5,  0x07c1,  0xbfef,  0xf7fd,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0x67d9,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xd7f5,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0x1fc7,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0x37cd,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xeffa,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0x2fcb,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x1fc7,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x5fd7,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xb7ed,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x5fd7,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xf7fd,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xcff3,  0x77dd,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xffff,  0xffff,  0x87e1,  0x2fcb,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xbfef,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xcff3,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xeffa,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xa7e9,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0x07c1,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xe7f8,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xbfef,  0xd7f5,  0xd7f5,  0xeffb,  0x97e5,  0x67d9,  0x7fdf,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xffff,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xeffa,  0xe7f8,  0xeffa,  0xe7f8,  0xeffa,  0xdff6,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
};

static unsigned short l_momi_txt[] = {
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0x9081,  0x9081,  0x8881,  0x8081,  0x7881,  0x7881,  0x7081,  0x80c1,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0x98c1,  0x98c1,  0x90c1,  0x8081,  0x7881,  0x7081,  0x6841,  0x6841,  0x6041,  0x5801,  0x6001,  0x6001,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xa0c1,  0xa0c1,  0x98c1,  0x90c1,  0x8081,  0x7881,  0x7081,  0x7041,  0x6841,  0x6841,  0x6041,  0x6001,  0x6841,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0x98c1,  0xa0c1,  0x98c1,  0x88c1,  0x8081,  0x7081,  0x7081,  0x6841,  0x6841,  0x6841,  0x6041,  0x5801,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xb141,  0xa0c1,  0x98c1,  0x90c1,  0x8881,  0x7881,  0x7081,  0x7081,  0x6841,  0x6841,  0x6841,  0x6041,  0x6001,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0x98c1,  0x98c1,  0x90c1,  0x8881,  0x7881,  0x7881,  0x7081,  0x7081,  0x6841,  0x6841,  0x6041,  0x6001,  0x7881,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0x98c1,  0x98c1,  0x90c1,  0x88c1,  0x8081,  0x7881,  0x7081,  0x7081,  0x6841,  0x6841,  0x6841,  0x6041,  0x5801,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xa0c1,  0x98c1,  0x98c1,  0x90c1,  0x88c1,  0x8081,  0x7881,  0x7081,  0x7081,  0x7081,  0x6841,  0x6841,  0x6841,  0x6041,  0x6041,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xa103,  0x98c1,  0x98c1,  0x98c1,  0x98c1,  0x90c1,  0x8881,  0x8081,  0x7881,  0x7081,  0x7081,  0x7081,  0x7041,  0x6841,  0x6841,  0x6041,  0x6001,  0x7881,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0x9903,  0x98c1,  0x98c1,  0x98c1,  0x98c1,  0x90c1,  0x88c1,  0x8881,  0x8081,  0x7881,  0x7081,  0x7081,  0x7081,  0x7081,  0x6841,  0x6841,  0x6841,  0x6041,  0x5801,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0x78c5,  0x7881,  0x7881,  0x7881,  0x8081,  0x8081,  0x8081,  0x88c1,  0x8881,  0x8081,  0x7881,  0x7881,  0x7081,  0x7081,  0x7081,  0x7081,  0x6841,  0x6841,  0x6841,  0x6041,  0x6041,  0x6841,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0x7081,  0x6881,  0x6881,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7881,  0x7881,  0x7881,  0x7881,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x6841,  0x6841,  0x6841,  0x6841,  0x6041,  0x5801,  0x7881,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0x6881,  0x6841,  0x6841,  0x6841,  0x6881,  0x7041,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x6841,  0x6841,  0x6841,  0x6841,  0x6041,  0x6041,  0x6041,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0x70c3,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x7041,  0x7041,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x6881,  0x6841,  0x6841,  0x6841,  0x6841,  0x6041,  0x6041,  0x5801,  0x8881,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffc,  0xfffe,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x7041,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x6881,  0x6841,  0x6841,  0x6841,  0x6841,  0x6041,  0x6041,  0x6041,  0x6041,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xffbc,  0x9145,  0x6041,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x7081,  0x6841,  0x6881,  0x7081,  0x7081,  0x7081,  0x7081,  0x7081,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6041,  0x6041,  0x6041,  0x5801,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0x6841,  0x6041,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x7041,  0x6841,  0x7081,  0x7081,  0x7081,  0x7041,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6041,  0x6041,  0x6041,  0x5801,  0x7041,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0x6041,  0x6041,  0x6041,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6041,  0x6041,  0x6041,  0x6041,  0x5801,  0x6841,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0x6841,  0x6041,  0x6041,  0x6041,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6041,  0x6041,  0x6041,  0x6041,  0x6041,  0x6001,  0x6041,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xa187,  0x5801,  0x6041,  0x6041,  0x6041,  0x6041,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6841,  0x6041,  0x6041,  0x6041,  0x6041,  0x6041,  0x6041,  0x5801,  0x6041,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0x6041,  0x5801,  0x6041,  0x6041,  0x6041,  0x6041,  0x6041,  0x6841,  0x6841,  0x6841,  0x6041,  0x6041,  0x6041,  0x6041,  0x6041,  0x6041,  0x6001,  0x5801,  0x8883,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0x7041,  0x5001,  0x5841,  0x5841,  0x6041,  0x6041,  0x6041,  0x6041,  0x6041,  0x6041,  0x6041,  0x6041,  0x6041,  0x6001,  0x5801,  0x6841,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0x88c3,  0x6041,  0x5801,  0x5801,  0x6041,  0x6041,  0x6041,  0x6001,  0x6041,  0x5801,  0x5801,  0x5801,  0x6841,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0x80c3,  0x7041,  0x6041,  0x6841,  0x6841,  0x6841,  0x8083,  0x9903,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
    0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  0xfffe,  
};

static unsigned short l_hige_txt[] = {
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0001,  0x0001,  0x0001,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
};
/********************************************************************************/
/*	Luigi gfx list.																*/
/********************************************************************************/

#ifndef ConvertVtx
#define ConvertVtx(A,B,C,D,E,F,G,H,I,J) {{{A,B,C},D, {E,F}, {G,H,I,J}}}
#endif

#define	SCALE	4
#define ShapeColor_luigi(R,G,B) gdSPDefLights1(R/SCALE, G/SCALE, B/SCALE, R, G, B, LIGHT_X, LIGHT_Y, LIGHT_Z)
#define	G_CC_LUIGI_NORMAL			 0,		 0,			  0, SHADE,  0,0,0,ENVIRONMENT

#include "luigi_near_poly.sou"
#include "luigi_near_body.sou"
#include "luigi_near_head.sou"
#include "luigi_mid_poly.sou"
#include "luigi_mid_body.sou"
#include "luigi_far_poly.sou"
#include "luigi_swim_hand.sou"