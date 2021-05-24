
extern Gfx RCP_main_tree[];
extern Gfx RCP_tree02[];
extern Gfx RCP_tree03[];
extern Gfx RCP_tree04[];
extern Gfx RCP_tree05[];

// 0x16000FE8
const GeoLayout bubbly_tree_geo[] = {
   //GEO_CULLING_RADIUS(800),
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_main_tree),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16001000
const GeoLayout spiky_tree_geo[] = {
   //GEO_CULLING_RADIUS(800),
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_main_tree),//RCP_tree02),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16001018
const GeoLayout snow_tree_geo[] = {
   //GEO_CULLING_RADIUS(800),
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_main_tree),//RCP_tree03),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16001030
const GeoLayout spiky_tree1_geo[] = {
   //GEO_CULLING_RADIUS(800),
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_main_tree),//RCP_tree05),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16001048
const GeoLayout palm_tree_geo[] = {
   //GEO_CULLING_RADIUS(800),
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_main_tree),//RCP_tree04),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
