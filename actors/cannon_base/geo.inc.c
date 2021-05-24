/********************************************************************************
		RCP_HmsCannonBase
														[ Oct 23, 1995 ]
*********************************************************************************/

extern Gfx gfx_cannon_base[];


/********************************************************************************/
/*	Hierarchy map data of CannonBase.											*/
/********************************************************************************/
const GeoLayout cannon_base_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, gfx_cannon_base),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
