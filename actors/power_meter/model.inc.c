/********************************************************************************
						Ultra 64 MARIO Brothers

					   damege gauge data module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

 ********************************************************************************/

#include "power_meter.h"

/********************************************************************************/
/*		Alphabet Pointer for dprintf       										*/
/********************************************************************************/

u8 *MeterDataPtr[] = {
		power_meter9_000_txt,power_meter9_001_txt,power_meter8_000_txt,power_meter8_001_txt,power_meter7_000_txt,power_meter7_001_txt,
		power_meter6_000_txt,power_meter6_001_txt,power_meter5_000_txt,power_meter5_001_txt,power_meter4_000_txt,power_meter4_001_txt,
		power_meter3_000_txt,power_meter3_001_txt,power_meter2_000_txt,power_meter2_001_txt,power_meter1_000_txt,power_meter1_001_txt,
};

/******************************************************************************************
		Damege Meter 
******************************************************************************************/

static Vtx vtx_damegemeter[] = {
	{{{ -32 , -32 ,  0},  0 , {       0 ,              0},   {255,255,255,220}}}, 
	{{{   0 , -32 ,  0},  0 , {(31 << 5),              0},   {255,255,255,220}}}, 
	{{{   0 ,  32 ,  0},  0 , {(31 << 5),    ( -63 << 5)},   {255,255,255,220}}}, 
	{{{ -32 ,  32 ,  0},  0 , {        0,    ( -63 << 5)},   {255,255,255,220}}}, 
	
	{{{   0 , -32 ,  0},  0 , {       1 ,              0},   {255,255,255,220}}}, 
	{{{  32 , -32 ,  0},  0 , {(32 << 5),              0},   {255,255,255,220}}}, 
	{{{  32 ,  32 ,  0},  0 , {(32 << 5),    ( -63 << 5)},   {255,255,255,220}}}, 
	{{{   0 ,  32 ,  0},  0 , {       1 ,    ( -63 << 5)},   {255,255,255,220}}}, 
};


extern Gfx RCP_damegemeter_on[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_LIGHTING),
	gsDPSetCombineMode(G_CC_MODULATERGBA, G_CC_MODULATERGBA),
	gsDPSetRenderMode(G_RM_XLU_SURF,G_RM_XLU_SURF2),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON),
	gsSPVertex(&vtx_damegemeter[0],  8, 0), 
	gsSPEndDisplayList() 
};


extern Gfx RCP_damegemeter_txt[] = {

    gsxDPLoadTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0,
			 		G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
			 					5,6, G_TX_NOLOD, G_TX_NOLOD),
	gsSPEndDisplayList() 
};


extern Gfx RCP_damegemeter_off[] = {
	gsDPPipeSync(),
	gsSPTexture(0xffff, 0xffff, 0, 0, 0),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPSetGeometryMode(G_SHADING_SMOOTH|G_LIGHTING),
	gsSPEndDisplayList() 

};
