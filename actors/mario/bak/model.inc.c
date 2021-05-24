/********************************************************************************
						Ultra 64 MARIO Brothers

					mario graphic display list module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

							December 7, 1995
 ********************************************************************************/


/********************************************************************************/
/*	Mario gfx list.																*/
/********************************************************************************/

#define ConvertVtx(A,B,C,D,E,F,G,H,I,J) {{{A,B,C},D, {E,F}, {G,H,I,J}}}
#define	G_CC_MARIO_MAPPING		TEXEL0, SHADE, TEXEL0_ALPHA, SHADE,  0,0,0,ENVIRONMENT
#define	G_CC_MARIO_NORMAL			 0,		 0,			  0, SHADE,  0,0,0,ENVIRONMENT
#define	SCALE	4
#define ShapeColor(r,g,b) gdSPDefLights1(r/4,g/4,b/4,r,g,b,LIGHT_X,LIGHT_Y,LIGHT_Z)
#define ShapeColor_mario(R,G,B) gdSPDefLights1(R/SCALE,G/SCALE,B/SCALE,R,G,B,LIGHT_X,LIGHT_Y,LIGHT_Z)


/********************************************************************************/
/*	Matrial (light) datas														*/
/********************************************************************************/

static Lights1	light_mario[] = {
	ShapeColor_mario(  0,   0, 255),
	ShapeColor_mario(255,   0,   0),
	ShapeColor_mario(255, 255, 255),
	ShapeColor_mario(114,  28,  14),
	ShapeColor_mario(254, 193, 121),
	ShapeColor_mario( 68,   6,   0),
};

/********************************************************************************/
/*	Graphic display list datas													*/
/********************************************************************************/

#include "Mario/mario_texture.h"
#include "Mario/mario_near_poly.sou"
#include "Mario/mario_near_body.sou"
#include "Mario/mario_near_head.sou"
#include "Mario/mario_mid_poly.sou"
#include "Mario/mario_mid_body.sou"
#include "Mario/mario_far_poly.sou"
#include "Mario/mario_far_body.sou"
#include "Mario/mario_far_head.sou"
#include "Mario/mario_swim_hand.sou"
#include "Mario/mario_vsign_hand.sou"
