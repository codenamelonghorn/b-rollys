/********************************************************************************
						Ultra 64 Mario Bros.

					  Luigi hierarchy data module

			Copyright 1995-1997 Nintendo CO., LTD.  All rights reserved.

				This module was programmed by Yasunari Nishida.

							June 20, 1995.
 ********************************************************************************/

extern Gfx RCP_luigi_head1[];
extern Gfx RCP_luigi_head2[];
extern Gfx RCP_luigi_head3[];
extern Gfx RCP_luigi_head4[];
extern Gfx RCP_luigi_head5[];

extern Gfx RCP_luigi_swim_hand_l[];
extern Gfx RCP_luigi_swim_hand_r[];

extern Gfx RCP_luigi_near_body[];
extern Gfx RCP_luigi_mid_body[];

extern Gfx RCP_luigi_near0[];
extern Gfx RCP_luigi_near1[];
extern Gfx RCP_luigi_near2[];
extern Gfx RCP_luigi_near3[];
extern Gfx RCP_luigi_near4[];
extern Gfx RCP_luigi_near5[];
extern Gfx RCP_luigi_near6[];
extern Gfx RCP_luigi_near7[];
extern Gfx RCP_luigi_near8[];
extern Gfx RCP_luigi_near9[];
extern Gfx RCP_luigi_near10[];
extern Gfx RCP_luigi_near11[];
extern Gfx RCP_luigi_near12[];
extern Gfx RCP_luigi_near13[];
extern Gfx RCP_luigi_near14[];

extern Gfx RCP_luigi_mid0[];
extern Gfx RCP_luigi_mid1[];
extern Gfx RCP_luigi_mid2[];
extern Gfx RCP_luigi_mid3[];
extern Gfx RCP_luigi_mid4[];
extern Gfx RCP_luigi_mid5[];
extern Gfx RCP_luigi_mid6[];
extern Gfx RCP_luigi_mid7[];
extern Gfx RCP_luigi_mid8[];
extern Gfx RCP_luigi_mid9[];
extern Gfx RCP_luigi_mid10[];
extern Gfx RCP_luigi_mid11[];
extern Gfx RCP_luigi_mid12[];
extern Gfx RCP_luigi_mid13[];
extern Gfx RCP_luigi_mid14[];

extern Gfx RCP_luigi_far0[];
extern Gfx RCP_luigi_far1[];
extern Gfx RCP_luigi_far2[];
extern Gfx RCP_luigi_far3[];
extern Gfx RCP_luigi_far4[];
extern Gfx RCP_luigi_far5[];
extern Gfx RCP_luigi_far6[];
extern Gfx RCP_luigi_far7[];
extern Gfx RCP_luigi_far8[];
extern Gfx RCP_luigi_far9[];
extern Gfx RCP_luigi_far10[];
extern Gfx RCP_luigi_far11[];
extern Gfx RCP_luigi_far12[];
extern Gfx RCP_luigi_far13[];
extern Gfx RCP_luigi_far14[];

/********************************************************************************/
/*	Title luigi hierarchy data.													*/
/********************************************************************************/

const GeoLayout RCP_TitleLuigiHierarchy[] = {
   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 261-189, 0, NULL),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_near14), // starts sharing solid color with mario_torso (blue)
      GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 33, 0, 0, RCP_luigi_near_body),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 91, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ASM(0, geo_mario_head_rotation),
                  GEO_ROTATION_NODE(0x00, 0, 0, 0),
                  GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
                        GEO_OPEN_NODE(),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head1),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head2),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head3),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head4),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head5),
                        GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 63, -10, 65, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_near2), // starts sharing solid color with mario_left_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 63, 0, 0, RCP_luigi_near1),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 71, 0, 0, RCP_luigi_near0),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 60, -10, -63, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_near5), // starts sharing solid color of his dl with mario_right_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 62, 0, 0, RCP_luigi_near4),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 66, 0, 0, RCP_luigi_near3),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -34, -9, 39, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_near11), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 98, 0, 0, RCP_luigi_near10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 81, 0, 0, RCP_luigi_near9), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -34, -9, -40, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_near8), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 98, 0, 0, RCP_luigi_near7),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 81, 0, 0, RCP_luigi_near6), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};
/********************************************************************************/
/*	Near luigi hierarchy data.													*/
/********************************************************************************/

const GeoLayout RCP_NearLuigiHierarchy[] = {
   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 261-189, 0, NULL),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_near14), // starts sharing solid color with mario_torso (blue)
      GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 33, 0, 0, RCP_luigi_near_body),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 91, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ASM(0, geo_mario_head_rotation),
                  GEO_ROTATION_NODE(0x00, 0, 0, 0),
                  GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
                        GEO_OPEN_NODE(),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head1),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head2),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head3),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head4),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head5),
                        GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 63, -10, 65, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_near2), // starts sharing solid color with mario_left_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 63, 0, 0, RCP_luigi_near1),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(1, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 71, 0, 0, RCP_luigi_near0),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 71, 0, 0, RCP_luigi_swim_hand_l),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 60, -10, -63, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_near5), // starts sharing solid color of his dl with mario_right_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 62, 0, 0, RCP_luigi_near4),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 66, 0, 0, RCP_luigi_near3),
	                       GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 66, 0, 0, RCP_luigi_swim_hand_r),
                           GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -34, -9, 39, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_near11), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 98, 0, 0, RCP_luigi_near10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 81, 0, 0, RCP_luigi_near9), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,  -34, -9, -40, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_near8), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 98, 0, 0, RCP_luigi_near7),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 81, 0, 0, RCP_luigi_near6), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};
