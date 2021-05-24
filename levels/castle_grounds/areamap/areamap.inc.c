
ALIGNED8 static const u8 MainMap_AreaMap_upper_image_txt[] = {
    #include "levels/castle_grounds/areamap_upper_image.rgba16.inc.c"
};

ALIGNED8 static const u8 MainMap_AreaMap_lower_image_txt[] = {
    #include "levels/castle_grounds/areamap_lower_image.rgba16.inc.c"
};

AreaMapData map_mainmap = {
	MainMap_AreaMap_upper_image_txt, // top image
	MainMap_AreaMap_lower_image_txt, // bottom image
	-200.f, // x offset
	100.f, // z offset
	8000.f, // map scale
};

