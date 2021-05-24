
ALIGNED8 static const u8 FireBubble_AreaMap_upper_image_txt[] = {
    #include "levels/lll/areamap_upper_image.rgba16.inc.c"
};

ALIGNED8 static const u8 FireBubble_AreaMap_lower_image_txt[] = {
    #include "levels/lll/areamap_lower_image.rgba16.inc.c"
};

AreaMapData map_firebubble = {
	FireBubble_AreaMap_upper_image_txt, // top image
	FireBubble_AreaMap_lower_image_txt, // bottom image
	0.f,    // x offset
	0.f,    // z offset
	8092.f, // map scale
};

