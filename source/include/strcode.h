#ifndef __MGS2_STRCODE_H__
#define __MGS2_STRCODE_H__

/*---------------------------------------------------------------------------*/

#define GCX_scenerio            0x00180720  // GV_StrCode("scenerio")
#define GCX_boss                0x0032cad3  // GV_StrCode("boss")

/* libgcl/basic.c */
#define CMD_if                  0x00000d86  // GV_StrCode("if")
#define CMD_switch              0x00a65db5  // GV_StrCode("switch")
#define CMD_eval                0x0034648c  // GV_StrCode("eval")
#define CMD_call                0x003311ec  // GV_StrCode("call")
#define CMD_return              0x008be398  // GV_StrCode("return")
#define CMD_print               0x003ab23b  // GV_StrCode("print")

/* game/script.c */
#define CMD_mesg                0x003822c7  // GV_StrCode("mesg")
#define CMD_command             0x00082bc9  // GV_StrCode("command")
#define CMD_chara               0x006592a7  // GV_StrCode("chara")
#define CMD_trap                0x003bd490  // GV_StrCode("trap")
#define CMD_load                0x0037c884  // GV_StrCode("load")
#define CMD_preseek             0x008b3df5  // GV_StrCode("preseek")
#define CMD_map                 0x0001c090  // GV_StrCode("map")
#define CMD_restart             0x006bb005  // GV_StrCode("restart")

/*---------------------------------------------------------------------------*/
// CHARA IDs for SUBSTANCE
// NOTE: Most function names were taken from MGS4 (2006.09.07 builds).

