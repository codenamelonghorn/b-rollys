/********************************************************************************
						Ultra 64 MARIO Brothers

					  stage1 hierarchy data module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

							December 8, 1995
 ********************************************************************************/

//#include "../../headers.h"
#define	RGBA16(r,g,b,a)		(((r)<<11) | ((g)<<6) | ((b)<<1) | (a))


extern const Gfx gfx_stage37[];

/********************************************************************************/
/*	Hierarchy map scene 1.														*/
/********************************************************************************/

const GeoLayout RCP_Stage37Scene1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		//hmsLayer(0)
		//hmsBegin()
		//	hmsOrtho(100)
		//	hmsBegin()
		//		hmsClear(RGBA16(0, 12, 31, 1), NULL)
		//	hmsEnd()
		//hmsEnd()
		//
		//hmsLayer(1)
		//hmsBegin()
		//	hmsPerspective(45, SCREEN_NEAR, SCREEN_FAR, ZoomControl)
		//	hmsBegin()
		//		hmsCamera(CAM_FIELD,  0,2000,6000,  -1024*6,0,-1024*6, GameCamera)
		//		hmsBegin()
		//			hmsGfx(RM_SURF, gfx_stage37)
		//			hmsObject()
		//			hmsCProg(0,WeatherProc)
		//		hmsEnd()
		//	hmsEnd()
		//hmsEnd()
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
            GEO_CAMERA(1, 0,2000,6000,  -1024*6,0,-1024*6, geo_camera_main),
            GEO_OPEN_NODE(),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, gfx_stage37),
               GEO_RENDER_OBJ(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),	  
   GEO_CLOSE_NODE(),
   GEO_END(),
};
