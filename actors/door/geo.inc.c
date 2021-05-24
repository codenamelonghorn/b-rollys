/********************************************************************************
		RCP_FarMainDoor and RCP_NearMainDoor
														[ Jun 16, 1996 ]
*********************************************************************************/

extern Gfx RCP_NearMainDoor[];
extern Gfx RCP_FarMainDoor[];
extern Gfx RCP_mainroom_doorA[];
extern Gfx RCP_mainroom_doorB[];
extern Gfx RCP_mainroom_doorC[];
extern Gfx RCP_mainroom_doorD[];

extern Gfx gfx_door1[];
extern Gfx gfx_door2[];
extern Gfx gfx_door3[];
extern Gfx gfx_door4[];
extern Gfx gfx_door5[];

extern Gfx gfx_door1_far[];
extern Gfx gfx_door2_far[];
extern Gfx gfx_door3_far[];
extern Gfx gfx_door4_far[];
extern Gfx gfx_door5_far[];


// 0x160003A8
const GeoLayout castle_door_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 2000),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_NearMainDoor),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(2000, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_FarMainDoor),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(), //! more close than open nodes
GEO_END(),
};

const GeoLayout RCP_HmsMainroomDoorA[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 2000),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_NearMainDoor),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, RCP_mainroom_doorA),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(2000, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_FarMainDoor),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, RCP_mainroom_doorA),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(), //! more close than open nodes
GEO_END(),
};

// 0x160007B4
const GeoLayout RCP_HmsMainroomDoorB[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 2000),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_NearMainDoor),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, RCP_mainroom_doorB),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(2000, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_FarMainDoor),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, RCP_mainroom_doorB),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(), //! more close than open nodes
GEO_END(),
};

// 0x16000868
const GeoLayout RCP_HmsMainroomDoorC[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 2000),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_NearMainDoor),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, RCP_mainroom_doorC),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(2000, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_FarMainDoor),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, RCP_mainroom_doorC),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(), //! more close than open nodes
GEO_END(),
};

// 0x1600091C
const GeoLayout RCP_HmsMainroomDoorD[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 2000),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_NearMainDoor),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, RCP_mainroom_doorD),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(2000, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_FarMainDoor),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, RCP_mainroom_doorD),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(), //! more close than open nodes
GEO_END(),
};
