extern const Gfx RCP_walker_F_walk0[];
extern const Gfx RCP_walker_F_walk1[];
extern const Gfx RCP_walker_F_walk2[];
extern const Gfx RCP_walker_F_walk3[];
extern const Gfx RCP_walker_F_walk4[];
extern const Gfx RCP_walker_F_walk5[];
extern const Gfx RCP_walker_F_walk6[];
extern const Gfx RCP_walker_F_walk7[];
extern const Gfx RCP_walker_F_walk8[];
extern const Gfx RCP_walker_F_walk9[];
extern const Gfx RCP_walker_F_walk10[];
extern const Gfx RCP_walker_F_walk11[];
extern const Gfx RCP_walker_F_walk12[];
extern const Gfx RCP_walker_F_walk13[];
extern const Gfx RCP_walker_F_walk14[];
extern const Gfx RCP_walker_F_walk15[];
extern const Gfx light_sourcex[];

Hierarchy scuttlebug_geo[] = {
 GEO_SCALE(0x00, 16384),
    hmsBegin()
      hmsJoint(RM_SURF,light_sourcex,10,0,0)  /* chn8(39) */
      hmsBegin()
         hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt8_1(38) */
         hmsBegin()
            hmsJoint(RM_SURF,NULL,-1,113,112)  /* chn1(37) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt1_1(27) */
               hmsBegin()
                  hmsJoint(RM_SURF,NULL,198,0,0)  /* jnt1_2(23) */
                  hmsBegin()
                     hmsJoint(RM_SURF,NULL,195,0,0)  /* jnt1_3(17) */
                     hmsBegin()
                        hmsJoint(RM_SURF,RCP_walker_F_walk0,0,0,0)  /* w_footA(0) */
                     hmsEnd()
                     hmsJoint(RM_SURF,RCP_walker_F_walk1,0,0,0)  /* w_legA2(1) */
                  hmsEnd()
                  hmsJoint(RM_SURF,RCP_walker_F_walk2,0,0,0)  /* w_legA1(2) */
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,-1,109,-116)  /* chn3(36) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt3_1(28) */
               hmsBegin()
                  hmsJoint(RM_SURF,NULL,198,0,0)  /* jnt3_2(24) */
                  hmsBegin()
                     hmsJoint(RM_SURF,NULL,195,0,0)  /* jnt3_3(18) */
                     hmsBegin()
                        hmsJoint(RM_SURF,RCP_walker_F_walk3,0,0,0)  /* w_footB(3) */
                     hmsEnd()
                     hmsJoint(RM_SURF,RCP_walker_F_walk4,0,0,0)  /* w_legB2(4) */
                  hmsEnd()
                  hmsJoint(RM_SURF,RCP_walker_F_walk5,0,0,0)  /* w_legB1(5) */
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,RCP_walker_F_walk15,0,0,0)  /* w_body(35) */
            hmsJoint(RM_SURF,NULL,-29,-57,28)  /* chn9(34) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt9_1(19) */
               hmsBegin()
                  hmsJoint(RM_SURF,NULL,158,0,0)  /* eff9(15) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_walker_F_walk6,0,0,0)  /* w_eyeL(6) */
                  hmsEnd()
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,-29,55,28)  /* chn10(33) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt10_1(20) */
               hmsBegin()
                  hmsJoint(RM_SURF,NULL,157,0,0)  /* eff10(16) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_walker_F_walk7,0,0,0)  /* w_eyeR(7) */
                  hmsEnd()
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,-1,-116,-111)  /* chn12(32) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt12_1(29) */
               hmsBegin()
                  hmsJoint(RM_SURF,NULL,198,0,0)  /* jnt12_2(25) */
                  hmsBegin()
                     hmsJoint(RM_SURF,NULL,195,0,0)  /* jnt12_3(21) */
                     hmsBegin()
                        hmsJoint(RM_SURF,RCP_walker_F_walk8,0,0,0)  /* w_footC(8) */
                     hmsEnd()
                     hmsJoint(RM_SURF,RCP_walker_F_walk9,0,0,0)  /* w_legC2(9) */
                  hmsEnd()
                  hmsJoint(RM_SURF,RCP_walker_F_walk10,0,0,0)  /* w_legC1(10) */
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,-1,-116,112)  /* chn5(31) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt5_1(30) */
               hmsBegin()
                  hmsJoint(RM_SURF,NULL,195,0,0)  /* jnt5_2(26) */
                  hmsBegin()
                     hmsJoint(RM_SURF,NULL,199,0,0)  /* jnt5_3(22) */
                     hmsBegin()
                        hmsJoint(RM_SURF,RCP_walker_F_walk11,0,0,0)  /* w_footD(11) */
                     hmsEnd()
                     hmsJoint(RM_SURF,RCP_walker_F_walk12,0,0,0)  /* w_legD2(12) */
                  hmsEnd()
                  hmsJoint(RM_SURF,RCP_walker_F_walk13,0,0,0)  /* w_legD1(13) */
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,RCP_walker_F_walk14,0,0,0)  /* w_eyebrow(14) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsExit()
};

//// 0x0D000394
//const GeoLayout scuttlebug_geo[] = {
//   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 100),
//   GEO_OPEN_NODE(),
//      GEO_SCALE(0x00, 16384),
//      GEO_OPEN_NODE(),
//         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
//         GEO_OPEN_NODE(),
//            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -29, 0, NULL),
//            GEO_OPEN_NODE(),
//               GEO_ANIMATED_PART(LAYER_OPAQUE, -1, 113, 112, NULL),
//               GEO_OPEN_NODE(),
//                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
//                  GEO_OPEN_NODE(),
//                     GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),
//                     GEO_OPEN_NODE(),
//                        GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
//                        GEO_OPEN_NODE(),
//                           GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014378),
//                        GEO_CLOSE_NODE(),
//                        GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014270),
//                     GEO_CLOSE_NODE(),
//                     GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014188),
//                  GEO_CLOSE_NODE(),
//               GEO_CLOSE_NODE(),
//               GEO_ANIMATED_PART(LAYER_OPAQUE, -1, 109, -116, NULL),
//               GEO_OPEN_NODE(),
//                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
//                  GEO_OPEN_NODE(),
//                     GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),
//                     GEO_OPEN_NODE(),
//                        GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
//                        GEO_OPEN_NODE(),
//                           GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014378),
//                        GEO_CLOSE_NODE(),
//                        GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014270),
//                     GEO_CLOSE_NODE(),
//                     GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014188),
//                  GEO_CLOSE_NODE(),
//               GEO_CLOSE_NODE(),
//               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
//               GEO_OPEN_NODE(),
//                  GEO_BILLBOARD(),
//                  GEO_OPEN_NODE(),
//                     GEO_DISPLAY_LIST(LAYER_ALPHA, scuttlebug_seg6_dl_060139F8),
//                  GEO_CLOSE_NODE(),
//               GEO_CLOSE_NODE(),
//               GEO_ANIMATED_PART(LAYER_OPAQUE, -29, -57, 28, NULL),
//               GEO_OPEN_NODE(),
//                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
//                  GEO_OPEN_NODE(),
//                     GEO_ANIMATED_PART(LAYER_OPAQUE, 158, 0, 0, NULL),
//                     GEO_OPEN_NODE(),
//                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
//                        GEO_OPEN_NODE(),
//                           GEO_BILLBOARD(),
//                           GEO_OPEN_NODE(),
//                              GEO_DISPLAY_LIST(LAYER_ALPHA, scuttlebug_seg6_dl_06013AE8),
//                           GEO_CLOSE_NODE(),
//                        GEO_CLOSE_NODE(),
//                        GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06013CB8),
//                     GEO_CLOSE_NODE(),
//                  GEO_CLOSE_NODE(),
//               GEO_CLOSE_NODE(),
//               GEO_ANIMATED_PART(LAYER_OPAQUE, -29, 55, 28, NULL),
//               GEO_OPEN_NODE(),
//                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
//                  GEO_OPEN_NODE(),
//                     GEO_ANIMATED_PART(LAYER_OPAQUE, 157, 0, 0, NULL),
//                     GEO_OPEN_NODE(),
//                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
//                        GEO_OPEN_NODE(),
//                           GEO_BILLBOARD(),
//                           GEO_OPEN_NODE(),
//                              GEO_DISPLAY_LIST(LAYER_ALPHA, scuttlebug_seg6_dl_06013BD0),
//                           GEO_CLOSE_NODE(),
//                        GEO_CLOSE_NODE(),
//                        GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06013DA0),
//                     GEO_CLOSE_NODE(),
//                  GEO_CLOSE_NODE(),
//               GEO_CLOSE_NODE(),
//               GEO_ANIMATED_PART(LAYER_OPAQUE, -1, -116, -111, NULL),
//               GEO_OPEN_NODE(),
//                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
//                  GEO_OPEN_NODE(),
//                     GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),
//                     GEO_OPEN_NODE(),
//                        GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
//                        GEO_OPEN_NODE(),
//                           GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014378),
//                        GEO_CLOSE_NODE(),
//                        GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014270),
//                     GEO_CLOSE_NODE(),
//                     GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014188),
//                  GEO_CLOSE_NODE(),
//               GEO_CLOSE_NODE(),
//               GEO_ANIMATED_PART(LAYER_OPAQUE, -1, -116, 112, NULL),
//               GEO_OPEN_NODE(),
//                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
//                  GEO_OPEN_NODE(),
//                     GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
//                     GEO_OPEN_NODE(),
//                        GEO_ANIMATED_PART(LAYER_OPAQUE, 199, 0, 0, NULL),
//                        GEO_OPEN_NODE(),
//                           GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014378),
//                        GEO_CLOSE_NODE(),
//                        GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014270),
//                     GEO_CLOSE_NODE(),
//                     GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_seg6_dl_06014188),
//                  GEO_CLOSE_NODE(),
//               GEO_CLOSE_NODE(),
//               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, scuttlebug_seg6_dl_060140F0),
//            GEO_CLOSE_NODE(),
//         GEO_CLOSE_NODE(),
//      GEO_CLOSE_NODE(),
//   GEO_CLOSE_NODE(),
//   GEO_END(),
//};
