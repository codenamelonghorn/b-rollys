/**************************************************************/
/*	shape data ping_base (skeleton & animation) */
/**************************************************************/

extern Gfx RCP_ping_base0[];
extern Gfx RCP_ping_base1[];
extern Gfx RCP_ping_base2[];
extern Gfx RCP_ping_base3[];
extern Gfx RCP_ping_base4[];
extern Gfx RCP_ping_base5[];

extern Gfx RCP_ping_head_eye1[];
extern Gfx RCP_ping_head_eye2[];
extern Gfx RCP_ping_head_eye3[];
extern Gfx RCP_ping_head_eye4[];
extern Gfx RCP_ping_head_eye5[];


/*-------------------------------------------------------------*/
/*	Hms data 			                                       */
/*-------------------------------------------------------------*/
const GeoLayout penguin_geo[] = {
       GEO_SHADOW(1, 155, 50),
       GEO_OPEN_NODE(),
          GEO_SCALE(0x00, 16384),
          GEO_OPEN_NODE(),
             GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 40, RCP_ping_base5),
             GEO_OPEN_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, -51, 84, -13, NULL),
                GEO_OPEN_NODE(),
                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_ping_base0),
                GEO_CLOSE_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 51, 84, -13, NULL),
                GEO_OPEN_NODE(),
                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_ping_base1),
                GEO_CLOSE_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, -38, -54, -13, NULL),
                GEO_OPEN_NODE(),
                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_ping_base2),
                GEO_CLOSE_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 38, -54, -13, NULL),
                GEO_OPEN_NODE(),
                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_ping_base3),
                GEO_CLOSE_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 111, -19, NULL),
                GEO_OPEN_NODE(),
                   GEO_SWITCH_CASE(5, geo_switch_tuxie_mother_eyes),
                   GEO_OPEN_NODE(),
                      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_ping_head_eye1),
                      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_ping_head_eye2),
                      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_ping_head_eye3),
                      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_ping_head_eye4),
                      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_ping_head_eye5), // unused, seen in Shoshinkai 1995 footage
                   GEO_CLOSE_NODE(),
                GEO_CLOSE_NODE(),
             GEO_CLOSE_NODE(),
          GEO_CLOSE_NODE(),
       GEO_CLOSE_NODE(),
       GEO_END(),
};