#define CHARA_RAIN              0x000016cb  // GV_StrCode("雨") rain.c
#define CHARA_000041e7          0x000041e7  // bonbori_red.c
#define CHARA_000041e8          0x000041e8  // bonbori_red.c
#define CHARA_00004c00          0x00004c00
#define CHARA_0000d1c5          0x0000d1c5
#define CHARA_000129c5          0x000129c5
#define CHARA_abs               0x000190b3  // GV_StrCode("abs") NewGclAbs
#define CHARA_cos               0x00019a53  // GV_StrCode("cos") NewGclCos
#define CHARA_0001a4f3          0x0001a4f3  // rad_point.c
#define CHARA_LINE_SPLASH       0x0001a6dd  // GV_StrCode("ライン水飛沫") line_sph.c
#define CHARA_sin               0x0001d98e  // GV_StrCode("sin") NewGclSin
#define CHARA_00020bd1          0x00020bd1
#define CHARA_000223d1          0x000223d1
#define CHARA_000255b6          0x000255b6
#define CHARA_0002ead3          0x0002ead3
#define CHARA_000381ac          0x000381ac
#define CHARA_00040715          0x00040715  // NewFortHang
#define CHARA_000423c8          0x000423c8  // anmtex.c
#define CHARA_00053da0          0x00053da0  // NewGclVarClear
#define CHARA_0005603b          0x0005603b
#define CHARA_0005872d          0x0005872d  // fat_ikef.c
#define CHARA_0005b165          0x0005b165
#define CHARA_0005b611          0x0005b611
#define CHARA_0005c815          0x0005c815  // shdwdraw.c
#define CHARA_0005d91d          0x0005d91d
#define CHARA_CAMERA            0x00061ade  // GV_StrCode("カメラ") camera.c:NewCamera
#define CHARA_0006a23b          0x0006a23b
#define CHARA_0006e0fc          0x0006e0fc
#define CHARA_00075d93          0x00075d93
#define CHARA_0007e215          0x0007e215  // check_slater.c
#define CHARA_00084719          0x00084719
#define CHARA_0008bffc          0x0008bffc
#define CHARA_00091159          0x00091159
#define CHARA_0009bf85          0x0009bf85
#define CHARA_0009c02f          0x0009c02f
#define CHARA_0009c0e8          0x0009c0e8
#define CHARA_0009c107          0x0009c107
#define CHARA_000a4d33          0x000a4d33  // fort.c
#define CHARA_000a7cfb          0x000a7cfb  // selectscr.c
#define CHARA_000acf09          0x000acf09
#define CHARA_000b1261          0x000b1261  // ripple_bubble.c
#define CHARA_000b6ed3          0x000b6ed3  // twin_dr.c
#define CHARA_000ba748          0x000ba748  // ventilatorlit.c
#define CHARA_000bd712          0x000bd712  // scn_break.c
#define CHARA_000c02f4          0x000c02f4
#define CHARA_000c3d82          0x000c3d82  // vr_map_3d.c
#define CHARA_000d02fd          0x000d02fd  // mirror.c
#define CHARA_000da8bf          0x000da8bf
#define CHARA_000ded8c          0x000ded8c  // vrpitfall.c
#define CHARA_000dfadb          0x000dfadb
#define CHARA_000ecdfd          0x000ecdfd
#define CHARA_000f57ba          0x000f57ba
#define CHARA_000f9473          0x000f9473  // NewEMA (?)
#define CHARA_000ff733          0x000ff733
#define CHARA_0010cf2f          0x0010cf2f  // theater.c
#define CHARA_00122e63          0x00122e63
#define CHARA_00124bf9          0x00124bf9
#define CHARA_PLAYER            0x00128946  // GV_StrCode("プレイヤー") raiden.c:NewPlayer
#define CHARA_0012b592          0x0012b592
#define CHARA_0012c9d0          0x0012c9d0  // zako_title.c
#define CHARA_001395b5          0x001395b5  // powspplit.c
#define CHARA_0013ca47          0x0013ca47
#define CHARA_001418b1          0x001418b1
#define CHARA_0015984a          0x0015984a
#define CHARA_00164ee0          0x00164ee0  // bullet_bar.c
#define CHARA_00170393          0x00170393  // waterlinefall.c
#define CHARA_0017078b          0x0017078b
#define CHARA_00175436          0x00175436  // brk_paper.c
#define CHARA_0017a315          0x0017a315  // command.c
#define CHARA_0017ea77          0x0017ea77  // tng_monitor_control_42a.c
#define CHARA_0017eab7          0x0017eab7  // tng_monitor_control_44a.c
#define CHARA_00182073          0x00182073
#define CHARA_0018d40b          0x0018d40b
#define CHARA_0018e1f5          0x0018e1f5
#define CHARA_0018f412          0x0018f412  // tngcom.c
#define CHARA_0019358b          0x0019358b
#define CHARA_0019bd75          0x0019bd75
#define CHARA_001aae5f          0x001aae5f
#define CHARA_001af0d5          0x001af0d5  // scr_bubble.c
#define CHARA_RADAR             0x001af92a  // GV_StrCode("レーダー") radar.c
#define CHARA_001b5854          0x001b5854  // putspot.c
#define CHARA_001b970c          0x001b970c  // newgame.c
#define CHARA_001c4a30          0x001c4a30
#define CHARA_001c5eb9          0x001c5eb9
#define CHARA_001cb7b7          0x001cb7b7
#define CHARA_FATMAN            0x001cbd93  // GV_StrCode("ファットマン") fatman.c
#define CHARA_001d32ed          0x001d32ed
#define CHARA_VR_SYSTEM         0x001d5983  // GV_StrCode("ＶＲシステム") vr_sys.c
#define CHARA_001d9c73          0x001d9c73
#define CHARA_001de43b          0x001de43b
#define CHARA_001dfdfb          0x001dfdfb
#define CHARA_MANHATTAN         0x001e44b7  // GV_StrCode("マンハッタン") manhat3d.c
#define CHARA_ENDING            0x001f119a  // GV_StrCode("エンディング") endingx.c
#define CHARA_001f2a23          0x001f2a23  // eddogtag.c
#define CHARA_001f4349          0x001f4349
#define CHARA_001f567b          0x001f567b
#define CHARA_002055ca          0x002055ca
#define CHARA_00206929          0x00206929  // shdwdrw2.c
#define CHARA_00209027          0x00209027  // box_hidden.c
#define CHARA_0022ae7d          0x0022ae7d  // clear_result.c
#define CHARA_00231fa7          0x00231fa7
#define CHARA_00247947          0x00247947
#define CHARA_VR_WINDOW         0x0024c03e  // GV_StrCode("ＶＲウィンドウ") vr_window.c
#define CHARA_0024c830          0x0024c830
#define CHARA_0024d360          0x0024d360
#define CHARA_00256eee          0x00256eee
#define CHARA_00262b46          0x00262b46  // st_select.c
#define CHARA_00264c7d          0x00264c7d  // chim_smo.c
#define CHARA_TANKER_CAM_STATUS 0x00264d3f  // GV_StrCode("タンカーカメラステータス")
#define CHARA_0026aab9          0x0026aab9
#define CHARA_00274b60          0x00274b60
#define CHARA_00276926          0x00276926
#define CHARA_0027e580          0x0027e580
#define CHARA_002948a0          0x002948a0  // padvib4.c
#define CHARA_002981fa          0x002981fa
#define CHARA_0029c817          0x0029c817
#define CHARA_0029d24d          0x0029d24d
#define CHARA_002a088b          0x002a088b  // gnrl_poly.c
#define CHARA_OKIKAN            0x002a0b46  // GV_StrCode("あきかん") kan.c
#define CHARA_002a41c7          0x002a41c7  // dm_fr.c
#define CHARA_002a4246          0x002a4246  // map_3d.c
#define CHARA_002b8e16          0x002b8e16  // vamp.c
#define CHARA_002c4b35          0x002c4b35
#define CHARA_002d77d4          0x002d77d4
#define CHARA_002dad24          0x002dad24  // f_focus.c
#define CHARA_002df578          0x002df578  // shavedsnake.c
#define CHARA_002e2acb          0x002e2acb
#define CHARA_002e4eeb          0x002e4eeb  // boss_pause.c
#define CHARA_002eb280          0x002eb280
#define CHARA_002efa26          0x002efa26
#define CHARA_002f3844          0x002f3844
#define CHARA_002f9fe3          0x002f9fe3
#define CHARA_002fd1d7          0x002fd1d7
#define CHARA_ELEVATOR          0x0030e9cc  // GV_StrCode("エレベータ") elevator.c
#define CHARA_00311e8e          0x00311e8e  // hostage.c
#define CHARA_003124a2          0x003124a2  // scncamvib.c
#define CHARA_003129d0          0x003129d0
#define CHARA_0031d58b          0x0031d58b  // strmfadr.c
#define CHARA_DEFENDER          0x003259e5  // GV_StrCode("長廊下兵") defender.c
#define CHARA_atan              0x00325c8e  // GV_StrCode("atan") NewGclAtan
#define CHARA_0032fb70          0x0032fb70
#define CHARA_00339bd9          0x00339bd9
#define CHARA_demo              0x0033a20f  // GV_StrCode("demo") NewPolygonDemoStart
#define CHARA_0033d38e          0x0033d38e
#define CHARA_00344e5b          0x00344e5b
#define CHARA_003470c9          0x003470c9
#define CHARA_0034cc13          0x0034cc13
#define CHARA_0035804e          0x0035804e
#define CHARA_00358d2f          0x00358d2f
#define CHARA_MAP               0x0035a2cf  // GV_StrCode("マップ") map.c
#define CHARA_003625b1          0x003625b1  // brk_magazine.c
#define CHARA_00363be8          0x00363be8
#define CHARA_003640f6          0x003640f6  // play_disap.c
#define CHARA_00365dee          0x00365dee  // brk_spotlgt.c
#define CHARA_00368f7d          0x00368f7d
#define CHARA_0037014d          0x0037014d  // gllcom.c
#define CHARA_00374069          0x00374069  // har_sdmng.c
#define CHARA_00374bbe          0x00374bbe  // gunspin.c
#define CHARA_00374cb5          0x00374cb5
#define CHARA_VR_GAMEOVER       0x0037700f  // GV_StrCode("特殊ＶＲゲームオーバー")
#define CHARA_003780f6          0x003780f6  // play_ap.c
#define CHARA_0038d44e          0x0038d44e  // command.c (clearing?)
#define CHARA_SHADOW_MOSES      0x00397fd4  // GV_StrCode("シャドーモセス") previous_story.c
#define CHARA_003a6f25          0x003a6f25  // bul_c4.c
#define CHARA_rand              0x003a9224  // GV_StrCode("rand") NewRand
#define CHARA_003af581          0x003af581
#define CHARA_003b1909          0x003b1909  // node_lamp.c
#define CHARA_003c2410          0x003c2410  // raiden_mask_bubble.c
#define CHARA_003c56aa          0x003c56aa  // namedetect.c
#define CHARA_003d3b06          0x003d3b06
#define CHARA_003d5d04          0x003d5d04
#define CHARA_003d9d2e          0x003d9d2e
#define CHARA_003dfd0b          0x003dfd0b
#define CHARA_003e7b6f          0x003e7b6f
#define CHARA_003ef35f          0x003ef35f  // lens_flr_gm.c
#define CHARA_003f0a3f          0x003f0a3f  // NewGetLapTime
#define CHARA_003f46ec          0x003f46ec
#define CHARA_003f55fc          0x003f55fc  // brooklyn.c
#define CHARA_003f9531          0x003f9531  // mcchkscrx.c
#define CHARA_003fcd73          0x003fcd73  // command5.c
#define CHARA_0040f2ae          0x0040f2ae  // brk_icebox.c
#define CHARA_00413144          0x00413144  // beltobj.c
#define CHARA_004147a5          0x004147a5  // sejimaku.c (sejimaku.h)
#define CHARA_004152df          0x004152df  // body_slater.c
#define CHARA_0041cf4e          0x0041cf4e
#define CHARA_0041f1f7          0x0041f1f7  // beltconv.c
#define CHARA_0042181a          0x0042181a
#define CHARA_00438ffa          0x00438ffa  // scr_waterfilm.c
#define CHARA_CAMERA_SET        0x0043f718  // GV_StrCode("カメラ設定") COM_SetCamera
#define CHARA_004481ed          0x004481ed
#define CHARA_004508c2          0x004508c2
#define CHARA_00450c64          0x00450c64
#define CHARA_0045e12e          0x0045e12e
#define CHARA_004610f8          0x004610f8
#define CHARA_0046139a          0x0046139a  // glass_scar.c:NewGlassScarBase
#define CHARA_004683b0          0x004683b0
#define CHARA_00469b3a          0x00469b3a
#define CHARA_0046b814          0x0046b814
#define CHARA_0046fcd2          0x0046fcd2  // ENEMEM_GclRenewMemory
#define CHARA_00470def          0x00470def  // automenu.c
#define CHARA_00475ca4          0x00475ca4
#define CHARA_00476790          0x00476790
#define CHARA_KBD_EXEC          0x0047d37a  // kbdexec.c:NewKbdExec
#define CHARA_004847d2          0x004847d2  // set_t_fc.c
#define CHARA_0048f8f8          0x0048f8f8  // spottex.c
#define CHARA_004909b5          0x004909b5
#define CHARA_00492a40          0x00492a40  // routemdl.c
#define CHARA_00494239          0x00494239  // get_newitem.c
#define CHARA_00497be6          0x00497be6
#define CHARA_0049c14f          0x0049c14f  // emma_equip.c
#define CHARA_0049d6f1          0x0049d6f1  // putatach_scn.c
#define CHARA_0049eb5e          0x0049eb5e
#define CHARA_004a0018          0x004a0018  // easylayout.c
#define CHARA_CODEC_SET         0x004a243a  // GV_StrCode("無線設定")
#define CHARA_004a3697          0x004a3697
#define CHARA_004a65ba          0x004a65ba
#define CHARA_004a777d          0x004a777d  // wave2.c
#define CHARA_004a8b88          0x004a8b88
#define CHARA_004a8df9          0x004a8df9
#define CHARA_004a90a1          0x004a90a1
#define CHARA_004b5435          0x004b5435  // put_flag.c
#define CHARA_SPLASH_FALL       0x004baafe  // GV_StrCode("落下水飛沫") d_splash_fall.c
#define CHARA_004bab34          0x004bab34  // charaspread.c
#define CHARA_004bf8e6          0x004bf8e6
#define CHARA_004cbfc5          0x004cbfc5  // elevator_lamp.c
#define CHARA_004cefc1          0x004cefc1  // shiftmem.c
#define CHARA_VR_SELECT         0x004cfe6e  // GV_StrCode("ＶＲセレクト") vr_select.c
#define CHARA_004e1bd6          0x004e1bd6  // mirror2.c
#define CHARA_004e8280          0x004e8280
#define CHARA_004f576c          0x004f576c  // rai_nude_ik.c
#define CHARA_004fb2ca          0x004fb2ca  // orga_obj.c
#define CHARA_PARALLEL_LIGHT    0x004fe997  // GV_StrCode("平行光")
#define CHARA_00502332          0x00502332  // waterfall.c
#define CHARA_00502681          0x00502681  // bridge_exp.c
#define CHARA_0050396f          0x0050396f
#define CHARA_005141af          0x005141af
#define CHARA_00515453          0x00515453
#define CHARA_0051dc64          0x0051dc64
#define CHARA_SV_CAMERA         0x00522db5  // GV_StrCode("監視カメラ") sv_camera.c
#define CHARA_005282a9          0x005282a9
#define CHARA_0053209a          0x0053209a  // orga_hid.c
#define CHARA_00532262          0x00532262  // brk_object.c
#define CHARA_00532f32          0x00532f32  // brk_radle.c
#define CHARA_0053baf5          0x0053baf5  // efct_flow.c
#define CHARA_0053cffa          0x0053cffa  // har_main.c
#define CHARA_0053e970          0x0053e970  // xstagebreak.c
#define CHARA_00540ac2          0x00540ac2
#define CHARA_foreach           0x00542b2d  // GV_StrCode("foreach") NewForeach
#define CHARA_00547041          0x00547041  // rising_smoke.c
#define CHARA_DOOR_LAMP         0x0054b365  // GV_StrCode("ドアランプ") door_lamp.c
#define CHARA_0054eca9          0x0054eca9  // c_light_spot.c
#define CHARA_0055080c          0x0055080c  // bgscr.c
#define CHARA_00552c76          0x00552c76  // c4_ice_mng.c
#define CHARA_DOOR              0x0055b942  // GV_StrCode("ドア") door.c
#define CHARA_005686ae          0x005686ae
#define CHARA_0056b5cb          0x0056b5cb  // bladeply.c
#define CHARA_MAP_CONNECT       0x0056e234  // GV_StrCode("マップ接合") mapcnct.c
#define CHARA_MAP_SET           0x0056ef97  // GV_StrCode("マップ設定")
#define CHARA_005734c7          0x005734c7  // x_patch.c
#define CHARA_005738f0          0x005738f0
#define CHARA_00577fb3          0x00577fb3  // sv_camera.c
#define CHARA_0057a485          0x0057a485
#define CHARA_GUARD_COMMANDER   0x0059eda8  // GV_StrCode("警備コマンダー") wccomm.c
#define CHARA_0059f23c          0x0059f23c  // drop_body_splush_prog.c
#define CHARA_005a4652          0x005a4652
#define CHARA_005a4809          0x005a4809  // brk_glass.c
#define CHARA_005ae655          0x005ae655
#define CHARA_varsave           0x005b316e  // GV_StrCode("varsave") NewSaveVariable
#define CHARA_005b6e21          0x005b6e21  // sp_menu_eng.c
#define CHARA_ATTACK_COMMANDER  0x005bb4d4  // GV_StrCode("攻撃コマンダー") atcomm.c
#define CHARA_005bfe1d          0x005bfe1d
#define CHARA_PAD_DEMO          0x005c0bae  // GV_StrCode("パッドデモ") paddemo.c
#define CHARA_GHOST             0x005c2eae  // GV_StrCode("怨霊") ghost.c
#define CHARA_005c3a78          0x005c3a78  // pool_water.c
#define CHARA_005c526a          0x005c526a
#define CHARA_005caa88          0x005caa88
#define CHARA_005cb281          0x005cb281  // manhat3d.c
#define CHARA_005da36d          0x005da36d  // cypher4snipe.c
#define CHARA_005dad0e          0x005dad0e  // sara_umi.c
#define CHARA_005de390          0x005de390
#define CHARA_005eb488          0x005eb488
#define CHARA_005ec9c1          0x005ec9c1  // gll.c
#define CHARA_VR_PAUSE          0x005ed347  // GV_StrCode("ＶＲポーズ") vr_pause.c
#define CHARA_005f8469          0x005f8469
#define CHARA_005fbe23          0x005fbe23  // windnoisx.c
#define CHARA_00604185          0x00604185
#define CHARA_00608b23          0x00608b23
#define CHARA_0060c857          0x0060c857
#define CHARA_0060cf19          0x0060cf19  // wave4.c
#define CHARA_0060d52e          0x0060d52e
#define CHARA_0061274d          0x0061274d  // vr_target1.c
#define CHARA_SEA_SLATER        0x0061514e  // GV_StrCode("舟虫") sea_slater.c
#define CHARA_0061676d          0x0061676d
#define CHARA_EFFECT_BOUND_INIT 0x006263f9  // GV_StrCode("エフェクトバウンド初期化") InitEffectBound
#define CHARA_006273b5          0x006273b5  // sky_prev.c
#define CHARA_BGM_FADER         0x0062b1fd  // GV_StrCode("ＢＧＭフェーダー") bgmfader.c
#define CHARA_00635875          0x00635875
#define CHARA_006376d3          0x006376d3
#define CHARA_SUN               0x00641a7b  // GV_StrCode("太陽") plant_sun.c
#define CHARA_WINDOW_RAIN       0x006442cb  // GV_StrCode("窓雨") win_rain.c
#define CHARA_00645113          0x00645113  // corp.c
#define CHARA_00645c5b          0x00645c5b  // emma_clay.c
#define CHARA_00646de9          0x00646de9
#define CHARA_BULLET_HOLE       0x0064afef  // GV_StrCode("弾痕") wall_scar.c
#define CHARA_0064fb35          0x0064fb35  // show_pic.c
#define CHARA_0064fe6e          0x0064fe6e  // water_front_prim.c
#define CHARA_0065180b          0x0065180b
#define CHARA_SKY_COLUMN        0x00657385  // GV_StrCode("天球") sky_column.c
#define CHARA_00661bee          0x00661bee
#define CHARA_BODY_SPLASH       0x00662f7c  // GV_StrCode("身体水飛沫") body_sph.c
#define CHARA_00663387          0x00663387
#define CHARA_0066b097          0x0066b097  // fog_control.c
#define CHARA_WAVE              0x0066ba4c  // GV_StrCode("波面") wave.c
#define CHARA_RIPPLE            0x0066ba66  // GV_StrCode("波紋") ripple.c
#define CHARA_0066f439          0x0066f439
#define CHARA_00675145          0x00675145  // trample_slater.c
#define CHARA_006760e9          0x006760e9  // breath.c
#define CHARA_006779ad          0x006779ad  // set_tex.c
#define CHARA_EXPLOSION         0x006781af  // GV_StrCode("爆発") bomb.c
#define CHARA_0068392d          0x0068392d
#define CHARA_00683bcc          0x00683bcc  // blood_wl.c
#define CHARA_006856c1          0x006856c1
#define CHARA_0068cb9c          0x0068cb9c  // vibrate.c
#define CHARA_DRIZZLE           0x0068f6cb  // GV_StrCode("霧雨") rain_gas_pers.c
#define CHARA_CINEMA_SCREEN     0x00690610  // GV_StrCode("シネマスクリーン") cinema_scr.c
#define CHARA_HOSTAGE_COMMANDER 0x006926d0  // GV_StrCode("人質コマンダー") hostcomm.c
#define CHARA_006a030a          0x006a030a  // scr_shimmer.c
#define CHARA_006a0cda          0x006a0cda  // brk_hang_light.c
#define CHARA_PAD_OPERATION     0x006a725a  // GV_StrCode("パッド操作")
#define CHARA_006a9667          0x006a9667
#define CHARA_006ad20f          0x006ad20f  // pl_dummy.c
#define CHARA_PLANT_WAVE        0x006ae654  // GV_StrCode("プラント海面") wave5.c
#define CHARA_assert            0x006b237d  // GV_StrCode("assert") NewGclAssert
#define CHARA_CAMERA_RAIN       0x006b8ee3  // GV_StrCode("カメラ雨") rain_cm.c
#define CHARA_CAMERA_BLOOD      0x006b8fe4  // GV_StrCode("カメラ血") blood_cm.c
#define CHARA_CAMERA_BUBBLE     0x006b921a  // GV_StrCode("カメラ泡") bubble_cm.c
#define CHARA_006c274d          0x006c274d
#define CHARA_006c577d          0x006c577d  // brk_potato.c
#define CHARA_006d61f3          0x006d61f3
#define CHARA_006d841b          0x006d841b
#define CHARA_006d85be          0x006d85be
#define CHARA_006ddd6a          0x006ddd6a  // sp_menu_page.c
#define CHARA_006de9bc          0x006de9bc
#define CHARA_006e0fa8          0x006e0fa8  // brk_vent.c
#define CHARA_006e6572          0x006e6572  // dogtag_mng.c
#define CHARA_006e7f78          0x006e7f78  // shipworm.c
#define CHARA_006ecc1a          0x006ecc1a
#define CHARA_006eeb2f          0x006eeb2f  // special.c
#define CHARA_006f5b0f          0x006f5b0f
#define CHARA_006f7d4d          0x006f7d4d  // NewGameInit
#define CHARA_006fa0a2          0x006fa0a2  // slit_light2.c
#define CHARA_006fa5f5          0x006fa5f5
#define CHARA_006fda0f          0x006fda0f  // fort_obj.c
#define CHARA_00709df6          0x00709df6
#define CHARA_BGM_MANAGER       0x0070a68a  // GV_StrCode("ＢＧＭマネージャー") bgmanage.c
#define CHARA_00718756          0x00718756
#define CHARA_00727b5e          0x00727b5e  // splash_rot.c
#define CHARA_0072ead4          0x0072ead4
#define CHARA_0072f23c          0x0072f23c  // putmodel.c
#define CHARA_007334af          0x007334af
#define CHARA_0073e084          0x0073e084
#define CHARA_00741b7a          0x00741b7a  // orga_holo.c
#define CHARA_delay             0x00743c9f  // GV_StrCode("delay") delay.c:NewDelay
#define CHARA_0074cd16          0x0074cd16  // f_bridge.c
#define CHARA_0074e86b          0x0074e86b  // NewGclLangUpdate
#define CHARA_0075513c          0x0075513c
#define CHARA_00755e2e          0x00755e2e
#define CHARA_007561ae          0x007561ae  // orga_lgt.c
#define CHARA_0075e815          0x0075e815  // brk_tv.c
#define CHARA_BOMB_DETECT_AREA  0x0076a03c  // GV_StrCode("爆弾検知領域") bomb.c
#define CHARA_00770ec3          0x00770ec3
#define CHARA_0077318d          0x0077318d
#define CHARA_0077568d          0x0077568d  // wall_marker.c
#define CHARA_007798f6          0x007798f6  // orga.c
#define CHARA_0077ffc8          0x0077ffc8
#define CHARA_0078d685          0x0078d685  // bul_clay.c
#define CHARA_007919e8          0x007919e8  // gll_ef.c
#define CHARA_00797edf          0x00797edf
#define CHARA_007a3dbf          0x007a3dbf  // set_t_dr.c
#define CHARA_PUT_OBJECT        0x007a8ec1  // GV_StrCode("プットオブジェ") putobj.c
#define CHARA_007a94a9          0x007a94a9  // dg_cam.c
#define CHARA_Stream            0x007aa13a  // GV_StrCode("Stream")
#define CHARA_007ad92b          0x007ad92b
#define CHARA_007b35e0          0x007b35e0
#define CHARA_007c7e31          0x007c7e31
#define CHARA_007dda2e          0x007dda2e
#define CHARA_007e3320          0x007e3320  // option_x.c
#define CHARA_007f3c88          0x007f3c88
#define CHARA_007f7acf          0x007f7acf
#define CHARA_0080b977          0x0080b977
#define CHARA_0080fb82          0x0080fb82
#define CHARA_008155f1          0x008155f1  // clearcode_layout.c
#define CHARA_0081584f          0x0081584f
#define CHARA_0081767c          0x0081767c  // konami_logo.c
#define CHARA_VR_CLEAR          0x00818b2c  // GV_StrCode("ＶＲクリア") vr_clear.c
#define CHARA_0081e7f6          0x0081e7f6
#define CHARA_0082a05e          0x0082a05e
#define CHARA_VecLen            0x0082bdc0  // GV_StrCode("VecLen")
#define CHARA_reboot            0x0082cb3e  // GV_StrCode("reboot") (calls the printf stub??)
#define CHARA_0082cb77          0x0082cb77
#define CHARA_0083c0c3          0x0083c0c3  // vamp.c
#define CHARA_0083d857          0x0083d857  // lit_man.c
#define CHARA_0083dd4d          0x0083dd4d  // har_kasacka.c
#define CHARA_008422f6          0x008422f6
#define CHARA_00843c09          0x00843c09
#define CHARA_00848e57          0x00848e57
#define CHARA_0084b931          0x0084b931  // between_cam.c
#define CHARA_0085e8f4          0x0085e8f4  // lockerd.c
#define CHARA_0086301d          0x0086301d  // vr_child.c
#define CHARA_0086d1cf          0x0086d1cf
#define CHARA_0086d382          0x0086d382  // demo_snakearm.c
#define CHARA_00873375          0x00873375  // wdustmng.c
#define CHARA_select            0x0087a1c0  // GV_StrCode("select") select.c:NewSelect
#define CHARA_008826b9          0x008826b9  // doll.c
#define CHARA_008862f6          0x008862f6  // rot_y_object.c
#define CHARA_0088cbf1          0x0088cbf1
#define CHARA_0088ed39          0x0088ed39
#define CHARA_0088f9b0          0x0088f9b0
#define CHARA_008975e6          0x008975e6  // flow_paper.c
#define CHARA_FLOATING_DUST     0x0089778a  // GV_StrCode("浮遊物") float_dust.c
#define CHARA_0089af5e          0x0089af5e  // thund_flash.c
#define CHARA_LOCKER_CORPSE     0x0089c365  // GV_StrCode("ロッカー死体") lockercp.c
#define CHARA_VR_BULLET_HOLE    0x0089fec2  // GV_StrCode("ＶＲ弾痕") vr_wall_scar.c
#define CHARA_008a0c96          0x008a0c96  // boss_result2.c
#define CHARA_008a43f9          0x008a43f9  // vr_spark.c
#define CHARA_008a8857          0x008a8857  // dummytrg.c
#define CHARA_LOCKER            0x008aa572  // GV_StrCode("ロッカー")
#define CHARA_008ac901          0x008ac901  // george_bonbori.c
#define CHARA_008b12d1          0x008b12d1
#define CHARA_008b19f0          0x008b19f0
#define CHARA_008b6086          0x008b6086  // GM_COM_PadCheck
#define CHARA_LOCKER_STATUS     0x008b976d  // GV_StrCode("ロッカー状態")
#define CHARA_SCREENSHOT        0x008c4a5b  // GV_StrCode("スクリーンショット")
#define CHARA_EXTINGUISHER      0x008c58f7  // GV_StrCode("消火器") extinguisher.c
#define CHARA_008dfe63          0x008dfe63
#define CHARA_008e0676          0x008e0676
#define CHARA_008e298d          0x008e298d  // cancel.c
#define CHARA_008f27ac          0x008f27ac  // demo_c4.c
#define CHARA_008ff6ad          0x008ff6ad
#define CHARA_00901fd7          0x00901fd7
#define CHARA_0090342e          0x0090342e
#define CHARA_009049ed          0x009049ed
#define CHARA_0090b7ec          0x0090b7ec
#define CHARA_00912bfe          0x00912bfe
#define CHARA_00915101          0x00915101
#define CHARA_009173e7          0x009173e7
#define CHARA_009208dc          0x009208dc
#define CHARA_00923e25          0x00923e25
#define CHARA_00924573          0x00924573
#define CHARA_00926341          0x00926341
#define CHARA_00926ace          0x00926ace
#define CHARA_0092a625          0x0092a625
#define CHARA_0092eb54          0x0092eb54  // (calls the printf stub??)
#define CHARA_009307ab          0x009307ab
#define CHARA_0093eeea          0x0093eeea
#define CHARA_0094193b          0x0094193b
#define CHARA_00943eaf          0x00943eaf
#define CHARA_00944e11          0x00944e11
#define CHARA_0094c147          0x0094c147
#define CHARA_00951c01          0x00951c01
#define CHARA_009530ae          0x009530ae
#define CHARA_00961325          0x00961325
#define CHARA_0096e361          0x0096e361
#define CHARA_00971fda          0x00971fda
#define CHARA_009786f7          0x009786f7
#define CHARA_0097889d          0x0097889d
#define CHARA_0098137c          0x0098137c
#define CHARA_009837c4          0x009837c4
#define CHARA_00987e81          0x00987e81
#define CHARA_009890d0          0x009890d0
#define CHARA_0098a49d          0x0098a49d
#define CHARA_SPLASH_MANAGER    0x0098bd5b  // GV_StrCode("水飛沫管理") splush_man.c
#define CHARA_0099615d          0x0099615d
#define CHARA_009a75e7          0x009a75e7
#define CHARA_009a97b2          0x009a97b2
#define CHARA_ITEM              0x009aff54  // GV_StrCode("アイテム")
#define CHARA_009b3b8b          0x009b3b8b
#define CHARA_CYPHER            0x009b3fd5  // GV_StrCode("サイファ")
#define CHARA_TIMER             0x009b65f0  // GV_StrCode("タイマー")
#define CHARA_009bc66f          0x009bc66f
#define CHARA_009bc670          0x009bc670
#define CHARA_009c403e          0x009c403e
#define CHARA_009cf455          0x009cf455
#define CHARA_009d73d7          0x009d73d7
#define CHARA_AMBIENT_LIGHT     0x009dcd6b  // GV_StrCode("環境光")
#define CHARA_009dd632          0x009dd632
#define CHARA_009e1df3          0x009e1df3
#define CHARA_009e3c4f          0x009e3c4f
#define CHARA_009e4d4a          0x009e4d4a
#define CHARA_009e5a92          0x009e5a92
#define CHARA_009e63c2          0x009e63c2
#define CHARA_009e8aeb          0x009e8aeb
#define CHARA_009f11bc          0x009f11bc
#define CHARA_00a0a179          0x00a0a179
#define CHARA_00a151b1          0x00a151b1
#define CHARA_00a1a665          0x00a1a665
#define CHARA_00a3d28a          0x00a3d28a
#define CHARA_00a3e408          0x00a3e408
#define CHARA_FOG               0x00a53aa7  // GV_StrCode("フォグ")
#define CHARA_VR_SCREEN         0x00a58f8a  // GV_StrCode("ＶＲスクリーン")
#define CHARA_00a58fa5          0x00a58fa5
#define CHARA_GOLCAP_ON         0x00a60221  // GV_StrCode("ゴルキャップあり")
#define CHARA_00a63d3b          0x00a63d3b
#define CHARA_GOLCAP_OFF        0x00a6a1ee  // GV_StrCode("ゴルキャップなし")
#define CHARA_00a6d9cf          0x00a6d9cf
#define CHARA_00a710db          0x00a710db
#define CHARA_00a7195f          0x00a7195f
#define CHARA_00a741fd          0x00a741fd
#define CHARA_00a7cb42          0x00a7cb42
#define CHARA_00a8560d          0x00a8560d
#define CHARA_00a85ceb          0x00a85ceb
#define CHARA_00a895c4          0x00a895c4
#define CHARA_00a97a70          0x00a97a70
#define CHARA_00a97eb2          0x00a97eb2
#define CHARA_00a9ed03          0x00a9ed03
#define CHARA_00ab381c          0x00ab381c
#define CHARA_RESIDENT_RES_SET  0x00ab5a2a  // GV_StrCode("常駐リソース設定")
#define CHARA_WT_DOOR_MANAGER   0x00abfd5f  // GV_StrCode("水密ドア管理")
#define CHARA_00ace3ff          0x00ace3ff
#define CHARA_00ad8864          0x00ad8864
#define CHARA_00ae0f36          0x00ae0f36
#define CHARA_00af0a7a          0x00af0a7a
#define CHARA_00af2208          0x00af2208
#define CHARA_SEAGULL_MANAGER   0x00af4cf6  // GV_StrCode("かもめマネージャ")
#define CHARA_00afa5e7          0x00afa5e7
#define CHARA_00afdee4          0x00afdee4
#define CHARA_00b030e4          0x00b030e4
#define CHARA_00b10086          0x00b10086
#define CHARA_00b1abd8          0x00b1abd8
#define CHARA_00b1e8d4          0x00b1e8d4
#define CHARA_00b23a64          0x00b23a64
#define CHARA_00b2a6b7          0x00b2a6b7
#define CHARA_00b2fd6c          0x00b2fd6c
#define CHARA_00b35703          0x00b35703
#define CHARA_00b3aa52          0x00b3aa52
#define CHARA_00b3d54e          0x00b3d54e
#define CHARA_CARGO_HOLD        0x00b3e388  // GV_StrCode("船倉兵")
#define CHARA_00b414ae          0x00b414ae
#define CHARA_00b431c3          0x00b431c3
#define CHARA_00b44bbb          0x00b44bbb
#define CHARA_VR_SKY            0x00b4e108  // GV_StrCode("ＶＲ空")
#define CHARA_VR_WALL           0x00b4e35c  // GV_StrCode("ＶＲ壁")
#define CHARA_00b53158          0x00b53158
#define CHARA_BLUR              0x00b63a33  // GV_StrCode("ブラー")
#define CHARA_00b63e47          0x00b63e47
#define CHARA_00b66ae4          0x00b66ae4
#define CHARA_00b6e522          0x00b6e522
#define CHARA_00b74fd7          0x00b74fd7
#define CHARA_00b75003          0x00b75003
#define CHARA_00b7b5a7          0x00b7b5a7
#define CHARA_00b7f8e7          0x00b7f8e7
#define CHARA_00b80de5          0x00b80de5
#define CHARA_00b89202          0x00b89202
#define CHARA_00b8b5f7          0x00b8b5f7
#define CHARA_00b8b94d          0x00b8b94d
#define CHARA_00b93d5e          0x00b93d5e
#define CHARA_00b97d41          0x00b97d41
#define CHARA_00ba92f5          0x00ba92f5
#define CHARA_00bb6852          0x00bb6852
#define CHARA_00bbad24          0x00bbad24
#define CHARA_00bcb4a2          0x00bcb4a2
#define CHARA_00bcee1a          0x00bcee1a
#define CHARA_00bd28c4          0x00bd28c4
#define CHARA_SHADOW_MANAGER    0x00bd400b  // GV_StrCode("影管理")
#define CHARA_00bd4c61          0x00bd4c61
#define CHARA_00bd673f          0x00bd673f
#define CHARA_00bd9cc1          0x00bd9cc1
#define CHARA_00bdd6a9          0x00bdd6a9
#define CHARA_SPLASH_FLOOR      0x00be0863  // GV_StrCode("床水飛沫") d_splash_floor.c
#define CHARA_00bed0ff          0x00bed0ff
#define CHARA_00bf97ed          0x00bf97ed
#define CHARA_00bfb0a1          0x00bfb0a1
#define CHARA_00c0895a          0x00c0895a
#define CHARA_00c09e6c          0x00c09e6c
#define CHARA_00c0e06d          0x00c0e06d
#define CHARA_KAMISHIBAI        0x00c13513  // GV_StrCode("紙芝居")
#define CHARA_00c1451b          0x00c1451b
#define CHARA_00c1bc23          0x00c1bc23
#define CHARA_00c1eb06          0x00c1eb06
#define CHARA_00c1ff0f          0x00c1ff0f
#define CHARA_00c210e3          0x00c210e3
#define CHARA_00c27387          0x00c27387
#define CHARA_00c2ad32          0x00c2ad32
#define CHARA_00c2eb8d          0x00c2eb8d
#define CHARA_PLAYER_INSTAKILL  0x00c3189a  // GV_StrCode("プレイヤー瞬殺")
#define CHARA_00c34b14          0x00c34b14
#define CHARA_00c3515f          0x00c3515f
#define CHARA_00c3c46c          0x00c3c46c
#define CHARA_00c41872          0x00c41872
#define CHARA_00c45437          0x00c45437
#define CHARA_00c547a7          0x00c547a7
#define CHARA_00c5994d          0x00c5994d
#define CHARA_00c5d24c          0x00c5d24c
#define CHARA_DEMO_BUG          0x00c622a4  // GV_StrCode("デモ虫")
#define CHARA_00c64ecb          0x00c64ecb
#define CHARA_00c6f28e          0x00c6f28e
#define CHARA_DEFENSE_COMMANDER 0x00c7280a  // GV_StrCode("長廊下コマンダー") defcomm.c
#define CHARA_ARRAY_SET         0x00c74f97  // GV_StrCode("配列セット") NewArraySet
#define CHARA_00c76d6e          0x00c76d6e
#define CHARA_00c7853f          0x00c7853f
#define CHARA_00c7ee15          0x00c7ee15
#define CHARA_00c84c1d          0x00c84c1d
#define CHARA_SOUND_MANAGER     0x00c88afa  // GV_StrCode("サウンドマネージャー")
#define CHARA_00c8dbcc          0x00c8dbcc
#define CHARA_SKY_UTIL          0x00c9dd51  // GV_StrCode("汎用空") sky_util.c
#define CHARA_00cb2c3e          0x00cb2c3e
#define CHARA_00cb6bed          0x00cb6bed
#define CHARA_00cb6ec4          0x00cb6ec4
#define CHARA_FLASHLIGHT        0x00cb7de8  // GV_StrCode("懐中電灯")
#define CHARA_00cba568          0x00cba568
#define CHARA_00cbb124          0x00cbb124
#define CHARA_00cbd98b          0x00cbd98b
#define CHARA_00cc87a2          0x00cc87a2
#define CHARA_ATTACKER          0x00cc9a07  // GV_StrCode("アタッカー")
#define CHARA_00cd2045          0x00cd2045
#define CHARA_00cdb878          0x00cdb878
#define CHARA_WEAPON_SPLASH     0x00cdc7bd  // GV_StrCode("武器水飛沫") weapon_sph.c
#define CHARA_00cec17c          0x00cec17c
#define CHARA_VR_GOAL           0x00ced375  // GV_StrCode("ＶＲゴール")
#define CHARA_00cf777f          0x00cf777f
#define CHARA_00d0e799          0x00d0e799
#define CHARA_00d10066          0x00d10066
#define CHARA_00d110e2          0x00d110e2
#define CHARA_00d1279a          0x00d1279a
#define CHARA_00d1699d          0x00d1699d
#define CHARA_UNDERWATER_CAMERA 0x00d16c76  // GV_StrCode("水中カメラ")
#define CHARA_00d20fde          0x00d20fde
#define CHARA_00d219b8          0x00d219b8
#define CHARA_00d2bd87          0x00d2bd87
#define CHARA_00d2c9aa          0x00d2c9aa
#define CHARA_00d30863          0x00d30863
#define CHARA_00d4090d          0x00d4090d
#define CHARA_00d44dc7          0x00d44dc7
#define CHARA_00d481ed          0x00d481ed
#define CHARA_00d51601          0x00d51601
#define CHARA_00d5d6ef          0x00d5d6ef
#define CHARA_00d5ff97          0x00d5ff97
#define CHARA_EMMA_BUG          0x00d612a2  // GV_StrCode("エマ虫")
#define CHARA_BROOKLYN          0x00d6ed95  // GV_StrCode("ブルックリン")
#define CHARA_00d72c78          0x00d72c78
#define CHARA_00d75a89          0x00d75a89
#define CHARA_TANKER_DOGTAG_NUM 0x00d8cff4  // GV_StrCode("タンカー編総ドッグタグ数")
#define CHARA_00d90540          0x00d90540
#define CHARA_00d978ac          0x00d978ac
#define CHARA_00d99a89          0x00d99a89
#define CHARA_00d99fb0          0x00d99fb0
#define CHARA_00d9c789          0x00d9c789
#define CHARA_TRAP_SWITCH       0x00da97fb  // GV_StrCode("トラップ切り替え") GM_COM_TrapSwitchCommand
#define CHARA_00daba9e          0x00daba9e
#define CHARA_00db03a6          0x00db03a6
#define CHARA_00db65ac          0x00db65ac
#define CHARA_00dba0d1          0x00dba0d1
#define CHARA_00dbd1fa          0x00dbd1fa
#define CHARA_00dc2f1b          0x00dc2f1b
#define CHARA_CAMERA_DUST       0x00dc323f  // GV_StrCode("カメラダスト")
#define CHARA_RAVEN_DOLL        0x00dc80bf  // GV_StrCode("レイブン人形")
#define CHARA_LOAD_SOUND_PACK   0x00dc83c5  // GV_StrCode("ロードサウンドパック")
#define CHARA_00dcb281          0x00dcb281
#define CHARA_00ddd2a3          0x00ddd2a3
#define CHARA_00ddf457          0x00ddf457
#define CHARA_COMMANDER         0x00ddf5ca  // GV_StrCode("コマンダー")
#define CHARA_00de0400          0x00de0400
#define CHARA_00de0401          0x00de0401
#define CHARA_00de0402          0x00de0402
#define CHARA_00de07c0          0x00de07c0
#define CHARA_00de4430          0x00de4430
#define CHARA_00dedde1          0x00dedde1
#define CHARA_00df5435          0x00df5435
#define CHARA_00e00fd1          0x00e00fd1
#define CHARA_00e0344c          0x00e0344c
#define CHARA_00e0568b          0x00e0568b
#define CHARA_00e0dbba          0x00e0dbba
#define CHARA_00e0dcba          0x00e0dcba
#define CHARA_00e1c26c          0x00e1c26c
#define CHARA_FADE_INOUT        0x00e22388  // GV_StrCode("フェードインアウト")
#define CHARA_00e2488b          0x00e2488b
#define CHARA_SCN_DEMO_START    0x00e29adb  // GV_StrCode("シナリオデモ開始")
#define CHARA_00e2a088          0x00e2a088
#define CHARA_00e2ed79          0x00e2ed79
#define CHARA_00e32fc7          0x00e32fc7
#define CHARA_00e3429d          0x00e3429d
#define CHARA_00e3549b          0x00e3549b
#define CHARA_00e39c0d          0x00e39c0d
#define CHARA_00e3c577          0x00e3c577
#define CHARA_00e3eb1a          0x00e3eb1a
#define CHARA_00e3eea2          0x00e3eea2
#define CHARA_00e41776          0x00e41776
#define CHARA_00e48f2f          0x00e48f2f
#define CHARA_00e4c507          0x00e4c507
#define CHARA_00e4cea2          0x00e4cea2
#define CHARA_PROJECTOR_LIGHT   0x00e4d016  // GV_StrCode("プロジェクタライト")
#define CHARA_00e52073          0x00e52073
#define CHARA_00e5ff03          0x00e5ff03
#define CHARA_00e6b658          0x00e6b658
#define CHARA_00e73ac4          0x00e73ac4
#define CHARA_00e74f46          0x00e74f46
#define CHARA_00e76d74          0x00e76d74  // NewGclVariableMove (calls the printf stub??)
#define CHARA_SCN_DEMO_END      0x00e79927  // GV_StrCode("シナリオデモ終了")
#define CHARA_00e9021d          0x00e9021d
#define CHARA_CODEC_SYSTEM      0x00e96d82  // GV_StrCode("無線システム")
#define CHARA_00ea5215          0x00ea5215
#define CHARA_00ead648          0x00ead648
#define CHARA_00eb7eda          0x00eb7eda
#define CHARA_WT_DOOR           0x00ebec24  // GV_StrCode("水密ドア")
#define CHARA_00ec084b          0x00ec084b
#define CHARA_00ec40c7          0x00ec40c7
#define CHARA_AMERICAN_FLOUR    0x00ecc9de  // GV_StrCode("メリケン粉")
#define CHARA_VR_OBJECT         0x00ed1e0b  // GV_StrCode("ＶＲオブジェ")
#define CHARA_00ed4678          0x00ed4678
#define CHARA_00ee8700          0x00ee8700
#define CHARA_00ee8b90          0x00ee8b90
#define CHARA_00eee657          0x00eee657
#define CHARA_00efd440          0x00efd440
#define CHARA_00effdac          0x00effdac
#define CHARA_CLEARING_CANCEL   0x00f005a3  // GV_StrCode("クリアリングキャンセル")
#define CHARA_00f0f504          0x00f0f504
#define CHARA_00f15e47          0x00f15e47
#define CHARA_00f26728          0x00f26728
#define CHARA_00f2dfcd          0x00f2dfcd
#define CHARA_00f2eedc          0x00f2eedc
#define CHARA_00f37560          0x00f37560
#define CHARA_00f466b6          0x00f466b6
#define CHARA_00f4bbf5          0x00f4bbf5
#define CHARA_PARROT            0x00f52ed4  // GV_StrCode("オウム")
#define CHARA_00f5bf46          0x00f5bf46
#define CHARA_00f5c132          0x00f5c132
#define CHARA_00f62833          0x00f62833
#define CHARA_00f63b18          0x00f63b18
#define CHARA_00f6ada8          0x00f6ada8
#define CHARA_00f706cd          0x00f706cd
#define CHARA_00f74020          0x00f74020
#define CHARA_00f77507          0x00f77507
#define CHARA_LADDER_SET        0x00f7e492  // GV_StrCode("はしご設定")
#define CHARA_SOLDIER           0x00f7f777  // GV_StrCode("警備兵")
#define CHARA_00f8f4e8          0x00f8f4e8
#define CHARA_TRANSPARENT_FLOOR 0x00f91a08  // GV_StrCode("透明床")
#define CHARA_TRANSPARENT_WALL  0x00f91b9f  // GV_StrCode("透明壁")
#define CHARA_00f92b8e          0x00f92b8e
#define CHARA_00f9711e          0x00f9711e
#define CHARA_00f9c62d          0x00f9c62d
#define CHARA_00fa4e80          0x00fa4e80
#define CHARA_00fad3ae          0x00fad3ae
#define CHARA_SOLIDUS           0x00faedf1  // GV_StrCode("ソリダス")
#define CHARA_00fb029a          0x00fb029a
#define CHARA_00fbeb7f          0x00fbeb7f
#define CHARA_00fc14a5          0x00fc14a5
#define CHARA_00fc6185          0x00fc6185
#define CHARA_00fca1a4          0x00fca1a4
#define CHARA_00fdda41          0x00fdda41
#define CHARA_00fe39e8          0x00fe39e8
#define CHARA_00fe5c5b          0x00fe5c5b
#define CHARA_00fe5c5c          0x00fe5c5c
#define CHARA_00fe5f3d          0x00fe5f3d
#define CHARA_00fe6730          0x00fe6730
#define CHARA_00fe6f50          0x00fe6f50
#define CHARA_00fea0c9          0x00fea0c9
#define CHARA_00fef2d9          0x00fef2d9
#define CHARA_PLANT_DOGTAG_NUM  0x00ff5b55  // GV_StrCode("プラント編総ドッグタグ数")
#define CHARA_00ffbece          0x00ffbece
#define CHARA_STAGE_OUTLINE     0x00ffc196  // GV_StrCode("ステージアウトライン")
#define CHARA_00ffd75e          0x00ffd75e
#define CHARA_00ffe7a7          0x00ffe7a7
#define CHARA_PROC_SEQ_EXEC     0x00ffed03  // GV_StrCode("プロック連続実行")
#define CHARA_00fff6c6          0x00fff6c6

