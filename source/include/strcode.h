#ifndef __MGS2_STRCODE_H__
#define __MGS2_STRCODE_H__

/*---------------------------------------------------------------------------*/

#define GCX_scenerio            0x00180720  // GV_StrCode("scenerio")
#define GCX_boss                0x0032cad3  // GV_StrCode("boss")

/* system/libgcl/basic.c */
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

/* user/mode/codec/codecitp.c */
#define CMD_block               0x0057c8d1  // GV_StrCode("block")
#define CMD_talk                0x003b91eb  // GV_StrCode("talk")
#define CMD_minden              0x00c89dee  // GV_StrCode("minden")
#define CMD_mindds              0x00c89dd3  // GV_StrCode("mindds")
#define CMD_movie               0x0009658c  // GV_StrCode("movie")
#define CMD_selectmenu          0x00409c51  // GV_StrCode("selectmenu")
#define CMD_savemode            0x008bfa17  // GV_StrCode("savemode")
#define CMD_player              0x00f271f8  // GV_StrCode("player")
#define CMD_face                0x003490c5  // GV_StrCode("face")
#define CMD_hair                0x00359192  // GV_StrCode("hair")
#define CMD_object              0x0056a1b8  // GV_StrCode("object")
#define CMD_cancelmtn           0x00ede73a  // GV_StrCode("cancelmtn")
#define CMD_lightcol            0x00bf1560  // GV_StrCode("lightcol")
#define CMD_ambientcol          0x00abc569  // GV_StrCode("ambientcol")
#define CMD_lightvec            0x00bf6017  // GV_StrCode("lightvec")
#define CMD_mindvoice           0x00099515  // GV_StrCode("mindvoice")
#define CMD_facecamera          0x006c54ba  // GV_StrCode("facecamera")
#define CMD_tracecamera         0x00ec568b  // GV_StrCode("tracecamera")
#define CMD_facelimit           0x005f6325  // GV_StrCode("facelimit")
#define CMD_facedelay           0x00dd5e29  // GV_StrCode("facedelay")
#define CMD_memregist           0x00f576fe  // GV_StrCode("memregist")
#define CMD_getmemfreq          0x004d912f  // GV_StrCode("getmemfreq")
#define CMD_rand                0x003a9224  // GV_StrCode("rand")
#define CMD_prefreq             0x0084f1fb  // GV_StrCode("prefreq")
#define CMD_setfreq             0x0074f2a2  // GV_StrCode("setfreq")
#define CMD_callcount           0x00cf8612  // GV_StrCode("callcount")
#define CMD_vox                 0x0001e658  // GV_StrCode("vox")
#define CMD_defmtn              0x0084c3bc  // GV_StrCode("defmtn")
#define CMD_dispen              0x00cb4ddc  // GV_StrCode("dispen")
#define CMD_dispds              0x00cb4dc1  // GV_StrCode("dispds")
#define CMD_wait                0x003d1194  // GV_StrCode("wait")
#define CMD_vibration           0x00c513b8  // GV_StrCode("vibration")
#define CMD_earthq              0x004ade41  // GV_StrCode("earthq")
#define CMD_bugface             0x00a4aa35  // GV_StrCode("bugface")
#define CMD_noise               0x001932cc  // GV_StrCode("noise")
#define CMD_fdexit              0x00746e66  // GV_StrCode("fdexit")
#define CMD_eyeclose            0x006b11d5  // GV_StrCode("eyeclose")
#define CMD_vibplay             0x0059daf1  // GV_StrCode("vibplay")
#define CMD_bugeyes             0x00a48a83  // GV_StrCode("bugeyes")

/* user/mode/phototerm/photo_itp.c */
//#define CMD_block             0x0057c8d1  // GV_StrCode("block")
//#define CMD_talk              0x003b91eb  // GV_StrCode("talk")
#define CMD_repeat              0x0089a17e  // GV_StrCode("repeat")
//#define CMD_vox               0x0001e658  // GV_StrCode("vox")
#define CMD_photoframe          0x000627f8  // GV_StrCode("photoframe")
#define CMD_nowframe            0x009e1eb9  // GV_StrCode("nowframe")
//#define CMD_rand              0x003a9224  // GV_StrCode("rand")
#define CMD_defaction           0x00d2f496  // GV_StrCode("defaction")
#define CMD_puppet              0x0089cdfb  // GV_StrCode("puppet")
#define CMD_loadpuppet          0x007bef09  // GV_StrCode("loadpuppet")
#define CMD_keywait             0x00cd2d25  // GV_StrCode("keywait")
//#define CMD_wait              0x003d1194  // GV_StrCode("wait")
#define CMD_photoerase          0x00f628b7  // GV_StrCode("photoerase")
#define CMD_photosave           0x009e6fd4  // GV_StrCode("photosave")
#define CMD_sound               0x0069622b  // GV_StrCode("sound")

