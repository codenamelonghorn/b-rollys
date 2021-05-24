/********************************************************************************
						Ultra 64 MARIO Brothers

					   mario hierarcky data module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

							December 7, 1995
 ********************************************************************************/

extern Gfx RCP_mario_head1[];
extern Gfx RCP_mario_head2[];
extern Gfx RCP_mario_head3[];
extern Gfx RCP_mario_head4[];
extern Gfx RCP_mario_head5[];
extern Gfx RCP_mario_head6[];
extern Gfx RCP_mario_head7[];
extern Gfx RCP_mario_head8[];

extern Gfx RCP_mario_far_head1[];
extern Gfx RCP_mario_far_head2[];
extern Gfx RCP_mario_far_head3[];
extern Gfx RCP_mario_far_head4[];
extern Gfx RCP_mario_far_head5[];
extern Gfx RCP_mario_far_head6[];
extern Gfx RCP_mario_far_head7[];
extern Gfx RCP_mario_far_head8[];

extern Gfx RCP_swim_hand_l[];
extern Gfx RCP_swim_hand_r[];
extern Gfx RCP_mario_vsign_hand[];

extern Gfx RCP_mario_near_body[];
extern Gfx RCP_mario_mid_body[];
extern Gfx RCP_mario_far_body[];

extern Gfx RCP_mario_near0[];
extern Gfx RCP_mario_near1[];
extern Gfx RCP_mario_near2[];
extern Gfx RCP_mario_near3[];
extern Gfx RCP_mario_near4[];
extern Gfx RCP_mario_near5[];
extern Gfx RCP_mario_near6[];
extern Gfx RCP_mario_near7[];
extern Gfx RCP_mario_near8[];
extern Gfx RCP_mario_near9[];
extern Gfx RCP_mario_near10[];
extern Gfx RCP_mario_near11[];
extern Gfx RCP_mario_near14[];

extern Gfx RCP_mario_mid0[];
extern Gfx RCP_mario_mid1[];
extern Gfx RCP_mario_mid2[];
extern Gfx RCP_mario_mid3[];
extern Gfx RCP_mario_mid4[];
extern Gfx RCP_mario_mid5[];
extern Gfx RCP_mario_mid6[];
extern Gfx RCP_mario_mid7[];
extern Gfx RCP_mario_mid8[];
extern Gfx RCP_mario_mid9[];
extern Gfx RCP_mario_mid10[];
extern Gfx RCP_mario_mid11[];
extern Gfx RCP_mario_mid14[];

extern Gfx RCP_mario_far0[];
extern Gfx RCP_mario_far1[];
extern Gfx RCP_mario_far2[];
extern Gfx RCP_mario_far3[];
extern Gfx RCP_mario_far4[];
extern Gfx RCP_mario_far5[];
extern Gfx RCP_mario_far6[];
extern Gfx RCP_mario_far7[];
extern Gfx RCP_mario_far8[];
extern Gfx RCP_mario_far9[];
extern Gfx RCP_mario_far10[];
extern Gfx RCP_mario_far11[];
extern Gfx RCP_mario_far14[];



/********************************************************************************/
/*	Title mario hierarchy map data.												*/
/********************************************************************************/
const GeoLayout RCP_TitleMarioHierarchy[] = {
   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_near14), // starts sharing solid color with mario_torso (blue)
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_move_mario_part_from_parent),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 68, 0, 0, RCP_mario_near_body),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ASM(0, geo_mario_head_rotation),
                  GEO_ROTATION_NODE(0x00, 0, 0, 0),
                  GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
                        GEO_OPEN_NODE(),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head1),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head2),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head3),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head4),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head5),
                        GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 67, -10, 79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_near2), // starts sharing solid color with mario_left_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, RCP_mario_near1),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_mario_near0),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 68, -10, -79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_near5), // starts sharing solid color of his dl with mario_right_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, RCP_mario_near4),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_mario_near3),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, 42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_near11), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, RCP_mario_near10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, RCP_mario_near9), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, -42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_near8), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, RCP_mario_near7),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, RCP_mario_near6), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

