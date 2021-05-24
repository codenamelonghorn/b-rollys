#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/stage_1/header.h"

const LevelScript level_stage_1_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _stage_1_segment_7SegmentRomStart, _stage_1_segment_7SegmentRomEnd),
    //LOAD_MIO0(        /*seg*/ 0x05, _group0_mio0SegmentRomStart, _group0_mio0SegmentRomEnd),
    //LOAD_RAW(         /*seg*/ 0x0C, _group0_geoSegmentRomStart,  _group0_geoSegmentRomEnd),
	//LOAD_MIO0(        /*seg*/ 0x06, _group1_mio0SegmentRomStart, _group1_mio0SegmentRomEnd),
    //LOAD_RAW(         /*seg*/ 0x0D, _group1_geoSegmentRomStart,  _group1_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    //JUMP_LINK(script_func_global_2),
	//JUMP_LINK(script_func_global_7),

    AREA(/*index*/ 1, RCP_Stage1Scene1),
	    WARP_NODE(1, 1, 2, 2, WARP_NO_CHECKPOINT),
		WARP_NODE(2, 1, 1, 3, WARP_NO_CHECKPOINT),
		WARP_NODE(3, 1, 2, 1, WARP_NO_CHECKPOINT),
        TERRAIN(/*terrainData*/ castle_info),
    END_AREA(),

    FREE_LEVEL_POOL(),
	MARIO_POS(1, 0,  0,1024,0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