#if 0
/*---------------------------------------------------------------------------*/
//
//  +------------------ MGS2: TRIAL EDITION
//  |  +--------------- MGS2: SONS OF LIBERTY
//  |  |  +------------ THE DOCUMENT OF MGS2
//  |  |  |  +--------- THE DOCUMENT OF MGS2 (MGS2_VRTRIAL)
//  |  |  |  |  +------ MGS2: SUBSTANCE (PS2)
//  |  |  |  |  |  +--- MGS2: SUBSTANCE (XBOX)
//  v  v  v  v  v  v
/*  O  O  O  -  O  O  */  0x000016cb  /* chara 雨 */
/*  O  O  O  -  O  O  */  0x000041e7  /* chara マンハット赤灯1 */
/*  O  O  O  -  O  O  */  0x000041e8  /* chara マンハット赤灯2 */
/*  -  O  O  -  O  O  */  0x00004c00  /* command 新プラグイン水中 */
/*  -  O  O  O  O  O  */  0x0000d1c5  /* command スティンガーサイト性能 */
/*  -  -  -  -  O  O  */  0x000129c5  /* command アンセットゾーンフラグ */
/*  O  O  O  -  O  O  */  0x000190b3  /* command abs */
/*  O  O  O  -  O  O  */  0x00019a53  /* command cos */
/*  -  O  -  -  O  O  */  0x0001a4f3  /* chara レーダー光点 */
/*  O  O  O  -  O  O  */  0x0001a6dd  /* chara ライン水飛沫 */
/*  O  O  O  -  O  O  */  0x0001d98e  /* command sin */
/*  -  O  O  -  O  O  */  0x00020bd1  /* command StreamIsPlay */
/*  -  -  O  -  -  -  */  0x000219ae
/*  O  O  O  O  O  O  */  0x000223d1  /* command VRAM初期化 */
/*  -  O  O  -  O  O  */  0x000255b6  /* command スプレー当たり判定通常 */
/*  -  O  O  -  O  O  */  0x0002ead3  /* command ゲットエマ座標 */
/*  -  O  O  -  O  O  */  0x000381ac  /* chara 装備品セット */
/*  -  O  O  -  O  O  */  0x00040715  /* command フォーチュン戦揺れライト壊れフラグ取得 */
/*  -  O  O  -  O  O  */  0x000423c8  /* chara アニメテクスチャセット */
/*  O  O  O  O  O  O  */  0x00053da0  /* command 変数初期化 */
/*  -  O  O  -  O  O  */  0x0005603b  /* command ボスタイマーエンド */
/*  -  O  -  -  O  O  */  0x0005872d  /* chara ファットマン死体ＩＫ補正 */
/*  -  -  -  -  O  O  */  0x0005b165  /* command ＶＲクリア＿星の数の設定 */
/*  -  O  O  -  O  O  */  0x0005b611  /* command ゲットエマ状態 */
/*  O  O  O  -  O  O  */  0x0005c815  /* chara 影投影モデル */
/*  -  -  -  -  O  O  */  0x0005d91d  /* command セットルートオフセット */
/*  O  O  O  O  O  O  */  0x00061ade  /* chara カメラ */
/*  O  O  O  -  O  O  */  0x0006a23b  /* chara カメラ上下振動 */
/*  -  O  -  -  O  O  */  0x0006e0fc  /* command ゲット敵兵思考ステータス */
/*  -  O  O  -  O  O  */  0x00075d93  /* command ＮＰＣスネークの状態 */
/*  -  O  O  -  O  O  */  0x0007e215  /* chara 船虫踏み潰し管理 */
/*  -  -  O  -  -  -  */  0x0007eb71
/*  -  -  -  O  -  -  */  0x000823b5
/*  -  O  O  -  O  O  */  0x00084719  /* command フォーチュン戦昇降機位置取得 */
/*  -  O  O  -  O  O  */  0x0008bffc  /* command プラグインくしゃみ */
/*  -  O  O  -  O  O  */  0x00091159  /* command ゲットエマライフ */
/*  -  -  O  -  -  -  */  0x0009462b
/*  -  -  -  -  O  O  */  0x0009bf85  /* command ＶＲクリア＿スコアの設定 */
/*  O  O  O  -  O  O  */  0x0009c02f  /* command 跳弾水蒸気小 */
/*  O  O  O  -  O  O  */  0x0009c0e8  /* command 跳弾水蒸気大 */
/*  O  O  O  -  O  O  */  0x0009c107  /* command 跳弾水蒸気中 */
/*  -  O  -  -  O  O  */  0x000a4d33  /* chara ボスフォーチュン */
/*  -  O  -  -  O  O  */  0x000a7cfb  /* chara ゲームセレクト画面マネージャー */
/*  O  O  O  -  O  O  */  0x000acf09  /* command 弾痕ノーマル */
/*  -  O  O  -  O  O  */  0x000b1261  /* chara 泡で波紋管理 */
/*  O  O  O  -  O  O  */  0x000b6ed3  /* chara 両開き扉 */
/*  -  O  O  -  O  O  */  0x000ba748  /* chara 天窓の光 */
/*  -  -  -  -  O  O  */  0x000bd712  /* chara オブジェクト分解 */
/*  O  O  O  -  O  O  */  0x000c02f4  /* command スポットライト投影ハザード */
/*  -  -  -  -  O  O  */  0x000c3d82  /* chara ＶＲ全体マップ表示３Ｄ */
/*  O  O  O  -  O  O  */  0x000d02fd  /* chara 鏡面モデル管理 */
/*  O  O  O  -  O  O  */  0x000da8bf  /* command 影投影ハザード */
/*  -  -  O  -  -  -  */  0x000daf2a
/*  -  -  -  -  O  O  */  0x000ded8c  /* chara ＶＲ落とし穴 */
/*  O  O  O  O  O  O  */  0x000dfadb  /* command プレイヤー状態取得 */
/*  O  O  O  O  O  O  */  0x000ecdfd  /* command PlayerStatus */
/*  -  O  O  -  O  O  */  0x000f57ba  /* command デモモデルリネーム追加 */
/*  -  O  O  -  O  O  */  0x000f9473  /* command 狙撃EmaStream */
/*  -  -  -  -  O  O  */  0x000ff733  /* command セット解体済み爆弾数 */
/*  -  O  -  -  O  O  */  0x0010cf2f  /* chara ローポリ劇場選択画面 */
/*  -  -  O  -  -  -  */  0x00116021
/*  -  -  O  -  -  -  */  0x0011c021
/*  -  O  O  -  O  O  */  0x00122e63  /* command プレイヤーライフ値操作 */
/*  -  -  -  O  O  O  */  0x00124bf9  /* command プラグインブレード解除 */
/*  O  O  O  O  O  O  */  0x00128946  /* chara プレイヤー */
/*  -  -  -  -  O  O  */  0x0012b592  /* command ＶＲステージクリア */
/*  -  -  -  -  O  O  */  0x0012c9d0  /* chara ザコラッシュテロップ表示 */
/*  -  O  O  -  O  O  */  0x001395b5  /* chara 電源パネルライト */
/*  -  -  O  -  -  -  */  0x0013972d
/*  -  O  O  -  -  O  */  0x0013ca47  /* command ボスラッシュ結果後書き */
/*  -  O  -  -  O  O  */  0x001418b1  /* command タンカーカメラ初期化 */
/*  -  O  O  -  O  O  */  0x0015984a  /* command ゲットカサッカステータス */
/*  O  O  -  -  O  O  */  0x00164ee0  /* chara ブレットバリア */
/*  -  -  O  -  -  -  */  0x0016d56c
/*  -  O  -  -  O  O  */  0x00170393  /* chara 送水管流水 */
/*  -  O  -  -  O  O  */  0x0017078b  /* command ハリアアイテムセット */
/*  O  O  O  -  O  O  */  0x00175436  /* chara プット紙オブジェ */
/*  -  O  O  -  O  O  */  0x0017a315  /* command ファイル交換処理 */
/*  -  O  O  -  O  O  */  0x0017ea77  /* chara 天狗兵ステージモニターW42a */
/*  -  O  O  -  O  O  */  0x0017eab7  /* chara 天狗兵ステージモニターW44a */
/*  -  O  O  -  O  O  */  0x00182073  /* command 光源消し */
/*  -  O  O  -  O  O  */  0x0018d40b  /* command 字幕制御 */
/*  -  -  -  -  O  O  */  0x0018e1f5  /* command ゲットヴァンプステータス */
/*  -  O  O  -  O  O  */  0x0018f412  /* chara 天狗兵コマンダー */
/*  -  -  O  -  -  -  */  0x0018fd89
/*  -  O  -  -  O  O  */  0x0019358b  /* command プレイヤー張付きはしゃがみだけ */
/*  -  -  -  -  O  O  */  0x0019bd75  /* chara セーブファイル個数チェック */
/*  -  -  O  -  -  -  */  0x001a8068
/*  -  O  O  -  O  O  */  0x001aae5f  /* command StreamStatus */
/*  -  O  O  -  O  O  */  0x001af0d5  /* chara ゆがみ泡 */
/*  -  -  O  -  -  -  */  0x001af731
/*  O  O  -  O  O  O  */  0x001af92a  /* chara レーダー */
/*  O  O  O  -  O  O  */  0x001b5854  /* chara 静止スポットライト設置 */
/*  -  -  O  -  -  -  */  0x001b841f
/*  -  O  -  -  O  O  */  0x001b970c  /* chara クリアデータロード後のゲーム開始画面 */
/*  -  O  O  -  -  O  */  0x001c4a30  /* chara ボスラッシュテロップ表示 */
/*  O  O  -  -  O  O  */  0x001c5eb9  /* command ゲットオルガ行動フラグ */
/*  -  O  O  -  O  O  */  0x001cb7b7  /* command デモ蛇手つかみ位置取得 */
/*  -  O  -  -  O  O  */  0x001cbd93  /* chara ファットマン */
/*  -  O  O  -  O  O  */  0x001d32ed  /* command シナリオ前武器変更 */
/*  -  -  -  O  O  O  */  0x001d5983  /* chara ＶＲシステム */
/*  -  O  O  -  O  O  */  0x001d9c73  /* command 狙撃SnaStream */
/*  -  -  -  O  O  O  */  0x001de43b  /* command ＶＲ箱ライフ */
/*  -  -  -  O  O  O  */  0x001dfdfb  /* command ＶＲ壁ライフ */
/*  O  O  O  -  O  O  */  0x001e44b7  /* chara マンハッタン */
/*  -  O  -  -  O  O  */  0x001f119a  /* chara エンディング */
/*  -  O  O  -  O  O  */  0x001f2a23  /* chara ユーザードックタグ */
/*  -  O  O  -  O  O  */  0x001f4349  /* command カモメ非表示 */
/*  -  O  O  O  O  O  */  0x001f567b  /* command プラント編取得済みドッグタグ数 */
/*  -  O  -  -  O  O  */  0x002055ca  /* command マップ表示チェック */
/*  -  O  O  -  O  O  */  0x00206929  /* chara 影投影モデル２ */
/*  O  O  -  -  O  O  */  0x00209027  /* chara ダンボール柄トラップ設定 */
/*  -  O  -  -  O  O  */  0x0022ae7d  /* chara 結果画面 */
/*  -  -  -  O  O  O  */  0x00231fa7  /* command プレイヤー描画モードセット */
/*  -  -  O  -  -  -  */  0x00238684
/*  -  O  O  -  O  O  */  0x00247947  /* command キャラマップチェンジ */
/*  -  -  -  O  O  O  */  0x0024c03e  /* chara ＶＲウィンドウ */
/*  -  -  -  O  O  O  */  0x0024c830  /* command ＶＲステージスタート */
/*  -  O  -  O  O  O  */  0x0024d360  /* chara ロードゲーム画面マネージャー */
/*  -  -  -  -  O  O  */  0x00256eee  /* command セット敵兵殺したフラグ */
/*  -  -  O  -  -  -  */  0x00259167
/*  -  -  O  -  -  -  */  0x0025d789
/*  -  -  -  -  O  O  */  0x00262b46  /* chara スネークテイルズセレクト */
/*  O  O  O  -  O  O  */  0x00264c7d  /* chara 煙突煙 */
/*  -  O  O  O  O  O  */  0x00264d3f  /* command タンカーカメラステータス */
/*  -  -  O  -  -  -  */  0x0026844e
/*  -  -  O  -  -  -  */  0x00268585
/*  -  -  -  -  O  O  */  0x0026aab9  /* command ＶＲタイマースタート */
/*  -  O  O  O  O  O  */  0x00274b60  /* chara セーブゲーム画面マネージャー */
/*  -  O  O  -  O  O  */  0x00276926  /* chara M4弾 */
/*  -  O  O  -  O  O  */  0x0027e580  /* command プレイヤーくしゃみ発動 */
/*  -  -  -  -  O  O  */  0x002948a0  /* chara パッド振動制御 */
/*  O  O  O  -  O  O  */  0x002981fa  /* command プレイヤー無敵解除 */
/*  -  O  O  -  O  O  */  0x0029c817  /* command 水位設定 */
/*  -  O  -  -  O  O  */  0x0029d24d  /* command プラグイン影縛り */
/*  -  O  O  -  O  O  */  0x002a088b  /* chara 汎用アニメポリゴン */
/*  -  O  -  -  O  O  */  0x002a0b46  /* chara あきかん */
/*  -  -  -  -  O  O  */  0x002a41c7  /* chara ゴルルゴン振動制御 */
/*  -  O  O  -  O  O  */  0x002a4246  /* chara 全体マップ表示3D */
/*  -  O  -  -  O  O  */  0x002b8e16  /* chara プロトヴァンプ */
/*  -  O  O  -  O  O  */  0x002c4b35  /* command Ｏ２ゲージ回復力設定 */
/*  -  O  O  -  O  O  */  0x002d77d4  /* command コントロール座標取得 */
/*  O  O  O  -  O  O  */  0x002dad24  /* chara 遠景ぼかし */
/*  -  O  O  -  O  O  */  0x002df578  /* chara 髭剃りスネークテクスチャ入れ替え */
/*  -  O  -  -  O  O  */  0x002e2acb  /* command ゲットフォーチュン座標 */
/*  -  O  O  -  O  O  */  0x002e4eeb  /* chara ボスラッシュポーズ */
/*  -  O  -  -  O  O  */  0x002eb280  /* command レーダーズーム設定 */
/*  -  -  -  O  O  O  */  0x002efa26  /* command ＶＲ移動的ライフ */
/*  O  O  O  O  O  O  */  0x002f3844  /* command プラグイン強制移動 */
/*  -  O  O  -  O  O  */  0x002f9fe3  /* command ボスセットタイマーステータス */
/*  -  -  -  -  O  O  */  0x002fd1d7  /* command スカート結合 */
/*  -  -  O  -  -  -  */  0x0030aea3
/*  -  O  O  -  O  O  */  0x0030e9cc  /* chara エレベータ */
/*  -  O  O  -  O  O  */  0x00311e8e  /* chara 人質達 */
/*  -  O  O  -  O  O  */  0x003124a2  /* chara シナリオカメラ振動 */
/*  -  O  -  -  O  O  */  0x003129d0  /* command ゲットクラスター座標 */
/*  -  O  O  -  O  O  */  0x0031d58b  /* chara 台詞発生源君 */
/*  -  -  O  -  -  -  */  0x0032564f
/*  -  O  O  -  O  O  */  0x003259e5  /* chara 長廊下兵 */
/*  O  O  O  -  O  O  */  0x00325c8e  /* command atan */
/*  O  O  O  -  O  O  */  0x0032fb70  /* command StreamStopAll */
/*  -  -  O  -  -  -  */  0x0033993d
/*  -  O  O  -  O  O  */  0x00339bd9  /* command StreamSetPan */
/*  O  O  O  -  O  O  */  0x0033a20f  /* chara demo */
/*  -  O  O  -  O  O  */  0x0033d38e  /* command ボスラッシュポーズ表示非表示 */
/*  -  O  O  -  O  O  */  0x00344e5b  /* command 倒れ状態取得 */
/*  -  O  O  -  O  O  */  0x003470c9  /* command ミサイル移動範囲設定 */
/*  -  O  O  -  O  O  */  0x0034cc13  /* command save_var_read */
/*  -  -  -  -  O  O  */  0x0035804e  /* command ボスラッシュ２結果後書き */
/*  -  O  O  -  O  O  */  0x00358d2f  /* command 全体マップ爆弾配置 */
/*  O  O  O  O  O  O  */  0x0035a2cf  /* chara マップ */
/*  O  O  O  -  O  O  */  0x003625b1  /* chara プット雑誌オブジェ */
/*  -  -  -  -  O  O  */  0x00363be8  /* command 壊れコンピュータＩＤ入れ換え */
/*  -  -  -  -  O  O  */  0x003640f6  /* chara プレイヤ退場 */
/*  -  -  O  -  -  -  */  0x00365d11
/*  O  O  O  -  O  O  */  0x00365dee  /* chara プットスポットライトオブジェ */
/*  -  O  -  -  O  O  */  0x00368f7d  /* command ゲット人質状態 */
/*  -  -  -  -  O  O  */  0x0037014d  /* chara ゴルルコマンダー */
/*  -  O  -  -  O  O  */  0x00374069  /* chara ハリアーＢＧＭマネ */
/*  -  O  -  -  O  O  */  0x00374bbe  /* chara ガンスピン */
/*  -  O  O  -  O  O  */  0x00374cb5  /* command ゲット倒した天狗兵 */
/*  -  -  -  -  O  O  */  0x0037700f  /* command 特殊ＶＲゲームオーバー */
/*  -  -  -  O  O  O  */  0x003780f6  /* chara プレイヤ登場 */
/*  -  O  -  -  O  O  */  0x0038d44e  /* command チェンジクリアリングルート */
/*  -  O  -  -  O  O  */  0x00397fd4  /* chara シャドーモセス */
/*  -  O  O  -  O  O  */  0x003a6f25  /* chara 解体Ｃ４ */
/*  O  O  O  -  O  O  */  0x003a9224  /* command rand */
/*  -  -  O  -  -  -  */  0x003acf19
/*  -  O  O  -  O  O  */  0x003af581  /* command ゲームオーバー背景設定 */
/*  -  O  O  -  O  O  */  0x003b1909  /* chara ノード端末ディスプレイ */
/*  -  O  O  -  O  O  */  0x003c2410  /* chara ライデン水中マスクの泡 */
/*  -  -  O  -  -  -  */  0x003c27e3
/*  -  O  O  O  O  O  */  0x003c56aa  /* chara ドッグタグ名前表示マネージャ */
/*  -  O  O  -  O  O  */  0x003d3b06  /* command プレイヤー風邪治し */
/*  -  O  -  -  O  O  */  0x003d5d04  /* chara アルバムモード */
/*  -  O  O  -  O  O  */  0x003d9d2e  /* command 常駐領域設定 */
/*  -  O  O  -  O  O  */  0x003dfd0b  /* command エフェクトバウンド実行 */
/*  -  O  -  -  O  O  */  0x003e7b6f  /* command プレイヤー不可視 */
/*  -  O  O  -  O  O  */  0x003ef35f  /* chara レンズフレア */
/*  -  O  O  -  O  O  */  0x003f0a3f  /* command ボスゲットラップタイム */
/*  O  O  O  -  O  O  */  0x003f46ec  /* command プレイヤーモーション振動ＯＦＦ */
/*  O  O  O  -  O  O  */  0x003f55fc  /* chara ブルックリンフォグ有効 */
/*  -  O  O  -  O  O  */  0x003f9531  /* chara メモリーカード警告画面 */
/*  -  O  -  -  O  O  */  0x003fcd73  /* chara プレイヤー主観範囲設定 */
/*  O  O  O  -  O  O  */  0x0040f2ae  /* chara プットアイスボックスオブジェ */
/*  -  O  O  -  O  O  */  0x00413144  /* chara ベルトコンベア荷物 */
/*  -  O  -  -  O  O  */  0x004147a5  /* command ＳＥ字幕登録 */
/*  -  O  O  -  O  O  */  0x004152df  /* chara 体舟虫 */
/*  O  O  O  O  O  O  */  0x0041cf4e  /* command 跳弾ノーマル */
/*  -  O  O  -  O  O  */  0x0041f1f7  /* command ベルトコンベア管理 */
/*  -  O  O  -  O  O  */  0x0042181a  /* command エフェクトバウンド追加 */
/*  -  -  O  -  -  -  */  0x0042dd7c
/*  -  O  O  -  O  O  */  0x00438ffa  /* chara カメラ水膜 */
/*  O  O  O  O  O  O  */  0x0043f718  /* chara カメラ設定 */
/*  -  O  O  -  O  O  */  0x004481ed  /* command 水中エマライフゲット */
/*  -  -  O  -  -  -  */  0x0044b9c2
/*  -  O  O  -  O  O  */  0x004508c2  /* command プットスポットライトオブジェライト管理 */
/*  -  O  O  -  O  O  */  0x00450c64  /* command ゲット残りタイム */
/*  O  O  -  -  -  -  */  0x004534c4
/*  -  O  -  -  O  O  */  0x0045e12e  /* command StreamPauseControl */
/*  -  O  -  -  O  O  */  0x004610f8  /* command ゲットオルガ座標 */
/*  -  O  O  -  O  O  */  0x0046139a  /* chara ガラス弾痕 */
/*  -  O  O  -  -  O  */  0x004683b0  /* command ボスラッシュ音声交換 */
/*  O  O  O  O  O  O  */  0x00469b3a  /* command プラグイン姿勢制御 */
/*  -  O  O  -  O  O  */  0x0046b814  /* command 即時マップ接合変更 */
/*  -  O  O  O  O  O  */  0x0046fcd2  /* command 敵兵メモリー更新 */
/*  -  O  -  -  O  O  */  0x00470def  /* chara 自動メニュー選択マネージャー */
/*  -  O  -  -  O  O  */  0x00475ca4  /* command プラグイン強制吹っ飛ばし */
/*  -  O  -  -  O  O  */  0x00476790  /* command プラグイン落下 */
/*  -  O  -  O  O  O  */  0x0047d37a  /* chara USBキーボード実行 */
/*  O  O  O  -  O  O  */  0x004847d2  /* chara プットテクスチャクロスフェードカメラ */
/*  -  O  O  -  O  O  */  0x0048f8f8  /* chara スポットライト背景イメージ指定 */
/*  -  -  -  O  O  O  */  0x004909b5  /* command セットＶＲステータス */
/*  -  O  O  -  O  O  */  0x00492a40  /* chara ルートデモ人形 */
/*  -  O  -  -  O  O  */  0x00494239  /* chara 取得アイテム表示 */
/*  -  O  O  -  O  O  */  0x00497be6  /* command 無線状態 */
/*  -  -  -  -  O  O  */  0x0049c14f  /* chara エマ装備 */
/*  -  O  -  -  O  O  */  0x0049d6f1  /* chara プットアタッチコントロール */
/*  -  O  O  -  O  O  */  0x0049eb5e  /* command プットスポットライトオブジェライト消す */
/*  -  O  O  -  O  O  */  0x004a0018  /* chara 簡易レイアウトプレイヤ */
/*  O  O  O  -  O  O  */  0x004a243a  /* command 無線設定 */
/*  -  O  O  -  O  O  */  0x004a3697  /* command トラップ内荷物チェック */
/*  -  O  O  -  O  O  */  0x004a65ba  /* command ボスゲット残りタイム */
/*  O  O  O  -  O  O  */  0x004a777d  /* chara 嵐の川波 */
/*  -  O  O  -  O  O  */  0x004a8b88  /* command ベルトコンベア動作 */
/*  -  O  O  -  O  O  */  0x004a8df9  /* command ベルトコンベア登録 */
/*  -  -  -  -  O  O  */  0x004a90a1  /* command ゴルルゴン写真判定補助 */
/*  -  O  O  -  O  O  */  0x004b5435  /* chara プット旗オブジェ */
/*  O  O  O  -  O  O  */  0x004baafe  /* chara 落下水飛沫 */
/*  -  O  O  -  O  O  */  0x004bab34  /* chara キャラ付随水飛抹 */
/*  -  O  O  -  O  O  */  0x004bf8e6  /* command ドッグタグフラグセット */
/*  -  O  O  -  O  O  */  0x004cbfc5  /* chara エレベータパネル制御 */
/*  -  O  O  O  O  O  */  0x004cefc1  /* command メモリオフセット初期化 */
/*  -  -  -  -  O  O  */  0x004cfe6e  /* chara ＶＲセレクト */
/*  -  -  O  -  -  -  */  0x004d1dd3
/*  -  O  -  -  O  O  */  0x004e1bd6  /* chara 真鏡面 */
/*  -  O  O  -  O  O  */  0x004e8280  /* command 水密ドアハンドル２回転時プロックコール */
/*  -  O  O  O  O  O  */  0x004f576c  /* command はだかモードセット */
/*  O  O  -  -  O  O  */  0x004fb2ca  /* chara プットスネーク隠れオブジェ */
/*  O  O  O  O  O  O  */  0x004fe997  /* chara 平行光 */
/*  -  O  -  -  O  O  */  0x00502332  /* chara パイプ流水 */
/*  -  O  -  -  O  O  */  0x00502681  /* chara 連絡橋爆発 */
/*  -  O  O  -  O  O  */  0x0050396f  /* command 全体マップ爆弾配置解除 */
/*  -  O  O  -  O  O  */  0x005141af  /* command セットマイクパラメータ */
/*  -  -  -  -  O  O  */  0x00515453  /* command 全体マップ爆弾配置初期化 */
/*  -  O  O  O  O  O  */  0x0051dc64  /* command スティンガー性能 */
/*  O  O  O  -  O  O  */  0x00522db5  /* chara 監視カメラ */
/*  -  O  -  -  O  O  */  0x005282a9  /* command 水中出入り時プロック */
/*  O  O  -  -  O  O  */  0x0053209a  /* chara プット隠れオブジェ */
/*  O  O  O  -  O  O  */  0x00532262  /* chara プット壊れオブジェ */
/*  O  O  O  -  O  O  */  0x00532f32  /* chara プット揺れオブジェ */
/*  -  O  O  -  O  O  */  0x0053baf5  /* chara フォーチュン戦巻き上げ煙 */
/*  -  O  -  -  O  O  */  0x0053cffa  /* chara ボスハリアー */
/*  -  -  -  O  O  O  */  0x0053e970  /* chara ステージ変形 */
/*  -  -  -  -  O  O  */  0x00540ac2  /* command ゲットステージハプニング */
/*  O  O  O  O  O  O  */  0x00542b2d  /* command foreach */
/*  -  O  -  -  O  O  */  0x00547041  /* chara テスト昇り煙 */
/*  -  O  O  -  O  O  */  0x0054b365  /* chara ドアランプ */
/*  O  O  O  -  O  O  */  0x0054eca9  /* chara 固定ボリュームライト */
/*  -  O  -  -  O  O  */  0x0055080c  /* chara ノード画面バックグラウンド */
/*  -  O  -  -  O  O  */  0x00552c76  /* chara デモ冷却スプレー */
/*  O  O  O  -  O  O  */  0x0055b942  /* chara ドア */
/*  -  -  O  -  -  -  */  0x0055bb53
/*  O  O  O  O  O  O  */  0x005686ae  /* command エルード移動範囲設定 */
/*  -  O  O  O  O  O  */  0x0056b5cb  /* command プラグインブレード */
/*  -  -  O  -  -  -  */  0x0056e08c
/*  O  O  O  -  O  O  */  0x0056e234  /* chara マップ接合 */
/*  O  O  O  O  O  O  */  0x0056ef97  /* command マップ設定 */
/*  -  -  -  -  -  O  */  0x005734c7  /* command ＸＢＯＸ用パッチ_w46a_demo */
/*  -  -  -  O  O  O  */  0x005738f0  /* command セットＶＲ的部位ダメージ */
/*  -  O  O  -  O  O  */  0x00577fb3  /* chara ガンカメラ */
/*  -  O  O  -  O  O  */  0x0057a485  /* command 追加ＨＺＸグループ削除 */
/*  O  O  O  O  O  O  */  0x0059eda8  /* chara 警備コマンダー */
/*  -  O  O  -  O  O  */  0x0059f23c  /* chara 詳細水飛沫 */
/*  O  O  O  O  O  O  */  0x005a4652  /* command ゲームオーバー音声設定 */
/*  -  O  O  -  O  O  */  0x005a4809  /* chara プットガラスオブジェ */
/*  O  O  O  O  O  O  */  0x005ae655  /* command マップ表示 */
/*  O  O  O  O  O  O  */  0x005b316e  /* command varsave */
/*  O  O  -  -  O  O  */  0x005b6e21  /* chara 英語版スペシャルメニュー */
/*  O  O  O  O  O  O  */  0x005bb4d4  /* chara 攻撃コマンダー */
/*  -  O  O  -  O  O  */  0x005bfe1d  /* command プレイヤー風邪引かせ */
/*  O  O  O  -  O  O  */  0x005c0bae  /* chara パッドデモ */
/*  -  -  -  -  O  O  */  0x005c2eae  /* chara 怨霊 */
/*  -  O  O  -  O  O  */  0x005c3a78  /* chara バンププール */
/*  -  O  -  -  O  O  */  0x005c526a  /* command 保存していたオプションフラグを戻す */
/*  -  O  O  -  O  O  */  0x005caa88  /* command 追加ＨＺＸグループ登録 */
/*  O  O  O  -  O  O  */  0x005cb281  /* chara マンハッタンフォグ有効 */
/*  -  O  O  -  O  O  */  0x005da36d  /* chara 狙撃サイファ */
/*  -  O  -  -  O  O  */  0x005dad0e  /* chara 拡張海表示皿型 */
/*  -  -  -  -  O  O  */  0x005de390  /* command ＶＲ敵兵追加 */
/*  -  O  O  -  -  O  */  0x005eb488  /* command ＰＳ２から言語設定を取り出す */
/*  -  -  -  -  O  O  */  0x005ec9c1  /* chara ゴルルゴン */
/*  -  -  -  O  O  O  */  0x005ed347  /* chara ＶＲポーズ */
/*  -  -  O  -  -  -  */  0x005f2c09
/*  -  O  -  -  O  O  */  0x005f8469  /* command トラップ削除 */
/*  O  O  O  -  O  O  */  0x005fbe23  /* chara ＢＧＭ風音 */
/*  -  -  O  -  -  -  */  0x00602572
/*  O  O  -  -  O  O  */  0x00604185  /* command 絶対角度差 */
/*  -  O  -  -  O  O  */  0x00608b23  /* command ゲットエマ足元座標 */
/*  -  O  O  -  O  O  */  0x0060c857  /* command 新水中設定 */
/*  -  O  O  -  O  O  */  0x0060cf19  /* chara キラキラ水面２ */
/*  -  -  -  -  O  O  */  0x0060d52e  /* command StreamStart */
/*  -  -  -  O  O  O  */  0x0061274d  /* chara ＶＲ移動的 */
/*  -  -  O  -  -  -  */  0x00614544
/*  -  O  O  -  O  O  */  0x0061514e  /* chara 舟虫 */
/*  -  O  O  -  O  O  */  0x0061676d  /* command 狙撃StreamStop */
/*  -  -  O  -  -  -  */  0x0062155a
/*  -  O  O  O  O  O  */  0x006263f9  /* command エフェクトバウンド初期化 */
/*  O  O  O  -  O  O  */  0x006273b5  /* chara 新空 */
/*  O  O  -  -  O  O  */  0x0062b1fd  /* chara ＢＧＭフェーダー */
/*  O  O  O  O  O  O  */  0x00635875  /* command ゲームオーバー処理開始 */
/*  -  O  O  -  O  O  */  0x006376d3  /* command ＮＰＣスネークステージ切替え */
/*  -  -  O  -  -  -  */  0x006376fa
/*  -  O  O  O  O  O  */  0x00641a7b  /* chara 太陽 */
/*  O  O  O  -  O  O  */  0x006442cb  /* chara 窓雨 */
/*  -  O  O  -  O  O  */  0x00645113  /* chara 死体君 */
/*  -  O  O  -  O  O  */  0x00645c5b  /* chara 狙撃イベント設置クレイモア */
/*  -  O  O  -  O  O  */  0x00646de9  /* command ハリアー戦で誰がプレイヤーを攻撃したか */
/*  O  O  O  -  O  O  */  0x0064afef  /* chara 弾痕 */
/*  -  -  -  -  O  O  */  0x0064fb35  /* chara 一枚絵単独表示 */
/*  -  O  O  -  O  O  */  0x0064fe6e  /* chara 濁流 */
/*  -  O  O  -  O  O  */  0x0065180b  /* command ゲットエマ手繋ぎ状況 */
/*  O  O  O  -  O  O  */  0x00657385  /* chara 天球 */
/*  -  -  O  -  -  -  */  0x00660719
/*  -  O  O  -  O  O  */  0x00661bee  /* command カメラチェック面登録 */
/*  O  O  O  -  O  O  */  0x00662f7c  /* chara 身体水飛沫 */
/*  -  O  O  -  O  O  */  0x00663387  /* command ベルトコンベア状態取得 */
/*  -  O  O  -  O  O  */  0x0066b097  /* chara フォグコントローラ */
/*  O  O  O  -  O  O  */  0x0066ba4c  /* chara 波面 */
/*  O  O  O  -  O  O  */  0x0066ba66  /* chara 波紋 */
/*  -  O  -  -  O  O  */  0x0066f439  /* command 主観射程距離設定 */
/*  -  O  O  -  O  O  */  0x00675145  /* chara 潰れふなむし */
/*  -  O  O  -  O  O  */  0x006760e9  /* chara 白息 */
/*  O  O  O  -  O  O  */  0x006779ad  /* chara プットテクスチャ */
/*  -  O  O  -  O  O  */  0x006781af  /* chara 爆発 */
/*  -  O  O  -  O  O  */  0x0068392d  /* chara M4_DEMO_GUN弾 */
/*  O  O  O  O  O  O  */  0x00683bcc  /* chara 壁血 */
/*  O  O  O  O  O  O  */  0x006856c1  /* command ゲームオーバー処理終了 */
/*  O  -  -  -  -  -  */  0x0068bef1
/*  O  O  O  -  O  O  */  0x0068cb9c  /* chara パッド振動 */
/*  O  O  O  -  O  O  */  0x0068f6cb  /* chara 霧雨 */
/*  O  O  O  -  O  O  */  0x00690610  /* chara シネマスクリーン */
/*  -  O  O  -  O  O  */  0x006926d0  /* chara 人質コマンダー */
/*  -  O  -  -  O  O  */  0x006a030a  /* chara 陽炎 */
/*  O  O  O  -  O  O  */  0x006a0cda  /* chara プット揺れライト */
/*  O  O  O  O  O  O  */  0x006a725a  /* command パッド操作 */
/*  -  O  O  -  O  O  */  0x006a9667  /* command 強制モーションループ回数設定 */
/*  -  O  O  -  O  O  */  0x006ad20f  /* chara ダミープレイヤー */
/*  -  O  O  -  O  O  */  0x006ae654  /* chara プラント海面 */
/*  -  -  -  O  O  O  */  0x006b237d  /* command assert */
/*  O  O  O  -  O  O  */  0x006b8ee3  /* chara カメラ雨 */
/*  O  O  O  O  O  O  */  0x006b8fe4  /* chara カメラ血 */
/*  -  O  O  -  O  O  */  0x006b921a  /* chara カメラ泡 */
/*  O  -  -  -  -  -  */  0x006bc59d
/*  -  -  -  O  O  O  */  0x006c274d  /* command セットステージＩＤ */
/*  O  O  O  -  O  O  */  0x006c577d  /* chara プットポテトオブジェ */
/*  -  -  -  O  O  O  */  0x006d61f3  /* command セット爆弾数 */
/*  -  O  O  -  O  O  */  0x006d841b  /* command マップチェンジトラップ登録 */
/*  -  O  O  -  -  O  */  0x006d85be  /* chara ボスラッシュ結果 */
/*  -  O  -  -  O  O  */  0x006ddd6a  /* chara スペシャルメニューページ付き */
/*  -  -  -  -  O  O  */  0x006de9bc  /* command ＶＲウィンドウ状態のリセット */
/*  -  O  O  -  O  O  */  0x006e0fa8  /* chara プット壊れ通気口 */
/*  -  O  -  -  O  O  */  0x006e6572  /* chara ドッグタグモード */
/*  -  O  O  -  O  O  */  0x006e7f78  /* chara メニューフナムシ */
/*  O  -  -  -  -  -  */  0x006ec54c
/*  -  -  -  O  O  O  */  0x006ecc1a  /* command 主観移動セット */
/*  -  O  -  -  O  O  */  0x006eeb2f  /* chara スペシャル画面マネージャー */
/*  O  O  -  -  O  O  */  0x006f5b0f  /* command カメラマップ設定 */
/*  O  O  O  O  O  O  */  0x006f7d4d  /* chara MGSシステム初期化 */
/*  -  O  O  -  O  O  */  0x006fa0a2  /* chara スリット光２ */
/*  -  O  -  O  O  O  */  0x006fa5f5  /* command 武器アイテム取られ */
/*  -  O  O  -  O  O  */  0x006fda0f  /* chara フォーチュン戦ライデン隠れオブジェ */
/*  O  O  O  O  O  O  */  0x00709df6  /* command 強制モーション終了プロック */
/*  O  O  O  O  O  O  */  0x0070a68a  /* chara ＢＧＭマネージャー */
/*  -  -  -  -  O  O  */  0x00718756  /* command セットＶＲ発見回数 */
/*  O  O  O  -  O  O  */  0x00727b5e  /* chara 斜め回転床水飛沫 */
/*  -  O  -  -  O  O  */  0x0072ead4  /* command 装備メニュー制御 */
/*  O  O  O  -  O  O  */  0x0072f23c  /* chara プットモーションモデル */
/*  -  -  -  -  O  O  */  0x007334af  /* command ゲットゴルルゴン壊れパーツ */
/*  -  O  O  -  O  O  */  0x0073e084  /* command プレイヤー床高さ取得 */
/*  O  O  O  -  O  O  */  0x00741b7a  /* chara プットホロオブジェ */
/*  O  O  O  O  O  O  */  0x00743c9f  /* chara delay */
/*  -  O  O  -  O  O  */  0x0074cd16  /* chara 浮き橋 */
/*  -  O  O  O  O  O  */  0x0074e86b  /* command 字幕言語設定 */
/*  -  -  -  -  O  O  */  0x0075513c  /* command ゲットゴルルゴン頭座標 */
/*  -  -  -  O  O  O  */  0x00755e2e  /* command セットＶＲ的部位スコア */
/*  -  O  O  -  O  O  */  0x007561ae  /* chara プットオルガ戦投光器オブジェ */
/*  O  O  O  -  O  O  */  0x0075e815  /* chara プットテレビオブジェ */
/*  -  O  O  -  O  O  */  0x0076a03c  /* chara 爆弾検知領域 */
/*  -  O  O  -  O  O  */  0x00770ec3  /* command プラグインエレベータ */
/*  O  O  O  O  O  O  */  0x0077318d  /* command 現在時刻取得 */
/*  -  -  -  O  O  O  */  0x0077568d  /* chara ＶＲ壁マーカー */
/*  O  O  -  -  O  O  */  0x007798f6  /* chara ボスオルガ */
/*  -  -  O  O  -  -  */  0x0077c494  /* chara ルート表示 */
/*  O  O  O  -  O  O  */  0x0077ffc8  /* command ロッカーモーション */
/*  -  O  O  -  O  O  */  0x0078d685  /* chara 設置クレイモア */
/*  -  -  O  -  -  -  */  0x0078f6d2
/*  -  -  -  -  O  O  */  0x007919e8  /* chara ゴルルゴン水柱 */
/*  -  O  O  -  O  O  */  0x00797edf  /* command ブレード振りチェック */
/*  O  O  O  -  O  O  */  0x007a3dbf  /* chara プットテクスチャクロスフェードカメラドア */
/*  O  O  O  -  O  O  */  0x007a8ec1  /* chara プットオブジェ */
/*  -  O  O  -  O  O  */  0x007a94a9  /* command カメラチェックキャラワーク確保 */
/*  O  O  O  -  O  O  */  0x007aa13a  /* command Stream */
/*  -  O  O  -  O  O  */  0x007ad92b  /* chara USP弾 */
/*  -  O  O  -  O  O  */  0x007b35e0  /* command 無線メモリー設定 */
/*  -  O  O  O  O  O  */  0x007c7e31  /* command タンカー編取得済みドッグタグ数 */
/*  -  -  O  -  -  -  */  0x007d3c8a
/*  -  -  -  -  O  O  */  0x007dda2e  /* command テンプライト */
/*  -  O  -  O  O  O  */  0x007e3320  /* chara オプション画面マネージャー */
/*  -  -  O  -  -  -  */  0x007ec114
/*  -  -  O  -  -  -  */  0x007edc1c
/*  O  O  O  -  O  O  */  0x007f3c88  /* command カメラ視界チェック */
/*  -  O  O  -  O  O  */  0x007f7acf  /* command ニキータイベント大統領耐久値取得 */
/*  O  -  -  -  -  -  */  0x007fa909
/*  O  O  O  O  O  O  */  0x0080b977  /* command システムコールバック */
/*  -  -  -  O  O  O  */  0x0080fb82  /* command ＶＲゲットタイム */
/*  -  O  -  -  O  O  */  0x008155f1  /* chara 新クリアコード表示 */
/*  -  O  -  O  O  O  */  0x0081584f  /* command タンカーカメラステータス初期化 */
/*  -  O  O  -  O  O  */  0x0081767c  /* chara コナミロゴ表示 */
/*  -  -  -  O  O  O  */  0x00818b2c  /* chara ＶＲクリア */
/*  O  -  -  -  -  -  */  0x0081aef4  (JAPANESE-ONLY)
/*  -  -  -  -  O  O  */  0x0081e7f6  /* command 敵兵カメラチェック初期化 */
/*  -  O  -  O  O  O  */  0x0082a05e  /* command store_loadedvar */
/*  -  O  O  -  O  O  */  0x0082bdc0  /* command VecLen */
/*  -  -  O  O  O  O  */  0x0082cb3e  /* command reboot */
/*  -  O  -  -  O  O  */  0x0082cb77  /* command 全体マップリアルタイム設定 */
/*  -  O  O  -  O  O  */  0x0083c0c3  /* chara ボス狙撃ヴァンプ */
/*  O  O  O  O  O  O  */  0x0083d857  /* chara ライト位置管理 */
/*  -  O  -  -  O  O  */  0x0083dd4d  /* chara ハリアー戦カサッカ */
/*  O  O  O  O  O  O  */  0x008422f6  /* command エルード設定 */
/*  -  -  O  -  -  -  */  0x008429ae
/*  -  -  -  -  O  O  */  0x00843c09  /* command ＶＲコンティニュー禁止 */
/*  -  O  O  O  O  O  */  0x00848e57  /* command ニキータタイマー設定 */
/*  -  O  -  -  O  O  */  0x0084b931  /* chara 二体表示カメラ */
/*  O  O  O  -  O  O  */  0x0085e8f4  /* chara ロッカー管理 */
/*  -  -  -  -  O  O  */  0x0086301d  /* chara ＶＲ子的 */
/*  -  O  -  -  O  O  */  0x0086d1cf  /* command 敵兵メモリーコピー */
/*  -  O  O  -  O  O  */  0x0086d382  /* chara デモ蛇手 */
/*  -  O  O  -  O  O  */  0x00873375  /* chara 水中ゴミマネージャ */
/*  -  -  O  -  -  -  */  0x0087426a
/*  O  O  O  O  O  O  */  0x0087a1c0  /* chara select */
/*  O  O  -  -  O  O  */  0x008826b9  /* chara デモ人形 */
/*  O  O  O  -  O  O  */  0x008862f6  /* chara くるくる物体 */
/*  -  -  -  O  -  -  */  0x008888d3
/*  -  O  -  -  O  O  */  0x0088cbf1  /* command ＳＥセットＶＰ */
/*  -  -  -  -  O  O  */  0x0088ed39  /* command セットＶＲＮＧ的スコア */
/*  -  O  -  O  O  O  */  0x0088f9b0  /* command 敵兵メモリーオールリセット */
/*  -  O  O  -  O  O  */  0x008975e6  /* chara 浮遊紙 */
/*  -  O  O  -  O  O  */  0x0089778a  /* chara 浮遊物 */
/*  O  O  O  -  O  O  */  0x0089af5e  /* chara 新雷フラッシュ */
/*  -  O  O  -  O  O  */  0x0089c365  /* chara ロッカー死体 */
/*  -  -  -  O  O  O  */  0x0089fec2  /* chara ＶＲ弾痕 */
/*  -  -  -  -  O  O  */  0x008a0c96  /* chara ボスラッシュ２結果 */
/*  -  -  -  O  O  O  */  0x008a43f9  /* chara ＶＲ跳弾 */
/*  -  -  -  -  O  O  */  0x008a8857  /* chara ダミーターゲット君 */
/*  O  O  O  -  O  O  */  0x008aa572  /* chara ロッカー */
/*  O  O  O  -  O  O  */  0x008ac901  /* chara プットテクスチャクロスフェードターゲット無し */
/*  -  O  O  -  O  O  */  0x008b12d1  /* command カメラ撮影時プロック */
/*  -  -  -  O  -  -  */  0x008b12fd
/*  O  O  O  -  O  O  */  0x008b19f0  /* command プレイヤー無敵セット */
/*  O  O  O  -  O  O  */  0x008b6086  /* command パッドチェック */
/*  O  O  O  -  O  O  */  0x008b976d  /* command ロッカー状態 */
/*  -  -  O  -  O  O  */  0x008c4a5b  /* chara スクリーンショット */
/*  O  O  O  -  O  O  */  0x008c58f7  /* chara 消火器 */
/*  -  O  -  -  O  O  */  0x008dfe63  /* command プレイヤー死体上立たせ */
/*  -  O  O  -  O  O  */  0x008e0676  /* command コントロール方向取得 */
/*  O  O  O  -  O  O  */  0x008e298d  /* chara デモキャンセルチェック */
/*  -  O  -  -  O  O  */  0x008f27ac  /* chara デモ用C4 */
/*  O  O  O  O  O  O  */  0x008ff6ad  /* command プラグイン自動ジャンプ */
/*  -  -  -  O  O  O  */  0x00901fd7  /* command ＶＲ爆発範囲 */
/*  -  -  -  -  O  O  */  0x0090342e  /* command Ｃ４管理初期化 */
/*  O  -  -  -  -  -  */  0x00904563
/*  O  O  O  -  O  O  */  0x009049ed  /* command プレイヤーロッカーモーション */
/*  -  O  O  -  O  O  */  0x0090b7ec  /* chara 水面監視水飛沫 */
/*  -  O  O  -  O  O  */  0x00912bfe  /* chara フォーチュン戦天井崩れ */
/*  -  -  -  -  O  O  */  0x00915101  /* chara 敵兵カメラチェックポーズ登録 */
/*  -  O  O  -  O  O  */  0x009173e7  /* command 全体マップ壊れ設定 */
/*  -  O  O  -  O  O  */  0x009208dc  /* command Ｏ２ゲージ表示 */
/*  -  -  -  -  O  O  */  0x00923e25  /* command ＶＲタイマーポーズ */
/*  -  O  O  -  O  O  */  0x00924573  /* command ゲット敵兵状態拡張版 */
/*  -  O  O  -  O  O  */  0x00926341  /* command プラグインエマ手繋ぎ */
/*  -  -  -  O  O  O  */  0x00926ace  /* command ＶＲ的速度係数 */
/*  -  O  O  O  O  O  */  0x0092a625  /* command プロダクトコード設定 */
/*  -  -  O  -  -  -  */  0x0092b9ad
/*  -  -  O  O  O  O  */  0x0092eb54  /* command getconfig */
/*  O  O  O  -  O  O  */  0x009307ab  /* chara スポットライト投影モデル */
/*  -  -  -  -  O  O  */  0x0093eeea  /* command ＶＲポーズ中クリア */
/*  -  O  O  -  O  O  */  0x0094193b  /* command エレベータ状態取得 */
/*  -  -  -  -  -  O  */  0x00943eaf  /* command ＸＢＯＸ用パッチ_d005p01_demo */
/*  O  O  O  O  O  O  */  0x00944e11  /* command メニュー設定 */
/*  O  O  O  -  O  O  */  0x0094c147  /* command プレイヤー死体歩き */
/*  -  O  O  -  O  O  */  0x00951c01  /* command 携帯呼出 */
/*  -  O  -  -  O  O  */  0x009530ae  /* chara ノード画面フレームアニメーション */
/*  -  O  O  -  O  O  */  0x00961325  /* chara プットカンニング台オブジェ */
/*  O  O  O  O  O  O  */  0x0096e361  /* chara 装備品サーバー */
/*  -  O  -  -  O  O  */  0x00971fda  /* chara トイレ流れ */
/*  -  O  O  -  O  O  */  0x009786f7  /* chara レーダ上動画 */
/*  -  O  O  -  O  O  */  0x0097889d  /* command 水中エマＯ２ゲット */
/*  -  O  -  -  O  O  */  0x0098137c  /* command ロードデータの秒単位タイムスタンプ */
/*  -  -  -  -  O  O  */  0x009837c4  /* command ゲットデジカメ被写体情報 */
/*  O  O  O  -  O  O  */  0x00987e81  /* chara ローカル風 */
/*  -  O  -  -  O  O  */  0x009890d0  /* command ゲット敵兵モード */
/*  -  -  -  -  O  O  */  0x0098a49d  /* chara デモサイト表示 */
/*  -  O  O  -  O  O  */  0x0098bd5b  /* chara 水飛沫管理 */
/*  -  -  O  -  -  -  */  0x0098c226
/*  -  O  O  -  O  O  */  0x0099615d  /* command ボスラッシュモードセット */
/*  -  O  O  -  O  O  */  0x009a75e7  /* chara 携帯端末 */
/*  -  -  -  -  O  O  */  0x009a97b2  /* command コントロール存在検査 */
/*  O  O  O  O  O  O  */  0x009aff54  /* chara アイテム */
/*  O  -  -  -  -  -  */  0x009b0e9f
/*  -  O  O  -  O  O  */  0x009b3b8b  /* chara エマ・エメリッヒ */
/*  -  O  -  -  O  O  */  0x009b3fd5  /* chara サイファ */
/*  -  O  O  -  O  O  */  0x009b65f0  /* chara タイマー */
/*  O  O  O  -  O  O  */  0x009bc66f  /* chara ロープモデル２ */
/*  O  O  O  O  O  O  */  0x009bc670  /* chara ロープモデル３ */
/*  O  -  -  -  -  -  */  0x009c2a64
/*  -  -  -  -  O  O  */  0x009c403e  /* command デジカメ画像セーブ */
/*  -  O  -  -  O  O  */  0x009cf455  /* command シナリオ前装備変更 */
/*  -  -  -  -  O  O  */  0x009d73d7  /* chara 湯気セット */
/*  O  O  O  O  O  O  */  0x009dcd6b  /* chara 環境光 */
/*  -  O  -  -  O  O  */  0x009dd632  /* command セットノイズ */
/*  -  O  O  -  O  O  */  0x009e1df3  /* command 弾水飛沫処理 */
/*  -  -  -  -  O  O  */  0x009e3c4f  /* chara ＶＲ床パネル */
/*  -  -  -  -  O  O  */  0x009e4d4a  /* chara タンカーカメラ写真表示 */
/*  -  -  -  -  O  O  */  0x009e5a92  /* command ミッションズコンティニュー回数取得 */
/*  O  O  -  -  O  O  */  0x009e63c2  /* command ゲット捕まえられ兵の名前 */
/*  -  O  O  O  O  O  */  0x009e8aeb  /* chara セーブ確認画面 */
/*  -  O  O  -  O  O  */  0x009f11bc  /* chara ＮＰＣスネーク */
/*  -  O  -  -  O  O  */  0x00a0a179  /* chara 連続発生線状泡 */
/*  -  O  O  -  O  O  */  0x00a151b1  /* command ベルトコンベア荷物管理 */
/*  O  O  -  -  O  O  */  0x00a1a665  /* command ゲットオルガライフ */
/*  -  -  O  -  -  -  */  0x00a1deb9
/*  -  O  -  -  O  O  */  0x00a3d28a  /* chara ボスラッシュ選択画面 */
/*  -  O  -  -  O  O  */  0x00a3e408  /* command セット敵兵メモリー */
/*  O  O  O  O  O  O  */  0x00a53aa7  /* chara フォグ */
/*  -  -  -  O  O  O  */  0x00a58f8a  /* chara ＶＲスクリーン */
/*  -  O  O  -  O  O  */  0x00a58fa5  /* chara 複数赤外線 */
/*  -  O  O  O  O  O  */  0x00a60221  /* command ゴルキャップあり */
/*  O  O  O  O  O  O  */  0x00a63d3b  /* chara Ｚフォーカス管理 */
/*  -  O  O  O  O  O  */  0x00a6a1ee  /* command ゴルキャップなし */
/*  -  O  O  -  O  O  */  0x00a6d9cf  /* command サイト表示制御 */
/*  -  O  O  -  O  O  */  0x00a710db  /* chara 海上巡回兵 */
/*  -  O  O  -  O  O  */  0x00a7195f  /* command ＮＰＣスネークのライフ */
/*  -  O  O  -  O  O  */  0x00a741fd  /* command プラグインはしご */
/*  -  O  O  -  O  O  */  0x00a7cb42  /* chara Ｏ２ゲージ */
/*  O  O  -  -  -  -  */  0x00a80554
/*  O  O  O  -  O  O  */  0x00a8560d  /* chara マンハット黄灯 */
/*  -  O  O  -  O  O  */  0x00a85ceb  /* command フォーチュン戦昇降機ボム消去 */
/*  O  O  O  -  O  O  */  0x00a895c4  /* chara プット頂点アニメオブジェ */
/*  -  O  O  -  O  O  */  0x00a97a70  /* chara 壊れコンピュータW12B */
/*  -  O  O  -  O  O  */  0x00a97eb2  /* chara 壊れコンピュータW24D */
/*  O  O  O  -  O  O  */  0x00a9ed03  /* chara スローパラメータ制御 */
/*  -  O  O  -  O  O  */  0x00ab381c  /* chara ノードシステム */
/*  O  O  O  O  O  O  */  0x00ab5a2a  /* command 常駐リソース設定 */
/*  O  O  O  -  O  O  */  0x00abfd5f  /* chara 水密ドア管理 */
/*  -  O  O  -  O  O  */  0x00ace3ff  /* chara 量産型ＲＡＹ設置 */
/*  -  O  O  -  O  O  */  0x00ad8864  /* chara フォーチュン戦壁ライト */
/*  -  O  O  -  O  O  */  0x00ae0f36  /* chara ＲＡＹサーバー設置 */
/*  O  -  -  -  -  -  */  0x00aec560
/*  -  -  O  -  -  -  */  0x00aee25b
/*  -  O  O  -  O  O  */  0x00af0a7a  /* chara 回転モデル */
/*  -  O  O  -  O  O  */  0x00af2208  /* chara 電撃床 */
/*  -  O  O  -  O  O  */  0x00af4cf6  /* chara かもめマネージャ */
/*  -  O  O  -  O  O  */  0x00afa5e7  /* chara 亀甲床 */
/*  -  O  -  -  O  O  */  0x00afdee4  /* command タイマーエンド */
/*  O  -  -  -  -  -  */  0x00b00459
/*  -  O  O  O  O  O  */  0x00b030e4  /* chara 全薬莢コントロール */
/*  -  -  O  -  -  -  */  0x00b0c115
/*  -  -  -  O  O  O  */  0x00b10086  /* command ＶＲコンボタイム */
/*  O  O  O  -  O  O  */  0x00b1abd8  /* command 水密ドア状態 */
/*  O  O  -  -  O  O  */  0x00b1e8d4  /* command セットクリアリング */
/*  -  -  -  -  O  O  */  0x00b23a64  /* chara 任意稲光 */
/*  -  O  O  O  O  O  */  0x00b2a6b7  /* chara マルチウェイト髪の毛モデル */
/*  -  O  O  -  O  O  */  0x00b2fd6c  /* chara 漏電火花 */
/*  O  O  O  O  O  O  */  0x00b35703  /* command 自動ジャンプ設定 */
/*  -  -  O  -  -  -  */  0x00b380d5
/*  -  O  O  -  O  O  */  0x00b3aa52  /* chara ベルトコンベアベルト */
/*  -  O  O  -  O  O  */  0x00b3d54e  /* command セットゾーンフラグ */
/*  -  O  O  -  O  O  */  0x00b3e388  /* chara 船倉兵 */
/*  -  -  -  -  O  O  */  0x00b414ae  /* command プレイヤーパッド設定 */
/*  O  O  O  -  O  O  */  0x00b431c3  /* chara プット投光器オブジェ */
/*  O  O  O  O  O  O  */  0x00b44bbb  /* command 壁床効果音設定 */
/*  -  -  -  O  O  O  */  0x00b4e108  /* chara ＶＲ空 */
/*  -  -  -  -  O  O  */  0x00b4e35c  /* chara ＶＲ壁 */
/*  -  O  -  -  O  O  */  0x00b53158  /* chara 水中血 */
/*  -  -  O  -  -  -  */  0x00b629af
/*  O  O  O  -  O  O  */  0x00b63a33  /* chara ブラー */
/*  -  -  -  O  O  O  */  0x00b63e47  /* command ＶＲ移動的スケール */
/*  -  O  O  -  O  O  */  0x00b66ae4  /* chara 電灯虫 */
/*  -  O  O  -  O  O  */  0x00b6e522  /* command イントルード主観カメラ補正 */
/*  -  O  O  O  O  O  */  0x00b74fd7  /* command ドッグタグゼロクリア */
/*  -  O  O  -  O  O  */  0x00b75003  /* chara 非破壊カメラ */
/*  -  O  O  O  O  O  */  0x00b7b5a7  /* command ローカルリソース設定 */
/*  -  -  O  -  -  -  */  0x00b7ecc2
/*  -  -  -  O  O  O  */  0x00b7f8e7  /* command ミッションズデータ初期化 */
/*  O  O  O  -  O  O  */  0x00b80de5  /* chara 位置指定雨 */
/*  -  -  -  O  O  O  */  0x00b89202  /* chara フェードオブジェ */
/*  -  O  O  -  O  O  */  0x00b8b5f7  /* command ブレード壁チェックなし */
/*  O  O  O  -  O  O  */  0x00b8b94d  /* chara 蓋付き段ボール */
/*  -  O  O  -  O  O  */  0x00b93d5e  /* chara 天狗兵ステージモニター */
/*  -  -  -  -  O  O  */  0x00b97d41  /* command 敵兵メモリーリセット */
/*  -  O  O  -  O  O  */  0x00ba92f5  /* command 武器アイテム取り返し */
/*  -  O  -  -  O  O  */  0x00bb6852  /* chara 水中エマ */
/*  O  O  O  -  O  O  */  0x00bbad24  /* chara 近景ぼかし */
/*  O  -  -  -  -  -  */  0x00bc5a8b
/*  -  -  O  -  -  -  */  0x00bc9497
/*  -  O  O  O  O  O  */  0x00bcb4a2  /* command ゲームオーバー呼びわけ */
/*  -  -  -  -  O  O  */  0x00bcee1a  /* command セットＶＲキルカウント */
/*  -  O  O  -  O  O  */  0x00bd28c4  /* command ポーズリセット */
/*  O  O  O  -  O  O  */  0x00bd400b  /* chara 影管理 */
/*  -  O  O  -  O  O  */  0x00bd4c61  /* chara カツラテクスチャ差し替え管理 */
/*  O  O  O  -  O  O  */  0x00bd673f  /* chara 雨速度可変 */
/*  -  O  -  -  O  O  */  0x00bd9cc1  /* chara 海上巡回コマンダー */
/*  -  O  -  -  O  O  */  0x00bdd6a9  /* chara ターゲットトラップ */
/*  O  O  O  -  O  O  */  0x00be0863  /* chara 床水飛沫 */
/*  -  O  -  -  O  O  */  0x00bed0ff  /* chara パイプ水滴マネージャ */
/*  -  O  O  -  O  O  */  0x00bf97ed  /* command プラグインベルトコンベア */
/*  -  O  -  -  O  O  */  0x00bfb0a1  /* chara ヴァンプ影縛りターゲット */
/*  -  -  O  -  -  -  */  0x00c08284
/*  -  O  O  -  O  O  */  0x00c0895a  /* command 死亡カモメ非表示 */
/*  -  O  O  -  O  O  */  0x00c09e6c  /* chara フナ虫リーダー */
/*  O  O  O  -  O  O  */  0x00c0e06d  /* chara ブルックリン赤灯 */
/*  -  -  -  -  O  O  */  0x00c13513  /* chara 紙芝居 */
/*  -  O  O  -  O  O  */  0x00c1451b  /* chara 円筒テクスチャ */
/*  -  O  O  -  O  O  */  0x00c1bc23  /* chara 主観デモプレイヤー */
/*  -  O  -  -  O  O  */  0x00c1eb06  /* command ゲット船倉兵座標 */
/*  -  O  O  -  O  O  */  0x00c1ff0f  /* chara 沈没タンカー */
/*  O  O  -  -  O  O  */  0x00c210e3  /* chara サブ画面 */
/*  -  O  -  -  O  O  */  0x00c27387  /* command ゲット人質ターゲット */
/*  -  O  O  -  O  O  */  0x00c2ad32  /* chara ＲＡＹステージ環境設定 */
/*  -  O  -  -  O  O  */  0x00c2eb8d  /* command エマ強制瞬間移動 */
/*  O  O  O  -  O  O  */  0x00c3189a  /* command プレイヤー瞬殺 */
/*  -  O  O  -  O  O  */  0x00c34b14  /* chara プット制御室モニター */
/*  -  O  O  -  O  O  */  0x00c3515f  /* chara 水中機雷 */
/*  -  O  O  -  O  O  */  0x00c3c46c  /* chara 偽ゲームオーバー画面 */
/*  -  O  O  -  O  O  */  0x00c41872  /* command ボスアンセットタイマーステータス */
/*  -  -  O  -  -  -  */  0x00c42407
/*  O  O  O  -  O  O  */  0x00c45437  /* chara プット瓶オブジェ */
/*  -  -  O  -  -  -  */  0x00c48407
/*  -  O  O  -  O  O  */  0x00c547a7  /* chara 床照り返し管理 */
/*  -  -  -  -  O  O  */  0x00c5994d  /* command ＶＲクリア＿結果の取得 */
/*  -  -  O  -  -  -  */  0x00c5c1b8
/*  -  O  O  -  O  O  */  0x00c5d24c  /* chara 通路用水面 */
/*  -  O  O  -  O  O  */  0x00c622a4  /* chara デモ虫 */
/*  -  -  -  -  O  O  */  0x00c64ecb  /* command ＶＲ全体マップ表示３Ｄ＿爆弾解除 */
/*  -  -  O  -  -  -  */  0x00c6eb85
/*  -  O  -  -  O  O  */  0x00c6f28e  /* command ファットマン非表示 */
/*  -  O  O  -  O  O  */  0x00c7280a  /* chara 長廊下コマンダー */
/*  O  O  O  O  O  O  */  0x00c74f97  /* command 配列セット */
/*  -  O  O  -  O  O  */  0x00c76d6e  /* command 装備ダンボール破壊 */
/*  -  -  -  -  O  O  */  0x00c7853f  /* command セットＶＲ的出現消え周期 */
/*  -  O  O  -  O  O  */  0x00c7ee15  /* command カモメ表示 */
/*  -  -  O  -  -  -  */  0x00c7f284
/*  -  -  -  -  O  O  */  0x00c84c1d  /* command ボスラッシュ２音声交換 */
/*  O  O  O  O  O  O  */  0x00c88afa  /* chara サウンドマネージャー */
/*  O  O  O  -  O  O  */  0x00c8dbcc  /* chara 水溜り管理 */
/*  -  O  O  -  O  O  */  0x00c9dd51  /* chara 汎用空 */
/*  -  O  O  -  O  O  */  0x00cb2c3e  /* chara 水中濁り */
/*  -  O  -  -  O  O  */  0x00cb6bed  /* command セット音量パラメータ */
/*  -  O  O  -  O  O  */  0x00cb6ec4  /* command メニューフナムシ取り付き状態取得 */
/*  -  O  O  -  O  O  */  0x00cb7de8  /* chara 懐中電灯 */
/*  O  O  O  -  O  O  */  0x00cba568  /* chara プット大ガラスオブジェ */
/*  O  O  O  -  O  O  */  0x00cbb124  /* chara 天井君 */
/*  -  O  O  -  O  O  */  0x00cbd98b  /* chara ボスラッシュカサッカ */
/*  -  O  O  O  O  O  */  0x00cc87a2  /* chara 2Dレイアウトドライバ */
/*  O  O  O  O  O  O  */  0x00cc9a07  /* chara アタッカー */
/*  -  O  -  -  O  O  */  0x00cd2045  /* command 現在の秒単位時間 */
/*  -  O  O  -  O  O  */  0x00cdb878  /* chara ニキータイベント大統領 */
/*  O  O  -  -  O  O  */  0x00cdc7bd  /* chara 武器水飛沫 */
/*  -  O  O  -  O  O  */  0x00cec17c  /* command アイテム収得可能範囲設定 */
/*  -  -  -  O  O  O  */  0x00ced375  /* chara ＶＲゴール */
/*  O  O  O  -  O  O  */  0x00cf777f  /* chara プットテクスチャクロスフェードワールド */
/*  -  -  -  -  O  O  */  0x00d0e799  /* command ミッションズリトライ回数取得 */
/*  O  O  O  -  O  O  */  0x00d10066  /* command 跳弾ＳＥのみ */
/*  -  O  O  -  O  O  */  0x00d110e2  /* chara フォーチュン戦揺れライト */
/*  O  O  O  -  O  O  */  0x00d1279a  /* chara プット植物オブジェ */
/*  -  O  -  -  O  O  */  0x00d1699d  /* command プレイヤーマップ名 */
/*  -  O  O  -  O  O  */  0x00d16c76  /* chara 水中カメラ */
/*  -  O  O  -  O  O  */  0x00d20fde  /* chara 巨大海面 */
/*  -  -  -  O  O  O  */  0x00d219b8  /* command ＶＲステージセット */
/*  O  O  O  -  O  O  */  0x00d2bd87  /* chara 風制御 */
/*  -  O  -  -  O  O  */  0x00d2c9aa  /* chara 息継ぎポイント管理 */
/*  -  -  O  -  -  -  */  0x00d2d940
/*  -  O  O  -  O  O  */  0x00d30863  /* command StreamStop */
/*  O  O  O  O  O  O  */  0x00d4090d  /* chara ＬＯＤ制御 */
/*  -  O  -  -  O  O  */  0x00d44dc7  /* command オプションフラグの内容を保存 */
/*  -  O  -  -  O  O  */  0x00d481ed  /* command 水中エマライフセット */
/*  -  -  -  O  O  O  */  0x00d51601  /* chara ルート兵チェック */
/*  -  O  O  -  O  O  */  0x00d5d6ef  /* chara 拡張海表示 */
/*  O  O  -  -  O  O  */  0x00d5ff97  /* command カメラ上下振動スイッチ */
/*  -  O  -  -  O  O  */  0x00d612a2  /* chara エマ虫 */
/*  O  O  O  -  O  O  */  0x00d6ed95  /* chara ブルックリン */
/*  -  O  O  -  O  O  */  0x00d72c78  /* chara プット壊れビル窓 */
/*  -  O  -  -  O  O  */  0x00d75a89  /* command ゲットタイマーステータス */
/*  -  O  -  -  O  O  */  0x00d8cff4  /* command タンカー編総ドッグタグ数 */
/*  -  O  O  -  O  O  */  0x00d90540  /* chara フォーチュン戦昇降機 */
/*  -  O  -  -  O  O  */  0x00d978ac  /* command ゲット敵兵状態２ */
/*  -  O  O  -  O  O  */  0x00d99a89  /* command セットタイマーステータス */
/*  -  O  -  -  O  O  */  0x00d99fb0  /* chara タイトロープ兵 */
/*  -  O  O  -  O  O  */  0x00d9c789  /* command 再生ＢＧＭ取得 */
/*  O  O  O  -  O  O  */  0x00da97fb  /* command トラップ切り替え */
/*  -  O  O  -  O  O  */  0x00daba9e  /* chara プラント明滅ライト */
/*  -  O  -  -  O  O  */  0x00db03a6  /* command 転送端末起動 */
/*  -  O  -  -  O  O  */  0x00db65ac  /* command 息継ぎポイント登録 */
/*  -  O  -  -  O  O  */  0x00dba0d1  /* command ゲットハリアー座標 */
/*  -  O  O  -  O  O  */  0x00dbd1fa  /* chara フォーチュン戦昇降機スイッチ */
/*  -  -  O  -  -  -  */  0x00dbdd8a
/*  -  O  O  -  O  O  */  0x00dc2f1b  /* chara ＩＰＵ表示パネル */
/*  -  O  O  -  O  O  */  0x00dc323f  /* chara カメラダスト */
/*  -  O  O  -  O  O  */  0x00dc80bf  /* chara レイブン人形 */
/*  -  O  O  O  O  O  */  0x00dc83c5  /* command ロードサウンドパック */
/*  -  -  -  -  O  O  */  0x00dcb281  /* command セーブ用参照変数登録 */
/*  -  O  O  -  O  O  */  0x00ddd2a3  /* command 崩落床状態取得 */
/*  -  -  -  O  O  O  */  0x00ddf457  /* command ＶＲ弾痕ノーマル */
/*  O  O  O  O  O  O  */  0x00ddf5ca  /* chara コマンダー */
/*  O  O  -  -  O  O  */  0x00de0400  /* chara 装備品Ａ */
/*  -  O  -  -  O  O  */  0x00de0401  /* chara 装備品Ｂ */
/*  O  O  O  -  O  O  */  0x00de0402  /* chara 装備品Ｃ */
/*  -  O  O  O  O  O  */  0x00de07c0  /* command フォント初期化 */
/*  -  O  O  -  O  O  */  0x00de4430  /* command 不可装備設定 */
/*  -  O  O  -  O  O  */  0x00dedde1  /* command 泡色変更 */
/*  O  O  O  -  O  O  */  0x00df5435  /* chara プット皿オブジェ */
/*  -  O  -  -  O  O  */  0x00e00fd1  /* chara 潜水ゴーグル */
/*  -  O  O  -  O  O  */  0x00e0344c  /* command ゲット捕まえられ兵の本当の名前 */
/*  -  -  -  O  O  O  */  0x00e0568b  /* chara ＶＲ床マーカー */
/*  O  O  O  -  O  O  */  0x00e0dbba  /* chara ２Ｄスプライト表示 */
/*  O  O  O  -  O  O  */  0x00e0dcba  /* chara ３Ｄスプライト表示 */
/*  O  O  -  -  O  O  */  0x00e1c26c  /* command ゲットオルガ目的地 */
/*  O  O  O  -  O  O  */  0x00e22388  /* chara フェードインアウト */
/*  -  O  O  -  O  O  */  0x00e2488b  /* command フォーチュン戦天井崩れ表示管理 */
/*  -  O  O  -  O  O  */  0x00e29adb  /* command シナリオデモ開始 */
/*  -  O  O  -  O  O  */  0x00e2a088  /* chara デバッグポーズ */
/*  -  O  O  -  O  O  */  0x00e2ed79  /* chara ドアパネル電撃 */
/*  -  O  -  -  O  O  */  0x00e32fc7  /* chara プット落下オブジェ */
/*  -  O  -  -  O  O  */  0x00e3429d  /* chara フォーチュン戦オイル燃え */
/*  -  O  O  -  O  O  */  0x00e3549b  /* command ノード画面起動 */
/*  -  O  -  -  O  O  */  0x00e39c0d  /* chara ２Ｄスプライト表示＿ポーズ */
/*  -  -  -  -  O  O  */  0x00e3c577  /* command テイルズステージセット */
/*  O  O  -  -  O  O  */  0x00e3eb1a  /* command ゲット敵兵座標 */
/*  -  O  -  -  O  O  */  0x00e3eea2  /* command ゲットフォーチュン弾座標 */
/*  O  O  O  -  O  O  */  0x00e41776  /* chara スポット雨 */
/*  -  O  O  -  O  O  */  0x00e48f2f  /* chara プットＳＥ鳴らし */
/*  -  -  O  -  -  -  */  0x00e4a12d
/*  O  O  O  -  O  O  */  0x00e4c507  /* command ゲットゲームステータス */
/*  -  -  -  -  O  O  */  0x00e4cea2  /* chara ゴルルゴン部位壊れ */
/*  -  O  O  -  O  O  */  0x00e4d016  /* chara プロジェクタライト */
/*  -  O  O  -  O  O  */  0x00e52073  /* chara エリアダスト */
/*  -  O  -  -  O  O  */  0x00e5ff03  /* command プレイヤー主観腕壊れ手錠 */
/*  O  O  O  O  O  O  */  0x00e6b658  /* command ゲット敵兵状態 */
/*  -  O  -  -  O  O  */  0x00e73ac4  /* command カメラチェックキャラ削除 */
/*  -  O  O  -  O  O  */  0x00e74f46  /* command ポーズセット */
/*  -  O  O  O  O  O  */  0x00e76d74  /* command 解析封じ変数移動 */
/*  -  O  O  -  O  O  */  0x00e79927  /* command シナリオデモ終了 */
/*  O  O  O  -  O  O  */  0x00e9021d  /* chara トラップ専用C4 */
/*  O  O  O  O  O  O  */  0x00e96d82  /* chara 無線システム */
/*  -  O  O  -  O  O  */  0x00ea5215  /* chara 崩落床 */
/*  O  O  O  -  O  O  */  0x00ead648  /* command 強制モーションキャンセル */
/*  -  -  -  -  O  O  */  0x00eb7eda  /* chara 水中ゴルルゴン */
/*  O  O  O  -  O  O  */  0x00ebec24  /* chara 水密ドア */
/*  -  O  O  -  O  O  */  0x00ec084b  /* chara ステージ置き炎 */
/*  -  -  O  -  -  -  */  0x00ec0fc6
/*  -  O  -  -  O  O  */  0x00ec40c7  /* command カメラチェックキャラ登録 */
/*  O  O  O  -  O  O  */  0x00ecc9de  /* chara メリケン粉 */
/*  -  -  -  -  O  O  */  0x00ed1e0b  /* chara ＶＲオブジェ */
/*  -  O  O  -  O  O  */  0x00ed4678  /* chara カメラ前曇り */
/*  -  O  -  -  O  O  */  0x00ee8700  /* command ゲットスネーク座標 */
/*  O  O  O  -  O  O  */  0x00ee8b90  /* command ＳＥセットモード */
/*  -  O  -  -  O  O  */  0x00eee657  /* chara エマ・ロッカーの中にいる */
/*  -  O  -  -  O  O  */  0x00efd440  /* command ゲットフォーチュングレネード座標 */
/*  -  -  -  O  O  O  */  0x00effdac  /* command ＶＲステージポーズ */
/*  O  O  -  -  O  O  */  0x00f005a3  /* command クリアリングキャンセル */
/*  -  -  O  -  -  -  */  0x00f0c7f2
/*  -  O  O  -  O  O  */  0x00f0f504  /* command 全体マップ選択可能範囲設定 */
/*  -  O  O  -  O  O  */  0x00f15e47  /* command カメラチェック面ワーク確保 */
/*  O  O  -  -  O  O  */  0x00f26728  /* chara 速度可変 */
/*  -  O  -  -  O  O  */  0x00f2dfcd  /* command load_restart */
/*  O  O  O  O  O  O  */  0x00f2eedc  /* command セットサウンドコード */
/*  O  O  O  O  O  O  */  0x00f37560  /* chara 追跡血 */
/*  -  -  O  -  -  -  */  0x00f40c20
/*  -  -  -  -  O  O  */  0x00f466b6  /* chara ボスラッシュ２テロップ表示 */
/*  -  O  O  -  O  O  */  0x00f4bbf5  /* chara ボスタイマー */
/*  -  O  -  -  O  O  */  0x00f52ed4  /* chara オウム */
/*  -  -  -  O  O  O  */  0x00f5bf46  /* chara あたり付き人形 */
/*  O  O  -  -  O  O  */  0x00f5c132  /* command ゲットホロ状況 */
/*  -  O  O  -  O  O  */  0x00f62833  /* chara フレーム退避 */
/*  -  O  O  O  O  O  */  0x00f63b18  /* chara プラントカメラ */
/*  -  O  O  -  O  O  */  0x00f6ada8  /* command ＵＳＰライトＯＮ */
/*  -  -  O  -  -  -  */  0x00f6ef99
/*  O  O  O  -  O  O  */  0x00f706cd  /* chara ＯＦＦ制御 */
/*  -  O  O  -  O  O  */  0x00f74020  /* chara 画像転送端末 */
/*  -  -  -  -  O  O  */  0x00f77507  /* chara パッド振動スクリプト */
/*  -  O  O  -  O  O  */  0x00f7e492  /* command はしご設定 */
/*  O  O  O  O  O  O  */  0x00f7f777  /* chara 警備兵 */
/*  -  O  O  -  O  O  */  0x00f8f4e8  /* command デモローポリ劇場 */
/*  -  O  O  -  O  O  */  0x00f91a08  /* chara 透明床 */
/*  O  O  O  -  O  O  */  0x00f91b9f  /* chara 透明壁 */
/*  -  -  -  O  O  O  */  0x00f92b8e  /* command プレイヤー消去キャラ */
/*  O  O  O  -  O  O  */  0x00f9711e  /* chara ジョージワシントン橋のライン補強モデル */
/*  -  O  O  -  O  O  */  0x00f9c62d  /* command スプレー当たり判定拡大 */
/*  -  O  O  -  O  O  */  0x00fa4e80  /* chara 六角フェード */
/*  -  O  O  -  O  O  */  0x00fad3ae  /* command 指向性マイク音量パン */
/*  -  O  -  -  O  O  */  0x00faedf1  /* chara ソリダス */
/*  -  O  O  O  O  O  */  0x00fb029a  /* command 武器ライト */
/*  -  O  O  O  O  O  */  0x00fbeb7f  /* command ゲームオーバーチェック */
/*  -  O  -  -  O  O  */  0x00fc14a5  /* chara タイトル画面マネージャー */
/*  -  O  -  -  O  O  */  0x00fc6185  /* command 内包チェック */
/*  -  O  O  -  O  O  */  0x00fca1a4  /* command ブレードエフェクトオン */
/*  -  -  O  -  -  -  */  0x00fd6181
/*  -  O  O  -  O  O  */  0x00fdda41  /* chara ターゲットプロック */
/*  -  O  O  -  O  O  */  0x00fe39e8  /* command フォーチュン索敵初期化 */
/*  -  O  O  -  O  O  */  0x00fe5c5b  /* chara 天狗兵Ａ */
/*  -  O  O  -  O  O  */  0x00fe5c5c  /* chara 天狗兵Ｂ */
/*  -  O  -  -  O  O  */  0x00fe5f3d  /* chara WEBサイト */
/*  -  O  -  O  O  O  */  0x00fe6730  /* chara sound_test */
/*  O  O  O  -  O  O  */  0x00fe6f50  /* chara モデル切り替えアニメ */
/*  -  O  -  -  O  O  */  0x00fea0c9  /* command ジャンプ時重力セット */
/*  -  -  O  -  -  -  */  0x00fed1b1
/*  -  -  O  -  -  -  */  0x00fed582
/*  -  O  O  -  O  O  */  0x00fef2d9  /* command ベルトコンベア時プロック設定 */
/*  -  O  -  -  O  O  */  0x00ff5b55  /* command プラント編総ドッグタグ数 */
/*  -  O  O  O  O  O  */  0x00ffbece  /* chara MOVIE再生 */
/*  -  -  -  O  O  O  */  0x00ffc196  /* chara ステージアウトライン */
/*  -  O  -  -  O  O  */  0x00ffd75e  /* command ゲット敵兵アクション */
/*  -  O  O  -  O  O  */  0x00ffe7a7  /* command ゲットカサッカライフ */
/*  -  O  O  -  O  O  */  0x00ffed03  /* chara プロック連続実行 */
/*  -  -  -  -  O  O  */  0x00fff6c6  /* command ＵＳＰライト鏡面 */