/********************************************************************************/
/*	Near mario hierarchy map data [ Opaque ].									*/
/********************************************************************************/
const GeoLayout RCP_NearMarioHierarchy[] = {
   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_near14), // starts sharing solid color with mario_torso (blue)
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_move_mario_part_from_parent),
         GEO_ROTATION_NODE(0x00, 0, 0, 0),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 68, 0, 0, RCP_mario_near_body),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ASM(0, geo_mario_head_rotation),
                  GEO_ROTATION_NODE(0x00, 0, 0, 0),
                  GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
                        GEO_OPEN_NODE(),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head1),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head2),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head3),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head4),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head5),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head6),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head7),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head8),
                        GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 67, -10, 79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_near2), // starts sharing solid color with mario_left_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, RCP_mario_near1),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_mario_near0),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_swim_hand_l),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_swim_hand_l),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 68, -10, -79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_near5), // starts sharing solid color of his dl with mario_right_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, RCP_mario_near4),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_mario_near3),
	                       GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_swim_hand_r),
                           GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_mario_vsign_hand), // here we go hand
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, 42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_near11), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, RCP_mario_near10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, RCP_mario_near9), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, -42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_near8), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, RCP_mario_near7),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, RCP_mario_near6), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

/********************************************************************************/
/*	Near mario hierarchy map data [ Translucent & Transparent ].				*/
/********************************************************************************/
const GeoLayout RCP_NearMarioHierarchy_XLU[] = {
   GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, NULL),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_near14), // starts sharing solid color with mario_torso (blue)
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_move_mario_part_from_parent),
         GEO_ROTATION_NODE(0x00, 0, 0, 0),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_TRANSPARENT, 68, 0, 0, RCP_mario_near_body),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 87, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ASM(0, geo_mario_head_rotation),
                  GEO_ROTATION_NODE(0x00, 0, 0, 0),
                  GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
                        GEO_OPEN_NODE(),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head1),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head2),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head3),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head4),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head5),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head6),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head7),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head8),
                        GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 67, -10, 79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_near2), // starts sharing solid color with mario_left_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_TRANSPARENT, 65, 0, 0, RCP_mario_near1),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_mario_near0),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_swim_hand_l),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_swim_hand_l),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 68, -10, -79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_near5), // starts sharing solid color of his dl with mario_right_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_TRANSPARENT, 65, 0, 0, RCP_mario_near4),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_mario_near3),
	                       GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_swim_hand_r),
                           GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_mario_vsign_hand), // here we go hand
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_TRANSPARENT, 13, -8, 42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_near11), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 89, 0, 0, RCP_mario_near10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 67, 0, 0, RCP_mario_near9), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_TRANSPARENT, 13, -8, -42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_near8), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 89, 0, 0, RCP_mario_near7),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 67, 0, 0, RCP_mario_near6), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

/********************************************************************************/
/*	Middle mario hierarchy map data [ Opaque ].									*/
/********************************************************************************/
const GeoLayout RCP_MidMarioHierarchy[] = {
   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_mid14), // starts sharing solid color with mario_torso (blue)
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_move_mario_part_from_parent),
         GEO_ROTATION_NODE(0x00, 0, 0, 0),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 68, 0, 0, RCP_mario_mid_body),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ASM(0, geo_mario_head_rotation),
                  GEO_ROTATION_NODE(0x00, 0, 0, 0),
                  GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
                        GEO_OPEN_NODE(),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head1),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head2),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head3),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head4),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head5),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head6),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head7),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_head8),
                        GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 67, -10, 79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_mid2), // starts sharing solid color with mario_left_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, RCP_mario_mid1),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_mario_mid0),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_swim_hand_l),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_swim_hand_l),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 68, -10, -79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_mid5), // starts sharing solid color of his dl with mario_right_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, RCP_mario_mid4),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_mario_mid3),
	                       GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_swim_hand_r),
                           GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_mario_vsign_hand), // here we go hand
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, 42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_mid11), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, RCP_mario_mid10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, RCP_mario_mid9), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, -42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_mid8), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, RCP_mario_mid7),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, RCP_mario_mid6),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