/*--- Polygon Demo Charas ---*/
#define CHARA_01000000          0x01000000
#define CHARA_01000001          0x01000001
#define CHARA_01000002          0x01000002
#define CHARA_01000003          0x01000003
#define CHARA_01000004          0x01000004
#define CHARA_01000005          0x01000005
#define CHARA_01000006          0x01000006
#define CHARA_01000007          0x01000007
#define CHARA_01000008          0x01000008
#define CHARA_01000009          0x01000009
#define CHARA_0100000a          0x0100000a
#define CHARA_0100000b          0x0100000b
#define CHARA_0100000c          0x0100000c
#define CHARA_0100000d          0x0100000d
#define CHARA_0100000e          0x0100000e
#define CHARA_0100000f          0x0100000f
#define CHARA_01000011          0x01000011
#define CHARA_01000012          0x01000012
#define CHARA_01000013          0x01000013
#define CHARA_01000014          0x01000014
#define CHARA_01000015          0x01000015
#define CHARA_01000016          0x01000016
#define CHARA_01000017          0x01000017
#define CHARA_01000018          0x01000018
#define CHARA_01000019          0x01000019
#define CHARA_0100001a          0x0100001a
#define CHARA_0100001c          0x0100001c
#define CHARA_0100001d          0x0100001d
#define CHARA_0100001f          0x0100001f
#define CHARA_01000020          0x01000020
#define CHARA_01000021          0x01000021
#define CHARA_01000022          0x01000022
#define CHARA_01000023          0x01000023
#define CHARA_01000024          0x01000024
#define CHARA_01000025          0x01000025
#define CHARA_01000026          0x01000026
#define CHARA_01000031          0x01000031
#define CHARA_01000033          0x01000033
#define CHARA_01000100          0x01000100
#define CHARA_01000101          0x01000101
#define CHARA_01000103          0x01000103
#define CHARA_01000104          0x01000104
#define CHARA_01000105          0x01000105
#define CHARA_01000106          0x01000106
#define CHARA_01000107          0x01000107
#define CHARA_01000108          0x01000108
#define CHARA_01000109          0x01000109
#define CHARA_01000201          0x01000201
#define CHARA_01000202          0x01000202
#define CHARA_010007d1          0x010007d1
#define CHARA_01001000          0x01001000
#define CHARA_01001001          0x01001001
#define CHARA_01001002          0x01001002
#define CHARA_01001005          0x01001005
#define CHARA_01001006          0x01001006
#define CHARA_01001007          0x01001007
#define CHARA_01001008          0x01001008
#define CHARA_01001009          0x01001009
#define CHARA_0100100a          0x0100100a
#define CHARA_0100100c          0x0100100c
#define CHARA_0100100d          0x0100100d
#define CHARA_0100100f          0x0100100f
#define CHARA_01001010          0x01001010
#define CHARA_01001011          0x01001011
#define CHARA_01001012          0x01001012
#define CHARA_01001013          0x01001013
#define CHARA_01001014          0x01001014
#define CHARA_01001015          0x01001015
#define CHARA_01001016          0x01001016
#define CHARA_01001017          0x01001017
#define CHARA_01001018          0x01001018
#define CHARA_01001019          0x01001019
#define CHARA_0100101a          0x0100101a
#define CHARA_0100101b          0x0100101b
#define CHARA_0100101c          0x0100101c
#define CHARA_0100101d          0x0100101d
#define CHARA_0100101e          0x0100101e
#define CHARA_0100101f          0x0100101f
#define CHARA_01001020          0x01001020
#define CHARA_01001021          0x01001021
#define CHARA_01001022          0x01001022
#define CHARA_01001023          0x01001023
#define CHARA_01001024          0x01001024
#define CHARA_01001027          0x01001027
#define CHARA_01001028          0x01001028
#define CHARA_01001029          0x01001029
#define CHARA_0100102a          0x0100102a
#define CHARA_01002000          0x01002000
#define CHARA_01002002          0x01002002
#define CHARA_01002003          0x01002003
#define CHARA_01002004          0x01002004
#define CHARA_01003000          0x01003000
#define CHARA_01003004          0x01003004
#define CHARA_01003007          0x01003007
#define CHARA_01003009          0x01003009
#define CHARA_01003010          0x01003010
#define CHARA_01003011          0x01003011
#define CHARA_01003012          0x01003012
#define CHARA_01003013          0x01003013
#define CHARA_01003014          0x01003014
#define CHARA_01003015          0x01003015
#define CHARA_01003017          0x01003017
#define CHARA_01003019          0x01003019
#define CHARA_01004000          0x01004000
#define CHARA_01004001          0x01004001
#define CHARA_01004002          0x01004002
#define CHARA_01004004          0x01004004
#define CHARA_01006000          0x01006000
#define CHARA_01006002          0x01006002
#define CHARA_01006005          0x01006005
#define CHARA_01006006          0x01006006
#define CHARA_01006007          0x01006007
#define CHARA_01006008          0x01006008
#define CHARA_01006009          0x01006009
#define CHARA_0100600a          0x0100600a
#define CHARA_0100600b          0x0100600b
#define CHARA_0100600e          0x0100600e
#define CHARA_01006010          0x01006010
#define CHARA_01006011          0x01006011
#define CHARA_01006012          0x01006012
#define CHARA_01006013          0x01006013
#define CHARA_01006014          0x01006014
#define CHARA_01006015          0x01006015
#define CHARA_01006016          0x01006016
#define CHARA_01006017          0x01006017
#define CHARA_01006018          0x01006018
#define CHARA_01006019          0x01006019
#define CHARA_0100601a          0x0100601a
#define CHARA_0100601b          0x0100601b
#define CHARA_0100601c          0x0100601c
#define CHARA_0100601d          0x0100601d
#define CHARA_0100601f          0x0100601f
#define CHARA_01006020          0x01006020
#define CHARA_01006021          0x01006021
#define CHARA_01006022          0x01006022
#define CHARA_01006023          0x01006023
#define CHARA_01006024          0x01006024
#define CHARA_01006025          0x01006025
#define CHARA_01006026          0x01006026
#define CHARA_01006027          0x01006027
#define CHARA_01006028          0x01006028
#define CHARA_01006029          0x01006029
#define CHARA_0100602a          0x0100602a
#define CHARA_0100602c          0x0100602c
#define CHARA_01006030          0x01006030
#define CHARA_01006031          0x01006031
#define CHARA_01007001          0x01007001
#define CHARA_01007002          0x01007002
#define CHARA_01007003          0x01007003
#define CHARA_0100700b          0x0100700b
#define CHARA_0100700c          0x0100700c
#define CHARA_0100700d          0x0100700d
#define CHARA_0100700e          0x0100700e
#define CHARA_0100700f          0x0100700f
#define CHARA_01007100          0x01007100
#define CHARA_01007101          0x01007101
#define CHARA_01007102          0x01007102
#define CHARA_01007103          0x01007103
#define CHARA_01007104          0x01007104
#define CHARA_01007105          0x01007105
#define CHARA_01007106          0x01007106
#define CHARA_01007107          0x01007107
#define CHARA_01007108          0x01007108
#define CHARA_01007109          0x01007109
#define CHARA_0100710a          0x0100710a
#define CHARA_0100710c          0x0100710c
#define CHARA_0100710d          0x0100710d
#define CHARA_0100710e          0x0100710e
#define CHARA_0100710f          0x0100710f
#define CHARA_01008000          0x01008000
#define CHARA_01009000          0x01009000
#define CHARA_0100a002          0x0100a002
#define CHARA_0100a003          0x0100a003
#define CHARA_0100a004          0x0100a004
#define CHARA_0100b000          0x0100b000
#define CHARA_0100b001          0x0100b001
#define CHARA_0100b002          0x0100b002
#define CHARA_0100b003          0x0100b003
#define CHARA_0100b004          0x0100b004
#define CHARA_0100b005          0x0100b005
#define CHARA_0100b006          0x0100b006
#define CHARA_0100b007          0x0100b007
#define CHARA_0100b040          0x0100b040
#define CHARA_0100c100          0x0100c100
#define CHARA_0100d000          0x0100d000
#define CHARA_0100d001          0x0100d001
#define CHARA_0100d002          0x0100d002
#define CHARA_0100d003          0x0100d003
#define CHARA_0100d004          0x0100d004
#define CHARA_0100d005          0x0100d005
#define CHARA_0100d006          0x0100d006
#define CHARA_0100d007          0x0100d007
#define CHARA_0100d008          0x0100d008
#define CHARA_0100d009          0x0100d009
#define CHARA_0100d00a          0x0100d00a
#define CHARA_0100d00b          0x0100d00b
#define CHARA_010fff00          0x010fff00
#define CHARA_010fff01          0x010fff01
#define CHARA_010fff02          0x010fff02
#define CHARA_010fff03          0x010fff03
#define CHARA_010fff04          0x010fff04
#define CHARA_010fff05          0x010fff05
#define CHARA_010ffff0          0x010ffff0

#endif // {{{ END OF FILE }}}