/*--- Polygon Demo Charas ---*/
/*  O  O  O  -  O  O  */  0x01000000  NewFogSet_Demo_0000Launch
/*  O  O  O  -  O  O  */  0x01000001  NewFarFocusEffect_0001Launch
/*  O  O  O  -  O  O  */  0x01000002  NewNearFocusEffect_0002Launch
/*  O  O  O  -  O  O  */  0x01000003  NewFadeInOut_Demo_0003Launch
/*  O  O  O  -  O  O  */  0x01000004  NewRainCamera_Demo_0004Launch
/*  -  O  O  -  O  O  */  0x01000005  NewFlush_0005Launch
/*  O  O  O  -  O  O  */  0x01000006  DM_ChangeAmbient_0006Launch
/*  O  O  O  -  O  O  */  0x01000007  DM_ChangeParallel_0007Launch
/*  O  O  O  -  O  O  */  0x01000008  NewFadeInOutForce_Demo_0008Launch
/*  -  O  O  -  O  O  */  0x01000009  NewContrast_Demo_0009Launch
/*  -  O  O  -  O  O  */  0x0100000a  NewContrastForce_Demo_000aLaunch
/*  O  O  O  -  O  O  */  0x0100000b  NewSK_ScopeSight_000bLaunch
/*  -  O  O  -  O  O  */  0x0100000c  NewScrCrack_000cLaunch
/*  -  O  O  -  O  O  */  0x0100000d  New2DSprite_Prog_000dLaunch
/*  O  O  O  -  O  O  */  0x0100000e  NewCigarette_Demo_000eLaunch
/*  -  O  O  -  O  O  */  0x0100000f  NewLensFlare_Demo_000fLaunch
/*  -  O  O  -  O  O  */  0x01000011  NewBlur_Demo_0011Launch
/*  -  O  O  -  O  O  */  0x01000012  NewCrossFadeEffect_0012Launch
/*  -  O  O  -  O  O  */  0x01000013  NewCrossFadeEffectCustom_0013Launch
/*  -  O  O  -  O  O  */  0x01000014  NewScrWater_Demo_0014Launch
/*  -  O  O  -  O  O  */  0x01000015  NewScrConcentrateBlur_0015Launch
/*  -  O  O  -  O  O  */  0x01000016  NewRaySight_0016Launch
/*  -  O  O  -  O  O  */  0x01000017  NewVtrSight_0017Launch
/*  -  O  O  -  O  O  */  0x01000018  OK_FogStatusSet_0018Launch
/*  -  O  O  -  O  O  */  0x01000019  NewRainFogPersFast_0019Launch
/*  -  O  O  -  O  O  */  0x0100001a  NewDEMODigitalCamera_001aLaunch
/*  -  O  O  -  O  O  */  0x0100001c  NewPsg1Sight_001cLaunch
/*  -  O  O  -  O  O  */  0x0100001d  NewDEMO_Equip_001dLaunch
/*  -  O  O  -  O  O  */  0x0100001f  NewDemoSun_001fLaunch
/*  -  O  O  -  O  O  */  0x01000020  NewScnAiRaySight_0020Launch
/*  -  O  O  -  O  O  */  0x01000021  NewExplosionControl_Demo_0021Launch
/*  -  O  O  -  O  O  */  0x01000022  NewNyou_0022Launch
/*  -  O  O  -  O  O  */  0x01000023  NewFortuneTear_0023Launch
/*  -  O  O  -  O  O  */  0x01000024  NewScrGoggles_demo_0024Launch
/*  -  O  O  -  O  O  */  0x01000025  NewScrDrop_demo_0025Launch
/*  -  O  O  -  O  O  */  0x01000026  NewScrWaterFilm_0026Launch
/*  -  O  O  -  O  O  */  0x01000031  NewRainFogPersFast2_0031Launch
/*  -  O  O  -  O  O  */  0x01000033  NewRainFogPersDemo_0033Launch
/*  O  O  O  -  O  O  */  0x01000100  NewSplashMotion_Demo_0100Launch
/*  O  O  O  -  O  O  */  0x01000101  NewSplashRipple_Demo_0101Launch
/*  O  O  O  -  O  O  */  0x01000103  NewFootSplash_0103Launch
/*  O  O  O  -  O  O  */  0x01000104  NewBodySplash3_0104Launch
/*  O  O  O  -  O  O  */  0x01000105  NewDiveSplash_Parent_0105Launch
/*  -  O  O  -  O  O  */  0x01000106  NewSphereSplush_0106Launch
/*  -  O  O  -  O  O  */  0x01000107  NewWaveSplash_Demo_0107Launch
/*  -  O  O  -  O  O  */  0x01000108  NewWallTidal_0108Launch
/*  -  O  O  -  O  O  */  0x01000109  NewWaterWindSplush_DEMO_0109Launch
/*  -  O  O  -  O  O  */  0x01000201  NewRipBubbleMan_DEMO_0201Launch
/*  -  O  O  -  O  O  */  0x01000202  NewRaidenMaskBubbleDemo_0202Launch
/*  O  O  O  -  O  O  */  0x010007d1  NewTraffic_Demo_07d1Launch
/*  O  O  O  -  O  O  */  0x01001000  NewDropShadow_1000Launch
/*  O  O  O  -  O  O  */  0x01001001  NewShadow_1001Launch
/*  O  O  O  -  O  O  */  0x01001002  NewEneEquip_1002Launch
/*  O  O  O  -  O  O  */  0x01001005  NewRaincoat_called_1005Launch
/*  O  O  O  -  O  O  */  0x01001006  NewPutAttachments_1006Launch
/*  O  O  O  -  O  O  */  0x01001007  NewPutAttachments_1007Launch
/*  O  O  O  -  O  O  */  0x01001008  NewGbsHandDemo_1008Launch
/*  O  O  O  -  O  O  */  0x01001009  NewGbsFaceDemo_1009Launch
/*  O  O  O  -  O  O  */  0x0100100a  NewBodyShadowVolume_Demo_100aLaunch
/*  O  O  O  -  O  O  */  0x0100100c  NewPutAttachments_100cLaunch
/*  -  O  O  -  O  O  */  0x0100100d  NewEyeControl_100dLaunch
/*  -  O  O  -  O  O  */  0x0100100f  NewDemoArkms_100fLaunch
/*  -  O  O  -  O  O  */  0x01001010  NewArmsEffectControl_1010Launch
/*  -  O  O  -  O  O  */  0x01001011  NewDemoArkms_NYPD_1011Launch
/*  -  O  O  -  O  O  */  0x01001012  NewCreateEquipment_1012Launch
/*  -  O  O  -  O  O  */  0x01001013  NewEyeControl2_1013Launch
/*  -  O  O  -  O  O  */  0x01001014  NewFortEquip_1014Launch
/*  -  O  O  -  O  O  */  0x01001015  NewEmmaEquip_1015Launch
/*  -  O  O  -  O  O  */  0x01001016  NewEyeAnimSEALS_Demo_1016Launch
/*  -  O  O  -  O  O  */  0x01001017  NewFortSling_1017Launch
/*  -  O  O  -  O  O  */  0x01001018  NewFortBulletDemo_1018Launch
/*  -  O  O  -  O  O  */  0x01001019  NewLinerGunInitEffect_1019Launch
/*  -  O  O  -  O  O  */  0x0100101a  NewOrgFaceEft_101aLaunch
/*  -  O  O  -  O  O  */  0x0100101b  NewDemoArmControl_101bLaunch
/*  -  O  O  -  O  O  */  0x0100101c  NewDependArms_101cLaunch
/*  -  O  O  -  O  O  */  0x0100101d  NewDependArms_Aks_101dLaunch
/*  -  O  O  -  O  O  */  0x0100101e  NewBreathDemo_101eLaunch
/*  -  O  O  -  O  O  */  0x0100101f  NewPutAttachments_101fLaunch
/*  -  O  O  -  O  O  */  0x01001020  PL_RaidenEquipmentManager_1020Launch
/*  -  O  O  -  O  O  */  0x01001021  NewDependArms_USP_SP_1021Launch
/*  -  O  O  -  O  O  */  0x01001022  NewScnEvm_SkirtA_1022Launch
/*  -  O  O  -  O  O  */  0x01001023  NewScnEvm_SkirtB_1023Launch
/*  -  O  O  -  O  O  */  0x01001024  NewFortSling2_1024Launch
/*  -  O  O  -  O  O  */  0x01001027  NewWine_1027Launch
/*  -  O  O  -  O  O  */  0x01001028  NewDemoArkms_CitMale_1028Launch
/*  -  O  O  -  O  O  */  0x01001029  NewDemoArkms_CitFemale_1029Launch
/*  -  O  O  -  O  O  */  0x0100102a  NewDependArms_Kill_102aLaunch
/*  O  O  O  -  O  O  */  0x01002000  NewThunder_Demo_2000Launch
/*  O  O  O  -  O  O  */  0x01002002  NewLocalWind_Demo_2002Launch
/*  O  O  O  -  O  O  */  0x01002003  NewSlowParamMan_prog_2003Launch
/*  -  O  O  -  O  O  */  0x01002004  NewLocalWind2_Demo_2004Launch
/*  O  O  O  -  O  O  */  0x01003000  NewRopeModel3_called_3000Launch
/*  O  O  O  -  O  O  */  0x01003004  NewRopeModel3_called_3004Launch
/*  -  O  O  -  O  O  */  0x01003007  NewEvmHairModel_Demo_3007Launch
/*  -  O  O  -  O  O  */  0x01003009  NewEvmHairModel_Demo2_3009Launch
/*  -  O  O  -  O  O  */  0x01003010  NewWavingClothModelW_called_3010Launch
/*  O  O  O  -  O  O  */  0x01003011  NewEvmMMOrga_called_3011Launch
/*  -  O  O  -  O  O  */  0x01003012  NewCergeiEri_demo_3012Launch
/*  -  O  O  -  O  O  */  0x01003013  NewSolMant_called_3013Launch
/*  -  O  O  -  O  O  */  0x01003014  NewRopeModel3_called_3014Launch
/*  -  O  O  -  O  O  */  0x01003015  NewHandcuff_called_3015Launch
/*  -  O  O  -  O  O  */  0x01003017  NewRopeModel3_called_3017Launch
/*  -  O  O  -  O  O  */  0x01003019  NewRopeModel3_called_3019Launch
/*  O  O  O  -  O  O  */  0x01004000  NewPutSTanimeObjectCall_4000Launch
/*  O  O  O  -  O  O  */  0x01004001  DM_SendEffectMessage_4001Launch
/*  O  O  O  -  O  O  */  0x01004002  NewInterPoly_Demo_4002Launch
/*  -  O  O  -  O  O  */  0x01004004  NewVADemo_4004Launch
/*  O  O  O  -  O  O  */  0x01006000  NewSpark_6000Launch
/*  O  O  O  -  O  O  */  0x01006002  NewPlasmaPoly_Demo_6002Launch
/*  O  -  -  -  -  -  */  0x01006004  NewVanimeBullerCall_6004Launch
/*  O  O  O  -  O  O  */  0x01006005  NewDemoBulletCall_6005Launch
/*  O  O  O  -  O  O  */  0x01006006  NewOpticalCamouflageBreakDemo2_6006Launch
/*  -  O  O  -  O  O  */  0x01006007  NewDebris_Cm_Demo_6007Launch
/*  -  O  O  -  O  O  */  0x01006008  NewDebris_Tex_Demo_6008Launch
/*  -  O  O  -  O  O  */  0x01006009  NewBombEffect_6009Launch
/*  -  O  O  -  O  O  */  0x0100600a  NewFlyingSmoke_600aLaunch
/*  -  O  O  -  O  O  */  0x0100600b  NewBombGasEffect_600bLaunch
/*  -  O  O  -  O  O  */  0x0100600e  NewTs_Spark_600eLaunch
/*  -  O  O  -  O  O  */  0x01006010  NewMesgBomb2_6010Launch
/*  -  O  O  -  O  O  */  0x01006011  NewGeneralSprite2_6011Launch
/*  -  O  O  -  O  O  */  0x01006012  NewSonicWave_6012Launch
/*  -  O  O  -  O  O  */  0x01006013  NewMesgBomb3_6013Launch
/*  -  O  O  -  O  O  */  0x01006014  NewFortBarrierDemo_6014Launch
/*  -  O  O  -  O  O  */  0x01006015  NewDebris_Cm_Demo2_6015Launch
/*  -  O  O  -  O  O  */  0x01006016  NewDebris_Tex_Demo2_6016Launch
/*  -  O  O  -  O  O  */  0x01006017  NewDemoHarrierMissileFire2_6017Launch
/*  -  O  O  -  O  O  */  0x01006018  NewDemoStageFire_6018Launch
/*  -  O  O  -  O  O  */  0x01006019  NewDemoSolidusDashFire_6019Launch
/*  -  O  O  -  O  O  */  0x0100601a  NewParrotFeather_601aLaunch
/*  -  O  O  -  O  O  */  0x0100601b  NewDemoSolidusDashFire2_601bLaunch
/*  -  O  O  -  O  O  */  0x0100601c  NewMAOParticle_601cLaunch
/*  -  O  O  -  O  O  */  0x0100601d  NewKamomeFeather_601dLaunch
/*  -  O  O  -  O  O  */  0x0100601f  NewHexagonalPattern_601fLaunch
/*  -  O  O  -  O  O  */  0x01006020  NewDemoBodyPlasma_6020Launch
/*  -  O  O  -  O  O  */  0x01006021  NewDemoElectricFloor_6021Launch
/*  -  O  O  -  O  O  */  0x01006022  NewDemoSolidusMissileFire_6022Launch
/*  -  O  O  -  O  O  */  0x01006023  NewDemoSolidusMissileSmoke_6023Launch
/*  -  O  O  -  O  O  */  0x01006024  NewDemoBladeSpark_6024Launch
/*  -  O  O  -  O  O  */  0x01006025  NewDemoSolidusSnakearmFlow_6025Launch
/*  -  O  O  -  O  O  */  0x01006026  NewDemoSolidusBladeLight_6026Launch
/*  -  O  O  -  O  O  */  0x01006027  NewDemoSolidusEnergyPrim_6027Launch
/*  -  O  O  -  O  O  */  0x01006028  NewDemoBladeFlow_6028Launch
/*  -  O  O  -  O  O  */  0x01006029  NewPlasmaEvade_6029Launch
/*  -  O  O  -  O  O  */  0x0100602a  NewDemoPlasmaLineColor_602aLaunch
/*  -  O  O  -  O  O  */  0x0100602c  NewDemoCypherPlasma_602cLaunch
/*  -  O  O  -  O  O  */  0x01006030  NewDebris_Cm_DemoBlood_6030Launch
/*  -  O  O  -  O  O  */  0x01006031  NewDebris_Tex_DemoBlood_6031Launch
/*  O  O  O  -  O  O  */  0x01007001  NewBlood_Demo_7001Launch
/*  -  O  O  -  O  O  */  0x01007002  NewBlood2_Demo_7002Launch
/*  -  O  O  -  O  O  */  0x01007003  AN_Blood_Mist_7003Launch
/*  -  O  O  -  O  O  */  0x0100700b  NewBloodWeep_700bLaunch
/*  -  O  O  -  O  O  */  0x0100700c  NewPeterBlood_700cLaunch
/*  -  O  O  -  O  O  */  0x0100700d  NewDemoSplashBlood_700dLaunch
/*  -  O  O  -  O  O  */  0x0100700e  NewDemoDummyPointBlood_700eLaunch
/*  -  O  O  -  O  O  */  0x0100700f  NewBlood_Demo2_700fLaunch
/*  O  O  O  -  O  O  */  0x01007100  NewSmokeBlurEffect_7100Launch
/*  O  O  O  -  O  O  */  0x01007101  NewCommonSmoke_7101Launch
/*  -  O  O  -  O  O  */  0x01007102  NewDynamicFlow_Demo_7102Launch
/*  -  O  O  -  O  O  */  0x01007103  NewLineSmoke_7103Launch
/*  -  O  O  -  O  O  */  0x01007104  NewDemoHarrierMissileSmokeLine2_7104Launch
/*  -  O  O  -  O  O  */  0x01007105  NewDemoHarEffect_7105Launch
/*  -  O  O  -  O  O  */  0x01007106  NewDemoHarrierDamageSmoke_7106Launch
/*  -  O  O  -  O  O  */  0x01007107  NewDemoRisingSmoke_7107Launch
/*  -  O  O  -  O  O  */  0x01007108  NewSmokeReactionClient_7108Launch
/*  -  O  O  -  O  O  */  0x01007109  NewDemoRisingSmokeFix_7109Launch
/*  -  O  O  -  O  O  */  0x0100710a  NewDemoRisingSmokeDummy_710aLaunch
/*  -  O  O  -  O  O  */  0x0100710c  NewFatmanDemoScratchSmoke_710cLaunch
/*  -  O  O  -  O  O  */  0x0100710d  NewSmokeStripControl_710dLaunch
/*  -  O  O  -  O  O  */  0x0100710e  NewSmokeMitsukoshiMan_710eLaunch
/*  -  O  O  -  O  O  */  0x0100710f  NewPeterBlood_Gas_710fLaunch
/*  O  O  O  -  O  O  */  0x01008000  DM_SendEffectMessage_8000Launch
/*  O  O  O  -  O  O  */  0x01009000  NewPadVibration2_9000Launch
/*  O  O  O  -  O  O  */  0x0100a002  NewRunTelop_Trial_a002Launch
/*  -  O  O  -  O  O  */  0x0100a003  NewSplushSurfaceMan_a003Launch
/*  -  O  O  -  O  O  */  0x0100a004  NewRippleMan_a004Launch
/*  -  O  O  -  O  O  */  0x0100b000  NewWaterLevelControl_Demo_b000Launch
/*  -  O  O  -  O  O  */  0x0100b001  NewDropBodySplush_b001Launch
/*  -  O  O  -  O  O  */  0x0100b002  OK_PutSplushSurface_b002Launch
/*  -  O  O  -  O  O  */  0x0100b003  NewSplushTidal_b003Launch
/*  -  O  O  -  O  O  */  0x0100b004  NewSeaSurfaceReactionObject_b004Launch
/*  -  O  O  -  O  O  */  0x0100b005  NewAutoSplush_b005Launch
/*  -  O  O  -  O  O  */  0x0100b006  NewAutoSplush_EftCtrl_b006Launch
/*  -  O  O  -  O  O  */  0x0100b007  NewBloodWater_demo_b007Launch
/*  -  O  O  -  O  O  */  0x0100b040  TAKABE_RiseWaveEx_b040Launch
/*  -  O  O  -  O  O  */  0x0100c100  NewEvmLateControl_c100Launch
/*  -  O  O  -  O  O  */  0x0100d000  NewRayConsol_d000Launch
/*  -  O  O  -  O  O  */  0x0100d001  NewRayEye_d001Launch
/*  -  O  O  -  O  O  */  0x0100d002  NewWaterPollute_demo_d002Launch
/*  -  O  O  -  O  O  */  0x0100d003  NewRayMissileShower_d003Launch
/*  -  O  O  -  O  O  */  0x0100d004  NewRayMonoEye_Demo_d004Launch
/*  -  O  O  -  O  O  */  0x0100d005  NewRayMissileForDemo_d005Launch
/*  -  O  O  -  O  O  */  0x0100d006  NewRayFootSplash_d006Launch
/*  -  O  O  -  O  O  */  0x0100d007  NewRayOozeBloodDemo_d007Launch
/*  -  O  O  -  O  O  */  0x0100d008  PDRAY_OozeBloodAddDemo_d008Launch
/*  -  O  O  -  O  O  */  0x0100d009  PDRAY_CLOUD_DeleteDensity_d009Launch
/*  -  O  O  -  O  O  */  0x0100d00a  NewDemoRayFallBlood_d00aLaunch
/*  -  O  O  -  O  O  */  0x0100d00b  NewFogWave_d00bLaunch
/*  O  O  O  -  O  O  */  0x010fff00  DM_DebugPrint_fff00Launch
/*  O  O  O  -  O  O  */  0x010fff01  DM_ExecProc_fff01Launch
/*  O  O  O  -  O  O  */  0x010fff02  DM_SetClipParam_fff02Launch
/*  O  O  O  -  O  O  */  0x010fff03  NewDemoFrameCountCall_fff03Launch
/*  -  O  O  -  O  O  */  0x010fff04  NewControlBoy_fff04Launch
/*  -  O  O  -  O  O  */  0x010fff05  NewDemoEffectInitialize_fff05Launch
/*  -  O  O  -  O  O  */  0x010ffff0  DM_ControlChange_ffff0Launch

#endif // 0
#endif // {{{ END OF FILE }}}
