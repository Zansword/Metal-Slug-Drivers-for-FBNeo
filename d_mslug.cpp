//
// Metal Slug Series and hacks
//

// Metal Slug - Super Vehicle-001

static struct BurnRomInfo mslugRomDesc[] = {
	{ "201-p1.p1",    0x200000, 0x08d8daa5, 1 | BRF_ESS | BRF_PRG }, //  0 68K code			/ TC5316200

	{ "201-s1.s1",    0x020000, 0x2f55958d, 2 | BRF_GRA },           //  1 Text layer tiles / TC531000

	{ "201-c1.c1",    0x400000, 0x72813676, 3 | BRF_GRA },           //  2 Sprite data		/ TC5332205
	{ "201-c2.c2",    0x400000, 0x96f62574, 3 | BRF_GRA },           //  3 					/ TC5332205
	{ "201-c3.c3",    0x400000, 0x5121456a, 3 | BRF_GRA },           //  4 					/ TC5332205
	{ "201-c4.c4",    0x400000, 0xf4ad59a3, 3 | BRF_GRA },           //  5 					/ TC5332205

	{ "201-m1.m1",    0x020000, 0xc28b3253, 4 | BRF_ESS | BRF_PRG }, //  6 Z80 code			/ TC531001

	{ "201-v1.v1",    0x400000, 0x23d22ed1, 5 | BRF_SND },           //  7 Sound data		/ TC5332204
	{ "201-v2.v2",    0x400000, 0x472cf9db, 5 | BRF_SND },           //  8 					/ TC5332204
};

STDROMPICKEXT(mslug, mslug, neogeo)
STD_ROM_FN(mslug)

struct BurnDriver BurnDrvmslug = {
	"mslug", NULL, "neogeo", NULL, "1996",
	"Metal Slug - Super Vehicle-001\0", NULL, "Nazca", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_SWAPP, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugRomInfo, mslugRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// GOTVG  Metal Slug - Super Vehicle-001 (Multifunction Hack 20180430)
// mslugs18 in HBMAME.
static struct BurnRomInfo mslugdgRomDesc[] = {
	{ "201-p1.bin",    0x200000, 0x0a739521, 1 | BRF_ESS | BRF_PRG }, //  0 68K code			/ TC5316200

	{ "201-s1.s1",    0x020000, 0x2f55958d, 2 | BRF_GRA },           //  1 Text layer tiles / TC531000

	{ "201-c1.c1",    0x400000, 0x72813676, 3 | BRF_GRA },           //  2 Sprite data		/ TC5332205
	{ "201-c2.c2",    0x400000, 0x96f62574, 3 | BRF_GRA },           //  3 					/ TC5332205
	{ "201-c3.c3",    0x400000, 0x5121456a, 3 | BRF_GRA },           //  4 					/ TC5332205
	{ "201-c4.c4",    0x400000, 0xf4ad59a3, 3 | BRF_GRA },           //  5 					/ TC5332205

	{ "201-m1.m1",    0x020000, 0xc28b3253, 4 | BRF_ESS | BRF_PRG }, //  6 Z80 code			/ TC531001

	{ "201-v1.v1",    0x400000, 0x23d22ed1, 5 | BRF_SND },           //  7 Sound data		/ TC5332204
	{ "201-v2.v2",    0x400000, 0x472cf9db, 5 | BRF_SND },           //  8 					/ TC5332204
};

STDROMPICKEXT(mslugdg, mslugdg, neogeo)
STD_ROM_FN(mslugdg)

struct BurnDriver BurnDrvmslugdg = {
	"mslugdg", "mslug", "neogeo", NULL, "20180430",
	"Metal Slug - Super Vehicle-001 (Multifunction Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_SWAPP, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugdgRomInfo, mslugdgRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// mslugunity - Metal Slug Unity (Timer added version)

static struct BurnRomInfo mslugunityRomDesc[] = {
	{ "201-p1.p1",    0x200000, 0xa3186dfd, 1 | BRF_ESS | BRF_PRG }, //  0 68K code		/ TC5316200

	{ "201-s1.s1",    0x020000, 0x2f55958d, 2 | BRF_GRA },           //  1 Text layer tiles / TC531000

	{ "201-c1.c1",    0x400000, 0x72813676, 3 | BRF_GRA },           //  2 Sprite data		/ TC5332205
	{ "201-c2.c2",    0x400000, 0x96f62574, 3 | BRF_GRA },           //  3 					/ TC5332205
	{ "201-c3.c3",    0x400000, 0x5121456a, 3 | BRF_GRA },           //  4 					/ TC5332205
	{ "201-c4.c4",    0x400000, 0xf4ad59a3, 3 | BRF_GRA },           //  5 					/ TC5332205

	{ "201-m1.m1",    0x020000, 0xc28b3253, 4 | BRF_ESS | BRF_PRG }, //  6 Z80 code			/ TC531001

	{ "201-v1.v1",    0x400000, 0x23d22ed1, 5 | BRF_SND },           //  7 Sound data		/ TC5332204
	{ "201-v2.v2",    0x400000, 0x472cf9db, 5 | BRF_SND },           //  8 					/ TC5332204
};

STDROMPICKEXT(mslugunity, mslugunity, neogeo)
STD_ROM_FN(mslugunity)

struct BurnDriver BurnDrvmslugunity = {
	"mslugunity", "mslug", "neogeo", NULL, "20210205",
	"Metal Slug - Super Vehicle-001 Unity (Added Timer)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_SWAPP, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugunityRomInfo, mslugunityRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 2 - Super Vehicle-001/II (NGM-2410) (NGH-2410)
/* MVS AND AES VERSION */

static struct BurnRomInfo mslug2RomDesc[] = {
	{ "241-p1.p1",    0x100000, 0x2a53c5da, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "241-p2.sp2",   0x200000, 0x38883f44, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "241-s1.s1",    0x020000, 0xf3d32f0f, 2 | BRF_GRA },           //  2 Text layer tiles

	/* Different layout with 8xC (mask rom) also exists on NEO-MVS CHA256; naming scheme is 241-Cx
	{ "241-c1.c1",    0x400000, 0x00000000, 3 | BRF_GRA | BRF_NODUMP },  //  3 Sprite data 	/ mask rom
	{ "241-c2.c2",    0x400000, 0x00000000, 3 | BRF_GRA | BRF_NODUMP },  //  4 				/ mask rom
	{ "241-c3.c3",    0x400000, 0x00000000, 3 | BRF_GRA | BRF_NODUMP },  //  5 				/ mask rom
	{ "241-c4.c4",    0x400000, 0x00000000, 3 | BRF_GRA | BRF_NODUMP },  //  6 				/ mask rom
	{ "241-c5.c5",    0x400000, 0x00000000, 3 | BRF_GRA | BRF_NODUMP },  //  7 				/ mask rom
	{ "241-c6.c6",    0x400000, 0x00000000, 3 | BRF_GRA | BRF_NODUMP },  //  8 				/ mask rom
	{ "241-c7.c7",    0x400000, 0x00000000, 3 | BRF_GRA | BRF_NODUMP },  //  9 				/ mask rom
	{ "241-c8.c8",    0x400000, 0x00000000, 3 | BRF_GRA | BRF_NODUMP },  // 10 				/ mask rom	*/
	{ "241-c1.c1",    0x800000, 0x394b5e0d, 3 | BRF_GRA },           //  3 Sprite data
	{ "241-c2.c2",    0x800000, 0xe5806221, 3 | BRF_GRA },           //  4 
	{ "241-c3.c3",    0x800000, 0x9f6bfa6f, 3 | BRF_GRA },           //  5 
	{ "241-c4.c4",    0x800000, 0x7d3e306f, 3 | BRF_GRA },           //  6 

	{ "241-m1.m1",    0x020000, 0x94520ebd, 4 | BRF_ESS | BRF_PRG }, //  7 Z80 code

	{ "241-v1.v1",    0x400000, 0x99ec20e8, 5 | BRF_SND },           //  8 Sound data
	{ "241-v2.v2",    0x400000, 0xecb16799, 5 | BRF_SND },           //  9 
};

STDROMPICKEXT(mslug2, mslug2, neogeo)
STD_ROM_FN(mslug2)

struct BurnDriver BurnDrvMSlug2 = {
	"mslug2", NULL, "neogeo", NULL, "1998",
	"Metal Slug 2 - Super Vehicle-001/II (NGM-2410) (NGH-2410)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug2RomInfo, mslug2RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

static struct BurnRomInfo mslug2ctRomDesc[] = {
	{ "241-p1.p1",    0x100000, 0x78AD6864, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "241-p2.sp2",   0x200000, 0xFE36F353, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "241-s1.s1",    0x020000, 0xf3d32f0f, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "241-c1.c1",    0x800000, 0x394b5e0d, 3 | BRF_GRA },           //  3 Sprite data
	{ "241-c2.c2",    0x800000, 0xe5806221, 3 | BRF_GRA },           //  4 
	{ "241-c3.c3",    0x800000, 0x9f6bfa6f, 3 | BRF_GRA },           //  5 
	{ "241-c4.c4",    0x800000, 0x7d3e306f, 3 | BRF_GRA },           //  6 

	{ "241-m1.m1",    0x020000, 0x94520ebd, 4 | BRF_ESS | BRF_PRG }, //  7 Z80 code

	{ "241-v1.v1",    0x400000, 0x99ec20e8, 5 | BRF_SND },           //  8 Sound data
	{ "241-v2.v2",    0x400000, 0xecb16799, 5 | BRF_SND },           //  9 
};

STDROMPICKEXT(mslug2ct, mslug2ct, neogeo)
STD_ROM_FN(mslug2ct)

struct BurnDriver BurnDrvMSlug2ct = {
	"mslug2ct", "mslug2", "neogeo", NULL, "2018",
	"Metal Slug 2 - Super Vehicle-001/II (Survival, Hack)\0", NULL, "\u5408\u91d1\u5f39\u5934\u7231\u514b\u65af", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug2ctRomInfo, mslug2ctRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 2 Multifunction [Hack]

static struct BurnRomInfo mslug2dgRomDesc[] = {
	{ "241-p1.bin",   0x100000, 0x00c455e7, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "241-p2.bin",   0x200000, 0x1bf6b12a, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "241-s1.s1",    0x020000, 0xf3d32f0f, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "241-c1.c1",    0x800000, 0x394b5e0d, 3 | BRF_GRA },           //  3 Sprite data
	{ "241-c2.c2",    0x800000, 0xe5806221, 3 | BRF_GRA },           //  4 
	{ "241-c3.c3",    0x800000, 0x9f6bfa6f, 3 | BRF_GRA },           //  5 
	{ "241-c4.c4",    0x800000, 0x7d3e306f, 3 | BRF_GRA },           //  6 

	{ "241-m1.m1",    0x020000, 0x94520ebd, 4 | BRF_ESS | BRF_PRG }, //  7 Z80 code

	{ "241-v1.v1",    0x400000, 0x99ec20e8, 5 | BRF_SND },           //  8 Sound data
	{ "241-v2.v2",    0x400000, 0xecb16799, 5 | BRF_SND },           //  9 
};

STDROMPICKEXT(mslug2dg, mslug2dg, neogeo)
STD_ROM_FN(mslug2dg)

struct BurnDriver BurnDrvmslug2dg = {
	"mslug2dg", "mslug2", "neogeo", NULL, "20170423",
	"Metal Slug 2 - Super Vehicle-001/II (Multifunction Hack)\0", NULL, "\u5408\u91d1\u5f39\u5934\u7231\u514b\u65af", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug2dgRomInfo, mslug2dgRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 2 (Extraction Green Turbo, Hack)
// 20210916

static struct BurnRomInfo mslug2egRomDesc[] = {
	{ "241-p1.p1",	0x100000, 0xbb312904, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "241-p2.sp2",	0x200000, 0x33f806c2, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "241-s1.s1",	0x020000, 0xd983067f, 2 | BRF_GRA },           //  2 Text layer tiles
	
	{ "241-c1.c1",		0x800000, 0x394b5e0d, 3 | BRF_GRA },           //  3 Sprite data
	{ "241-c2.c2",		0x800000, 0xe5806221, 3 | BRF_GRA },           //  4
	{ "241-c3.c3",		0x800000, 0x9f6bfa6f, 3 | BRF_GRA },           //  5
	{ "241-c4.c4",		0x800000, 0x7d3e306f, 3 | BRF_GRA },           //  6
	{ "241-c5.c5",		0x800000, 0xcae9af4f, 3 | BRF_GRA },           //  7
	{ "241-c6.c6",		0x800000, 0x7cf51055, 3 | BRF_GRA },           //  8

	{ "241-m1.m1",		0x020000, 0x94520ebd, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "241-v1.v1",		0x400000, 0x99ec20e8, 5 | BRF_SND },           // 10 Sound data
	{ "241-v2.v2",		0x400000, 0xecb16799, 5 | BRF_SND },           // 11
};

STDROMPICKEXT(mslug2eg, mslug2eg, neogeo)
STD_ROM_FN(mslug2eg)

struct BurnDriver BurnDrvMSlug2eg = {
	"mslug2eg", "mslug2", "neogeo", NULL, "2021",
	"Metal Slug 2 (Extraction Green Turbo, Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug2egRomInfo, mslug2egRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

static struct BurnRomInfo mslug2fmRomDesc[] = {
	{ "241-p1.p1",    0x100000, 0x487173F6, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "241-p2.sp2",   0x200000, 0x37A118FC, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "241-s1.s1",    0x020000, 0xf3d32f0f, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "241-c1.c1",    0x800000, 0x394b5e0d, 3 | BRF_GRA },           //  3 Sprite data
	{ "241-c2.c2",    0x800000, 0xe5806221, 3 | BRF_GRA },           //  4 
	{ "241-c3.c3",    0x800000, 0x9f6bfa6f, 3 | BRF_GRA },           //  5 
	{ "241-c4.c4",    0x800000, 0x7d3e306f, 3 | BRF_GRA },           //  6 

	{ "241-m1.m1",    0x020000, 0x94520ebd, 4 | BRF_ESS | BRF_PRG }, //  7 Z80 code

	{ "241-v1.v1",    0x400000, 0x99ec20e8, 5 | BRF_SND },           //  8 Sound data
	{ "241-v2.v2",    0x400000, 0xecb16799, 5 | BRF_SND },           //  9 
};

STDROMPICKEXT(mslug2fm, mslug2fm, neogeo)
STD_ROM_FN(mslug2fm)

struct BurnDriver BurnDrvMSlug2fm = {
	"mslug2fm", "mslug2", "neogeo", NULL, "20210416",
	"Metal Slug 2 - Super Vehicle-001/II (Friendly Fire Fightcade 2 Hack)\0", NULL, "Hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug2fmRomInfo, mslug2fmRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};



static struct BurnRomInfo mslug2rRomDesc[] = {
	{ "241-p1.p1",    0x100000, 0xF882D50D, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "241-p2.sp2",   0x200000, 0x38883f44, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "241-s1.s1",    0x020000, 0xf3d32f0f, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "241-c1.c1",    0x800000, 0x394b5e0d, 3 | BRF_GRA },           //  3 Sprite data
	{ "241-c2.c2",    0x800000, 0xe5806221, 3 | BRF_GRA },           //  4 
	{ "241-c3.c3",    0x800000, 0x9f6bfa6f, 3 | BRF_GRA },           //  5 
	{ "241-c4.c4",    0x800000, 0x7d3e306f, 3 | BRF_GRA },           //  6 

	{ "241-m1.m1",    0x020000, 0x94520ebd, 4 | BRF_ESS | BRF_PRG }, //  7 Z80 code

	{ "241-v1.v1",    0x400000, 0x99ec20e8, 5 | BRF_SND },           //  8 Sound data
	{ "241-v2.v2",    0x400000, 0xecb16799, 5 | BRF_SND },           //  9 
};

STDROMPICKEXT(mslug2r, mslug2r, neogeo)
STD_ROM_FN(mslug2r)

struct BurnDriver BurnDrvMSlug2r = {
	"mslug2r", "mslug2", "neogeo", NULL, "2015",
	"Metal Slug 2 - Super Vehicle-001/II (Enemies Reset, Hack)\0", NULL, "Hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug2rRomInfo, mslug2rRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 2 Turbo (NGM-9410)
/* MVS VERSION */

static struct BurnRomInfo mslug2tRomDesc[] = {
	{ "941-p1.p1",    0x100000, 0xdf5d6fbc, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "241-p2.sp2",   0x200000, 0x38883f44, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "241-s1.s1",    0x020000, 0xf3d32f0f, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "241-c1.c1",    0x800000, 0x394b5e0d, 3 | BRF_GRA },           //  3 Sprite data
	{ "241-c2.c2",    0x800000, 0xe5806221, 3 | BRF_GRA },           //  4 
	{ "241-c3.c3",    0x800000, 0x9f6bfa6f, 3 | BRF_GRA },           //  5 
	{ "241-c4.c4",    0x800000, 0x7d3e306f, 3 | BRF_GRA },           //  6 

	{ "241-m1.m1",    0x020000, 0x94520ebd, 4 | BRF_ESS | BRF_PRG }, //  7 Z80 code

	{ "241-v1.v1",    0x400000, 0x99ec20e8, 5 | BRF_SND },           //  8 Sound data
	{ "241-v2.v2",    0x400000, 0xecb16799, 5 | BRF_SND },           //  9 
};

STDROMPICKEXT(mslug2t, mslug2t, neogeo)
STD_ROM_FN(mslug2t)

struct BurnDriver BurnDrvMSlug2t = {
	"mslug2t", "mslug2", "neogeo", NULL, "2015",
	"Metal Slug 2 - Super Vehicle-001/II (Turbo)\0", NULL, "Hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug2tRomInfo, mslug2tRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};


// mslug2unity - Metal Slug 2 Unity (Timer added version)

static struct BurnRomInfo mslug2unityRomDesc[] = {
	{ "241-p1.bin",   0x100000, 0x1562cf23, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "241-p2.sp2",   0x200000, 0x38883f44, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "241-s1.s1",    0x020000, 0xf3d32f0f, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "241-c1.c1",    0x800000, 0x394b5e0d, 3 | BRF_GRA },           //  3 Sprite data
	{ "241-c2.c2",    0x800000, 0xe5806221, 3 | BRF_GRA },           //  4 
	{ "241-c3.c3",    0x800000, 0x9f6bfa6f, 3 | BRF_GRA },           //  5 
	{ "241-c4.c4",    0x800000, 0x7d3e306f, 3 | BRF_GRA },           //  6 

	{ "241-m1.m1",    0x020000, 0x94520ebd, 4 | BRF_ESS | BRF_PRG }, //  7 Z80 code

