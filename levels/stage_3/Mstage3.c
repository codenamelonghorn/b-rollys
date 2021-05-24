/********************************************************************************
						Ultra 64 MARIO Brothers

					  stage3 hierarchy data module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

							December 8, 1995
 ********************************************************************************/

//#include "../../headers.h"
#define	RGBA16(r,g,b,a)		(((r)<<11) | ((g)<<6) | ((b)<<1) | (a))

extern Gfx gfx_donjon[];

/********************************************************************************/
/*	Hierarchy map scene 1.														*/
/********************************************************************************/

const GeoLayout RCP_Stage3Scene1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
      //GEO_ZBUFFER(0),
      //GEO_OPEN_NODE(),
      //   GEO_NODE_ORTHO(100),
      //   GEO_OPEN_NODE(),
      //      GEO_BACKGROUND(RGBA16(10,20,25,1), NULL),
      //   GEO_CLOSE_NODE(),
      //GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 12800, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(16, 0,2000,6000,  -1024*6,0,-1024*6, geo_camera_main),
            GEO_OPEN_NODE(),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, gfx_donjon),
               GEO_RENDER_OBJ(),
               GEO_ASM(0, geo_envfx_main),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
