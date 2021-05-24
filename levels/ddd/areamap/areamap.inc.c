ALIGNED8 static const u8 WaterLand_AreaMap_1_upper_image_txt[] = {
    #include "levels/ddd/areamap_1_upper_image.rgba16.inc.c"
};

ALIGNED8 static const u8 WaterLand_AreaMap_1_lower_image_txt[] = {
    #include "levels/ddd/areamap_1_lower_image.rgba16.inc.c"
};

AreaMapData map_waterland_1 = {
	WaterLand_AreaMap_1_upper_image_txt, // top image
	WaterLand_AreaMap_1_lower_image_txt, // bottom image
	// these seem to be related to the arrow's positioning, but in what way? - Toru
	0.f, // xo_g
	0.f, // zo_g
	0.f, // side_g
};

ALIGNED8 static const u8 WaterLand_AreaMap_2_upper_image_txt[] = {
    #include "levels/ddd/areamap_2_upper_image.rgba16.inc.c"
};

ALIGNED8 static const u8 WaterLand_AreaMap_2_lower_image_txt[] = {
    #include "levels/ddd/areamap_2_lower_image.rgba16.inc.c"
};

AreaMapData map_waterland_2 = {
	WaterLand_AreaMap_2_upper_image_txt, // top image
	WaterLand_AreaMap_2_lower_image_txt, // bottom image
	// these seem to be related to the arrow's positioning, but in what way? - Toru
	0.f, // xo_g
	0.f, // zo_g
	0.f, // side_g
};
