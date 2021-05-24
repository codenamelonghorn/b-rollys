/********************************************************************************
						Ultra 64 MARIO Brothers

					  stage38 hierarchy data module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

							December 8, 1995
 ********************************************************************************/

//#include "../../headers.h"

extern Gfx gfx_dummy38[];



#define	BGCHECKCODE_0	0
#define	BGCHECKCODE_3	5
#define	BGCHECKCODE_5	0
#define	BGCHECKCODE_6	0

#define	BGCHECKCODE_33	33
#define	BGCHECKCODE_34	34
#define	BGCHECKCODE_35	35
#define	BGCHECKCODE_38	38

#define	BGCHECKCODE_40	36
#define	BGCHECKCODE_41	36
#define	BGCHECKCODE_42	36
#define	BGCHECKCODE_43	36
#define	BGCHECKCODE_44	36
#define	BGCHECKCODE_45	36
#define	BGCHECKCODE_46	36
#define	BGCHECKCODE_47	36

#define	BGCHECKCODE_50	37
#define	BGCHECKCODE_51	37
#define	BGCHECKCODE_52	37
#define	BGCHECKCODE_53	37
#define	BGCHECKCODE_54	37
#define	BGCHECKCODE_55	37
#define	BGCHECKCODE_56	37
#define	BGCHECKCODE_57	37

#include "sand.sou"
#include "sand.flk"


/********************************************************************************/
/*	Hierarchy map scene 1.														*/
/********************************************************************************/
const GeoLayout RCP_Stage38Scene1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND(RGBA16(0, 12, 31, 1), NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
	  
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 12800, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(1, 0,2000,6000,  0,0,0, geo_camera_main),
            GEO_OPEN_NODE(),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_sand),
			   GEO_ASM(  0, geo_render_mirror_mario),
               GEO_RENDER_OBJ(),
			   GEO_ASM(0, geo_envfx_main),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),	  
   GEO_CLOSE_NODE(),
   GEO_END(),
};