	{ "241-v1.v1",    0x400000, 0x99ec20e8, 5 | BRF_SND },           //  8 Sound data
	{ "241-v2.v2",    0x400000, 0xecb16799, 5 | BRF_SND },           //  9 
};

STDROMPICKEXT(mslug2unity, mslug2unity, neogeo)
STD_ROM_FN(mslug2unity)

struct BurnDriver BurnDrvmslug2unity = {
	"mslug2unity", "mslug2", "neogeo", NULL, "20210122",
	"Metal Slug 2 - Super Vehicle-001/II Unity (Added Timer)\0", NULL, "Alice\u611b\u9e97\u7d72, \u5c0f\u638c\u997c, CZXInc", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug2unityRomInfo, mslug2unityRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug X - Super Vehicle-001 (NGM-2500)(NGH-2500)
/* MVS AND AES VERSION */

static struct BurnRomInfo mslugxRomDesc[] = {
	{ "250-p1.p1",    0x100000, 0x81f1f60b, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-p2.ep1",   0x400000, 0x1fda2e12, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0xfb6f441d, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0xa4b56124, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0x83e3e69d, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugx, mslugx, neogeo)
STD_ROM_FN(mslugx)

static UINT16 mslugx_command;
static UINT16 mslugx_counter;

static void mslugx_protection_write(UINT32 SekAddress, UINT16 wordValue)
{
	switch (SekAddress)
	{
		case 0x2fffe0: // start new read?
			mslugx_command = 0;
		return;

		case 0x2fffe2: // command? These are pulsed with data and then 0
		case 0x2fffe4:
			mslugx_command |= wordValue;
		return;

		case 0x2fffe6: // finished?
		return;

		case 0x2fffea: // init?
			mslugx_counter = 0;
		return;
	}
}

static UINT16 __fastcall mslugx_protection_read()
{
	UINT16 ret = 0;

	switch (mslugx_command)
	{
		case 0x0001: // $3bdc(?) and $3c30 (Register D7)
		{
			ret = (SekReadByte(0xdedd2 + ((mslugx_counter >> 3) & 0xfff)) >> (~mslugx_counter & 0x07)) & 1;
			mslugx_counter++;
		}
		break;

		case 0x0fff: // All other accesses (Register D2)
		{
			INT32 select = SekReadWord(0x10f00a) - 1; // Cheat and read calculated offset
			ret = (SekReadByte(0xdedd2 + ((select >> 3) & 0x0fff)) >> (~select & 0x07)) & 1;
		}
		break;
	}

	return ret;
}

static void mslugxMapBank()
{
	SekMapMemory(Neo68KROMActive + nNeo68KROMBank, 0x200000, 0x2ffbff, MAP_ROM);
}

static void mslugxBankswitch(UINT32 nBank)
{
	nBank = ((nBank & 7) + 1) * 0x100000;

	if (nBank != nNeo68KROMBank) {
		nNeo68KROMBank = nBank;
		mslugxMapBank();
	}
}

static UINT16 __fastcall mslugx_read_protection_word(UINT32 SekAddress)
{
	if (SekAddress == 0x2fffe8) {
		return mslugx_protection_read();
	}

	return *((UINT16*)(Neo68KROMActive + nNeo68KROMBank + (SekAddress & 0xffffe)));
}

static UINT8 __fastcall mslugx_read_protection_byte(UINT32 SekAddress)
{
	return Neo68KROMActive[(nNeo68KROMBank + (SekAddress & 0xfffff)) ^ 1];
}

static void __fastcall mslugx_write_protection_word(UINT32 SekAddress, UINT16 wordValue)
{
	if ((SekAddress & 0xfffff0) == 0x2fffe0) {
		mslugx_protection_write(SekAddress, wordValue);
	}

	if (SekAddress == 0x2ffff0) {
		mslugxBankswitch(wordValue);
	}
}

static void __fastcall mslugx_write_protection_byte(UINT32 SekAddress, UINT8 byteValue)
{
	if (SekAddress == 0x2ffff0) {
		mslugxBankswitch(byteValue);
	}
}

static void mslugxInstallBankSwitchHandler()
{
	SekMapHandler(6,	0x2ffc00, 0x2fffff, MAP_WRITE | MAP_READ | MAP_FETCH);
	SekSetReadWordHandler(6, mslugx_read_protection_word);
	SekSetReadByteHandler(6, mslugx_read_protection_byte);
	SekSetWriteWordHandler(6, mslugx_write_protection_word);
	SekSetWriteByteHandler(6, mslugx_write_protection_byte);
}

static INT32 mslugxInit()
{
	NeoCallbackActive->pInstallHandlers = mslugxInstallBankSwitchHandler;
	NeoCallbackActive->pBankswitch = mslugxMapBank;

	return NeoInit();
}

static INT32 mslugxScan(INT32 nAction, INT32 *pnMin)
{
	if (pnMin) {
		*pnMin =  0x029727;
	}

	if (nAction & ACB_DRIVER_DATA)
	{
		SCAN_VAR(mslugx_command);
		SCAN_VAR(mslugx_counter);
	}

	return NeoScan(nAction,pnMin);
}

struct BurnDriver BurnDrvMSlugX = {
	"mslugx", NULL, "neogeo", NULL, "1999",
	"Metal Slug X - Super Vehicle-001 (NGM-2500)(NGH-2500)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugxRomInfo, mslugxRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug X Enemy Soldiers Remastered [Hack]

static struct BurnRomInfo mslugxc2RomDesc[] = {
	{ "250-p1.p1",    0x100000, 0x81f1f60b, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-p2.ep1",   0x400000, 0x5d1c52cd, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0xfb6f441d, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0xa4b56124, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0x83e3e69d, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugxc2, mslugxc2, neogeo)
STD_ROM_FN(mslugxc2)

struct BurnDriver BurnDrvMSlugXc2 = {
	"mslugxc2", "mslugx", "neogeo", NULL, "2013",
	"Metal Slug X - Super Vehicle-001 (Enemies Reset, Hack)\0", NULL, "\u78c1\u66b4\u7ebf\u5708", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugxc2RomInfo, mslugxc2RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

static struct BurnRomInfo mslugxebRomDesc[] = {
	{ "250-p1.p1",    0x100000, 0x764D1BB1, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-p2.ep1",   0x400000, 0xA51363D1, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0xfb6f441d, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0xa4b56124, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0x83e3e69d, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugxeb, mslugxeb, neogeo)
STD_ROM_FN(mslugxeb)

struct BurnDriver BurnDrvMSlugXeb = {
	"mslugxeb", "mslugx", "neogeo", NULL, "20130227",
	"Metal Slug X - Super Vehicle-001 (Green Blue Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugxebRomInfo, mslugxebRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

static struct BurnRomInfo mslugxlbRomDesc[] = {
	{ "250-p1.p1",    0x100000, 0x41fc71cc, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-p2.ep1",   0x400000, 0x6A114E1A, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0xfb6f441d, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0xa4b56124, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0x83e3e69d, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugxlb, mslugxlb, neogeo)
STD_ROM_FN(mslugxlb)

struct BurnDriver BurnDrvMSlugXlb = {
	"mslugxlb", "mslugx", "neogeo", NULL, "2015",
	"Metal Slug X - Super Vehicle-001 (Extreme Zone, Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugxlbRomInfo, mslugxlbRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug X AzStar Soda Remix Ver, Fightcade 2 [Hack]

static struct BurnRomInfo mslugxsrfRomDesc[] = {
	{ "250-p1.p1",    0x100000, 0xAED327FE, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-p2.ep1",   0x400000, 0x4389F47D, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0xfb6f441d, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0xa4b56124, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0x83e3e69d, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugxsrf, mslugxsrf, neogeo)
STD_ROM_FN(mslugxsrf)

struct BurnDriver BurnDrvMSlugXsrf = {
	"mslugxsrf", "mslugx", "neogeo", NULL, "20210212",
	"Metal Slug X - Super Vehicle-001 (AzStar Soda Remix Fightcade 2 Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugxsrfRomInfo, mslugxsrfRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// mslugxunity - Metal Slug X Unity (Timer added version)

static struct BurnRomInfo mslugxunityRomDesc[] = {
	{ "250-p1.p1",    0x100000, 0x36102d34, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-p2.ep1",   0x400000, 0x1fda2e12, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0xfb6f441d, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0xa4b56124, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0x83e3e69d, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugxunity, mslugxunity, neogeo)
STD_ROM_FN(mslugxunity)

struct BurnDriver BurnDrvmslugxunity = {
	"mslugxunity", "mslugx", "neogeo", NULL, "20210123",
	"Metal Slug X - Super Vehicle-001 Unity (Added Timer)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugxunityRomInfo, mslugxunityRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 (NGM-2560)
/* Original Version - Encrypted Code & GFX */ /* revision 2000.4.1 */ /* MVS VERSION */

static struct BurnRomInfo mslug3RomDesc[] = {
	{ "green.neo-sma",  0x040000, 0x9cd55736, 9 | BRF_ESS | BRF_PRG }, //  0 68K code		/ stored in the custom chip
	/* The SMA for this release has a green colour marking; the older revision has a white colour marking */
	{ "256-pg1.p1",   	0x400000, 0xb07edfd5, 1 | BRF_ESS | BRF_PRG }, //  1 				/ TC5332202
	{ "256-pg2.p2",   	0x400000, 0x6097c26b, 1 | BRF_ESS | BRF_PRG }, //  2 				/ TC5332202
	
	/* The Encrypted Boards do not have an s1 rom, data for it comes from the Cx ROMs */
	/* Encrypted */
	{ "256-c1.c1",    	0x800000, 0x5a79c34e, 3 | BRF_GRA },           //  3 Sprite data	/ TC5364202
	{ "256-c2.c2",    	0x800000, 0x944c362c, 3 | BRF_GRA },           //  4 				/ TC5364202
	{ "256-c3.c3",    	0x800000, 0x6e69d36f, 3 | BRF_GRA },           //  5 				/ TC5364202		
	{ "256-c4.c4",    	0x800000, 0xb755b4eb, 3 | BRF_GRA },           //  6 				/ TC5364202
	{ "256-c5.c5",    	0x800000, 0x7aacab47, 3 | BRF_GRA },           //  7 				/ TC5364202
	{ "256-c6.c6",    	0x800000, 0xc698fd5d, 3 | BRF_GRA },           //  8 				/ TC5364202	
	{ "256-c7.c7",    	0x800000, 0xcfceddd2, 3 | BRF_GRA },           //  9 				/ TC5364202
	{ "256-c8.c8",    	0x800000, 0x4d9be34c, 3 | BRF_GRA },           // 10 				/ TC5364202
	
