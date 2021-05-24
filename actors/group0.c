#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

#include "common1.h"
#include "group0.h"

#include "include/project.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.

#if LUIGI == 0
#include "mario/model.inc.c"
#elif LUIGI == 1
#include "mario/model.inc.c"
#include "luigi/model.inc.c"
#else
#include "mario/Mario/mario_texture.h"
#include "luigi/model.inc.c"
#endif

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "stomp_smoke/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"