/********************************************************************************/
/*	Middle mario hierarchy map data [ Translucent & Transparent ].				*/
/********************************************************************************/
const GeoLayout RCP_MidMarioHierarchy_XLU[] = {
   GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, NULL),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_mid14), // starts sharing solid color with mario_torso (blue)
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_move_mario_part_from_parent),
         GEO_ROTATION_NODE(0x00, 0, 0, 0),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_TRANSPARENT, 68, 0, 0, RCP_mario_mid_body),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 87, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ASM(0, geo_mario_head_rotation),
                  GEO_ROTATION_NODE(0x00, 0, 0, 0),
                  GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
                        GEO_OPEN_NODE(),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head1),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head2),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head3),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head4),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head5),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head6),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head7),
                           GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_head8),
                        GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 67, -10, 79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_mid2), // starts sharing solid color with mario_left_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_TRANSPARENT, 65, 0, 0, RCP_mario_mid1),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_mario_mid0),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_swim_hand_l),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_swim_hand_l),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 68, -10, -79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_mid5), // starts sharing solid color of his dl with mario_right_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_TRANSPARENT, 65, 0, 0, RCP_mario_mid4),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_mario_mid3),
	                       GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_swim_hand_r),
                           GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_mario_vsign_hand), // here we go hand
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_TRANSPARENT, 13, -8, 42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_mid11), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 89, 0, 0, RCP_mario_mid10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 67, 0, 0, RCP_mario_mid9), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_TRANSPARENT, 13, -8, -42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_mid8), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 89, 0, 0, RCP_mario_mid7),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 67, 0, 0, RCP_mario_mid6),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

/********************************************************************************/
/*	Far mario hierarchy map data [ Opaque ].									*/
/********************************************************************************/
const GeoLayout RCP_FarMarioHierarchy[] = {
   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_far14), // starts sharing solid color with mario_torso (blue)
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_move_mario_part_from_parent),
         GEO_ROTATION_NODE(0x00, 0, 0, 0),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 68, 0, 0, RCP_mario_far_body),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ASM(0, geo_mario_head_rotation),
                  GEO_ROTATION_NODE(0x00, 0, 0, 0),
                  GEO_OPEN_NODE(),
                     GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
                     GEO_OPEN_NODE(),
                        GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_far_head1),
                        GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_far_head2),
                        GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_far_head3),
                        GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_far_head4), // unused
                        GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_far_head5), // unused
                        GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_far_head6), // unused
                        GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_far_head7), // unused
                        GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_mario_far_head8),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 67, -10, 79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_far2), // starts sharing solid color with mario_left_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, RCP_mario_far1),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_mario_far0),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_swim_hand_l),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_swim_hand_l),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 68, -10, -79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_far5), // starts sharing solid color of his dl with mario_right_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, RCP_mario_far4),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_mario_far3),
	                       GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_swim_hand_r),
                           GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, RCP_mario_vsign_hand), // here we go hand
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, 42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_far11), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, RCP_mario_far10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, RCP_mario_far9), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, -42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_mario_far8), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, RCP_mario_far7),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, RCP_mario_far6),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

