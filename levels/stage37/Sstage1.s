/********************************************************************************
						Ultra 64 MARIO Brothers

						stage 1 sequence module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

							December 8, 1995
 ********************************************************************************/

#define	ASSEMBLER

#include "../../headers.h"

		.data
		.align	2
		.align	0

		.globl	SEQ_DoStage01


SEQ_DoStage01:

	seqInitStage()
	seqLoadPres(SEGMENT_STAGE1	   , _GfxStage1SegmentRomStart, 	  _GfxStage1SegmentRomEnd)
	seqLoadPres(SEGMENT_ENEMY1	  ,  _GfxEnemy1_aSegmentRomStart,     _GfxEnemy1_aSegmentRomEnd)
	seqLoadData(SEGMENT_ENEMYDATA1,  _HmsEnemy1_aSegmentRomStart,     _HmsEnemy1_aSegmentRomEnd)
	seqLoadPres(SEGMENT_ENEMY2	  ,  _GfxEnemy2_fSegmentRomStart,     _GfxEnemy2_fSegmentRomEnd)
	seqLoadData(SEGMENT_ENEMYDATA2,  _HmsEnemy2_fSegmentRomStart,  	  _HmsEnemy2_fSegmentRomEnd)
	seqLoadPres(SEGMENT_ENEMY3	  ,  _GfxBasic_enemySegmentRomStart,  _GfxBasic_enemySegmentRomEnd)
	seqLoadData(SEGMENT_ENEMYDATA3,  _HmsBasic_enemySegmentRomStart,  _HmsBasic_enemySegmentRomEnd)

	seqBeginConstruction()

		seqHmsMario(S_Mario, ShapePlayer1, e_mario)
		seqCall(SetBasicEnemy)
		seqCall(SetEnemy1_a)
		seqCall(SetEnemy2_f)

		seqBeginScene(1, RCP_Stage37Scene1)

			seqPort(1, 1, 2, 2)
			seqPort(2, 1, 1, 3)
			seqPort(3, 1, 2, 1)
			seqMapInfo(stage37_info)
		seqEndScene()

	seqEndConstruction()


	seqEnterMario(1, 0,  0,1024,0)
	seqCProgram(GameProcess, 0)
	seqRunning(GameProcess, 1)
	seqDestroyStage()
	seqFreeze(1)
	seqExit




