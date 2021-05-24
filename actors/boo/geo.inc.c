/********************************************************************************
		RCP_HmsEnemyTeresa
														[ Sept 22, 1995 ]
*********************************************************************************/

extern Gfx gfx_teresa[];

/********************************************************************************/
/*	Hierarchy map data of teresa.												*/
/********************************************************************************/
const GeoLayout boo_geo[] = {
   GEO_SHADOW(1, 150, 70),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 26214),
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_update_layer_transparency),
         GEO_SWITCH_CASE(2, geo_switch_anim_state),
         GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, gfx_teresa),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, gfx_teresa),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(), //! more close than open nodes
GEO_END(),
};
