/********************************************************************************
						    Project B-Roll

					      Area Map Recreation

			Copyright 2020 Project B-Roll Team.  All rights reserved

		This module was programmed by Toru the Red Fox and iProgramInCpp.

							 Dec 24, 2020
*********************************************************************************/

#include <PR/ultratypes.h>
#include <PR/gbi.h>

#include "game/memory.h"
#include "game/segment2.h"
#include "include/areamap.h"
#include "sm64.h"
#include "textures.h"
#include "types.h"
#include "prevent_bss_reordering.h"

#include "game/game_init.h" // for controller access 
#include "audio/external.h" // for audio macros
#include "include/gex.h"    // for texture macros
#include "include/gfx_dimensions.h"
#include "geo_misc.h"
#include "rendering_graph_node.h"
#include "ingame_menu.h"
#include "area.h"
#include "level_update.h"
#include "src/engine/math_util.h"
#include "object_list_processor.h"
#include "camera.h"

u8 gShowMap = 0;

extern AreaMapData map_teresa;
extern AreaMapData map_mainmap;
extern AreaMapData map_firebubble;
extern AreaMapData map_waterland_1;
extern AreaMapData map_waterland_2;
extern AreaMapData map_mountain;

AreaMapData *teresa_maps[] = {
	&map_teresa,
	NULL
};

AreaMapData *mainmap_maps[] = {
	&map_mainmap,
	NULL
};

AreaMapData *firebubble_maps[] = {
	&map_firebubble,
	NULL
};

AreaMapData *waterland_maps[] = {
	&map_waterland_1,
	&map_waterland_2,
	NULL
};

AreaMapData *mountain_maps[] = {
	&map_mountain,
	NULL
};

AreaMapData **AreaMapPointers[] = {
	NULL,            // stage 1
	NULL,            // stage 2
	NULL,            // stage 3
	teresa_maps,     // stage 4
	NULL,            // stage 5
	NULL,            // stage 6
	NULL,            // stage 7
	NULL,            // stage 8
	NULL,            // stage 9
	NULL,            // stage 10
	NULL,            // stage 11
	NULL,            // stage 12
	NULL,            // stage 13
	NULL,            // stage 14
	NULL,            // stage 15
	mainmap_maps,    // stage 16
	NULL,            // stage 17
	NULL,            // stage 18
	NULL,            // stage 19
	NULL,            // stage 20
	NULL,            // stage 21
	firebubble_maps, // stage 22
	waterland_maps,  // stage 23
	mountain_maps,   // stage 24
	NULL,            // stage 25
	NULL,            // stage 26
	NULL,            // stage 27
	NULL,            // stage 28
	NULL,            // stage 29
	NULL,            // stage 30
	NULL,            // stage 31
	NULL,            // stage 32
};

static f32 offsetX    = 264.f;
static f32 offsetY    = 184.f;

static const f32 offsetYOff = 304.f;
static const f32 offsetYOn  = 194.f;

static const f32 Yspeed     =  10.f; // in pixels per frame

static f32 ArrowXPos;
static f32 ArrowYPos;

//*****************************************************//
//                                                     //
//        DrawMap function: It draws the map.          //
//                                                     //
//*****************************************************//

