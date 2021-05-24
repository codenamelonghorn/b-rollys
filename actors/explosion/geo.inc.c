/********************************************************************************
	RCP_HmsItembombfire
														[ October 18, 1995 ]
 ********************************************************************************/

extern Gfx  RCP_bombfire1[];
extern Gfx  RCP_bombfire2[];
extern Gfx  RCP_bombfire3[];
extern Gfx  RCP_bombfire4[];
extern Gfx  RCP_bombfire5[];
extern Gfx  RCP_bombfire6[];
extern Gfx  RCP_bombfire7[];


/********************************************************************************/
/*	Hierarchy map data.															*/
/********************************************************************************/

const GeoLayout explosion_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_SWITCH_CASE(7, geo_switch_anim_state),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_bombfire1),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_bombfire2),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_bombfire3),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_bombfire4),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_bombfire5),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_bombfire6),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_bombfire7),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
