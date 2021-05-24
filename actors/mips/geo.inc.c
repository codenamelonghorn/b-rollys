/***************************************************************************************************

		New Rabbit Souce Data

****************************************************************************************************/

extern Gfx RCP_newrabbit_base0[];
extern Gfx RCP_newrabbit_base1[];
extern Gfx RCP_newrabbit_base2[];
extern Gfx RCP_newrabbit_base3[];
extern Gfx RCP_newrabbit_base4[];
extern Gfx RCP_newrabbit_base5[];
extern Gfx RCP_newrabbit_base6[];
extern Gfx RCP_newrabbit_base7[];
extern Gfx RCP_newrabbit_base8[];
extern Gfx RCP_newrabbit_base9[];
extern Gfx RCP_newrabbit_base10[];
extern Gfx RCP_newrabbit_base11[];


/**********************************************************
		Rabbit !!
***********************************************************/

const GeoLayout mips_geo[] = {
   GEO_SHADOW(1, 200, 50),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 5, 0, RCP_newrabbit_base11),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 68, 0, 0, RCP_newrabbit_base10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 70, -28, 32, NULL),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_newrabbit_base1),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 77, 0, 0, RCP_newrabbit_base0),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 70, -28, 32, NULL),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_newrabbit_base3),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 77, 0, 0, RCP_newrabbit_base2),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,  -28, -4, 40, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_newrabbit_base6),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 42, 0, 0, RCP_newrabbit_base5),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 46, 0, 0, RCP_newrabbit_base4),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -28, -4, -40, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_newrabbit_base9),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 42, 0, 0, RCP_newrabbit_base8),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 46, 0, 0, RCP_newrabbit_base7),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(), //! more close than open nodes
GEO_END(),
};
