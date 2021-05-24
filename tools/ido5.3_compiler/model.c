#include <mbi.h>
#include <gu.h>
#include <em.h>
#include <os.h>

#include "model.h"
#define NUM_MODELS	1

extern Gfx nintendo_logo_model[];
extern Nin nintendo_logo_model_data;
extern float nintendo_logo_box[][3];

int numModels = NUM_MODELS;

Model models[] = {
	{ &nintendo_logo_model_data,	(float *) nintendo_logo_box },
};