	{ "256-m1.m1",    	0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 11 Z80 code		/ mask rom TC534000
		
	{ "256-v1.v1",    	0x400000, 0xf2690241, 5 | BRF_SND },           // 12 Sound data 	/ TC5332204
	{ "256-v2.v2",    	0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 13 				/ TC5332204
	{ "256-v3.v3",    	0x400000, 0x0eaec17c, 5 | BRF_SND },           // 14 				/ TC5332204
	{ "256-v4.v4",    	0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 15 				/ TC5332204
};

STDROMPICKEXT(mslug3, mslug3, neogeo)
STD_ROM_FN(mslug3)

static void mslug3SMADecrypt()
{
	for (INT32 i = 0; i < 0x800000 / 2; i++) {
		((UINT16*)(Neo68KROMActive + 0x100000))[i] = BITSWAP16(BURN_ENDIAN_SWAP_INT16(((UINT16*)(Neo68KROMActive + 0x100000))[i]), 4, 11, 14, 3, 1, 13, 0, 7, 2, 8, 12, 15, 10, 9, 5, 6);
	}

	for (INT32 i = 0; i < 0x0C0000 / 2; i++) {
		((UINT16*)Neo68KROMActive)[i] = BURN_ENDIAN_SWAP_INT16(((UINT16*)Neo68KROMActive)[0x5D0000 / 2 + BITSWAP24(i, 23, 22, 21, 20, 19, 18, 15, 2, 1, 13, 3, 0, 9, 6, 16, 4, 11, 5, 7, 12, 17, 14, 10, 8)]);
	}

	for (INT32 i = 0; i < 0x800000 / 2; i += 0x010000 / 2) {
		UINT16 nBuffer[0x010000 / 2];
		memmove(nBuffer, &((UINT16*)(Neo68KROMActive + 0x100000))[i], 0x010000);
		for (INT32 j = 0; j < 0x010000 / 2; j++) {
			((UINT16*)(Neo68KROMActive + 0x100000))[i + j] = BURN_ENDIAN_SWAP_INT16(nBuffer[BITSWAP24(j, 23, 22, 21, 20, 19, 18, 17, 16, 15, 2, 11, 0, 14, 6, 4, 13, 8, 9, 3, 10, 7, 5, 12, 1)]);
		}
	}
}

void __fastcall mslug3WriteWordBankswitch(UINT32 sekAddress, UINT16 wordValue)
{

//	bprintf(PRINT_NORMAL, " -- bankswitch: 0x%08X -> 0x%04X\n", sekAddress, wordValue);

	if (sekAddress == 0x2FFFE4) {
		static UINT32 bankoffset[64] = {
			0x100000, 0x120000, 0x140000, 0x160000, // 00
			0x170000, 0x190000, 0x1b0000, 0x1d0000, // 04
			0x1e0000, 0x1f0000, 0x220000, 0x230000, // 08
			0x240000, 0x250000, 0x280000, 0x290000, // 12
			0x2a0000, 0x2b0000, 0x2e0000, 0x2f0000, // 16
			0x300000, 0x310000, 0x340000, 0x350000, // 20
			0x360000, 0x370000, 0x3a0000, 0x3b0000, // 24
			0x3c0000, 0x3d0000, 0x400000, 0x410000, // 28
			0x420000, 0x430000, 0x460000, 0x470000, // 32
			0x480000, 0x490000, 0x4c0000, 0x4d0000, // 36
			0x500000, 0x510000, 0x540000, 0x550000, // 40
			0x560000, 0x570000, 0x5a0000, 0x5b0000, // 44
			0x5c0000, /* rest not used? */
		};

		// Unscramble bank number
		INT32 nBank =
			(((wordValue >> 14) & 1) << 0) +
			(((wordValue >> 12) & 1) << 1) +
			(((wordValue >> 15) & 1) << 2) +
			(((wordValue >>  6) & 1) << 3) +
			(((wordValue >>  3) & 1) << 4) +
			(((wordValue >>  9) & 1) << 5);

		if (bankoffset[nBank] != nNeo68KROMBank) {
			nNeo68KROMBank = bankoffset[nBank];
			SekMapMemory(Neo68KROMActive + nNeo68KROMBank,			  0x200000, 0x2FE3FF, MAP_ROM);
			SekMapMemory(Neo68KROMActive + nNeo68KROMBank + 0x0FE800, 0x2FE800, 0x2FFFFF, MAP_ROM);
		}
	}
}

static INT32 mslug3Init()
{
	nNeoProtectionXor = 0xAD;

	return NeoSMAInit(mslug3SMADecrypt, mslug3WriteWordBankswitch, 0, 0);
}

struct BurnDriver BurnDrvmslug3 = {
	"mslug3", NULL, "neogeo", NULL, "2000",
	"Metal Slug 3 (NGM-2560)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42 | HARDWARE_SNK_SMA_PROTECTION, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3RomInfo, mslug3RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3Init, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 (NGM-2560, earlier)
/* Original Version - Encrypted Code & GFX */ /* MVS VERSION */

static struct BurnRomInfo mslug3aRomDesc[] = {
	{ "white.neo-sma",	0x040000, 0xc60d29b2, 9 | BRF_ESS | BRF_PRG }, //  0 68K code		/ stored in the custom chip
	{ "256.p1",	  		0x400000, 0xa1177628, 1 | BRF_ESS | BRF_PRG }, //  1 				/ TC5332202
	{ "256.p2",	  		0x400000, 0x9b659826, 1 | BRF_ESS | BRF_PRG }, //  2				/ TC5332202

	{ "256-c1.c1",    	0x800000, 0x5a79c34e, 3 | BRF_GRA },           //  3 Sprite data	/ TC5364202
	{ "256-c2.c2",    	0x800000, 0x944c362c, 3 | BRF_GRA },           //  4 				/ TC5364202
	{ "256-c3.c3",    	0x800000, 0x6e69d36f, 3 | BRF_GRA },           //  5 				/ TC5364202		
	{ "256-c4.c4",    	0x800000, 0xb755b4eb, 3 | BRF_GRA },           //  6 				/ TC5364202
	{ "256-c5.c5",    	0x800000, 0x7aacab47, 3 | BRF_GRA },           //  7 				/ TC5364202
	{ "256-c6.c6",    	0x800000, 0xc698fd5d, 3 | BRF_GRA },           //  8 				/ TC5364202	
	{ "256-c7.c7",    	0x800000, 0xcfceddd2, 3 | BRF_GRA },           //  9 				/ TC5364202
	{ "256-c8.c8",    	0x800000, 0x4d9be34c, 3 | BRF_GRA },           // 10 				/ TC5364202

	{ "256-m1.m1",    	0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 11 Z80 code		/ mask rom TC534000

	{ "256-v1.v1",    	0x400000, 0xf2690241, 5 | BRF_SND },           // 12 Sound data 	/ TC5332204
	{ "256-v2.v2",    	0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 13 				/ TC5332204
	{ "256-v3.v3",    	0x400000, 0x0eaec17c, 5 | BRF_SND },           // 14 				/ TC5332204
	{ "256-v4.v4",    	0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 15 				/ TC5332204
};

STDROMPICKEXT(mslug3a, mslug3a, neogeo)
STD_ROM_FN(mslug3a)

static void mslug3aSMADecrypt()
{
	for (INT32 i = 0; i < 0x800000 / 2; i++) {
		((UINT16*)(Neo68KROMActive + 0x100000))[i] = BITSWAP16(BURN_ENDIAN_SWAP_INT16(((UINT16*)(Neo68KROMActive + 0x100000))[i]), 2,11,12,14,9,3,1,4,13,7,6,8,10,15,0,5);
	}

	for (INT32 i = 0; i < 0x0C0000 / 2; i++) {
		((UINT16*)Neo68KROMActive)[i] = BURN_ENDIAN_SWAP_INT16(((UINT16*)Neo68KROMActive)[0x5D0000 / 2 + BITSWAP24(i, 23,22,21,20,19,18,1,16,14,7,17,5,8,4,15,6,3,2,0,13,10,12,9,11)]);
	}

	for (INT32 i = 0; i < 0x800000 / 2; i += 0x010000 / 2) {
		UINT16 nBuffer[0x010000 / 2];
		memmove(nBuffer, &((UINT16*)(Neo68KROMActive + 0x100000))[i], 0x010000);
		for (INT32 j = 0; j < 0x010000 / 2; j++) {
			((UINT16*)(Neo68KROMActive + 0x100000))[i + j] = BURN_ENDIAN_SWAP_INT16(nBuffer[BITSWAP24(j, 23,22,21,20,19,18,17,16,15,12,0,11,3,4,13,6,8,14,7,5,2,10,9,1)]);
		}
	}
}

void __fastcall mslug3aWriteWordBankswitch(UINT32 sekAddress, UINT16 wordValue)
{
//	bprintf(PRINT_NORMAL, " -- bankswitch: 0x%08X -> 0x%04X\n", sekAddress, wordValue);

	if (sekAddress == 0x2FFFE4) {
		static const UINT32 bankoffset[64] = {
			0x100000, 0x130000, 0x140000, 0x170000, // 00
			0x180000, 0x1a0000, 0x1c0000, 0x1e0000, // 04
			0x1f0000, 0x200000, 0x230000, 0x240000, // 08
			0x250000, 0x260000, 0x290000, 0x2a0000, // 12
			0x2B0000, 0x2C0000, 0x2F0000, 0x300000, // 16
			0x310000, 0x320000, 0x350000, 0x360000, // 20
			0x370000, 0x380000, 0x3B0000, 0x3C0000, // 24
			0x3D0000, 0x3E0000, 0x410000, 0x420000, // 28
			0x430000, 0x440000, 0x470000, 0x480000, // 32
			0x490000, 0x4A0000, 0x4D0000, 0x4E0000, // 36
			0x500000, 0x510000, 0x540000, 0x550000, // 40
			0x560000, 0x570000, 0x5A0000, 0x5B0000, // 44
			0x5C0000, /* rest not used? */
		};

		// Unscramble bank number
		INT32 nBank =
			(((wordValue >> 15) & 1) << 0) +
			(((wordValue >>  3) & 1) << 1) +
			(((wordValue >>  1) & 1) << 2) +
			(((wordValue >>  6) & 1) << 3) +
			(((wordValue >> 12) & 1) << 4) +
			(((wordValue >> 11) & 1) << 5);

		if (bankoffset[nBank] != nNeo68KROMBank) {
			nNeo68KROMBank = bankoffset[nBank];
			SekMapMemory(Neo68KROMActive + nNeo68KROMBank,		      0x200000, 0x2FE3FF, MAP_ROM);
			SekMapMemory(Neo68KROMActive + nNeo68KROMBank + 0x0FE800, 0x2FE800, 0x2FFFFF, MAP_ROM);
		}
	}
}

static INT32 mslug3aInit()
{
	nNeoProtectionXor = 0xAD;

	return NeoSMAInit(mslug3aSMADecrypt, mslug3aWriteWordBankswitch, 0, 0);
}

struct BurnDriver BurnDrvmslug3a = {
	"mslug3a", "mslug3", "neogeo", NULL, "2000",
	"Metal Slug 3 (NGM-2560, earlier)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42 | HARDWARE_SNK_SMA_PROTECTION, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3aRomInfo, mslug3aRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3aInit, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};


// Metal Slug 3 (NGH-2560)
/* Original Version - Encrypted GFX */ /* revision 2000.3.17 */ /* AES VERSION */

static struct BurnRomInfo mslug3hRomDesc[] = {
	{ "256-ph1.p1",   0x100000, 0x9c42ca85, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "256-ph2.sp2",  0x400000, 0x1f3d8ce8, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "256-c1.c1",    0x800000, 0x5a79c34e, 3 | BRF_GRA },           //  2 Sprite data 	/ TC5364202
	{ "256-c2.c2",    0x800000, 0x944c362c, 3 | BRF_GRA },           //  3 				/ TC5364202
	{ "256-c3.c3",    0x800000, 0x6e69d36f, 3 | BRF_GRA },           //  4 				/ TC5364202
	{ "256-c4.c4",    0x800000, 0xb755b4eb, 3 | BRF_GRA },           //  5 				/ TC5364202
	{ "256-c5.c5",    0x800000, 0x7aacab47, 3 | BRF_GRA },           //  6 				/ TC5364202
	{ "256-c6.c6",    0x800000, 0xc698fd5d, 3 | BRF_GRA },           //  7 				/ TC5364202
	{ "256-c7.c7",    0x800000, 0xcfceddd2, 3 | BRF_GRA },           //  8 				/ TC5364202
	{ "256-c8.c8",    0x800000, 0x4d9be34c, 3 | BRF_GRA },           //  9 				/ TC5364202

	{ "256-m1.m1",    0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code		/ mask rom TC534000

	{ "256-v1.v1",    0x400000, 0xf2690241, 5 | BRF_SND },           // 11 Sound data	/ TC5332204
	{ "256-v2.v2",    0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 12 				/ TC5332204
	{ "256-v3.v3",    0x400000, 0x0eaec17c, 5 | BRF_SND },           // 13 				/ TC5332204
	{ "256-v4.v4",    0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 14 				/ TC5332204
};

STDROMPICKEXT(mslug3h, mslug3h, neogeo)
STD_ROM_FN(mslug3h)

static INT32 mslug3hInit()
{
	nNeoProtectionXor = 0xAD;

	return NeoInit();
}

struct BurnDriver BurnDrvmslug3h = {
	"mslug3h", "mslug3", "neogeo", NULL, "2000",
	"Metal Slug 3 (NGH-2560)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3hRomInfo, mslug3hRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3hInit, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 6 (Metal Slug 3 bootleg)

static struct BurnRomInfo mslug3b6RomDesc[] = {
	{ "299-p1.bin",   0x200000, 0x5f2fe228, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "299-p2.bin",   0x400000, 0x193fa835, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "299-s1.bin",   0x020000, 0x6f8b9635, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "256-c1.c1",    0x800000, 0x5a79c34e, 3 | BRF_GRA },           //  3 Sprite data
	{ "256-c2.c2",    0x800000, 0x944c362c, 3 | BRF_GRA },           //  4 
	{ "256-c3.c3",    0x800000, 0x6e69d36f, 3 | BRF_GRA },           //  5 
	{ "256-c4.c4",    0x800000, 0xb755b4eb, 3 | BRF_GRA },           //  6 
	{ "256-c5.c5",    0x800000, 0x7aacab47, 3 | BRF_GRA },           //  7 
	{ "256-c6.c6",    0x800000, 0xc698fd5d, 3 | BRF_GRA },           //  8 
	{ "256-c7.c7",    0x800000, 0xcfceddd2, 3 | BRF_GRA },           //  9 
	{ "256-c8.c8",    0x800000, 0x4d9be34c, 3 | BRF_GRA },           // 10 

	{ "256-m1.m1",    0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 11 Z80 code

	{ "256-v1.v1",    0x400000, 0xf2690241, 5 | BRF_SND },           // 12 Sound data
	{ "256-v2.v2",    0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 13 
	{ "256-v3.v3",    0x400000, 0x0eaec17c, 5 | BRF_SND },           // 14 
	{ "256-v4.v4",    0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 15 
};

STDROMPICKEXT(mslug3b6, mslug3b6, neogeo)
STD_ROM_FN(mslug3b6)

static void mslug3b6Callback()
{
	memmove(Neo68KROMActive, Neo68KROMActive + 0x100000, 0x500000);

	garoubl_sx_decode();
}

static INT32 mslug3b6Init()
{
	NeoCallbackActive->pInitialise = mslug3b6Callback;
	nNeoProtectionXor = 0xAD;

 	return NeoInit();
}

struct BurnDriver BurnDrvmslug3b6 = {
	"mslug3b6", "mslug3", "neogeo", NULL, "2000",
	"Metal Slug 6 (Metal Slug 3 bootleg)\0", NULL, "bootleg", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_BOOTLEG, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3b6RomInfo, mslug3b6RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3b6Init, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 (Enhanced Violence Version)

static struct BurnRomInfo mslug3vRomDesc[] = {
	{ "256-pg1.p1",   0x100000, 0x47f9aeea, 1 | BRF_ESS | BRF_PRG }, //  1 				/ TC5332202
	{ "256-pg2.p2",   0x400000, 0x1f3d8ce8, 1 | BRF_ESS | BRF_PRG }, //  2 				/ TC5332202
	
	{ "256-c1.c1",    0x800000, 0x5a79c34e, 3 | BRF_GRA },           //  3 Sprite data	/ TC5364202
	{ "256-c2.c2",    0x800000, 0x944c362c, 3 | BRF_GRA },           //  4 				/ TC5364202
	{ "256-c3.c3",    0x800000, 0x6e69d36f, 3 | BRF_GRA },           //  5 				/ TC5364202		
	{ "256-c4.c4",    0x800000, 0xb755b4eb, 3 | BRF_GRA },           //  6 				/ TC5364202
	{ "256-c5.c5",    0x800000, 0x7aacab47, 3 | BRF_GRA },           //  7 				/ TC5364202
	{ "256-c6.c6",    0x800000, 0xc698fd5d, 3 | BRF_GRA },           //  8 				/ TC5364202	
	{ "256-c7.c7",    0x800000, 0xcfceddd2, 3 | BRF_GRA },           //  9 				/ TC5364202
	{ "256-c8.c8",    0x800000, 0x4d9be34c, 3 | BRF_GRA },           // 10 				/ TC5364202
	
	{ "256-m1.m1",    0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 11 Z80 code		/ mask rom TC534000
		
	{ "256-v1.v1",    0x400000, 0xf2690241, 5 | BRF_SND },           // 12 Sound data 	/ TC5332204
	{ "256-v2.v2",    0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 13 				/ TC5332204
	{ "256-v3.v3",    0x400000, 0x0eaec17c, 5 | BRF_SND },           // 14 				/ TC5332204
	{ "256-v4.v4",    0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 15 				/ TC5332204
};

STDROMPICKEXT(mslug3v, mslug3v, neogeo)
STD_ROM_FN(mslug3v)

struct BurnDriver BurnDrvmslug3v = {
	"mslug3v", "mslug3", "neogeo", NULL, "2012",
	"Metal Slug 3 (NGH-2560) (Enhanced Violence Version hack by EEZEZY)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3vRomInfo, mslug3vRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3hInit, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

static struct BurnRomInfo mslug3cRomDesc[] = {
	{ "256-ph1.bin",   0x100000, 0x05C99714, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "256-ph2.bin",   0x400000, 0xB948A472, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "ms3n_s1.rom",    0x020000, 0x8458fff9, 2 | BRF_GRA },

	{ "ms3n_c1.rom",  0x800000, 0x3540398c, 3 | BRF_GRA },		 //  2 Sprite data
	{ "ms3n_c2.rom",  0x800000, 0xbdd220f0, 3 | BRF_GRA },		 //  3
	{ "ms3n_c3.rom",  0x800000, 0xbfaade82, 3 | BRF_GRA },		 //  4
	{ "ms3n_c4.rom",  0x800000, 0x1463add6, 3 | BRF_GRA },		 //  5
	{ "ms3n_c5.rom",  0x800000, 0x48ca7f28, 3 | BRF_GRA },		 //  6
	{ "ms3n_c6.rom",  0x800000, 0x806eb36f, 3 | BRF_GRA },		 //  7
	{ "ms3n_c7.rom",  0x800000, 0xed559fac, 3 | BRF_GRA },		 //  8
	{ "ms3n_c8.rom",  0x800000, 0x1c52378b, 3 | BRF_GRA },		 //  9

	{ "256-m1.bin",   0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "ms3n_v1.rom",  0x400000, 0xf2690241, 5 | BRF_SND },           // 11 Sound data
	{ "ms3n_v2.rom",  0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 12
	{ "ms3n_v3.rom",  0x400000, 0x0eaec17c, 5 | BRF_SND },           // 13
	{ "ms3n_v4.rom",  0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug3c, mslug3c, neogeo)
STD_ROM_FN(mslug3c)

struct BurnDriver BurnDrvmslug3c = {
	"mslug3c", "mslug3", "neogeo", NULL, "2019",
	"Metal Slug 3 (Enemies Reset, Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3cRomInfo, mslug3cRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3hInit, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 [Green Blue] [Hack]
static struct BurnRomInfo mslug3ebRomDesc[] = {
	{ "green.neo-sma",  0x040000, 0x2a9935c2, 9 | BRF_ESS | BRF_PRG }, //  0 68K code		/ stored in the custom chip
																	   /* The SMA for this release has a green colour marking; the older revision has a white colour marking */
	{ "256-pg1.p1",   	0x400000, 0x6ec2e58d, 1 | BRF_ESS | BRF_PRG }, //  1 				/ TC5332202
	{ "256-pg2.p2",   	0x400000, 0xca4eb0d3, 1 | BRF_ESS | BRF_PRG }, //  2 				/ TC5332202

																	   /* The Encrypted Boards do not have an s1 rom, data for it comes from the Cx ROMs */
																	   /* Encrypted */
	{ "256-c1.c1",    	0x800000, 0x5a79c34e, 3 | BRF_GRA },           //  3 Sprite data	/ TC5364202
	{ "256-c2.c2",    	0x800000, 0x944c362c, 3 | BRF_GRA },           //  4 				/ TC5364202
	{ "256-c3.c3",    	0x800000, 0x6e69d36f, 3 | BRF_GRA },           //  5 				/ TC5364202		
	{ "256-c4.c4",    	0x800000, 0xb755b4eb, 3 | BRF_GRA },           //  6 				/ TC5364202
	{ "256-c5.c5",    	0x800000, 0x7aacab47, 3 | BRF_GRA },           //  7 				/ TC5364202
	{ "256-c6.c6",    	0x800000, 0xc698fd5d, 3 | BRF_GRA },           //  8 				/ TC5364202	
	{ "256-c7.c7",    	0x800000, 0xcfceddd2, 3 | BRF_GRA },           //  9 				/ TC5364202
	{ "256-c8.c8",    	0x800000, 0x4d9be34c, 3 | BRF_GRA },           // 10 				/ TC5364202

	{ "256-m1.m1",    	0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 11 Z80 code		/ mask rom TC534000

	{ "256-v1.v1",    	0x400000, 0xf2690241, 5 | BRF_SND },           // 12 Sound data 	/ TC5332204
	{ "256-v2.v2",    	0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 13 				/ TC5332204
	{ "256-v3.v3",    	0x400000, 0x0eaec17c, 5 | BRF_SND },           // 14 				/ TC5332204
	{ "256-v4.v4",    	0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 15 				/ TC5332204
};

STDROMPICKEXT(mslug3eb, mslug3eb, neogeo)
STD_ROM_FN(mslug3eb)

struct BurnDriver BurnDrvmslug3eb = {
	"mslug3eb", "mslug3", "neogeo", NULL, "20130227",
	"Metal Slug 3 (Green Blue Hack)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42 | HARDWARE_SNK_SMA_PROTECTION, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3ebRomInfo, mslug3ebRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3Init, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// FBA4DROID/GOTVG  Metal Slug 3 (Multifunction Hack 20190119)
static struct BurnRomInfo mslug3gRomDesc[] = {
	{ "256-ph1.bin",   0x100000, 0xb23bd9b7, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "256-ph2.bin",   0x400000, 0x8053a3fb, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "ms3n_s1.rom",    0x020000, 0x8458fff9, 2 | BRF_GRA },

	{ "ms3n_c1.rom",  0x800000, 0x3540398c, 3 | BRF_GRA },		 //  2 Sprite data
	{ "ms3n_c2.rom",  0x800000, 0xbdd220f0, 3 | BRF_GRA },		 //  3
	{ "ms3n_c3.rom",  0x800000, 0xbfaade82, 3 | BRF_GRA },		 //  4
	{ "ms3n_c4.rom",  0x800000, 0x1463add6, 3 | BRF_GRA },		 //  5
	{ "ms3n_c5.rom",  0x800000, 0x48ca7f28, 3 | BRF_GRA },		 //  6
	{ "ms3n_c6.rom",  0x800000, 0x806eb36f, 3 | BRF_GRA },		 //  7
	{ "ms3n_c7.rom",  0x800000, 0xed559fac, 3 | BRF_GRA },		 //  8
	{ "ms3n_c8.rom",  0x800000, 0x1c52378b, 3 | BRF_GRA },		 //  9

	{ "256-m1.bin",   0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "ms3n_v1.rom",  0x400000, 0xf2690241, 5 | BRF_SND },           // 11 Sound data
	{ "ms3n_v2.rom",  0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 12
	{ "ms3n_v3.rom",  0x400000, 0x0eaec17c, 5 | BRF_SND },           // 13
	{ "ms3n_v4.rom",  0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug3g, mslug3g, neogeo)
STD_ROM_FN(mslug3g)

struct BurnDriver BurnDrvmslug3g = {
	"mslug3g", "mslug3", "neogeo", NULL, "20190511",
	"Metal Slug 3 (Multifunction Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3gRomInfo, mslug3gRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3hInit, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 Onimusha Samanosuke [Hack]

static struct BurnRomInfo mslug3gwRomDesc[] = {
//	{ "256-sma.bin",    0x040000, 0x9cd55736, 9 | BRF_ESS | BRF_PRG }, //  0 68K code		/ stored in the custom chip
																	 
	{ "256-ph1.rom",   	0x100000, 0xfafde0b4, 1 | BRF_ESS | BRF_PRG }, //  1 				/ TC5332202
	{ "ms3n_p2.rom",   	0x400000, 0x1f3d8ce8, 1 | BRF_ESS | BRF_PRG }, //  2 				/ TC5332202
	
	{ "ms3n_s1.rom",    0x020000, 0x8458fff9, 2 | BRF_GRA },

	{ "ms3n_c1.rom",  0x800000, 0x3540398c, 3 | BRF_GRA },		 //  2 Sprite data
	{ "ms3n_c2.rom",  0x800000, 0xbdd220f0, 3 | BRF_GRA },		 //  3
	{ "ms3n_c3.rom",  0x800000, 0xbfaade82, 3 | BRF_GRA },		 //  4
	{ "ms3n_c4.rom",  0x800000, 0x1463add6, 3 | BRF_GRA },		 //  5
	{ "ms3n_c5.rom",  0x800000, 0x48ca7f28, 3 | BRF_GRA },		 //  6
	{ "ms3n_c6.rom",  0x800000, 0x806eb36f, 3 | BRF_GRA },		 //  7
	{ "ms3n_c7.rom",  0x800000, 0xed559fac, 3 | BRF_GRA },		 //  8
	{ "ms3n_c8.rom",  0x800000, 0x1c52378b, 3 | BRF_GRA },		 //  9

	{ "256-m1.bin",   0x080000, 0xc84d22f2, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "ms3n_v1.rom",  0x400000, 0xf2690241, 5 | BRF_SND },           // 11 Sound data
	{ "ms3n_v2.rom",  0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 12
	{ "ms3n_v3.rom",  0x400000, 0x0eaec17c, 5 | BRF_SND },           // 13
	{ "256-v4.bin",  0x400000, 0xb45d9a3b, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug3gw, mslug3gw, neogeo)
STD_ROM_FN(mslug3gw)

struct BurnDriver BurnDrvmslug3gw = {
	"mslug3gw", "mslug3", "neogeo", NULL, "2018",
	"Metal Slug 3 Onimusha Samanosuke [Hack]\0", NULL, "\u78c1\u66b4\u7ebf\u5708", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3gwRomInfo, mslug3gwRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 Unlimited Fire [Hack]

static struct BurnRomInfo mslug3iRomDesc[] = {
	{ "green.neo-sma",  0x040000, 0x3a631f79, 9 | BRF_ESS | BRF_PRG }, //  0 68K code		/ stored in the custom chip
																	   /* The SMA for this release has a green colour marking; the older revision has a white colour marking */
	{ "256-pg1.p1",   	0x400000, 0xb07edfd5, 1 | BRF_ESS | BRF_PRG }, //  1 				/ TC5332202
	{ "256-pg2.p2",   	0x400000, 0x3a040bcc, 1 | BRF_ESS | BRF_PRG }, //  2 				/ TC5332202

																	   /* The Encrypted Boards do not have an s1 rom, data for it comes from the Cx ROMs */																	   /* Encrypted */
	{ "256-c1.c1",    	0x800000, 0x5a79c34e, 3 | BRF_GRA },           //  3 Sprite data	/ TC5364202
	{ "256-c2.c2",    	0x800000, 0x944c362c, 3 | BRF_GRA },           //  4 				/ TC5364202
	{ "256-c3.c3",    	0x800000, 0x6e69d36f, 3 | BRF_GRA },           //  5 				/ TC5364202		
	{ "256-c4.c4",    	0x800000, 0xb755b4eb, 3 | BRF_GRA },           //  6 				/ TC5364202
	{ "256-c5.c5",    	0x800000, 0x7aacab47, 3 | BRF_GRA },           //  7 				/ TC5364202
	{ "256-c6.c6",    	0x800000, 0xc698fd5d, 3 | BRF_GRA },           //  8 				/ TC5364202	
	{ "256-c7.c7",    	0x800000, 0xcfceddd2, 3 | BRF_GRA },           //  9 				/ TC5364202
	{ "256-c8.c8",    	0x800000, 0x4d9be34c, 3 | BRF_GRA },           // 10 				/ TC5364202

	{ "256-m1.m1",    	0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 11 Z80 code		/ mask rom TC534000

	{ "256-v1.v1",    	0x400000, 0xf2690241, 5 | BRF_SND },           // 12 Sound data 	/ TC5332204
	{ "256-v2.v2",    	0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 13 				/ TC5332204
	{ "256-v3.v3",    	0x400000, 0x0eaec17c, 5 | BRF_SND },           // 14 				/ TC5332204
	{ "256-v4.v4",    	0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 15 				/ TC5332204
};

STDROMPICKEXT(mslug3i, mslug3i, neogeo)
STD_ROM_FN(mslug3i)

struct BurnDriver BurnDrvmslug3i = {
	"mslug3i", "mslug3", "neogeo", NULL, "2021",
	"Metal Slug 3 Unlimited Fire [Hack]\0", NULL, "CZXInc", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42 | HARDWARE_SNK_SMA_PROTECTION, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3iRomInfo, mslug3iRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3Init, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 [The Last Warhear] [Hack]
static struct BurnRomInfo mslug3rbRomDesc[] = {
	{ "256-ph1.bin",   0x100000, 0xe575a406, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "256-ph2.bin",   0x400000, 0x7eed7c81, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "ms3n_s1.rom",    0x020000, 0x8458fff9, 2 | BRF_GRA },

	{ "ms3n_c1.rom",  0x800000, 0x3540398c, 3 | BRF_GRA },		 //  2 Sprite data
	{ "ms3n_c2.rom",  0x800000, 0xbdd220f0, 3 | BRF_GRA },		 //  3
	{ "ms3n_c3.rom",  0x800000, 0xbfaade82, 3 | BRF_GRA },		 //  4
	{ "ms3n_c4.rom",  0x800000, 0x1463add6, 3 | BRF_GRA },		 //  5
	{ "ms3n_c5.rom",  0x800000, 0x48ca7f28, 3 | BRF_GRA },		 //  6
	{ "ms3n_c6.rom",  0x800000, 0x806eb36f, 3 | BRF_GRA },		 //  7
	{ "ms3n_c7.rom",  0x800000, 0xed559fac, 3 | BRF_GRA },		 //  8
	{ "ms3n_c8.rom",  0x800000, 0x1c52378b, 3 | BRF_GRA },		 //  9

	{ "256-m1.bin",   0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "ms3n_v1.rom",  0x400000, 0xf2690241, 5 | BRF_SND },           // 11 Sound data
	{ "ms3n_v2.rom",  0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 12
	{ "ms3n_v3.rom",  0x400000, 0x0eaec17c, 5 | BRF_SND },           // 13
	{ "ms3n_v4.rom",  0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug3rb, mslug3rb, neogeo)
STD_ROM_FN(mslug3rb)

struct BurnDriver BurnDrvmslug3rb = {
	"mslug3rb", "mslug3lw", "neogeo", NULL, "2017",
	"Metal Slug 3 (The Last Warhear, Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3rbRomInfo, mslug3rbRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3hInit, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 (Last Bullet Remix Hack)
static struct BurnRomInfo mslug3lwRomDesc[] = {
	{ "256-p1.p1",   0x100000, 0xf804b927, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "256-p2.p2",   0x400000, 0xed558b74, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "ms3n_s1.rom",    0x020000, 0x8458fff9, 2 | BRF_GRA },

	{ "256-c1.rom",  0x1000000, 0x1195f6b3, 3 | BRF_GRA },		 //  2 Sprite data
	{ "256-c2.rom",  0x1000000, 0xfa28d925, 3 | BRF_GRA },		 //  3
	{ "256-c3.rom",  0x1000000, 0x5d78a51c, 3 | BRF_GRA },		 //  4
	{ "256-c4.rom",  0x1000000, 0x45478437, 3 | BRF_GRA },		 //  5

	{ "256-m1.bin",   0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "ms3n_v1.rom",  0x400000, 0xf2690241, 5 | BRF_SND },           // 11 Sound data
	{ "ms3n_v2.rom",  0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 12
	{ "ms3n_v3.rom",  0x400000, 0x0eaec17c, 5 | BRF_SND },           // 13
	{ "ms3n_v4.rom",  0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug3lw, mslug3lw, neogeo)
STD_ROM_FN(mslug3lw)

struct BurnDriver BurnDrvmslug3lw = {
	"mslug3lw", NULL, "neogeo", NULL, "2017",
	"Metal Slug 3 (Last Bullet Remix, Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3lwRomInfo, mslug3lwRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3hInit, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 SE Special Edition [Hack]

static struct BurnRomInfo mslug3seRomDesc[] = {
//	{ "256-sma.bin",    0x040000, 0x9cd55736, 9 | BRF_ESS | BRF_PRG }, //  0 68K code		/ stored in the custom chip
																	 
	{ "256-ph1.p1",   	0x100000, 0x4e6753ee, 1 | BRF_ESS | BRF_PRG }, //  1 				/ TC5332202
	{ "256-ph2.sp2",   	0x400000, 0x1f3d8ce8, 1 | BRF_ESS | BRF_PRG }, //  2 				/ TC5332202
	
	{ "ms3n_s1.rom",    0x020000, 0x8458fff9, 2 | BRF_GRA },

	{ "ms3n_c1.rom",  0x800000, 0x3540398c, 3 | BRF_GRA },		 //  2 Sprite data
	{ "ms3n_c2.rom",  0x800000, 0xbdd220f0, 3 | BRF_GRA },		 //  3
	{ "ms3n_c3.rom",  0x800000, 0xbfaade82, 3 | BRF_GRA },		 //  4
	{ "ms3n_c4.rom",  0x800000, 0x1463add6, 3 | BRF_GRA },		 //  5
	{ "ms3n_c5.rom",  0x800000, 0x48ca7f28, 3 | BRF_GRA },		 //  6
	{ "ms3n_c6.rom",  0x800000, 0x806eb36f, 3 | BRF_GRA },		 //  7
	{ "ms3n_c7.rom",  0x800000, 0xed559fac, 3 | BRF_GRA },		 //  8
	{ "ms3n_c8.rom",  0x800000, 0x1c52378b, 3 | BRF_GRA },		 //  9

	{ "256-m1.bin",   0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "ms3n_v1.rom",  0x400000, 0xf2690241, 5 | BRF_SND },           // 11 Sound data
	{ "ms3n_v2.rom",  0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 12
	{ "ms3n_v3.rom",  0x400000, 0x0eaec17c, 5 | BRF_SND },           // 13
	{ "ms3n_v4.rom",  0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug3se, mslug3se, neogeo)
STD_ROM_FN(mslug3se)

struct BurnDriver BurnDrvmslug3se = {
	"mslug3se", "mslug3", "neogeo", NULL, "2022",
	"Metal Slug 3 SE Special Edition [Hack]\0", NULL, "Hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3seRomInfo, mslug3seRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// mslug3unity - Metal Slug 3 Unity (Timer added version)

static struct BurnRomInfo mslug3unityRomDesc[] = {
	{ "green.neo-sma",  0x040000, 0x3c6c536b, 9 | BRF_ESS | BRF_PRG }, //  0 68K code		/ stored in the custom chip
	/* The SMA for this release has a green colour marking; the older revision has a white colour marking */
	{ "256-pg1.p1",   	0x400000, 0xb07edfd5, 1 | BRF_ESS | BRF_PRG }, //  1 				/ TC5332202
	{ "256-pg2.p2",   	0x400000, 0xea0c22b6, 1 | BRF_ESS | BRF_PRG }, //  2 				/ TC5332202
	/* The Encrypted Boards do not have an s1 rom, data for it comes from the Cx ROMs */
	/* Encrypted */
	{ "256-c1.c1",    	0x800000, 0x5a79c34e, 3 | BRF_GRA },           //  3 Sprite data	/ TC5364202
	{ "256-c2.c2",    	0x800000, 0x944c362c, 3 | BRF_GRA },           //  4 				/ TC5364202
	{ "256-c3.c3",    	0x800000, 0x6e69d36f, 3 | BRF_GRA },           //  5 				/ TC5364202		
	{ "256-c4.c4",    	0x800000, 0xb755b4eb, 3 | BRF_GRA },           //  6 				/ TC5364202
	{ "256-c5.c5",    	0x800000, 0x7aacab47, 3 | BRF_GRA },           //  7 				/ TC5364202
	{ "256-c6.c6",    	0x800000, 0xc698fd5d, 3 | BRF_GRA },           //  8 				/ TC5364202	
	{ "256-c7.c7",    	0x800000, 0xcfceddd2, 3 | BRF_GRA },           //  9 				/ TC5364202
	{ "256-c8.c8",    	0x800000, 0x4d9be34c, 3 | BRF_GRA },           // 10 				/ TC5364202

	{ "256-m1.m1",    	0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 11 Z80 code		/ mask rom TC534000

	{ "256-v1.v1",    	0x400000, 0xf2690241, 5 | BRF_SND },           // 12 Sound data 	/ TC5332204
	{ "256-v2.v2",    	0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 13 				/ TC5332204
	{ "256-v3.v3",    	0x400000, 0x0eaec17c, 5 | BRF_SND },           // 14 				/ TC5332204
	{ "256-v4.v4",    	0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 15 				/ TC5332204
};

STDROMPICKEXT(mslug3unity, mslug3unity, neogeo)
STD_ROM_FN(mslug3unity)

struct BurnDriver BurnDrvmslug3unity = {
	"mslug3unity", "mslug3", "neogeo", NULL, "20210213",
	"Metal Slug 3 Unity (Added Timer)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42 | HARDWARE_SNK_SMA_PROTECTION, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3unityRomInfo, mslug3unityRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3Init, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 Vehicle Summoning [Hack]

static struct BurnRomInfo mslug3zhRomDesc[] = {
//	{ "256-sma.bin",    0x040000, 0x9cd55736, 9 | BRF_ESS | BRF_PRG }, //  0 68K code		/ stored in the custom chip
																	 
	{ "256-ph1.rom",   	0x100000, 0x257fa6b9, 1 | BRF_ESS | BRF_PRG }, //  1 				/ TC5332202
	{ "256-ph2.rom",   	0x400000, 0xbadc753c, 1 | BRF_ESS | BRF_PRG }, //  2 				/ TC5332202
	
	{ "ms3n_s1.rom",    0x020000, 0x8458fff9, 2 | BRF_GRA },

	{ "ms3n_c1.rom",  0x800000, 0x3540398c, 3 | BRF_GRA },		 //  2 Sprite data
	{ "ms3n_c2.rom",  0x800000, 0xbdd220f0, 3 | BRF_GRA },		 //  3
	{ "ms3n_c3.rom",  0x800000, 0xbfaade82, 3 | BRF_GRA },		 //  4
	{ "ms3n_c4.rom",  0x800000, 0x1463add6, 3 | BRF_GRA },		 //  5
	{ "ms3n_c5.rom",  0x800000, 0x48ca7f28, 3 | BRF_GRA },		 //  6
	{ "ms3n_c6.rom",  0x800000, 0x806eb36f, 3 | BRF_GRA },		 //  7
	{ "ms3n_c7.rom",  0x800000, 0xed559fac, 3 | BRF_GRA },		 //  8
	{ "ms3n_c8.rom",  0x800000, 0x1c52378b, 3 | BRF_GRA },		 //  9

	{ "256-m1.bin",   0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "ms3n_v1.rom",  0x400000, 0xf2690241, 5 | BRF_SND },           // 11 Sound data
	{ "ms3n_v2.rom",  0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 12
	{ "ms3n_v3.rom",  0x400000, 0x0eaec17c, 5 | BRF_SND },           // 13
	{ "ms3n_v4.rom",  0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug3zh, mslug3zh, neogeo)
STD_ROM_FN(mslug3zh)

struct BurnDriver BurnDrvmslug3zh = {
	"mslug3zh", "mslug3", "neogeo", NULL, "2017",
	"Metal Slug 3 Vehicle Summoning [Hack]\0", NULL, "\u5408\u91d1\u5f39\u5934\u7231\u514b\u65af", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3zhRomInfo, mslug3zhRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 1v2 Mode [Hack)

static struct BurnRomInfo mslug31v2RomDesc[] = {
	{ "green.neo-sma",  0x040000, 0x1c090500, 9 | BRF_ESS | BRF_PRG }, //  0 68K code		/ stored in the custom chip

	{ "256-p1.bin",   	0x400000, 0xb07edfd5, 1 | BRF_ESS | BRF_PRG }, //  1 				/ TC5332202
	{ "256-p2.bin",   	0x400000, 0x45db3f1d, 1 | BRF_ESS | BRF_PRG }, //  2 				/ TC5332202
	

	{ "256-c1.c1",    	0x800000, 0x5a79c34e, 3 | BRF_GRA },           //  3 Sprite data	/ TC5364202
	{ "256-c2.c2",    	0x800000, 0x944c362c, 3 | BRF_GRA },           //  4 				/ TC5364202
	{ "256-c3.c3",    	0x800000, 0x6e69d36f, 3 | BRF_GRA },           //  5 				/ TC5364202		
	{ "256-c4.c4",    	0x800000, 0xb755b4eb, 3 | BRF_GRA },           //  6 				/ TC5364202
	{ "256-c5.c5",    	0x800000, 0x7aacab47, 3 | BRF_GRA },           //  7 				/ TC5364202
	{ "256-c6.c6",    	0x800000, 0xc698fd5d, 3 | BRF_GRA },           //  8 				/ TC5364202	
	{ "256-c7.c7",    	0x800000, 0xcfceddd2, 3 | BRF_GRA },           //  9 				/ TC5364202
	{ "256-c8.c8",    	0x800000, 0x4d9be34c, 3 | BRF_GRA }, 
	
	{ "256-m1.bin",    	0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 11 Z80 code		/ mask rom TC534000
		
	{ "256-v1.bin",    	0x400000, 0xf2690241, 5 | BRF_SND },           // 12 Sound data 	/ TC5332204
	{ "256-v2.bin",    	0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 13 				/ TC5332204
	{ "256-v3.bin",    	0x400000, 0x0eaec17c, 5 | BRF_SND },           // 14 				/ TC5332204
	{ "256-v4.bin",    	0x400000, 0x9b4b22d4, 5 | BRF_SND },           // 15 				/ TC5332204
};

STDROMPICKEXT(mslug31v2, mslug31v2, neogeo)
STD_ROM_FN(mslug31v2)

struct BurnDriver BurnDrvmslug31v2 = {
	"mslug31v2", "mslug3", "neogeo", NULL, "2019",
	"Metal Slug 3 1v2 Mode [Hack)\0", NULL, "\u5408\u91d1\u5f39\u5934\u7231\u514b\u65af", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42 | HARDWARE_SNK_SMA_PROTECTION, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug31v2RomInfo, mslug31v2RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3Init, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 3 Shop Edition [Hack]

static struct BurnRomInfo mslug3sdRomDesc[] = {
	{ "256-ph1.rom",   0x100000, 0xe1e21cc4, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "256-ph2.rom",   0x400000, 0x7343335b, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "256-c1.c1",    0x800000, 0x5a79c34e, 3 | BRF_GRA },           //  2 Sprite data 	/ TC5364202
	{ "256-c2.c2",    0x800000, 0x944c362c, 3 | BRF_GRA },           //  3 				/ TC5364202
	{ "256-c3.c3",    0x800000, 0x6e69d36f, 3 | BRF_GRA },           //  4 				/ TC5364202
	{ "256-c4.c4",    0x800000, 0xb755b4eb, 3 | BRF_GRA },           //  5 				/ TC5364202
	{ "256-c5.c5",    0x800000, 0x7aacab47, 3 | BRF_GRA },           //  6 				/ TC5364202
	{ "256-c6.c6",    0x800000, 0xc698fd5d, 3 | BRF_GRA },           //  7 				/ TC5364202
	{ "256-c7.c7",    0x800000, 0xcfceddd2, 3 | BRF_GRA },           //  8 				/ TC5364202
	{ "256-c8.c8",    0x800000, 0x4d9be34c, 3 | BRF_GRA },           //  9 				/ TC5364202

	{ "256-m1.m1",    0x080000, 0xeaeec116, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code		/ mask rom TC534000

	{ "256-v1.v1",    0x400000, 0xf2690241, 5 | BRF_SND },           // 11 Sound data	/ TC5332204
	{ "256-v2.v2",    0x400000, 0x7e2a10bd, 5 | BRF_SND },           // 12 				/ TC5332204
	{ "256-v3.v3",    0x400000, 0x0eaec17c, 5 | BRF_SND },           // 13 				/ TC5332204
	{ "256-v4.v4",    0x400000, 0x9b4b22d4, 5 | BRF_SND },  
};

STDROMPICKEXT(mslug3sd, mslug3sd, neogeo)
STD_ROM_FN(mslug3sd)

struct BurnDriver BurnDrvmslug3sd = {
	"mslug3sd", "mslug3", "neogeo", NULL, "2017",
	"Metal Slug 3 Shop Edition [Hack]\0", NULL, "\u78c1\u66b4\u7ebf\u5708", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug3sdRomInfo, mslug3sdRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug3hInit, NeoSMAExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 4 (NGM-2630)
/* Original Version - Encrypted GFX */ /* MVS VERSION */

static struct BurnRomInfo mslug4RomDesc[] = {
	/* There also exist carts where p1 label is pg1; the PG1 revision has a Japanese cart label, SN 02Jxxxxx
	The P1 revision has a US/EUR cart label, SN 02Txxxxx ; Rom data on both is identical.
	These carts were manufactured by Mega Enterprise, not SNK. */
	{ "263-p1.p1",    0x100000, 0x27e4def3, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "263-p2.sp2",   0x400000, 0xfdb7aed8, 1 | BRF_ESS | BRF_PRG }, //  1 

	/* The Encrypted Boards do not have an s1 rom, data for it comes from the Cx ROMs */
	/* Encrypted */
	{ "263-c1.c1",    0x800000, 0x84865f8a, 3 | BRF_GRA },           //  2 Sprite data
	{ "263-c2.c2",    0x800000, 0x81df97f2, 3 | BRF_GRA },           //  3 
	{ "263-c3.c3",    0x800000, 0x1a343323, 3 | BRF_GRA },           //  4 
	{ "263-c4.c4",    0x800000, 0x942cfb44, 3 | BRF_GRA },           //  5 
	{ "263-c5.c5",    0x800000, 0xa748854f, 3 | BRF_GRA },           //  6 
	{ "263-c6.c6",    0x800000, 0x5c8ba116, 3 | BRF_GRA },           //  7 

	/* Encrypted */
	{ "263-m1.m1",    0x020000, 0x46ac8228, 4 | BRF_ESS | BRF_PRG }, //  8 Z80 code

	/* Encrypted */
	{ "263-v1.v1",    0x800000, 0x01e9b9cd, 5 | BRF_SND },           //  9 Sound data
	{ "263-v2.v2",    0x800000, 0x4ab2bf81, 5 | BRF_SND },           // 10 
};

STDROMPICKEXT(mslug4, mslug4, neogeo)
STD_ROM_FN(mslug4)

static INT32 mslug4Init()
{
	INT32 nRet;

//	nNeoTextROMSize = 0x080000;
	nNeoProtectionXor = 0x31;

	nRet = NeoInit();

	if (nRet == 0) {
		PCM2DecryptV(0x1000000, 1);
	}

	return nRet;
}

struct BurnDriver BurnDrvmslug4 = {
	"mslug4", NULL, "neogeo", NULL, "2002",
	"Metal Slug 4 (NGM-2630)\0", NULL, "Mega", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug4RomInfo, mslug4RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug4Init, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 4 (NGH-2630)
/* Original Version - Encrypted GFX */ /* AES VERSION */

static struct BurnRomInfo mslug4hRomDesc[] = {
	{ "263-ph1.p1",   0x100000, 0xc67f5c8d, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "263-ph2.sp2",  0x400000, 0xbc3ec89e, 1 | BRF_ESS | BRF_PRG }, //  1 

	/* The Encrypted Boards do not have an s1 rom, data for it comes from the Cx ROMs */
	/* Encrypted */
	{ "263-c1.c1",    0x800000, 0x84865f8a, 3 | BRF_GRA },           //  2 Sprite data
	{ "263-c2.c2",    0x800000, 0x81df97f2, 3 | BRF_GRA },           //  3 
	{ "263-c3.c3",    0x800000, 0x1a343323, 3 | BRF_GRA },           //  4 
	{ "263-c4.c4",    0x800000, 0x942cfb44, 3 | BRF_GRA },           //  5 
	{ "263-c5.c5",    0x800000, 0xa748854f, 3 | BRF_GRA },           //  6 
	{ "263-c6.c6",    0x800000, 0x5c8ba116, 3 | BRF_GRA },           //  7 

	/* Encrypted */
	{ "263-m1.m1",    0x020000, 0x46ac8228, 4 | BRF_ESS | BRF_PRG }, //  8 Z80 code

	/* Encrypted */
	{ "263-v1.v1",    0x800000, 0x01e9b9cd, 5 | BRF_SND },           //  9 Sound data
	{ "263-v2.v2",    0x800000, 0x4ab2bf81, 5 | BRF_SND },           // 10 
};

STDROMPICKEXT(mslug4h, mslug4h, neogeo)
STD_ROM_FN(mslug4h)

struct BurnDriver BurnDrvmslug4h = {
	"mslug4h", "mslug4", "neogeo", NULL, "2002",
	"Metal Slug 4 (NGH-2630)\0", NULL, "Mega", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug4hRomInfo, mslug4hRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug4Init, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 4 Plus (bootleg)

static struct BurnRomInfo ms4plusRomDesc[] = {
	{ "ms4-p1p.bin",  0x100000, 0x806a6e04, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "263-p2.sp2",   0x400000, 0xfdb7aed8, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "ms4-s1p.bin",  0x020000, 0x07ff87ce, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "263-c1.c1",    0x800000, 0x84865f8a, 3 | BRF_GRA },           //  3 Sprite data
	{ "263-c2.c2",    0x800000, 0x81df97f2, 3 | BRF_GRA },           //  4 
	{ "263-c3.c3",    0x800000, 0x1a343323, 3 | BRF_GRA },           //  5 
	{ "263-c4.c4",    0x800000, 0x942cfb44, 3 | BRF_GRA },           //  6 
	{ "263-c5.c5",    0x800000, 0xa748854f, 3 | BRF_GRA },           //  7 
	{ "263-c6.c6",    0x800000, 0x5c8ba116, 3 | BRF_GRA },           //  8 

	{ "263-m1.m1",    0x020000, 0x46ac8228, 4 | BRF_ESS | BRF_PRG }, //  8 Z80 code

	{ "263-v1.v1",    0x800000, 0x01e9b9cd, 5 | BRF_SND },           //  9 Sound data
	{ "263-v2.v2",    0x800000, 0x4ab2bf81, 5 | BRF_SND },           // 10 
};

STDROMPICKEXT(ms4plus, ms4plus, neogeo)
STD_ROM_FN(ms4plus)

struct BurnDriver BurnDrvms4plus = {
	"ms4plus", "mslug4", "neogeo", NULL, "2002",
	"Metal Slug 4 Plus (bootleg)\0", NULL, "bootleg", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_BOOTLEG, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, ms4plusRomInfo, ms4plusRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug4Init, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 4 (20th Anniversary GOTVG Hack)

static struct BurnRomInfo mslug4aRomDesc[] = {

	{ "263-p1.bin",   0x100000, 0x61cdef09, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "263-p2.bin",   0x400000, 0x87dc01b9, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "263-s1.bin",  0x080000, 0x1eaa05e0, 2 | BRF_GRA },

	{ "263-c1.rom",    0x800000, 0xa75ffcde, 3 | BRF_GRA },           //  2 Sprite data
	{ "263-c2.rom",    0x800000, 0x5ab0d12b, 3 | BRF_GRA },           //  3
	{ "263-c3.rom",    0x800000, 0x61af560c, 3 | BRF_GRA },           //  4
	{ "263-c4.rom",    0x800000, 0xf2c544fd, 3 | BRF_GRA },           //  5
	{ "263-c5.rom",    0x800000, 0x84c66c44, 3 | BRF_GRA },           //  6
	{ "263-c6.rom",    0x800000, 0x5ed018ab, 3 | BRF_GRA },           //  7
																	  /* Encrypted */
	{ "263-m1.bin",    0x020000, 0xef5db532, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code
																	  /* Encrypted */
	{ "263-v1.v1",    0x800000, 0xfd6b982e, 5 | BRF_SND },           //  9 Sound data
	{ "263-v2.v2",    0x800000, 0x20125227, 5 | BRF_SND },            // 10
};

STDROMPICKEXT(mslug4a, mslug4a, neogeo)
STD_ROM_FN(mslug4a)

struct BurnDriver BurnDrvmslug4a = {
	"mslug4a", NULL, "neogeo", NULL, "2021",
	"Metal Slug 4 (20th Anniversary, Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_PLATFORM, FBF_MSLUG,
	NULL, mslug4aRomInfo, mslug4aRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 4 [Enemy Reset Remastering] [Hack]

static struct BurnRomInfo mslug4arRomDesc[] = {

	{ "263-p1.bin",   0x100000, 0xF0C97843, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "263-p2.bin",   0x400000, 0x1464718D, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "263-s1.bin",  0x080000, 0x1eaa05e0, 2 | BRF_GRA },

	{ "263-c1.rom",    0x800000, 0xa75ffcde, 3 | BRF_GRA },           //  2 Sprite data
	{ "263-c2.rom",    0x800000, 0x5ab0d12b, 3 | BRF_GRA },           //  3
	{ "263-c3.rom",    0x800000, 0x61af560c, 3 | BRF_GRA },           //  4
	{ "263-c4.rom",    0x800000, 0xf2c544fd, 3 | BRF_GRA },           //  5
	{ "263-c5.rom",    0x800000, 0x84c66c44, 3 | BRF_GRA },           //  6
	{ "263-c6.rom",    0x800000, 0x5ed018ab, 3 | BRF_GRA },           //  7

																	  /* Encrypted */
	{ "263-m1.bin",    0x020000, 0xef5db532, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

																	  /* Encrypted */
	{ "263-v1.v1",    0x800000, 0xfd6b982e, 5 | BRF_SND },           //  9 Sound data
	{ "263-v2.v2",    0x800000, 0x20125227, 5 | BRF_SND },            // 10
};

STDROMPICKEXT(mslug4ar, mslug4ar, neogeo)
STD_ROM_FN(mslug4ar)

struct BurnDriver BurnDrvmslug4ar = {
	"mslug4ar", "mslug4a", "neogeo", NULL, "2021",
	"Metal Slug 4 (Enemies Reset fusion 20th Anniversary, Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_PLATFORM, FBF_MSLUG,
	NULL, mslug4arRomInfo, mslug4arRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

static struct BurnRomInfo mslug4cRomDesc[] = {
	/* There also exist carts where p1 label is pg1; the PG1 revision has a Japanese cart label, SN 02Jxxxxx
	The P1 revision has a US/EUR cart label, SN 02Txxxxx ; Rom data on both is identical.
	These carts were manufactured by Mega Enterprise, not SNK. */
	{ "263-p1.p1",    0x100000, 0x81FD4AE9, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "263-p2.sp2",   0x400000, 0xfdb7aed8, 1 | BRF_ESS | BRF_PRG }, //  1 

																	 /* The Encrypted Boards do not have an s1 rom, data for it comes from the Cx ROMs */
																	 /* Encrypted */
	{ "263-c1.c1",    0x800000, 0x84865f8a, 3 | BRF_GRA },           //  2 Sprite data
	{ "263-c2.c2",    0x800000, 0x81df97f2, 3 | BRF_GRA },           //  3 
	{ "263-c3.c3",    0x800000, 0x1a343323, 3 | BRF_GRA },           //  4 
	{ "263-c4.c4",    0x800000, 0x942cfb44, 3 | BRF_GRA },           //  5 
	{ "263-c5.c5",    0x800000, 0xa748854f, 3 | BRF_GRA },           //  6 
	{ "263-c6.c6",    0x800000, 0x5c8ba116, 3 | BRF_GRA },           //  7 

																	 /* Encrypted */
	{ "263-m1.m1",    0x020000, 0x46ac8228, 4 | BRF_ESS | BRF_PRG }, //  8 Z80 code

																	 /* Encrypted */
	{ "263-v1.v1",    0x800000, 0x01e9b9cd, 5 | BRF_SND },           //  9 Sound data
	{ "263-v2.v2",    0x800000, 0x4ab2bf81, 5 | BRF_SND },           // 10 
};

STDROMPICKEXT(mslug4c, mslug4c, neogeo)
STD_ROM_FN(mslug4c)

struct BurnDriver BurnDrvmslug4c = {
	"mslug4c", "mslug4", "neogeo", NULL, "2002",
	"Metal Slug 4 (Enemies Reset, Hack)\0", NULL, "Mega", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug4cRomInfo, mslug4cRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug4Init, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 4 Ammunition Random Edition [Hack]

static struct BurnRomInfo mslug4ammorRomDesc[] = {
	{ "263-p1.bin", 0x100000, 0x21b68d31, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "263-p2.bin", 0x800000, 0x427eed0b, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "263-s1.bin", 0x020000, 0xa9446774, 2 | BRF_GRA },

	{ "263-c1.bin",	0x800000, 0x361ddda6, 3 | BRF_GRA },
	{ "263-c2.bin",	0x800000, 0x15d192c4, 3 | BRF_GRA },
	{ "263-c3.bin",	0x800000, 0xe296612c, 3 | BRF_GRA },
	{ "263-c4.bin",	0x800000, 0xc22e3ad0, 3 | BRF_GRA },
	{ "263-c5.bin",	0x400000, 0x288cd91f, 3 | BRF_GRA },
	{ "263-c6.bin",	0x400000, 0xb015aeee, 3 | BRF_GRA },

	{ "263-m1.bin", 0x020000, 0x49B1453E, 4 | BRF_ESS | BRF_PRG },

	{ "263-v1.bin",	0x400000, 0x8cb5a9ef, 5 | BRF_SND },
	{ "263-v2.bin",	0x400000, 0xC9572C14, 5 | BRF_SND },
	{ "263-v3.bin",	0x400000, 0xE7C14624, 5 | BRF_SND },
	{ "263-v4.bin",	0x800000, 0xB1E5AC70, 5 | BRF_SND }, 
};

STDROMPICKEXT(mslug4ammor, mslug4ammor, neogeo)
STD_ROM_FN(mslug4ammor)

struct BurnDriver BurnDrvmslug4ammor = {
	"mslug4ammor", "mslug4lw", "neogeo", NULL, "2016",
	"Metal Slug 4 Ammunition Random Edition [Hack]\0", NULL, "\u78c1\u66b4\u7ebf\u5708", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug4ammorRomInfo, mslug4ammorRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// GOTVG  Metal Slug 4 (Multifunction Hack 20171225)
static struct BurnRomInfo mslug4dgRomDesc[] = {
	{ "263-p1.bin",   0x100000, 0x36dfa877, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "263-p2.bin",   0x400000, 0xcf6feb75, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "263.s1",    0x020000, 0xa9446774, 2 | BRF_GRA },

	{ "263nd.c1",	0x800000, 0x361ddda6, 3 | BRF_GRA },
	{ "263nd.c2",	0x800000, 0x15d192c4, 3 | BRF_GRA },
	{ "263-c3.bin",	0x800000, 0xe296612c, 3 | BRF_GRA },
	{ "263-c4.bin",	0x800000, 0xc22e3ad0, 3 | BRF_GRA },
	{ "263-c5.bin",	0x400000, 0x288cd91f, 3 | BRF_GRA },
	{ "263-c6.bin",	0x400000, 0xb015aeee, 3 | BRF_GRA },

	{ "263nd.m1",    0x020000, 0xef5db532, 4 | BRF_ESS | BRF_PRG },

	{ "263-v1.bin",	0x400000, 0x8cb5a9ef, 5 | BRF_SND },
	{ "263-v2.bin",	0x400000, 0x94217b1e, 5 | BRF_SND },
	{ "263-v3.bin",	0x400000, 0x7616fcec, 5 | BRF_SND },
	{ "263-v4.bin",	0x400000, 0xc5967f91, 5 | BRF_SND }, 
};

STDROMPICKEXT(mslug4dg, mslug4dg, neogeo)
STD_ROM_FN(mslug4dg)

struct BurnDriver BurnDrvmslug4dg = {
	"mslug4dg", "mslug4", "neogeo", NULL, "20171225",
	"Metal Slug 4 (Multifunction Hack)\0", NULL, "hack", "Neo Geo",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug4dgRomInfo, mslug4dgRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// GOTVG  Metal Slug 4 (Last Bullet Hack)
static struct BurnRomInfo mslug4lwRomDesc[] = {
	{ "263-p1.bin", 0x100000, 0xAD713169, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "263-p2.bin", 0x800000, 0x427EED0B, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "263-s1.bin", 0x020000, 0xa9446774, 2 | BRF_GRA },

	{ "263-c1.bin",	0x800000, 0x361ddda6, 3 | BRF_GRA },
	{ "263-c2.bin",	0x800000, 0x15d192c4, 3 | BRF_GRA },
	{ "263-c3.bin",	0x800000, 0xe296612c, 3 | BRF_GRA },
	{ "263-c4.bin",	0x800000, 0xc22e3ad0, 3 | BRF_GRA },
	{ "263-c5.bin",	0x400000, 0x288cd91f, 3 | BRF_GRA },
	{ "263-c6.bin",	0x400000, 0xb015aeee, 3 | BRF_GRA },

	{ "263-m1.bin", 0x020000, 0x49B1453E, 4 | BRF_ESS | BRF_PRG },

	{ "263-v1.bin",	0x400000, 0x8cb5a9ef, 5 | BRF_SND },
	{ "263-v2.bin",	0x400000, 0xC9572C14, 5 | BRF_SND },
	{ "263-v3.bin",	0x400000, 0xE7C14624, 5 | BRF_SND },
	{ "263-v4.bin",	0x800000, 0xB1E5AC70, 5 | BRF_SND }, 
};

STDROMPICKEXT(mslug4lw, mslug4lw, neogeo)
STD_ROM_FN(mslug4lw)

struct BurnDriver BurnDrvmslug4lw = {
	"mslug4lw", NULL, "neogeo", NULL, "2020",
	"Metal Slug 4 (Last Bullet Remix, Hack)\0", NULL, "hack", "Neo Geo",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug4lwRomInfo, mslug4lwRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// mslug4unity - Metal Slug 4 Unity (Timer added version)

static struct BurnRomInfo mslug4unityRomDesc[] = {
	{ "263-p1.p1",    0x100000, 0xef3501b6, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "263-p2.sp2",   0x400000, 0xfdb7aed8, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "263-c1.c1",    0x800000, 0x84865f8a, 3 | BRF_GRA },           //  2 Sprite data
	{ "263-c2.c2",    0x800000, 0x81df97f2, 3 | BRF_GRA },           //  3
	{ "263-c3.c3",    0x800000, 0x1a343323, 3 | BRF_GRA },           //  4
	{ "263-c4.c4",    0x800000, 0x942cfb44, 3 | BRF_GRA },           //  5
	{ "263-c5.c5",    0x800000, 0xa748854f, 3 | BRF_GRA },           //  6
	{ "263-c6.c6",    0x800000, 0x5c8ba116, 3 | BRF_GRA },           //  7

	{ "263-m1.m1",    0x020000, 0x46ac8228, 4 | BRF_ESS | BRF_PRG }, //  8 Z80 code

	{ "263-v1.v1",    0x800000, 0x01e9b9cd, 5 | BRF_SND },           //  9 Sound data
	{ "263-v2.v2",    0x800000, 0x4ab2bf81, 5 | BRF_SND },           // 10
};

STDROMPICKEXT(mslug4unity, mslug4unity, neogeo)
STD_ROM_FN(mslug4unity)

struct BurnDriver BurnDrvmslug4unity = {
	"mslug4unity", "mslug4", "neogeo", NULL, "20210130",
	"Metal Slug 4 Unity (Added Timer)\0", NULL, "Mega", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug4unityRomInfo, mslug4unityRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug4Init, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 5 (NGM-2680)
/* Encrypted Set */ /* MVS VERSION */

static struct BurnRomInfo mslug5RomDesc[] = {
	{ "268-p1cr.p1",   0x400000, 0xd0466792, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "268-p2cr.p2",   0x400000, 0xfbf6b61e, 1 | BRF_ESS | BRF_PRG }, //  1 

	/* The Encrypted Boards do not have an s1 rom, data for it comes from the Cx ROMs */
	/* Encrypted */
	{ "268-c1c.c1",    0x800000, 0xab7c389a, 3 | BRF_GRA },           //  2 Sprite data
	{ "268-c2c.c2",    0x800000, 0x3560881b, 3 | BRF_GRA },           //  3 
	{ "268-c3c.c3",    0x800000, 0x3af955ea, 3 | BRF_GRA },           //  4 
	{ "268-c4c.c4",    0x800000, 0xc329c373, 3 | BRF_GRA },           //  5 
	{ "268-c5c.c5",    0x800000, 0x959c8177, 3 | BRF_GRA },           //  6 
	{ "268-c6c.c6",    0x800000, 0x010a831b, 3 | BRF_GRA },           //  7 
	{ "268-c7c.c7",    0x800000, 0x6d72a969, 3 | BRF_GRA },           //  8 
	{ "268-c8c.c8",    0x800000, 0x551d720e, 3 | BRF_GRA },           //  9 

	/* Encrypted */
	{ "268-m1.m1",     0x080000, 0x4a5a6e0e, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	/* Encrypted */
	{ "268-v1c.v1",    0x800000, 0xae31d60c, 5 | BRF_SND },           // 11 Sound data
	{ "268-v2c.v2",    0x800000, 0xc40613ed, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslug5, mslug5, neogeo)
STD_ROM_FN(mslug5)

static void mslug5Callback()
{
	INT32 i, j, k;
	for (i = 0; i < 0x100000; i++)
		Neo68KROMActive[i] ^= Neo68KROMActive[0x0fffe0 + (i & 0x1f)];

	for (i = 0x100000; i < 0x700000; i++)
		Neo68KROMActive[i] ^= ~Neo68KROMActive[0x7fffe0 + (i & 0x1f)];

	for (i = 0x100000; i < 0x0500000; i += 4)
	{
		UINT16 rom16 = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(Neo68KROMActive + i + 1)));
		rom16 = BITSWAP16(rom16, 15, 14, 13, 12, 10, 11, 8, 9, 6, 7, 4, 5, 3, 2, 1, 0);
		*((UINT16 *)(Neo68KROMActive + i + 1)) = BURN_ENDIAN_SWAP_INT16(rom16);
	}

	memmove (Neo68KROMActive + 0x700000, Neo68KROMActive, 0x100000);

	for (i = 0; i < 0x100000 / 0x010000; i++)
	{
		j = BITSWAP08(i, 7, 6, 5, 4, 1, 0, 3, 2) * 0x010000;
		memmove (Neo68KROMActive + i * 0x010000, Neo68KROMActive + 0x700000 + j, 0x010000);
	}

	for (i = 0x100000; i < 0x700000; i += 0x100000)
	{
		for (j = 0; j < 0x100000; j+=0x100)
		{
			k = ((j & 0xf00) ^ 0x700) + (BITSWAP08((j >> 12), 5, 4, 7, 6, 1, 0, 3, 2 ) << 12);
			memmove (Neo68KROMActive + 0x700000 + j, Neo68KROMActive + i + k, 0x100);
		}

		memmove (Neo68KROMActive + i, Neo68KROMActive + 0x700000, 0x100000);
	}
}

static INT32 mslug5Init()
{
	INT32 nRet;
	
	nNeoProtectionXor = 0x19;
	NeoCallbackActive->pInitialise = mslug5Callback;
	
	nRet = NeoPVCInit();
	
	if (nRet == 0) {
		const PCM2DecryptV2Info Info = { 0x4e001, 0xfe2cf6, { 0xc3, 0xfd, 0x81, 0xac, 0x6d, 0xe7, 0xbf, 0x9e } };

		PCM2DecryptV2(&Info);
	}

	return nRet;
}

struct BurnDriver BurnDrvmslug5 = {
	"mslug5", NULL, "neogeo", NULL, "2003",
	"Metal Slug 5 (NGM-2680)\0", NULL, "SNK Playmore", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ALTERNATE_TEXT | HARDWARE_SNK_P32 | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5RomInfo, mslug5RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug5Init, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};


// Metal Slug 5 (NGH-2680)
/* Encrypted Set */ /* AES release of the game but is also found in later MVS carts */

static struct BurnRomInfo mslug5hRomDesc[] = {
	{ "268-p1c.p1",    0x400000, 0x3636690a, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "268-p2c.p2",    0x400000, 0x8dfc47a2, 1 | BRF_ESS | BRF_PRG }, //  1 
	/* also found AES set with P1 / P2 on mask rom on PROG board NEO-AEG PROGBK3S (2003.6.10); 
	chip labels are 268-P1CR2 and 268-P2CR2
	and M1 on eprom M27C4001 with label sticker 268-M1 on CHA board NEO-MVS CHAFIO (2003.7.24) (NEO-CMC 7050) */

	/* The Encrypted Boards do not have an s1 rom, data for it comes from the Cx ROMs */
	/* Encrypted */
	{ "268-c1c.c1",    0x800000, 0xab7c389a, 3 | BRF_GRA },           //  2 Sprite data
	{ "268-c2c.c2",    0x800000, 0x3560881b, 3 | BRF_GRA },           //  3 
	{ "268-c3c.c3",    0x800000, 0x3af955ea, 3 | BRF_GRA },           //  4 
	{ "268-c4c.c4",    0x800000, 0xc329c373, 3 | BRF_GRA },           //  5 
	{ "268-c5c.c5",    0x800000, 0x959c8177, 3 | BRF_GRA },           //  6 
	{ "268-c6c.c6",    0x800000, 0x010a831b, 3 | BRF_GRA },           //  7 
	{ "268-c7c.c7",    0x800000, 0x6d72a969, 3 | BRF_GRA },           //  8 
	{ "268-c8c.c8",    0x800000, 0x551d720e, 3 | BRF_GRA },           //  9 

	/* Encrypted */
	{ "268-m1.m1",     0x080000, 0x4a5a6e0e, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	/* Encrypted */
	{ "268-v1c.v1",    0x800000, 0xae31d60c, 5 | BRF_SND },           // 11 Sound data
	{ "268-v2c.v2",    0x800000, 0xc40613ed, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslug5h, mslug5h, neogeo)
STD_ROM_FN(mslug5h)

struct BurnDriver BurnDrvmslug5h = {
	"mslug5h", "mslug5", "neogeo", NULL, "2003",
	"Metal Slug 5 (NGH-2680)\0", NULL, "SNK Playmore", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ALTERNATE_TEXT | HARDWARE_SNK_P32 | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5hRomInfo, mslug5hRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug5Init, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 5 (JAMMA PCB)

static struct BurnRomInfo ms5pcbRomDesc[] = {
	{ "268-p1r.p1",   0x400000,  0xd0466792, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "268-p2r.p2",   0x400000,  0xfbf6b61e, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "268-c1.c1",    0x1000000, 0x802042e8, 3 | BRF_GRA },           //  2 Sprite data
	{ "268-c2.c2",    0x1000000, 0x3b89fb9f, 3 | BRF_GRA },           //  3 
	{ "268-c3.c3",    0x1000000, 0x0f3f59e3, 3 | BRF_GRA },           //  4 
	{ "268-c4.c4",    0x1000000, 0x3ad8435a, 3 | BRF_GRA },           //  5 

	{ "268-m1.m1",    0x080000,  0x4a5a6e0e, 4 | BRF_ESS | BRF_PRG }, // 6 Z80 code

	{ "268-v1.v1",    0x1000000, 0x8458afe5, 5 | BRF_SND },           //  7 Sound data
};

STDROMPICKEXT(ms5pcb, ms5pcb, ms5pcbBIOS)
STD_ROM_FN(ms5pcb)

struct BurnDriver BurnDrvms5pcb = {
	"ms5pcb", NULL, NULL, NULL, "2003",
	"Metal Slug 5 (JAMMA PCB)\0", NULL, "SNK Playmore", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_SNK_DEDICATED_PCB | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ALTERNATE_TEXT | HARDWARE_SNK_P32 | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, ms5pcbRomInfo, ms5pcbRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, ms5pcbDIPInfo,
	mslug5Init, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 5 Plus (bootleg)

static struct BurnRomInfo ms5plusRomDesc[] = {
	{ "ms5-p1p.bin",  0x100000, 0x106b276f, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "ms5-p2p.bin",  0x200000, 0xd6a458e8, 1 | BRF_ESS | BRF_PRG }, //  1 
	{ "ms5-p3p.bin",  0x200000, 0x439ec031, 1 | BRF_ESS | BRF_PRG }, //  2 

	{ "ms5-s1p.bin",  0x020000, 0x21e04432, 2 | BRF_GRA },           //  3 Text layer tiles
	
	{ "268-c1c.c1",   0x800000, 0xab7c389a, 3 | BRF_GRA },           //  4 Sprite data
	{ "268-c2c.c2",   0x800000, 0x3560881b, 3 | BRF_GRA },           //  5 
	{ "268-c3c.c3",   0x800000, 0x3af955ea, 3 | BRF_GRA },           //  6 
	{ "268-c4c.c4",   0x800000, 0xc329c373, 3 | BRF_GRA },           //  7 
	{ "268-c5c.c5",   0x800000, 0x959c8177, 3 | BRF_GRA },           //  8 
	{ "268-c6c.c6",   0x800000, 0x010a831b, 3 | BRF_GRA },           //  9 
	{ "268-c7c.c7",   0x800000, 0x6d72a969, 3 | BRF_GRA },           // 10 
	{ "268-c8c.c8",   0x800000, 0x551d720e, 3 | BRF_GRA },           // 11 

	{ "268-m1.m1",    0x080000, 0x4a5a6e0e, 4 | BRF_ESS | BRF_PRG }, // 12 Z80 code

	{ "268-v1c.v1",   0x800000, 0xae31d60c, 5 | BRF_SND },           // 13 Sound data
	{ "268-v2c.v2",   0x800000, 0xc40613ed, 5 | BRF_SND },           // 14 
};

STDROMPICKEXT(ms5plus, ms5plus, neogeo)
STD_ROM_FN(ms5plus)

void __fastcall ms5plusWriteWordBankSwitch(UINT32 sekAddress, UINT16 wordValue)
{
	if (sekAddress==0x2ffff4)
	{
		UINT32 nBank = wordValue << 16;
		if (nNeo68KROMBank != nBank)
		{
			nNeo68KROMBank = nBank;
			SekMapMemory(Neo68KROMActive + nNeo68KROMBank, 0x200000, 0x2fdfff, MAP_ROM);
		}
	};
}

static void ms5plusInstallHandlers()
{
	SekMapHandler(6,	0x2fe000, 0x2fffff, MAP_WRITE);
	SekSetWriteWordHandler(6, ms5plusWriteWordBankSwitch);
}

static INT32 ms5plusInit()
{
	INT32 nRet;
	
	NeoCallbackActive->pInitialise = lans2004_sx_decode;
	NeoCallbackActive->pInstallHandlers = ms5plusInstallHandlers;
	NeoCallbackActive->pBankswitch = NeoPVCMapBank;
	nNeoProtectionXor = 0x19;
	
	nRet = NeoInit();

	if (nRet == 0) {
		const PCM2DecryptV2Info Info = { 0x4e001, 0xfe2cf6, { 0xc3, 0xfd, 0x81, 0xac, 0x6d, 0xe7, 0xbf, 0x9e } };

		PCM2DecryptV2(&Info);
	}
	
	return nRet;
}

struct BurnDriver BurnDrvms5plus = {
	"ms5plus", "mslug5", "neogeo", NULL, "2003",
	"Metal Slug 5 Plus (bootleg)\0", NULL, "bootleg", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_BOOTLEG, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ALTERNATE_TEXT | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, ms5plusRomInfo, ms5plusRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	ms5plusInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 5 (bootleg, set 1)

static struct BurnRomInfo mslug5bRomDesc[] = {
	{ "ms5b-p1.bin",   0x100000, 0x1376f43c, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "ms5b-p2.bin",   0x400000, 0x4becfba0, 1 | BRF_ESS | BRF_PRG }, //  1
	
	{ "ms5b-s1.bin",   0x020000, 0x3a427c9f, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "ms5b-c1.bin",   0x800000, 0x4b0e5998, 3 | BRF_GRA },           //  3 Sprite data
	{ "ms5b-c2.bin",   0x800000, 0x022fc30b, 3 | BRF_GRA },           //  4
	{ "ms5b-c3.bin",   0x800000, 0xead86d28, 3 | BRF_GRA },           //  5
	{ "ms5b-c4.bin",   0x800000, 0x0be6be35, 3 | BRF_GRA },           //  6
	{ "ms5b-c5.bin",   0x200000, 0x2a23e569, 3 | BRF_GRA },           //  7
	{ "ms5b-c6.bin",   0x200000, 0x6eb6bc9e, 3 | BRF_GRA },           //  8
	{ "ms5b-c7.bin",   0x800000, 0x57f4e53f, 3 | BRF_GRA },           //  9
	{ "ms5b-c8.bin",   0x800000, 0x9d59ff7c, 3 | BRF_GRA },           // 10

	{ "ms5b-m1.bin",   0x020000, 0xbf1601bc, 4 | BRF_ESS | BRF_PRG }, // 11 Z80 code

	{ "ms5b-v1.bin",   0x400000, 0xe3f9fd75, 5 | BRF_SND },           // 12 Sound data
	{ "ms5b-v2.bin",   0x400000, 0xa53618f6, 5 | BRF_SND },           // 13
	{ "ms5b-v3.bin",   0x400000, 0x14f000ee, 5 | BRF_SND },           // 14
	{ "ms5b-v4.bin",   0x400000, 0x0ccee813, 5 | BRF_SND },           // 15	
};

STDROMPICKEXT(mslug5b, mslug5b, neogeo)
STD_ROM_FN(mslug5b)

static void mslug5b_cx_decode()
{
	UINT8 *tmp = NeoSpriteROM[nNeoActiveSlot] + 0x2400000; // use empty space as buffer

	// swap chunks
	for (INT32 i = 0; i < 0x4000000; i += 0x200000) {
		memcpy (tmp + 0x000000, NeoSpriteROM[nNeoActiveSlot] + i + 0x100000, 0x080000);
		memcpy (tmp + 0x080000, NeoSpriteROM[nNeoActiveSlot] + i + 0x080000, 0x080000);
		memmove (NeoSpriteROM[nNeoActiveSlot] + i + 0x80000, tmp, 0x100000);
	}
}

static void mslug5b_vx_decrypt()
{
	for (INT32 i = 0; i < 0x1000000; i += 2)
		YM2610ADPCMAROM[nNeoActiveSlot][i + 1] = BITSWAP08(YM2610ADPCMAROM[nNeoActiveSlot][i + 1], 3, 2, 4, 1, 5, 0, 6, 7);
}

static void mslug5bCallback()
{
	svcsplus_sx_decode();
	mslug5b_cx_decode();
}

static INT32 mslug5bInit()
{
	INT32 nRet;

	NeoCallbackActive->pInitialise = mslug5bCallback;

 	nRet = NeoInit();

	if (nRet == 0) {
		mslug5b_vx_decrypt();
	}

	return nRet;
}

struct BurnDriver BurnDrvmslug5b = {
	"mslug5b", "mslug5", "neogeo", NULL, "2003",
	"Metal Slug 5 (bootleg, set 1)\0", NULL, "bootleg", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_BOOTLEG, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5bRomInfo, mslug5bRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug5bInit, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 5 (bootleg, set 2)

static struct BurnRomInfo mslug5b2RomDesc[] = {
	{ "ms5-p1b.bin",   0x500000, 0xd05853ea, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268-c1c.bin",   0x800000, 0xab7c389a, 3 | BRF_GRA },           //  1 Sprite data
	{ "268-c2c.bin",   0x800000, 0x3560881b, 3 | BRF_GRA },           //  2 
	{ "268-c3c.bin",   0x800000, 0x3af955ea, 3 | BRF_GRA },           //  3 
	{ "268-c4c.bin",   0x800000, 0xc329c373, 3 | BRF_GRA },           //  4 
	{ "268-c5c.bin",   0x800000, 0x959c8177, 3 | BRF_GRA },           //  5 
	{ "268-c6c.bin",   0x800000, 0x010a831b, 3 | BRF_GRA },           //  6 
	{ "268-c7c.bin",   0x800000, 0x6d72a969, 3 | BRF_GRA },           //  7 
	{ "268-c8c.bin",   0x800000, 0x551d720e, 3 | BRF_GRA },           //  8 

	{ "268-m1h.bin",   0x080000, 0x4a5a6e0e, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "268-v1c.bin",   0x800000, 0xae31d60c, 5 | BRF_SND },           // 10 Sound data
	{ "268-v2c.bin",   0x800000, 0xc40613ed, 5 | BRF_SND },           // 11 
};

STDROMPICKEXT(mslug5b2, mslug5b2, neogeo)
STD_ROM_FN(mslug5b2)

static void mslug5b2Callback()
{
	UINT8 *pTemp = (UINT8*)BurnMalloc(0x500000);
	
	if (pTemp) {
		memmove(pTemp, Neo68KROMActive, 0x500000);
		memset(Neo68KROMActive, 0, 0x500000);
		memmove(Neo68KROMActive + 0x000000, pTemp + 0x000000, 0x100000);
		memmove(Neo68KROMActive + 0x100000, pTemp + 0x100000, 0x100000);
		memmove(Neo68KROMActive + 0x300000, pTemp + 0x200000, 0x100000);
		memmove(Neo68KROMActive + 0x200000, pTemp + 0x300000, 0x100000);
		memmove(Neo68KROMActive + 0x400000, pTemp + 0x400000, 0x100000);
			
		BurnFree(pTemp);
	}
}

static INT32 mslug5b2Init()
{
	INT32 nRet;

	nNeoProtectionXor = 0x19;
	NeoCallbackActive->pInitialise = mslug5b2Callback;

	nRet = NeoPVCInit();

	if (nRet == 0) {
		const PCM2DecryptV2Info Info = { 0x4e001, 0xfe2cf6, { 0xc3, 0xfd, 0x81, 0xac, 0x6d, 0xe7, 0xbf, 0x9e } };

		PCM2DecryptV2(&Info);
	}

	return nRet;
}

struct BurnDriver BurnDrvmslug5b2 = {
	"mslug5b2", "mslug5", "neogeo", NULL, "2003",
	"Metal Slug 5 (bootleg, set 2)\0", NULL, "bootleg", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ALTERNATE_TEXT | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5b2RomInfo, mslug5b2RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug5b2Init, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

static struct BurnRomInfo mslug5cRomDesc[] = {
	{ "268-p1d.bin", 0x600000, 0xE876D1E7, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "268d-c1.rom",	0x800000, 0x969c0d62, 3 | BRF_GRA },           //  2 sprites
	{ "268d-c2.rom",	0x800000, 0xc69ae867, 3 | BRF_GRA },           //  3
	{ "268d-c3.rom",	0x800000, 0xd7beaeaf, 3 | BRF_GRA },           //  4
	{ "268d-c4.rom",	0x800000, 0xe1b1131b, 3 | BRF_GRA },           //  5
	{ "268d-c5.rom",	0x800000, 0x2fa1a5ad, 3 | BRF_GRA },           //  6
	{ "268d-c6.rom",	0x800000, 0x6de89589, 3 | BRF_GRA },           //  7
	{ "268d-c7.rom",	0x800000, 0x97bd0c0a, 3 | BRF_GRA },           //  8
	{ "268d-c8.rom",	0x800000, 0xc0d5bc20, 3 | BRF_GRA },           //  9

	{ "268d-m1.rom",    0x020000, 0x6fa01c9a, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268d-v1.rom",	0x400000, 0xc3540e0d, 5 | BRF_SND },           // 11 ymsnd
	{ "268d-v2.rom",	0x400000, 0x077bd2f4, 5 | BRF_SND },           // 12
	{ "268d-v3.rom",	0x400000, 0x39b14567, 5 | BRF_SND },           // 13
	{ "268d-v4.rom",	0x400000, 0x969ff3b2, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug5c, mslug5c, neogeo)
STD_ROM_FN(mslug5c)

struct BurnDriver BurnDrvmslug5c = {
	"mslug5c", "mslug5", "neogeo", NULL, "2003",
	"Metal Slug 5 (Enemies Reset, Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5cRomInfo, mslug5cRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 5 Enemy Soldier Enhanced Edition [Hack]
static struct BurnRomInfo mslug5dbjRomDesc[] = {
	{ "268-p1d.bin", 0x600000, 0x1527c4dd, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "268d-c1.rom",	0x800000, 0x969c0d62, 3 | BRF_GRA },           //  2 sprites
	{ "268d-c2.rom",	0x800000, 0xc69ae867, 3 | BRF_GRA },           //  3
	{ "268d-c3.rom",	0x800000, 0xd7beaeaf, 3 | BRF_GRA },           //  4
	{ "268d-c4.rom",	0x800000, 0xe1b1131b, 3 | BRF_GRA },           //  5
	{ "268d-c5.rom",	0x800000, 0x2fa1a5ad, 3 | BRF_GRA },           //  6
	{ "268d-c6.rom",	0x800000, 0x6de89589, 3 | BRF_GRA },           //  7
	{ "268d-c7.rom",	0x800000, 0x97bd0c0a, 3 | BRF_GRA },           //  8
	{ "268d-c8.rom",	0x800000, 0xc0d5bc20, 3 | BRF_GRA },           //  9

	{ "268d-m1.rom",    0x020000, 0x6fa01c9a, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268d-v1.rom",	0x400000, 0xc3540e0d, 5 | BRF_SND },           // 11 ymsnd
	{ "268d-v2.rom",	0x400000, 0x077bd2f4, 5 | BRF_SND },           // 12
	{ "268d-v3.rom",	0x400000, 0x39b14567, 5 | BRF_SND },           // 13
	{ "268d-v4.rom",	0x400000, 0x969ff3b2, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug5dbj, mslug5dbj, neogeo)
STD_ROM_FN(mslug5dbj)

struct BurnDriver BurnDrvmslug5dbj = {
	"mslug5dbj", "mslug5", "neogeo", NULL, "2020",
	"Metal Slug 5 (Enemy Enhance, Hack)\0", NULL, "\u5c24\u53e4\u6735\u62c9", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5dbjRomInfo, mslug5dbjRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 5 Extremely Simplified Ver3.7.1 [Hack]

static struct BurnRomInfo mslug5esRomDesc[] = {
	{ "268-p1d.bin",    0x600000, 0x0b42bf39, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "254-c1.bin",    0x800000, 0xe8239365, 3 | BRF_GRA },           //  2 Sprite data
	{ "254-c2.bin",    0x800000, 0x89b21d4c, 3 | BRF_GRA },           //  3 
	{ "254-c3.bin",    0x800000, 0x3cda13a0, 3 | BRF_GRA },           //  4 
	{ "254-c4.bin",    0x800000, 0x9c00160d, 3 | BRF_GRA },           //  5 
	{ "254-c5.bin",    0x800000, 0x38754256, 3 | BRF_GRA },           //  6 
	{ "254-c6.bin",    0x800000, 0x59d33e9c, 3 | BRF_GRA },           //  7 
	{ "254-c7.bin",    0x800000, 0xc9f8c357, 3 | BRF_GRA },           //  8 
	{ "254-c8.bin",    0x800000, 0xfafc3eb9, 3 | BRF_GRA },           //  9 

	{ "268-m1.m1",    0x080000, 0x4a5a6e0e, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268d-v1.rom",	0x400000, 0xc3540e0d, 5 | BRF_SND },           // 11 ymsnd
	{ "268d-v2.rom",	0x400000, 0x077bd2f4, 5 | BRF_SND },           // 12
	{ "268d-v3.rom",	0x400000, 0x39b14567, 5 | BRF_SND },           // 13
	{ "268d-v4.rom",	0x400000, 0x969ff3b2, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug5es, mslug5es, neogeo)
STD_ROM_FN(mslug5es)

struct BurnDriver BurnDrvmslug5es = {
	"mslug5es", "mslug5", "neogeo", NULL, "2022",
	"Metal Slug 5 Extremely Simplified Ver3.7.1 [Hack]\0", NULL, "\u660e\u5929\u518d\u52aa\u529b\u5427", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5esRomInfo, mslug5esRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 5 Extend Ver Mode [Hack]
static struct BurnRomInfo mslug5extRomDesc[] = {
	{ "268d-p1.rom", 0x600000, 0x7ff5364b, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "268d-c1.rom",	0x800000, 0x969c0d62, 3 | BRF_GRA },           //  2 sprites
	{ "268d-c2.rom",	0x800000, 0xc69ae867, 3 | BRF_GRA },           //  3
	{ "268d-c3.rom",	0x800000, 0xd7beaeaf, 3 | BRF_GRA },           //  4
	{ "268d-c4.rom",	0x800000, 0xe1b1131b, 3 | BRF_GRA },           //  5
	{ "268d-c5.rom",	0x800000, 0x2fa1a5ad, 3 | BRF_GRA },           //  6
	{ "268d-c6.rom",	0x800000, 0x6de89589, 3 | BRF_GRA },           //  7
	{ "268d-c7.rom",	0x800000, 0x97bd0c0a, 3 | BRF_GRA },           //  8
	{ "268d-c8.rom",	0x800000, 0xc0d5bc20, 3 | BRF_GRA },           //  9

	{ "268d-m1.rom",    0x020000, 0x6fa01c9a, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268d-v1.rom",	0x400000, 0xc3540e0d, 5 | BRF_SND },           // 11 ymsnd
	{ "268d-v2.rom",	0x400000, 0x077bd2f4, 5 | BRF_SND },           // 12
	{ "268d-v3.rom",	0x400000, 0x39b14567, 5 | BRF_SND },           // 13
	{ "268d-v4.rom",	0x400000, 0x969ff3b2, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug5ext, mslug5ext, neogeo)
STD_ROM_FN(mslug5ext)

struct BurnDriver BurnDrvmslug5ext = {
	"mslug5ext", "mslug5", "neogeo", NULL, "2019",
	"Metal Slug 5 Extend Ver(1.2) [Hack]\0", NULL, NULL, "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5extRomInfo, mslug5extRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 5 Battle [Hack]

static struct BurnRomInfo mslug5fRomDesc[] = {
	{ "254-p1.bin",    0x100000, 0x6be7043d, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "254-p2.bin",   0x400000, 0xf06c589a, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "254-c1.bin",    0x800000, 0xe8239365, 3 | BRF_GRA },           //  2 Sprite data
	{ "254-c2.bin",    0x800000, 0x89b21d4c, 3 | BRF_GRA },           //  3 
	{ "254-c3.bin",    0x800000, 0x3cda13a0, 3 | BRF_GRA },           //  4 
	{ "254-c4.bin",    0x800000, 0x9c00160d, 3 | BRF_GRA },           //  5 
	{ "254-c5.bin",    0x800000, 0x3bc09dbf, 3 | BRF_GRA },           //  6 
	{ "254-c6.bin",    0x800000, 0x0db5ce14, 3 | BRF_GRA },           //  7 
	{ "254-c7.bin",    0x800000, 0xaa4f3214, 3 | BRF_GRA },           //  8 
	{ "254-c8.bin",    0x800000, 0xc86d0d81, 3 | BRF_GRA },           //  9 

	{ "254-m1.m1",    0x080000, 0x464c72ad, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "254-v1.v1",    0x400000, 0xf61daa9e, 5 | BRF_SND },           // 11 Sound data
	{ "254-v2.v2",    0x400010, 0x7fed45cb, 5 | BRF_SND },           // 12 
	{ "254-v3.v3",    0x400000, 0xdc737e12, 5 | BRF_SND },           // 13 
	{ "254-v4.v4",    0x437510, 0xe3a76022, 5 | BRF_SND },           // 14 
};

STDROMPICKEXT(mslug5f, mslug5f, neogeo)
STD_ROM_FN(mslug5f)

struct BurnDriver BurnDrvmslug5f = {
	"mslug5f", "mslug5", "neogeo", NULL, "2015",
	"Metal Slug 5 Battle [Hack]\0", NULL, "\u78c1\u66b4\u7ebf\u5708", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_PLATFORM, FBF_MSLUG,
	NULL, mslug5fRomInfo, mslug5fRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// GOTVG Metal Slug 5 (Multifunction Hack 20170523)
// mslug5hp00 in HBMAME.
static struct BurnRomInfo mslug5gRomDesc[] = {
	{ "268-p1d.bin", 0x600000, 0x3be747ab, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "268d-c1.rom",	0x800000, 0x969c0d62, 3 | BRF_GRA },           //  2 sprites
	{ "268d-c2.rom",	0x800000, 0xc69ae867, 3 | BRF_GRA },           //  3
	{ "268d-c3.rom",	0x800000, 0xd7beaeaf, 3 | BRF_GRA },           //  4
	{ "268d-c4.rom",	0x800000, 0xe1b1131b, 3 | BRF_GRA },           //  5
	{ "268d-c5.rom",	0x800000, 0x2fa1a5ad, 3 | BRF_GRA },           //  6
	{ "268d-c6.rom",	0x800000, 0x6de89589, 3 | BRF_GRA },           //  7
	{ "268d-c7.rom",	0x800000, 0x97bd0c0a, 3 | BRF_GRA },           //  8
	{ "268d-c8.rom",	0x800000, 0xc0d5bc20, 3 | BRF_GRA },           //  9

	{ "268d-m1.rom",    0x020000, 0x6fa01c9a, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268d-v1.rom",	0x400000, 0xc3540e0d, 5 | BRF_SND },           // 11 ymsnd
	{ "268d-v2.rom",	0x400000, 0x077bd2f4, 5 | BRF_SND },           // 12
	{ "268d-v3.rom",	0x400000, 0x39b14567, 5 | BRF_SND },           // 13
	{ "268d-v4.rom",	0x400000, 0x969ff3b2, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug5g, mslug5g, neogeo)
STD_ROM_FN(mslug5g)

struct BurnDriver BurnDrvmslug5g = {
	"mslug5g", "mslug5", "neogeo", NULL, "20170523",
	"Metal Slug 5 (Multifunction Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_VSFIGHT, FBF_KOF,
	NULL, mslug5gRomInfo, mslug5gRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

static struct BurnRomInfo mslug5mgRomDesc[] = {
	{ "268-p1d.bin", 0x600000, 0x1FC7DE70, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "268d-c1.rom",	0x800000, 0x969c0d62, 3 | BRF_GRA },           //  2 sprites
	{ "268d-c2.rom",	0x800000, 0xc69ae867, 3 | BRF_GRA },           //  3
	{ "268d-c3.rom",	0x800000, 0xd7beaeaf, 3 | BRF_GRA },           //  4
	{ "268d-c4.rom",	0x800000, 0xe1b1131b, 3 | BRF_GRA },           //  5
	{ "268d-c5.rom",	0x800000, 0x2fa1a5ad, 3 | BRF_GRA },           //  6
	{ "268d-c6.rom",	0x800000, 0x6de89589, 3 | BRF_GRA },           //  7
	{ "268d-c7.rom",	0x800000, 0x97bd0c0a, 3 | BRF_GRA },           //  8
	{ "268d-c8.rom",	0x800000, 0xc0d5bc20, 3 | BRF_GRA },           //  9

	{ "268d-m1.rom",    0x020000, 0x6fa01c9a, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268d-v1.rom",	0x400000, 0xc3540e0d, 5 | BRF_SND },           // 11 ymsnd
	{ "268d-v2.rom",	0x400000, 0x077bd2f4, 5 | BRF_SND },           // 12
	{ "268d-v3.rom",	0x400000, 0x39b14567, 5 | BRF_SND },           // 13
	{ "268d-v4.rom",	0x400000, 0x969ff3b2, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug5mg, mslug5mg, neogeo)
STD_ROM_FN(mslug5mg)

struct BurnDriver BurnDrvmslug5mg = {
	"mslug5mg", "mslug5", "neogeo", NULL, "2020",
	"Metal Slug 5 (Enemy Demons, Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5mgRomInfo, mslug5mgRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 5 [Remake Final Ver. Fightcade 2] [Hack]
static struct BurnRomInfo mslug5sgfRomDesc[] = {
	{ "268-p1d.bin",    0x600000, 0xb1fbb850, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "268d-c1.rom",	0x800000, 0x969c0d62, 3 | BRF_GRA },           //  2 sprites
	{ "268d-c2.rom",	0x800000, 0xc69ae867, 3 | BRF_GRA },           //  3
	{ "268d-c3.rom",	0x800000, 0xd7beaeaf, 3 | BRF_GRA },           //  4
	{ "268d-c4.rom",	0x800000, 0xe1b1131b, 3 | BRF_GRA },           //  5
	{ "268d-c5.rom",	0x800000, 0x2fa1a5ad, 3 | BRF_GRA },           //  6
	{ "268d-c6.rom",	0x800000, 0x6de89589, 3 | BRF_GRA },           //  7
	{ "268d-c7.rom",	0x800000, 0x97bd0c0a, 3 | BRF_GRA },           //  8
	{ "268d-c8.rom",	0x800000, 0xc0d5bc20, 3 | BRF_GRA },           //  9

	{ "268d-m1.rom",    0x020000, 0x6fa01c9a, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268d-v1.rom",	0x400000, 0xc3540e0d, 5 | BRF_SND },           // 11 ymsnd
	{ "268d-v2.rom",	0x400000, 0x077bd2f4, 5 | BRF_SND },           // 12
	{ "268d-v3.rom",	0x400000, 0x39b14567, 5 | BRF_SND },           // 13
	{ "268d-v4.rom",	0x400000, 0x969ff3b2, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug5sgf, mslug5sgf, neogeo)
STD_ROM_FN(mslug5sgf)

struct BurnDriver BurnDrvmslug5sgf = {
	"mslug5sgf", "mslug5", "neogeo", NULL, "20211003",
	"Metal Slug 5 (Remake Final Fightcade 2 Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5sgfRomInfo, mslug5sgfRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// mslug5unity - Metal slug 5 Unity (Timer added version)

static struct BurnRomInfo mslug5unityRomDesc[] = {
	{ "268-p1cr.p1",   0x400000, 0xced9f5a8, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "268-p2cr.p2",   0x400000, 0x1c08dbb6, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "268-c1c.c1",    0x800000, 0xab7c389a, 3 | BRF_GRA },           //  2 Sprite data
	{ "268-c2c.c2",    0x800000, 0x3560881b, 3 | BRF_GRA },           //  3
	{ "268-c3c.c3",    0x800000, 0x3af955ea, 3 | BRF_GRA },           //  4
	{ "268-c4c.c4",    0x800000, 0xc329c373, 3 | BRF_GRA },           //  5
	{ "268-c5c.c5",    0x800000, 0x959c8177, 3 | BRF_GRA },           //  6
	{ "268-c6c.c6",    0x800000, 0x010a831b, 3 | BRF_GRA },           //  7
	{ "268-c7c.c7",    0x800000, 0x6d72a969, 3 | BRF_GRA },           //  8
	{ "268-c8c.c8",    0x800000, 0x551d720e, 3 | BRF_GRA },           //  9

	{ "268-m1.bin",   0x080000, 0x4a5a6e0e, 4 | BRF_ESS | BRF_PRG },

	{ "268-v1c.v1",    0x800000, 0xae31d60c, 5 | BRF_SND },           // 11 Sound data
	{ "268-v2c.v2",    0x800000, 0xc40613ed, 5 | BRF_SND },           // 12
};

STDROMPICKEXT(mslug5unity, mslug5unity, neogeo)
STD_ROM_FN(mslug5unity)

struct BurnDriver BurnDrvmslug5unity = {
	"mslug5unity", "mslug5", "neogeo", NULL, "20210423",
	"Metal Slug 5 Unity (Added Timer)\0", NULL, "SNK Playmore", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ALTERNATE_TEXT | HARDWARE_SNK_P32 | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5unityRomInfo, mslug5unityRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug5Init, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug 5 [New Campaign] [Hack]
static struct BurnRomInfo mslug5wdRomDesc[] = {
	{ "254-pw1.bin",	0x100000, 0xb0c126da, 1 | BRF_PRG | BRF_ESS }, //  0 maincpu
	{ "254-pw2.bin",	0x400000, 0xf06c589a, 1 | BRF_PRG | BRF_ESS }, //  1

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },			// 2 Text layer tiles

	{ "268d-c1.rom",	0x800000, 0xe8239365, 3 | BRF_GRA },           //  2 sprites
	{ "268d-c2.rom",	0x800000, 0x89b21d4c, 3 | BRF_GRA },           //  3
	{ "268d-c3.rom",	0x800000, 0x3cda13a0, 3 | BRF_GRA },           //  4
	{ "268d-c4.rom",	0x800000, 0x9c00160d, 3 | BRF_GRA },           //  5
	{ "ms5n_c5.rom",	0x800000, 0x483a986c, 3 | BRF_GRA },           //  6
	{ "ms5n_c6.rom",	0x800000, 0xd918f796, 3 | BRF_GRA },           //  7
	{ "ms5n_c7.rom",	0x800000, 0xbdb9a887, 3 | BRF_GRA },           //  8
	{ "ms5n_c8.rom",	0x800000, 0x6f8ac6fb, 3 | BRF_GRA },           //  9

	{ "254-m1.bin",  0x080000, 0x464c72ad, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "254-v1.bin",	0x400000, 0xa8e12a92, 5 | BRF_SND },           // 11 Sound data
	{ "254-v2.bin",	0x400000, 0x0608cba3, 5 | BRF_SND },           // 12
	{ "254-v3.bin",	0x400000, 0x02fd519e, 5 | BRF_SND },           // 13
	{ "254-v4.bin",	0x4002f0, 0x179cbca3, 5 | BRF_SND },           // 14 - weird size!!
};

STDROMPICKEXT(mslug5wd, mslug5wd, neogeo)
STD_ROM_FN(mslug5wd)

struct BurnDriver BurnDrvMslug5wd = {
	"mslug5wd", "mslug5", "neogeo", NULL, "2018",
	"Metal Slug 5 (The New War, Hack)\0", NULL, "C.B", "Miscellaneous",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_PLATFORM, FBF_MSLUG,
	NULL, mslug5wdRomInfo, mslug5wdRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

static struct BurnRomInfo mslug5xRomDesc[] = {
	{ "268-p1d.bin",    0x600000, 0x110F25B1, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "268d-c1.rom",	0x800000, 0x969c0d62, 3 | BRF_GRA },           //  2 sprites
	{ "268d-c2.rom",	0x800000, 0xc69ae867, 3 | BRF_GRA },           //  3
	{ "268d-c3.rom",	0x800000, 0xd7beaeaf, 3 | BRF_GRA },           //  4
	{ "268d-c4.rom",	0x800000, 0xe1b1131b, 3 | BRF_GRA },           //  5
	{ "268d-c5.rom",	0x800000, 0x2fa1a5ad, 3 | BRF_GRA },           //  6
	{ "268d-c6.rom",	0x800000, 0x6de89589, 3 | BRF_GRA },           //  7
	{ "268d-c7.rom",	0x800000, 0x97bd0c0a, 3 | BRF_GRA },           //  8
	{ "268d-c8.rom",	0x800000, 0xc0d5bc20, 3 | BRF_GRA },           //  9

	{ "268d-m1.rom",    0x020000, 0x6fa01c9a, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268d-v1.rom",	0x400000, 0xc3540e0d, 5 | BRF_SND },           // 11 ymsnd
	{ "268d-v2.rom",	0x400000, 0x077bd2f4, 5 | BRF_SND },           // 12
	{ "268d-v3.rom",	0x400000, 0x39b14567, 5 | BRF_SND },           // 13
	{ "268d-v4.rom",	0x400000, 0x969ff3b2, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug5x, mslug5x, neogeo)
STD_ROM_FN(mslug5x)

struct BurnDriver BurnDrvmslug5x = {
	"mslug5x", "mslug5", "neogeo", NULL, "20220606",
	"Metal Slug 5 (X Final Ver Hack)\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5xRomInfo, mslug5xRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

//
// unused, yet-updated, or outdated
//

// Metal Slug 2 Weapons Storage [Hack]
/*
static struct BurnRomInfo mslug2pRomDesc[] = {
	{ "241-p1.p1",    0x100000, 0xfe803784, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "241-p2.sp2",   0x200000, 0x38883f44, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "241-s1.s1",    0x020000, 0xf3d32f0f, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "241-c1.c1",    0x800000, 0x394b5e0d, 3 | BRF_GRA },           //  3 Sprite data
	{ "241-c2.c2",    0x800000, 0xe5806221, 3 | BRF_GRA },           //  4 
	{ "241-c3.c3",    0x800000, 0x9f6bfa6f, 3 | BRF_GRA },           //  5 
	{ "241-c4.c4",    0x800000, 0x7d3e306f, 3 | BRF_GRA },           //  6 

	{ "241-m1.m1",    0x020000, 0x94520ebd, 4 | BRF_ESS | BRF_PRG }, //  7 Z80 code

	{ "241-v1.v1",    0x400000, 0x99ec20e8, 5 | BRF_SND },           //  8 Sound data
	{ "241-v2.v2",    0x400000, 0xecb16799, 5 | BRF_SND },           //  9 
};

STDROMPICKEXT(mslug2p, mslug2p, neogeo)
STD_ROM_FN(mslug2p)

struct BurnDriver BurnDrvMSlug2p = {
	"mslug2p", "mslug2", "neogeo", NULL, "2015",
	"Metal Slug 2 Weapons Storage [Hack]\0", NULL, "\u5408\u91d1\u5f39\u5934\u7231\u514b\u65af", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug2pRomInfo, mslug2pRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};
*/

// Metal Slug 2 1v2 Mode [Hack]
/*
static struct BurnRomInfo mslug21v2RomDesc[] = {
	{ "241-p1.bin",   0x100000, 0x1562cf23, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "241-p2.sp2",   0x200000, 0x38883f44, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "241-s1.s1",    0x020000, 0xf3d32f0f, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "241-c1.c1",    0x800000, 0x394b5e0d, 3 | BRF_GRA },           //  3 Sprite data
	{ "241-c2.c2",    0x800000, 0xe5806221, 3 | BRF_GRA },           //  4 
	{ "241-c3.c3",    0x800000, 0x9f6bfa6f, 3 | BRF_GRA },           //  5 
	{ "241-c4.c4",    0x800000, 0x7d3e306f, 3 | BRF_GRA },           //  6 

	{ "241-m1.m1",    0x020000, 0x94520ebd, 4 | BRF_ESS | BRF_PRG }, //  7 Z80 code

	{ "241-v1.v1",    0x400000, 0x99ec20e8, 5 | BRF_SND },           //  8 Sound data
	{ "241-v2.v2",    0x400000, 0xecb16799, 5 | BRF_SND },           //  9 
};

STDROMPICKEXT(mslug21v2, mslug21v2, neogeo)
STD_ROM_FN(mslug21v2)

struct BurnDriver BurnDrvmslug21v2 = {
	"mslug21v2", "mslug2", "neogeo", NULL, "2019",
	"Metal Slug 2 1v2 Mode [Hack]\0", NULL, "\u5408\u91d1\u5f39\u5934\u7231\u514b\u65af", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug21v2RomInfo, mslug21v2RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};


// Metal Slug X Multi Vehicle [Hack]
/*
static struct BurnRomInfo mslugxc1RomDesc[] = {
	{ "250-pc11.bin",    0x100000, 0xe74f36c2, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-pc12.bin",   0x400000, 0xe954b8aa, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0xfb6f441d, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0xa4b56124, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0x83e3e69d, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugxc1, mslugxc1, neogeo)
STD_ROM_FN(mslugxc1)

struct BurnDriver BurnDrvmslugxc1 = {
	"mslugxc1", "mslugx", "neogeo", NULL, "2013",
	"Metal Slug X Multi Vehicle [Hack]\0", NULL, "\u78c1\u66b4\u7ebf\u5708", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugxc1RomInfo, mslugxc1RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};
*/

// mslugxse - Metal Slug X survival Edition
/*
static struct BurnRomInfo mslugxseRomDesc[] = {
	{ "250-p1.p1",    0x100000, 0x2d4ec96a, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-p2.ep1",   0x400000, 0xd2e02a46, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0x03bce893, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0x9a9422e4, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0xef116b50, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugxse, mslugxse, neogeo)
STD_ROM_FN(mslugxse)

struct BurnDriver BurnDrvMSlugXse = {
	"mslugxse", "mslugx", "neogeo", NULL, "1999",
	"Metal Slug X [Survival Edition 2021-04-03] [Hack]\0", NULL, "hack", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED | BDF_CLONE | BDF_HACK, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugxseRomInfo, mslugxseRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

*/

/*
// Metal Slug X 1v2 Mode [Hack]

static struct BurnRomInfo mslugx1v2RomDesc[] = {
	{ "250-p1.p1",    0x100000, 0x0cf1f95b, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-p2.ep1",   0x400000, 0x1fda2e12, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0xfb6f441d, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0xa4b56124, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0x83e3e69d, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugx1v2, mslugx1v2, neogeo)
STD_ROM_FN(mslugx1v2)

struct BurnDriver BurnDrvmslugx1v2 = {
	"mslugx1v2", "mslugx", "neogeo", NULL, "2019",
	"Metal Slug X 1v2 Mode [Hack]", NULL, "\u5408\u91d1\u5f39\u5934\u7231\u514b\u65af", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugx1v2RomInfo, mslugx1v2RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug X 2R [Hack]

static struct BurnRomInfo mslugx2rRomDesc[] = {
	{ "250-p1.p1",    0x100000, 0x721f11aa, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-p2.ep1",   0x400000, 0x4f875278, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0xfb6f441d, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0xa4b56124, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0x83e3e69d, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugx2r, mslugx2r, neogeo)
STD_ROM_FN(mslugx2r)

struct BurnDriver BurnDrvmslugx2r = {
	"mslugx2r", "mslugx", "neogeo", NULL, "2020",
	"Metal Slug X 2R [Hack]", NULL, "Soda", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugx2rRomInfo, mslugx2rRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug X 2R 1v2 Mode [Hack]

static struct BurnRomInfo mslugx2r1v2RomDesc[] = {
	{ "250-p1.p1",    0x100000, 0x721f11aa, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-p2.ep1",   0x400000, 0x4f875278, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0xfb6f441d, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0xa4b56124, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0x83e3e69d, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugx2r1v2, mslugx2r1v2, neogeo)
STD_ROM_FN(mslugx2r1v2)

struct BurnDriver BurnDrvmslugx2r1v2 = {
	"mslugx2r1v2", "mslugx", "neogeo", NULL, "2020",
	"Metal Slug X 2R 1v2 Mode [Hack]\0", NULL, "Soda", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugx2r1v2RomInfo, mslugx2r1v2RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

// Metal Slug X 2R ExBlue [Hack]

static struct BurnRomInfo mslugx2rebRomDesc[] = {
	{ "250-p1.p1",    0x100000, 0xdba3f1a1, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "250-p2.ep1",   0x400000, 0x3866eb68, 1 | BRF_ESS | BRF_PRG }, //  1 

	{ "250-s1.s1",    0x020000, 0xfb6f441d, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "250-c1.c1",    0x800000, 0x09a52c6f, 3 | BRF_GRA },           //  3 Sprite data
	{ "250-c2.c2",    0x800000, 0x31679821, 3 | BRF_GRA },           //  4 
	{ "250-c3.c3",    0x800000, 0xfd602019, 3 | BRF_GRA },           //  5 
	{ "250-c4.c4",    0x800000, 0x31354513, 3 | BRF_GRA },           //  6 
	{ "250-c5.c5",    0x800000, 0xa4b56124, 3 | BRF_GRA },           //  7 
	{ "250-c6.c6",    0x800000, 0x83e3e69d, 3 | BRF_GRA },           //  8 

	{ "250-m1.m1",    0x020000, 0xfd42a842, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "250-v1.v1",    0x400000, 0xc79ede73, 5 | BRF_SND },           // 10 Sound data
	{ "250-v2.v2",    0x400000, 0xea9aabe1, 5 | BRF_SND },           // 11 
	{ "250-v3.v3",    0x200000, 0x2ca65102, 5 | BRF_SND },           // 12 
};

STDROMPICKEXT(mslugx2reb, mslugx2reb, neogeo)
STD_ROM_FN(mslugx2reb)

struct BurnDriver BurnDrvmslugx2reb = {
	"mslugx2reb", "mslugx", "neogeo", NULL, "2020",
	"Metal Slug X 2R ExBlue [Hack]\0", NULL, "Soda, CZXInc", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslugx2r1v2RomInfo, mslugx2r1v2RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslugxInit, NeoExit, NeoFrame, NeoRender, mslugxScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};
*/

// Metal Slug 5 [Hack] - simplified? version 2022-04-14
/*
static struct BurnRomInfo mslug5es341RomDesc[] = {
	{ "268-p1d.bin",    0x600000, 0x5bd73f75, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "254-c1.bin",    0x800000, 0xe8239365, 3 | BRF_GRA },           //  2 Sprite data
	{ "254-c2.bin",    0x800000, 0x89b21d4c, 3 | BRF_GRA },           //  3 
	{ "254-c3.bin",    0x800000, 0x3cda13a0, 3 | BRF_GRA },           //  4 
	{ "254-c4.bin",    0x800000, 0x9c00160d, 3 | BRF_GRA },           //  5 
	{ "254-c5.bin",    0x800000, 0x38754256, 3 | BRF_GRA },           //  6 
	{ "254-c6.bin",    0x800000, 0x59d33e9c, 3 | BRF_GRA },           //  7 
	{ "254-c7.bin",    0x800000, 0xc9f8c357, 3 | BRF_GRA },           //  8 
	{ "254-c8.bin",    0x800000, 0xfafc3eb9, 3 | BRF_GRA },           //  9 

	{ "268-m1.m1",    0x080000, 0x4a5a6e0e, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268d-v1.rom",	0x400000, 0xc3540e0d, 5 | BRF_SND },           // 11 ymsnd
	{ "268d-v2.rom",	0x400000, 0x077bd2f4, 5 | BRF_SND },           // 12
	{ "268d-v3.rom",	0x400000, 0x39b14567, 5 | BRF_SND },           // 13
	{ "268d-v4.rom",	0x400000, 0x969ff3b2, 5 | BRF_SND },         // 12
};

STDROMPICKEXT(mslug5es341, mslug5es341, neogeo)
STD_ROM_FN(mslug5es341)

struct BurnDriver BurnDrvmslug5es341 = {
	"mslug5es341", "mslug5", "neogeo", NULL, "2022",
	"Metal Slug 5 Extremely Simplified Ver3.4.1 [Hack]\0", NULL, "\u660e\u5929\u518d\u52aa\u529b\u5427", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_ENCRYPTED_M1, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5es341RomInfo, mslug5es341RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

*/

// Metal Slug 5 (W)
/*
static struct BurnRomInfo mslug5wRomDesc[] = {
	{ "268w.p1",	0x100000, 0xb0c126da, 1 | BRF_PRG | BRF_ESS }, //  0 maincpu
	{ "268lvf.p2",	0x400000, 0xf06c589a, 1 | BRF_PRG | BRF_ESS }, //  1

	{ "268l9a.c1",	0x800000, 0x5e2e9087, 3 | BRF_GRA },           //  2 sprites
	{ "268l9a.c2",	0x800000, 0xd15770e3, 3 | BRF_GRA },           //  3
	{ "268l9a.c3",	0x800000, 0x3e104b8f, 3 | BRF_GRA },           //  4
	{ "268l9a.c4",	0x800000, 0x03f32dda, 3 | BRF_GRA },           //  5
	{ "268l9a.c5",	0x800000, 0xfd3e0f24, 3 | BRF_GRA },           //  6
	{ "268l9a.c6",	0x800000, 0x3c873aba, 3 | BRF_GRA },           //  7
	{ "268l9a.c7",	0x800000, 0x0d070c3b, 3 | BRF_GRA },           //  8
	{ "268l9a.c8",	0x800000, 0x09751dd8, 3 | BRF_GRA },           //  9

	{ "268l9a.m1",  0x080000, 0x464c72ad, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268l9a.v1",	0x400000, 0xa8e12a92, 5 | BRF_SND },           // 11 ymsnd
	{ "268lvnc.v2",	0x400000, 0x0608cba3, 5 | BRF_SND },           // 12
	{ "268nd.v3",	0x400000, 0x02fd519e, 5 | BRF_SND },           // 13
	{ "268l9a.v4",	0x4002f0, 0x179cbca3, 5 | BRF_SND },           // 14 - weird size!!
};

STDROMPICKEXT(mslug5w, mslug5w, neogeo)
STD_ROM_FN(mslug5w)

struct BurnDriver BurnDrvMslug5w = {
	"mslug5w", "mslug5", "neogeo", NULL, "2003",
	"Metal Slug 5 (W)\0", NULL, "C.B", "Miscellaneous",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5wRomInfo, mslug5wRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	s1945pInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};
*/

/*
// Metal Slug 5 Vehicle Summoning [Hack]

static struct BurnRomInfo mslug5zhRomDesc[] = {
	{ "268d-p1.rom", 0x600000, 0xdc057a7a, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "268d-c1.rom",	0x800000, 0x969c0d62, 3 | BRF_GRA },           //  2 sprites
	{ "268d-c2.rom",	0x800000, 0xc69ae867, 3 | BRF_GRA },           //  3
	{ "268d-c3.rom",	0x800000, 0xd7beaeaf, 3 | BRF_GRA },           //  4
	{ "268d-c4.rom",	0x800000, 0xe1b1131b, 3 | BRF_GRA },           //  5
	{ "268d-c5.rom",	0x800000, 0x2fa1a5ad, 3 | BRF_GRA },           //  6
	{ "268d-c6.rom",	0x800000, 0x6de89589, 3 | BRF_GRA },           //  7
	{ "268d-c7.rom",	0x800000, 0x97bd0c0a, 3 | BRF_GRA },           //  8
	{ "268d-c8.rom",	0x800000, 0xc0d5bc20, 3 | BRF_GRA },           //  9

	{ "268d-m1.rom",    0x020000, 0x6fa01c9a, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268d-v1.rom",	0x400000, 0xc3540e0d, 5 | BRF_SND },           // 11 ymsnd
	{ "268d-v2.rom",	0x400000, 0x077bd2f4, 5 | BRF_SND },           // 12
	{ "268d-v3.rom",	0x400000, 0x39b14567, 5 | BRF_SND },           // 13
	{ "268d-v4.rom",	0x400000, 0x969ff3b2, 5 | BRF_SND },           // 14
};


STDROMPICKEXT(mslug5zh, mslug5zh, neogeo)
STD_ROM_FN(mslug5zh)

struct BurnDriver BurnDrvmslug5zh = {
	"mslug5zh", "mslug5", "neogeo", NULL, "2018",
	"Metal Slug 5 Vehicle Summoning [Hack]\0", NULL, "\u5408\u91d1\u5f39\u5934\u7231\u514b\u65af", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug5zhRomInfo, mslug5zhRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 5 1v2 Mode [Hack]
static struct BurnRomInfo mslug51v2RomDesc[] = {
	{ "268-p1d.bin", 0x600000, 0x953d6e11, 1 | BRF_ESS | BRF_PRG }, //  0 68K code

	{ "268d-s1.rom",    0x020000, 0x64952683, 2 | BRF_GRA },

	{ "268d-c1.rom",	0x800000, 0x969c0d62, 3 | BRF_GRA },           //  2 sprites
	{ "268d-c2.rom",	0x800000, 0xc69ae867, 3 | BRF_GRA },           //  3
	{ "268d-c3.rom",	0x800000, 0xd7beaeaf, 3 | BRF_GRA },           //  4
	{ "268d-c4.rom",	0x800000, 0xe1b1131b, 3 | BRF_GRA },           //  5
	{ "268d-c5.rom",	0x800000, 0x2fa1a5ad, 3 | BRF_GRA },           //  6
	{ "268d-c6.rom",	0x800000, 0x6de89589, 3 | BRF_GRA },           //  7
	{ "268d-c7.rom",	0x800000, 0x97bd0c0a, 3 | BRF_GRA },           //  8
	{ "268d-c8.rom",	0x800000, 0xc0d5bc20, 3 | BRF_GRA },           //  9

	{ "268d-m1.rom",    0x020000, 0x6fa01c9a, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "268d-v1.rom",	0x400000, 0xc3540e0d, 5 | BRF_SND },           // 11 ymsnd
	{ "268d-v2.rom",	0x400000, 0x077bd2f4, 5 | BRF_SND },           // 12
	{ "268d-v3.rom",	0x400000, 0x39b14567, 5 | BRF_SND },           // 13
	{ "268d-v4.rom",	0x400000, 0x969ff3b2, 5 | BRF_SND },           // 14
};

STDROMPICKEXT(mslug51v2, mslug51v2, neogeo)
STD_ROM_FN(mslug51v2)

struct BurnDriver BurnDrvmslug51v2 = {
	"mslug51v2", "mslug5", "neogeo", NULL, "2019",
	"Metal Slug 5 1v2 Mode [Hack]\0", NULL, "\u5408\u91d1\u5f39\u5934\u7231\u514b\u65af", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HACK | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_RUNGUN, FBF_MSLUG,
	NULL, mslug51v2RomInfo, mslug51v2RomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};

// Metal Slug 3 X [Hack]

static struct BurnRomInfo mslug3xRomDesc[] = {
	{ "mslug3x-p1cr.p1",	0x400000, 0x840b5b8e, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "mslug3x-p2cr.p2",	0x400000, 0xc7635ac9, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "mslug3x-c1c.c1",		0x800000, 0xbbb8d9f6, 3 | BRF_GRA },           //  2 Sprite data
	{ "mslug3x-c2c.c2",		0x800000, 0x5fb3498a, 3 | BRF_GRA },           //  3

	{ "mslug3x-m1.m1",		0x020000, 0x876df5e1, 4 | BRF_ESS | BRF_PRG }, //  4 Z80 code

	{ "mslug3x-v1c.v1",		0x800000, 0x5d904213, 5 | BRF_SND },           //  5 Sound data
	{ "mslug3x-v2c.v2",		0x800000, 0x97cee550, 5 | BRF_SND },           //  6
};

STDROMPICKEXT(mslug3x, mslug3x, neogeo)
STD_ROM_FN(mslug3x)

struct BurnDriver BurnDrvmslug3x = {
	"mslug3x", NULL, "neogeo", NULL, "2022",
	"Metal Slug 3 (X, 20220203)\0", NULL, "\u78c1\u66b4\u7ebf\u5708", "Neo Geo AES",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING, 1, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ALTERNATE_TEXT | HARDWARE_SNK_P32 | HARDWARE_SNK_ENCRYPTED_M1, GBF_MISC, FBF_MSLUG,
	NULL, mslug3xRomInfo, mslug3xRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	mslug5Init, NeoPVCExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};
*/