/********************************************************************************/
/*	Far mario hierarchy map data [ Translucent & Transparent ].					*/
/********************************************************************************/
const GeoLayout RCP_FarMarioHierarchy_XLU[] = {
   GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, NULL),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_far14), // starts sharing solid color with mario_torso (blue)
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_move_mario_part_from_parent),
         GEO_ROTATION_NODE(0x00, 0, 0, 0),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_TRANSPARENT, 68, 0, 0, RCP_mario_far_body),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 87, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ASM(0, geo_mario_head_rotation),
                  GEO_ROTATION_NODE(0x00, 0, 0, 0),
                  GEO_OPEN_NODE(),
                     GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
                     GEO_OPEN_NODE(),
                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_far_head1),
                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_far_head2),
                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_far_head3),
                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_far_head4), // unused
                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_far_head5), // unused
                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_far_head6), // unused
                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_far_head7), // unused
                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_mario_far_head8),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 67, -10, 79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_far2), // starts sharing solid color with mario_left_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_TRANSPARENT, 65, 0, 0, RCP_mario_far1),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_mario_far0),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_swim_hand_l),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_swim_hand_l),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 68, -10, -79, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_far5), // starts sharing solid color of his dl with mario_right_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_TRANSPARENT, 65, 0, 0, RCP_mario_far4),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_mario_far3),
	                       GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_swim_hand_r),
                           GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_TRANSPARENT, 60, 0, 0, RCP_mario_vsign_hand), // here we go hand
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_TRANSPARENT, 13, -8, 42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_far11), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 89, 0, 0, RCP_mario_far10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 67, 0, 0, RCP_mario_far9), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_TRANSPARENT, 13, -8, -42, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, RCP_mario_far8), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_TRANSPARENT, 89, 0, 0, RCP_mario_far7),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 67, 0, 0, RCP_mario_far6),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

/********************************************************************************/
/*	Mario hierarchy map data.													*/
/********************************************************************************/
const GeoLayout RCP_MarioHierarchy[] = {
   GEO_SHADOW(99, 180, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_mirror_mario_set_alpha),
         GEO_SWITCH_CASE(0, geo_switch_mario_stand_run),
		 
         GEO_OPEN_NODE(),
            GEO_SWITCH_CASE(0, geo_switch_mario_cap_effect),
            GEO_OPEN_NODE(),
               GEO_BRANCH(1, RCP_NearMarioHierarchy),
               GEO_BRANCH(1, RCP_NearMarioHierarchy_XLU),
            GEO_CLOSE_NODE(),
			
			GEO_NODE_START(),
            GEO_OPEN_NODE(),
                GEO_RENDER_RANGE(-2048, 600),
                GEO_OPEN_NODE(),
			        GEO_SWITCH_CASE(0, geo_switch_mario_cap_effect),
				    GEO_OPEN_NODE(),
                        GEO_BRANCH(1, RCP_NearMarioHierarchy),
                        GEO_BRANCH(1, RCP_NearMarioHierarchy_XLU),
				    GEO_CLOSE_NODE(),
                GEO_CLOSE_NODE(),
                GEO_RENDER_RANGE(600, 1600),
                GEO_OPEN_NODE(),
                    GEO_SWITCH_CASE(0, geo_switch_mario_cap_effect),
				    GEO_OPEN_NODE(),
                        GEO_BRANCH(1, RCP_MidMarioHierarchy),
                        GEO_BRANCH(1, RCP_MidMarioHierarchy_XLU),
				    GEO_CLOSE_NODE(),
                GEO_CLOSE_NODE(),
                GEO_RENDER_RANGE(1600, 32767),
                GEO_OPEN_NODE(),
                    GEO_SWITCH_CASE(0, geo_switch_mario_cap_effect),
				    GEO_OPEN_NODE(),
                        GEO_BRANCH(1, RCP_FarMarioHierarchy),
                        GEO_BRANCH(1, RCP_FarMarioHierarchy_XLU),
				    GEO_CLOSE_NODE(),
                GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

/********************************************************************************/
/*	Mario hierarchy map data for title.											*/
/********************************************************************************/

const GeoLayout RCP_TitleMario[] = {
	GEO_SCALE(0x00, 16384),
	GEO_OPEN_NODE(),
	    GEO_BRANCH(1, RCP_TitleMarioHierarchy),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
