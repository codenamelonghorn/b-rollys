/**********************************************************************
 *                                                                    *
 *  Application Data for model:                                       *
 *     ./mario/nin/display/nintendo_logo.nin                          *
 *                                                                    *
 *  THIS FILE WAS CREATED BY NINGEN                                   *
 *                                                                    *
 *                                                                    *
 **********************************************************************/


#include <mbi.h>
#include "model.h"

extern Vtx nintendo_logo_v[];
extern Material nintendo_logo_material[];
extern Mtx nintendo_logo_matrix[];



extern Gfx nintendo_logo_model[];
extern Gfx nintendo_logo_grp_g1[];



static NinStruc nintendo_logo_grp_g1_structure = {
	NULL,		/* matrix */ 
	0,	/* num children */
	NULL,	/* no children */
};

static NinDL nintendo_logo_grp_g1_dlist = {
	1168,
	nintendo_logo_grp_g1,
	0,
	NULL,
};

static Nin nintendo_logo_grp_g1_data = {
	NIN_GROUP,
	&nintendo_logo_grp_g1_dlist,
	NULL,	/* no custom data */
	&nintendo_logo_grp_g1_structure,
};

static Nin *nintendo_logo_model_children[] = {
	&nintendo_logo_grp_g1_data,
};

static NinStruc nintendo_logo_model_structure = {
	NULL,		/* matrix */ 
	1,	/* num children */
	nintendo_logo_model_children,
};

static NinDL nintendo_logo_model_dlist = {
	2,
	nintendo_logo_model,
	0,
	NULL,
};

Nin nintendo_logo_model_data = {
	NIN_HEADER,
	&nintendo_logo_model_dlist,
	NULL,	/* no custom data */
	&nintendo_logo_model_structure,
};

float nintendo_logo_box[][3] = {
	{ -560.828495, -117.603779, -98.425198 }, 
	{ 557.439232, 157.888150, 98.425198 } 
}; 