/********************************************************************************/
/*	Middle luigi hierarchy data.												*/
/********************************************************************************/

const GeoLayout RCP_MidLuigiHierarchy[] = {
   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 261-189, 0, NULL),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_mid14), // starts sharing solid color with mario_torso (blue)
      GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 33, 0, 0, RCP_luigi_mid_body),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 91, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ASM(0, geo_mario_head_rotation),
                  GEO_ROTATION_NODE(0x00, 0, 0, 0),
                  GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
                        GEO_OPEN_NODE(),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head1),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head2),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head3),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head4),
                           GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_head5),
                        GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 63, -10, 65, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_mid2), // starts sharing solid color with mario_left_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 63, 0, 0, RCP_luigi_mid1),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(1, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 71, 0, 0, RCP_luigi_mid0),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 71, 0, 0, RCP_luigi_swim_hand_l),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 60, -10, -63, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_mid5), // starts sharing solid color of his dl with mario_right_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 62, 0, 0, RCP_luigi_mid4),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 66, 0, 0, RCP_luigi_mid3),
	                       GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 66, 0, 0, RCP_luigi_swim_hand_r),
                           GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -34, -9, 39, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_mid11), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 98, 0, 0, RCP_luigi_mid10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 81, 0, 0, RCP_luigi_mid9), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -34, -9, -40, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_mid8), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 98, 0, 0, RCP_luigi_mid7),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 81, 0, 0, RCP_luigi_mid6),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};
/********************************************************************************/
/*	Far luigi hierarchy data.													*/
/********************************************************************************/

const GeoLayout RCP_FarLuigiHierarchy[] = {
   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 261-189, 0, NULL),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_far14), // starts sharing solid color with mario_torso (blue)
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_move_mario_part_from_parent),
         GEO_ROTATION_NODE(0x00, 0, 0, 0),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 33, 0, 0, RCP_luigi_far13),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 91, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ASM(0, geo_mario_head_rotation),
                  GEO_ROTATION_NODE(0x00, 0, 0, 0),
                  GEO_OPEN_NODE(),
                    GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_luigi_far12),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,  63, -10, 65, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_far2), // starts sharing solid color with mario_left_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 63, 0, 0, RCP_luigi_far1),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(1, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 71, 0, 0, RCP_luigi_far0),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 71, 0, 0, RCP_luigi_swim_hand_l),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 60, -10, -63, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_far5), // starts sharing solid color of his dl with mario_right_forearm (red)
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 62, 0, 0, RCP_luigi_far4),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(0, geo_switch_mario_hand),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 66, 0, 0, RCP_luigi_far3),
	                       GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 66, 0, 0, RCP_luigi_swim_hand_r),
                           GEO_OPEN_NODE(),
                              GEO_HELD_OBJECT(0x00, 0, 0, 0, geo_switch_mario_hand_grab_pos),
                           GEO_CLOSE_NODE(),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,  -34, -9, 39, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_far11), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, RCP_luigi_far10),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, RCP_luigi_far9), // stops sharing because foot has its solid color (brown)
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -34, -9, -40, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_luigi_far8), // starts sharing solid color of his dl with mario_left_leg (blue)
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 98, 0, 0, RCP_luigi_far7),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 81, 0, 0, RCP_luigi_far6),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

/********************************************************************************/
/*	Luigi hierarchy map data.													*/
/********************************************************************************/

const GeoLayout RCP_LuigiHierarchy[] = {
   GEO_SHADOW(99, 180, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_SWITCH_CASE(0, geo_switch_mario_stand_run),
		 
         GEO_OPEN_NODE(),
            GEO_BRANCH(1, RCP_NearLuigiHierarchy),
			
			GEO_NODE_START(),
            GEO_OPEN_NODE(),
                GEO_RENDER_RANGE(-2048, 600),
                GEO_OPEN_NODE(),
                    GEO_BRANCH(1, RCP_NearLuigiHierarchy),
                GEO_CLOSE_NODE(),
                GEO_RENDER_RANGE(600, 1600),
                GEO_OPEN_NODE(),
                    GEO_BRANCH(1, RCP_MidLuigiHierarchy),
                GEO_CLOSE_NODE(),
                GEO_RENDER_RANGE(1600, 32767),
                GEO_OPEN_NODE(),
                    GEO_BRANCH(1, RCP_FarLuigiHierarchy),
                GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
/********************************************************************************/
/*	Lugi hierarchy map data for title.											*/
/********************************************************************************/

const GeoLayout RCP_TitleLuigi[] = {
	GEO_SCALE(0x00, 16384),
	GEO_OPEN_NODE(),
	    GEO_BRANCH(1, RCP_TitleLuigiHierarchy),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
