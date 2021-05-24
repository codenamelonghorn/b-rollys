/********************************************************************************
		RCP_HmsEnemyKiller
														[ Sept 8, 1995 ]
*********************************************************************************/

extern Gfx gfx_killer[];


/********************************************************************************/
/*	Hierarchy map data of killer.												*/
/********************************************************************************/
const GeoLayout bullet_bill_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, gfx_killer),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
