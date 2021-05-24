#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common0.h"

#include "make_const_nonconst.h"
#include "levels/stage37/header.h"

#define	seqActor(shapeNo, posx, posy, posz, angx, angy, angz, code1, code2, flags, strategy) \
	CMD_BBBB(0x24, 0x18, 0x1f, shapeNo), \
    CMD_HHHHHH(posx, posy, posz, angx, angy, angz), \
    CMD_BBH(code1, code2, flags), \
    CMD_PTR(strategy)

const LevelScript level_stage37_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _stage37_segment_7SegmentRomStart, _stage37_segment_7SegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
	//LOAD_MODEL_FROM_GEO(MODEL_RED_KAME,   koopa_shell2_geo),
	//LOAD_MODEL_FROM_GEO(MODEL_GREEN_KAME, koopa_shell3_geo),
	LOAD_MODEL_FROM_DL(MODEL_LEVEL_GEOMETRY_03, RCP_bar, LAYER_OPAQUE),

    AREA(/*index*/ 1, RCP_Stage37Scene1),
	    seqActor( MODEL_STAR, -6094, 8500, -6094,  0,0,0,  0,0,0, bhvStar),
	    seqActor( MODEL_LEVEL_GEOMETRY_03	,  0,0,0  			,	0,0,0, 0,0,0, 	bhvPoleGrabbing			),	
		seqActor( MODEL_LEVEL_GEOMETRY_03	,  300,50+1024,300  	,	0,0,0, 0,0,0, 	/*e_bar_swing*/bhvStaticObject		),	
		seqActor( MODEL_LEVEL_GEOMETRY_03	,  2806,0,763  			,	0,0,0, 0,0,0, 	bhvPoleGrabbing			),	
		seqActor( MODEL_YELLOW_COIN,  5534, 1902, -5365,  0,0,0,  4,0,0 , bhvYellowCoin),
		seqActor( MODEL_YELLOW_COIN,  3631, 2534, -4254,  0,0,0,  4,0,0 , bhvYellowCoin),
		seqActor( MODEL_YELLOW_COIN, -1368, 2027, -1353,  0,0,0,  4,0,0 , bhvYellowCoin),
		seqActor( MODEL_YELLOW_COIN, -1111, 2027, -1623,  0,0,0,  4,0,0 , bhvYellowCoin),
		seqActor( MODEL_YELLOW_COIN, -5567, 2652,  2956,  0,0,0,  4,0,0 , bhvYellowCoin),
		seqActor( MODEL_YELLOW_COIN, -3643, 3933,  3437,  0,0,0,  4,0,0 , bhvYellowCoin),
		seqActor( MODEL_YELLOW_COIN, -4211, 5496, -2565,  0,0,0,  4,0,0 , bhvYellowCoin),
		seqActor( MODEL_YELLOW_COIN, -3822, 5496, -2802,  0,0,0,  4,0,0 , bhvYellowCoin),
		seqActor( MODEL_YELLOW_COIN, -3495, 5496, -3054,  0,0,0,  4,0,0 , bhvYellowCoin),
	    WARP_NODE(1, 1, 2, 2, WARP_NO_CHECKPOINT),
		WARP_NODE(2, 1, 1, 3, WARP_NO_CHECKPOINT),
		WARP_NODE(3, 1, 2, 1, WARP_NO_CHECKPOINT),
        TERRAIN(/*terrainData*/ stage37_info),
    END_AREA(),

    FREE_LEVEL_POOL(),
	MARIO_POS(1, 0,  0,1024,0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
