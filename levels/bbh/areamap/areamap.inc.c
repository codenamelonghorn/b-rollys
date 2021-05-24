
ALIGNED8 static const u8 Teresa_AreaMap_upper_image_txt[] = {
    #include "levels/bbh/areamap_upper_image.rgba16.inc.c"
};

ALIGNED8 static const u8 Teresa_AreaMap_lower_image_txt[] = {
    #include "levels/bbh/areamap_lower_image.rgba16.inc.c"
};

AreaMapData map_teresa = {
	Teresa_AreaMap_upper_image_txt, // top image
	Teresa_AreaMap_lower_image_txt, // bottom image
	 -600.f, // x offset
	-1400.f, // z offset
	 5320.f,  // map scale
};

