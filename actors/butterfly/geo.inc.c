/***************************************************************************************************
		Butterfly SourceData   64 Hard 

			1995 June 22
***************************************************************************************************/

extern Gfx gfx_but_wing1[];
extern Gfx gfx_but_wing3[];

/***************************************************************************************************
		Butterfly Hierarchy Data
****************************************************************************************************/
const GeoLayout butterfly_geo[] = {
	
   GEO_SHADOW(1, 180, 25),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, gfx_but_wing1),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, gfx_but_wing3),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
