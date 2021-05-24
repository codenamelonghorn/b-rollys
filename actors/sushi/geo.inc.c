/**************************************************************/
/*	shape data shark_basedata (skeleton & animation) */
/**************************************************************/

extern Gfx RCP_s_bodyA[];
extern Gfx RCP_s_bodyB[];
extern Gfx RCP_s_bodyC[];
extern Gfx RCP_s_bodyD[];
extern Gfx RCP_s_head_surf[];
extern Gfx RCP_s_head_sprite[];


/*-------------------------------------------------------------*/
/*	Hms data 			                                       */
/*-------------------------------------------------------------*/
const GeoLayout sushi_geo[] = {
   GEO_CULLING_RADIUS(800),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 65536),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 21, -8, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_s_bodyA),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 50, 0, 0, RCP_s_bodyB),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 103, 0, 0, RCP_s_bodyC),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 121, 0, 0, RCP_s_bodyD),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -55, -1, -1, NULL),
			   GEO_OPEN_NODE(),
			       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_s_head_surf),
				   GEO_OPEN_NODE(),
				       GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_s_head_sprite),
				   GEO_CLOSE_NODE(),
			   GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