Gfx *DrawMap(AreaMapData *currentMap)
{	
	Gfx*		gfxPtr = alloc_display_list(20*sizeof(*gfxPtr));
	Vtx* 		verts = alloc_display_list(12 * sizeof(*verts));
	Gfx*		gfxTmp = gfxPtr ;
	Mtx*		mtx = alloc_display_list(sizeof(*mtx));
	Mtx*		arrowMtx = alloc_display_list(sizeof(*arrowMtx));
	Mtx*		arrowRot = alloc_display_list(sizeof(*arrowRot));
	
	if (gfxPtr != NULL && verts != NULL && mtx != NULL)	{
				
		// make verts for map
	    
		// top image
		
		make_vertex(verts,   0,  -32,    0,   -1,        1 , ( 32 << 5), 255, 255, 255, 220);
        make_vertex(verts,   1,   32,    0,   -1, (63 << 5), ( 32 << 5), 255, 255, 255, 220);
        make_vertex(verts,   2,   32,   32,   -1, (63 << 5),          1, 255, 255, 255, 220);
        make_vertex(verts,   3,  -32,   32,   -1,        1 ,          1, 255, 255, 255, 220);
		// bottom image
		make_vertex(verts,   4,  -32,  -32,   -1,        1 , ( 32 << 5), 255, 255, 255, 220);
        make_vertex(verts,   5,   32,  -32,   -1, (63 << 5), ( 32 << 5), 255, 255, 255, 220);
        make_vertex(verts,   6,   32,    0,   -1, (63 << 5),          1, 255, 255, 255, 220);
        make_vertex(verts,   7,  -32,    0,   -1,        1 ,          1, 255, 255, 255, 220);
		// arrow    
		make_vertex(verts,   8,   -4,   -4,   -1,        0 ,  ( 8 << 5), 255,   0,   0, 255);
        make_vertex(verts,   9,    4,   -4,   -1,  (8 << 5),  ( 8 << 5), 255,   0,   0, 255);
        make_vertex(verts,   10,   4,    4,   -1,  (8 << 5),          0, 255,   0,   0, 255);
        make_vertex(verts,   11,  -4,    4,   -1,        0 ,          0, 255,   0,   0, 255);
		
		// finish making verts
		
		gSPDisplayList(gfxTmp++, areamap_init_project);	
		gSPDisplayList(gfxTmp++, areamap_init_graphic1);
		
		gSPDisplayList(gfxTmp++, dl_proj_mtx_fullscreen);
		
		guTranslate(mtx, offsetX, offsetY, 0);
        gSPMatrix(gfxTmp++, mtx, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_NOPUSH);
		
		gSPVertex(gfxTmp++, VIRTUAL_TO_PHYSICAL(&verts[0]), 8, 0);
		
		g_Tani_LoadTextureImage2(gfxTmp++, currentMap->image_upper, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 7);
				
        gSPDisplayList(gfxTmp++, dl_draw_quad_verts_0123);
		
        g_Tani_LoadTextureImage2(gfxTmp++, currentMap->image_lower, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 7);
		gSPDisplayList(gfxTmp++, dl_draw_quad_verts_4567);
		
		// arrow
		guTranslate(arrowMtx, ArrowXPos, ArrowYPos, 0);
        gSPMatrix(gfxTmp++, VIRTUAL_TO_PHYSICAL(arrowMtx), G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_NOPUSH);
		guRotate(arrowRot, (180+(gMarioStates[0].faceAngle[1]/180)), 0.0f, 0.0f, 1.0f);
		gSPMatrix(gfxTmp++, VIRTUAL_TO_PHYSICAL(arrowRot), G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_NOPUSH);
		gSPDisplayList(gfxTmp++, dl_ia8_up_arrow_load_texture_block);
		gSPVertex(gfxTmp++, VIRTUAL_TO_PHYSICAL(&verts[8]), 4, 0);	
        gSPDisplayList(gfxTmp++, dl_draw_quad_verts_0123);
		
		gSPDisplayList(gfxTmp++, dl_ia8_up_arrow_end);	    	
	 	gSPEndDisplayList(gfxTmp);		
	} else {
	    return NULL;
	}
	return gfxPtr;
}

//*****************************************************//
//                                                     //
//     Main AreaMap function. This sets up the map,    //
//  and calls other functions to move around the arrow //
//                  and draw the map.                  //
//                                                     //
//*****************************************************//
Gfx *AreaMap(s32 code, struct GraphNode *node, UNUSED void *data)
{
	struct GraphNodeGenerated*	cprog = (struct GraphNodeGenerated *) node;
	Gfx*		gfxPtr = NULL ;
		
	AreaMapData **currentStage = AreaMapPointers[gCurrLevelNum-1]; 
	AreaMapData  *currentMap = segmented_to_virtual(currentStage[gCurrAreaIndex-1]);
	ArrowXPos = (f32) (((gMarioStates[0].pos[0] + currentMap->xo_g) / currentMap->side_g) * 32);
    ArrowYPos = (f32)-(((gMarioStates[0].pos[2] + currentMap->zo_g) / currentMap->side_g) * 32);
		
	if (code == GEO_CONTEXT_RENDER && gCurrentArea != NULL && currentMap != NULL && currentStage != NULL)	{
		
		if (sCurrPlayMode != 2 && sCurrPlayMode != 5) {
			if (gPlayer1Controller->buttonPressed & R_TRIG && gCamera->cutscene == 0)  {
	    		gShowMap ^= 1;
	    	}
			if (gShowMap) {
				if (offsetY > offsetYOn) {
					offsetY -= Yspeed;
				} 
				if (offsetY <= offsetYOn) {
					offsetY = offsetYOn;
				}
			} else {
				if (offsetY < offsetYOff) {
					offsetY += Yspeed ;
				} 
				if (offsetY >= offsetYOff) {
					offsetY = offsetYOff;
				}
			}
		}
		
		// drawing the map and arrow here
			
		cprog->fnNode.node.flags = (cprog->fnNode.node.flags & 0xFF) | 0x500;
		
		gfxPtr = DrawMap(currentMap);

		// done drawing
	}
	
	return gfxPtr; // return Gfx pointer
}
