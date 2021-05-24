/********************************************************************************
	RCP_HmsItemCoin
														[ June 16, 1995 ]
 ********************************************************************************/

extern Gfx  RCP_coin1[];
extern Gfx  RCP_coin2[];
extern Gfx  RCP_coin3[];
extern Gfx  RCP_coin4[];


/********************************************************************************/
/*	Hierarchy map data.															*/
/********************************************************************************/
const GeoLayout yellow_coin_geo[] = {
   GEO_SHADOW(1, 200, 80),
   GEO_OPEN_NODE(),
      GEO_SWITCH_CASE(8, geo_switch_anim_state),
      GEO_OPEN_NODE(),
		 GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_coin1),
		 GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_coin1),
		 GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_coin2),
		 GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_coin2),
		 GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_coin3),
		 GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_coin3),
		 GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_coin4),
		 GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_coin4),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
