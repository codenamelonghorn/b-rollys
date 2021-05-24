/********************************************************************************
		RCP_HmsCannonBody
														[ Oct 23, 1995 ]
*********************************************************************************/

extern Gfx gfx_cannon_body[];


/********************************************************************************/
/*	Hierarchy map data of CannonBody.											*/
/********************************************************************************/
const GeoLayout cannon_barrel_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, gfx_cannon_body),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
