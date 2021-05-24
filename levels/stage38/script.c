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
#include "levels/stage38/header.h"
#include "include/project.h"

const LevelScript level_stage38_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _stage38_segment_7SegmentRomStart, _stage38_segment_7SegmentRomEnd),
    ALLOC_LEVEL_POOL(),
	#if LUIGI == 1
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
	INIT_LUIGI(/*model*/ MODEL_LUIGI, /*behParam*/ 0x00000002, /*beh*/ bhvMario),
	#else
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    #endif

    AREA(/*index*/ 1, RCP_Stage38Scene1),
        TERRAIN(/*terrainData*/ sand_info),
    END_AREA(),

    FREE_LEVEL_POOL(),
	MARIO_POS(1, 0,  0,0,1000),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
