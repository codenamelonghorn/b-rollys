/********************************************************************************
						Ultra 64 MARIO Brothers

						stage 35 sequence module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

							December 8, 1995
 ********************************************************************************/

#define	ASSEMBLER

#include "../../headers.h"

		.data
		.align	2
		.align	0

		.globl	SEQ_DoStage35

SEQ_DoStage35:

	seqInitStage()
	seqLoadPres(SEGMENT_STAGE1, _GfxStage35SegmentRomStart, _GfxStage35SegmentRomEnd)

	seqBeginConstruction()
		seqHmsMario(S_Mario, ShapePlayer1, e_mario)

		seqBeginScene(1, RCP_Stage35Scene1)

			seqMapInfo(dummy35_info)

		seqEndScene()

	seqEndConstruction()

	seqEnterMario(1, 0,  0,0,0)
	seqCProgram(GameProcess, 0)
	seqRunning(GameProcess, 1)
	seqDestroyStage()
	seqFreeze(1)
	seqExit

