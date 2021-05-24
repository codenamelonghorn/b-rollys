#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#define	ASSEMBLER

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common0.h"

#include "make_const_nonconst.h"
#include "levels/stage32/header.h"

#define	seqActor(shapeNo, posx, posy, posz, angx, angy, angz, code1, code2, flags, strategy) \
	CMD_BBBB(0x24, 0x18, 0x1f, shapeNo), \
    CMD_HHHHHH(posx, posy, posz, angx, angy, angz), \
    CMD_BBH(code1, code2, flags), \
    CMD_PTR(strategy)

#include "levels/stage32/stage.dat"
