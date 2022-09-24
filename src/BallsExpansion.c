#include "defines.h"
#include "include/items.h"
#define NO_BALLS 32
#define NEWBALLS_TILE   0xF100
#define NEWBALLS_STARS  0xF120

struct tile_ball{
    void* ptr;
    u16 field_4;
    u16 tile_ID;
};

struct tile_pal{
    const struct palette* ptr;
    u16 tile_ID;
};

enum ball_index{
    BALL_POKE, //0x0
    BALL_GREAT, //0x1
    BALL_SAFARI, //0x2
    BALL_ULTRA, //0x3
    BALL_MASTER, //0x4
    BALL_NET, //0x5
    BALL_DIVE, //0x6
    BALL_NEST, //0x7
    BALL_REPEAT, //0x8
    BALL_TIMER, //0x9
    BALL_LUXURY, //0xA
    BALL_PREMIER, //0xB
    //new balls
    BALL_LEVEL, //0xC
    BALL_LURE, //0xD
    BALL_MOON, //0xE
    BALL_FRIEND, //0xF
    BALL_LOVE, //0x10
    BALL_HEAVY, //0x11
    BALL_FAST, //0x12
    BALL_SPORT, //0x13
    BALL_DUSK, //0x14
    BALL_QUICK, //0x15
    BALL_HEAL, //0x16
    BALL_CHERISH, //0x17
    BALL_PARK, //0x18
    BALL_DREAM, //0x19
    BALL_BEAST, //0x1A
};

enum ball_stars{
    BALL_STICKS, //0
    BALL_STARS, //1
    BALL_BUBBLES, //2
    BALL_HEARTS, //3
    BALL_BIG_CROSSES, //4
    BALL_SMALL_CROSSES, //5
};
void nullsub_1485(struct object*);
const u32 throw_level_img[] = {
	0x18010, 0x60000028, 0x200aa01, 0xa00022, 0xa0002722, 0x4a009792, 0x792302, 0x80a5333a, 0x2240001c, 0x22620400, 0x2562000a,
	0x26000a00, 0x5a00a253, 0xa44055, 0x1a5318, 0x9aaa1a, 0xa111a000, 0x1119a000, 0x991000b0, 0x1202e40, 0xaa45a9, 0xa9aaa900,
	0xa999a00, 0x10997c00, 0x70651003, 0x1001d073, 0x971d, 0x7249a0, 0xa453a0, 0x1aa43a12, 0x62001cc0, 0x81260400, 0x554a8300,
	0x4aa9000a, 0x5a009e00, 0xa000a44a, 0x1700aaa4, 0xaaaa9a, 0x8700aa87, 0x87700300, 0xa4a44a11, 0xa0400, 0xa88300aa, 0xe0910320,
	0x2005487, 0xd34000aa, 0x3003b10, 0xaa0300a4, 0x300a9, 0xaaa00c21, 0x44104599, 0xaaaa0400, 0x3000461, 0x4a4710, 0x1e309aaa,
	0xf009965, 0xa0001910, 0xa2f00, 0x310a707, 0xa05600a0, 0x20171009, 0xf811007f, 0x7f502f00, 0x33001c10, 0x7f80, 0x0
};
const u32 throw_level_pal[] = {
	0x2010, 0xff7fff00, 0x7f296b7f, 0x1d93005f, 0x1d3b2e5b, 0x423f, 0x84a5200, 0x80000021, 0x150, 0x0
};

const u32 throw_lure_img[] = {
	0x18010, 0x60000028, 0x200bb01, 0xb00025, 0xb0002365, 0x5b003036, 0x836602, 0x80b6666b, 0x6240001c, 0x56620400, 0x6628000b,
	0x47000b05, 0x1e00b566, 0x1800b5, 0x1b001b65, 0xb000abbb, 0xb11102, 0x111ab0, 0x40c0aa10, 0xba01202e, 0xba00bb56, 0xba01bb,
	0xbaaab, 0xf80310aa, 0x73706510, 0x1d1001d0, 0x86657f00, 0x10b04900, 0xc01bb560, 0x58001c, 0x675204, 0x83005b83, 0x7f005bba,
	0x400806b, 0xbbb5b0, 0xb8bbbbab, 0xbb8700, 0x70030087, 0xb5b55b87, 0xb04008d, 0x8300bb00, 0xe0a10320, 0x554687, 0x5000bb02,
	0x3003b10, 0x30098b5, 0x300babb, 0xbbb02100, 0x1c0091aa, 0x400bb00, 0x5bbbb, 0x47108503, 0xabbb005b, 0xaa1e30, 0x1910960f,
	0x2f00b000, 0x1007000b, 0x9fb003, 0x100ab056, 0x7f2017, 0x502f0011, 0x1c10e07f, 0x7f803300, 0x0
};
const u32 throw_lure_pal[] = {
	0x2010, 0xff7fff00, 0x9f357b7f, 0x5a13005a, 0x6ec945c9, 0x3d002b1f, 0x5200002e, 0x2021084a, 0x1300000, 0x0
};

const u32 throw_moon_img[] = {
	0x18010, 0x60000028, 0x200dd01, 0xd00086, 0xd0009a66, 0x6d00a175, 0x875502, 0x80d5555d, 0x2940001c, 0x32240400, 0x2244000d,
	0x49000d01, 0x2d00d322, 0x300, 0x1d55dd, 0x4ddd1d, 0xd111d000, 0x1114d000, 0x441000b0, 0x1202e40, 0xdd32d4, 0xd4ddd402,
	0x444d00, 0xd1e4837, 0x65104800, 0x1d07370, 0xa11d10, 0x8577d000, 0xd655d000, 0xd65d0009, 0x1cc01d, 0x52040044, 0x3d7f0049,
	0x3dd40300, 0x805d7f00, 0xd3d00400, 0xdd4d00dd, 0x8700b8dd, 0x8700dd, 0x3d877003, 0x8dd3d3, 0xdd000d04, 0x3208300, 0xa8870041,
	0x70848b00, 0x2006687, 0xd36000dd, 0x3003b10, 0xdd0300d6, 0x300d4, 0xddd00c69, 0x44103344, 0xdddd0400, 0x3000361, 0x3d4710,
	0x1e304ddd, 0xf004465, 0xd0001910, 0xd2f00, 0x310a707, 0xd05600d0, 0x20171004, 0xfc11007f, 0x7f502f00, 0x33001c10, 0x7f400b11,
	0x0
};
const u32 throw_moon_pal[] = {
	0x2010, 0xff7fff00, 0xab49cc7f, 0x4e2f003d, 0x56487709, 0xb7007ff3, 0x9f233e36, 0x8000053, 0x21080000, 0x510, 0x0
};

const u32 throw_friend_img[] = {
	0x18010, 0x60000028, 0x200cc01, 0xc00022, 0xc0006134, 0x4c006183, 0x372702, 0x80c2782c, 0x2240001c, 0x42260400, 0x2836000c,
	0x73000c00, 0x2c00c472, 0xc44087, 0x1c4218, 0xaccc0c, 0xc111b000, 0x111ab000, 0xaa1000b0, 0x1202e40, 0xcc42ca, 0xcaccca00,
	0xcaaac00, 0x10aa7c00, 0x70651003, 0x1001d073, 0x200511d, 0x3778c0, 0x600027c0, 0xc01c48c4, 0x36001c, 0xc877304, 0x724c0001,
	0x4cca000c, 0x2c009e00, 0xc000c44c, 0x400ccc4, 0xccccac, 0xc003001c, 0x300c411, 0xc44c8770, 0xc0400c4, 0xcc6a00, 0xa1032083,
	0x4487e0, 0x34cc02, 0x3b1040, 0x300c403, 0xc4cacc, 0xc0210003, 0x1c00aacc, 0x8ccc00, 0x4cccc04, 0x47100300, 0xcc2c004c,
	0xaa1e30ac, 0x19100f00, 0xb4c000, 0x7000c2f, 0xc00310, 0xff0ac056, 0x7f201710, 0x2f001100, 0x1c107f50, 0x7f803300, 0x0
};
const u32 throw_friend_pal[] = {
	0x2010, 0xff7fff00, 0x971f117f, 0x1e8f0043, 0x1f5d0b7e, 0x78002255, 0x52000025, 0x821084a, 0x2108, 0x110, 0x0
};

const u32 throw_love_img[] = {
	0x18010, 0x60000028, 0x2009901, 0x900035, 0x90004235, 0x59005434, 0x233202, 0x80932339, 0x5340001c, 0x35240400, 0x25450009,
	0x32000900, 0x59009625, 0x964052, 0x193318, 0x899919, 0x91119000, 0x11189000, 0x881000b0, 0x1202e40, 0x996598, 0x98999800,
	0x9888900, 0x10887d00, 0x70651003, 0x1001d073, 0x7f00441d, 0x90004300, 0x39009533, 0xc0194895, 0x24001c, 0x9533204, 0x690025,
	0x699887, 0x400397f, 0x99969001, 0x99998900, 0x99718700, 0x3008700, 0x96698770, 0x1a040096, 0x990009, 0x81032083, 0x34487e0,
	0x99660000, 0x3b106000, 0x964c0300, 0x98990300, 0x21000300, 0x88449990, 0x99001c00, 0x99030066, 0x300c206, 0x694710, 0x1e308999,
	0xf00cb88, 0x90001910, 0x92f00, 0x4f031007, 0x90560090, 0x20171008, 0x11007f, 0x7f50f02f, 0x33001c10, 0x7f80, 0x0
};
const u32 throw_love_pal[] = {
	0x2010, 0xff7fff00, 0x1b669e7f, 0x731f005a, 0x3d514d77, 0x52020000, 0x21084a, 0x17000, 0x0
};

const u32 throw_heavy_img[] = {
	0x18010, 0x60000020, 0x3000aa01, 0x55aa, 0x7432a3, 0x41462a, 0x73263a00, 0xa7377a00, 0x1c7080, 0x3aa5500, 0x33005700,
	0x3677003a, 0x23700a3, 0x6a00a362, 0x1800a563, 0x1a0077, 0x9aaa1a, 0xa10511a0, 0x1119a000, 0x40991000, 0x120802e, 0xaa56a9,
	0x3a9aaa9, 0xa999a00, 0x3109900, 0x60e01900, 0x1001f01c, 0xa0004483, 0x7242, 0xa573a3, 0x881aa57a, 0x1cb0, 0x27830077,
	0x10a26, 0x3a365a, 0x7f005aa9, 0x4007a40, 0xaaa5a0, 0xaa5caa9a, 0xaa8700, 0x70030087, 0x46a55a87, 0xa0400a5, 0x8300aa00,
	0xa6910320, 0x105587e0, 0x105000d9, 0xa503003b, 0xaa030098, 0x300a9, 0x99aaa021, 0x1c00b6, 0x3b001501, 0x10030005, 0x165a47,
	0x1e309aaa, 0x100f0099, 0xa05a0019, 0xa2f00, 0xa0031007, 0x7fa05600, 0x20171009, 0x11007f, 0x107f502f, 0x8033001c, 0x7f80,
	0x0
};
const u32 throw_heavy_pal[] = {
	0x2010, 0xff7fff00, 0x676dea7f, 0x6b380051, 0x4a0e3dab, 0x5a92, 0x84a5200, 0x80000021, 0x150, 0x0
};

const u32 throw_fast_img[] = {
	0x18010, 0x60000028, 0x200bb01, 0xb00036, 0xb0003856, 0x4b008185, 0x585302, 0x80b5344b, 0x6341001c, 0x66630400, 0x53000b,
	0x36550103, 0x436b00b2, 0x1800b4, 0xb001b44, 0xb000abbb, 0xb11102, 0x111ab0, 0x40c0aa10, 0xba01202e, 0xba00bb44, 0xba01bb,
	0xbaaab, 0xf00310aa, 0x73706510, 0x1d1001d0, 0x73b00037, 0xb0005500, 0x4b00b634, 0xc01b48b4, 0x53001c, 0xb355504, 0xb7b0084,
	0x4bba00, 0x6b2b7f, 0xb6b000b6, 0xbbab00bb, 0x1b00bb13, 0x11b00300, 0x87700300, 0xb2b66b11, 0xb0400, 0xa28300bb, 0xe0a10320,
	0x6687, 0xd340a400, 0x3003b10, 0xbb0300b4, 0x300ba, 0xbbb01c21, 0x1c00aa, 0xbb0300e2, 0x300c204, 0x4b4710, 0x1e30abbb,
	0xf00cbaa, 0xb0001910, 0xb2f00, 0x4f031007, 0xb05600b0, 0x2017100a, 0x11007f, 0x7f50f02f, 0x33001c10, 0x7f80, 0x0
};
const u32 throw_fast_pal[] = {
	0x2010, 0xff7fff00, 0x3e22127f, 0x1aba001f, 0x15b9223d, 0xff0042df, 0x52000052, 0x2021084a, 0x1300000, 0x0
};

const u32 throw_sport_img[] = {
	0x18010, 0x60000028, 0x200aa01, 0xa00045, 0xa0001745, 0x5a007174, 0x174402, 0x80a1355a, 0x5440001c, 0x55430400, 0x5414000a,
	0x43000a00, 0x3a00a554, 0xa54055, 0x1a5518, 0x9aaa1a, 0xa111a000, 0x1119a000, 0x991000b0, 0x1202e40, 0xaa55a9, 0xa9aaa900,
	0xa999a00, 0x10997d00, 0x70651003, 0x1001d073, 0x8300611d, 0xa0001411, 0xa55a7b00, 0x301cc01a, 0x83101400, 0x531a7f00, 0xa928000a,
	0x2a7f005a, 0xa5a00400, 0x9a000baa, 0x8700aaaa, 0x8700aa, 0x87708803, 0xa5a55a, 0xaa000a04, 0x208300d0, 0x87e09103, 0x44000055,
	0x4000aa1a, 0x3003b10, 0xaa0300a4, 0x300a962, 0xaaa02100, 0x1c0099, 0x44aa26, 0x4aa03, 0x4a471003, 0x9aaa0016, 0x991e30,
	0x19100f, 0x2f00a05a, 0x1007000a, 0x5600a003, 0x10097fa0, 0x7f2017, 0x502f0011, 0x1c107f, 0x7f808033, 0x0
};
const u32 throw_sport_pal[] = {
	0x2010, 0xff7fff00, 0x5f22127f, 0x223d001f, 0x42df15b9, 0x52ff, 0x84a5200, 0x80000021, 0x150, 0x0
};

const u32 throw_dusk_img[] = {
	0x18010, 0x60000028, 0x200bb01, 0xb00044, 0xb0006662, 0x4b003222, 0x622202, 0x8096226b, 0x4440001c, 0x34460400, 0x3333000b,
	0x36000b01, 0x4900b533, 0x300, 0x79368b, 0x79884b, 0x9434b000, 0x4435b000, 0x332900b0, 0x1202e40, 0xb85397, 0xb5889700,
	0xb535900, 0x555d00, 0x65103303, 0x1d07370, 0x801d00aa, 0x32b07f30, 0x834b0093, 0x1cc0e979, 0x7f108320, 0x97030039, 0x7f0038,
	0x95584b, 0xbbb580, 0xbbbb5b04, 0x3004b00, 0xa043b0, 0x87603303, 0xb58559, 0x85b07bb, 0xbbbb00, 0x31007, 0x5570bf,
	0x87803b, 0xbb882b, 0x3b10d280, 0xb80300, 0xb2bb03, 0x912203, 0x223b0f, 0x88bb001c, 0xbb500300, 0xb4310, 0xbb008b03,
	0x1e30b32b, 0x100f0022, 0xb00019, 0xb67b107f, 0x203b7fb0, 0x5b67101c, 0x7f103710, 0x7f2082b4, 0xb3b44, 0x7f403b, 0x0
};
const u32 throw_dusk_pal[] = {
	0x2010, 0x7fff00, 0x4a41ae00, 0x27460031, 0x47d32266, 0x1200129f, 0x90015f01, 0x20210831, 0x1300000, 0x0
};

const u32 throw_quick_img[] = {
	0x18010, 0x60000028, 0x200bb01, 0xb00044, 0xb0005567, 0x4b006566, 0x666502, 0x80b6655b, 0x4440001c, 0x87450400, 0x7756000b,
	0x66000b01, 0x7b00b347, 0x300, 0xcb662b, 0xaab224b, 0xb644b000, 0x663b00, 0x40c07429, 0xba01202e, 0xba00b287, 0xb40122,
	0xb447b, 0x74370077, 0x70651047, 0x9901d073, 0x561d00, 0x7765b000, 0xb877b000, 0xb87b1200, 0x1cc0cb, 0x773c0074, 0xb4800,
	0xb788b, 0xb88b00ba, 0x3b4b0000, 0xb00000b3, 0x4b00bbb3, 0x4c00bbbb, 0xb003005b, 0x70030065, 0x41b33b87, 0xb0400b3, 0xb4bbbb00,
	0x46400330, 0x7787e0, 0xbb8300, 0x3b103069, 0xb30300, 0xbabb03, 0x10aa5103, 0x1c00aa0f, 0x38bb00, 0x3bb3003, 0x47100300,
	0xabbb003b, 0xaa1e30b1, 0x19100f00, 0x30b4b000, 0x7ff0a27b, 0x1100bb, 0x7f504bbb, 0xdd00e0b5, 0x7f803b01, 0x0
};
const u32 throw_quick_pal[] = {
	0x2010, 0x7fff00, 0x89314a00, 0x6a09004d, 0x1b7f7b30, 0x150012b9, 0x31319012, 0xc0210846, 0x1101710, 0x0
};

const u32 throw_heal_img[] = {
	0x18010, 0x60000028, 0x200aa01, 0xa00033, 0xa0004773, 0x7a004777, 0x447702, 0x8054477a, 0x3340001c, 0x37740400, 0x7774000a,
	0x44000a00, 0x3500a877, 0xa80073, 0x65475a00, 0x55007a00, 0x37a00065, 0x2ca00053, 0x29003338, 0x202e4028, 0x835601, 0x555600a5,
	0x822500a8, 0x22000a17, 0x10820300, 0xd0737065, 0x997801, 0x7f101d, 0x7a4f0087, 0xc0946553, 0x73001c, 0x7f00333c, 0xa087325,
	0x255600, 0x52257a7f, 0xa2500000, 0xaa8a00aa, 0x7a0026aa, 0x37a00300, 0x87700300, 0xa8520025, 0x52aaa00, 0xaa68aa00, 0x3100700,
	0x2287e083, 0x550d0000, 0x105000aa, 0xa503003b, 0xaa2a0300, 0x980300a9, 0x950f10, 0xaa2a001c, 0xaa030055, 0xa4310, 0x105a03,
	0x1e009aaa, 0x9500aa58, 0x100f00c6, 0xa8a00019, 0x7ff07b30, 0x11008caa, 0x108aaa00, 0xa77f1037, 0xaa5000, 0x7f8033b7, 0x0
};
const u32 throw_heal_pal[] = {
	0x2010, 0x7fff00, 0x7f523c00, 0x6eff0062, 0x7ad6556e, 0xf9006bdf, 0x8319052, 0x80000021, 0x150, 0x0
};

const u32 throw_cherish_img[] = {
	0x18010, 0x60000028, 0x200cc01, 0xc00077, 0xc0005967, 0x7c009195, 0x595502, 0x80c5524c, 0x7740001c, 0x37750400, 0x7755000c,
	0xc3031088, 0x10107c00, 0x5c244c, 0x9c422c00, 0xc224c000, 0x23c0000b, 0x33290022, 0x1202e40, 0xccc7c900, 0xc33cc900, 0xc33c0300,
	0x3333000c, 0x65100300, 0xd07370d0, 0x1d00aa01, 0x99c00099, 0xc0005500, 0x5c00c755, 0xc05c4dc4, 0x55001c, 0x8c7f103c, 0xc9100300,
	0x7f00c84c, 0xc000c882, 0xccc800, 0xcccc3c, 0x300944c, 0x30042c0, 0x8c87602c, 0xc44138, 0xcc000c04, 0x300c3cc, 0xcc00cc0e,
	0x10830034, 0x9987708b, 0x65000003, 0x102000cc, 0x5403003b, 0xca241046, 0xaa4b00, 0x89aa440f, 0xcc001c00, 0xcc030056, 0x86030005,
	0x2c4710, 0x2200accc, 0x20aa1e00, 0x1d100444, 0xc3400044, 0x2c003acc, 0x3103700, 0x10447fc0, 0x4403c67, 0xc27f40, 0xc24cc,
	0x7f802240, 0x0
};
const u32 throw_cherish_pal[] = {
	0x2010, 0xff7fff00, 0x8f14987f, 0x254a0014, 0xc99151e, 0xf000014, 0x90421e00, 0x8000031, 0x2108, 0x110, 0x0
};

const u32 throw_park_img[] = {
	0x18010, 0x60000028, 0x200bb01, 0xb00044, 0xb0003534, 0x4b005153, 0x353302, 0x8023333b, 0x4440001c, 0x64430400, 0x4433000b,
	0xb6031088, 0x3004200, 0x332b00, 0x221b0072, 0x11b00072, 0xb0002105, 0x2900111a, 0x802e40aa, 0x64270120, 0x222700b2, 0xa20003ba,
	0xaa000baa, 0x65100310, 0xd07370d0, 0x1d008801, 0x33b00033, 0x44870081, 0x244b0024, 0x821cc072, 0x66448320, 0x62000b, 0x62402703,
	0xa24b7f00, 0xbab0002a, 0xab00bb01, 0x1b00bbbb, 0xb0300300, 0x70030011, 0xb62aa287, 0xabbb0100, 0xbbbb000b, 0x400330ba, 0x4487e0a1,
	0xbb220000, 0x10206a00, 0xb203003b, 0xbb0300, 0x88bb4f, 0xaabbb021, 0xbb001c00, 0x3009b22, 0x30002bb, 0x2b4710, 0x761e304f,
	0x100f00aa, 0xb7f2019, 0x3100700, 0x56009fb0, 0x17100ab0, 0x11007f20, 0x1c107f80, 0x803300c0, 0x7f, 0x0
};
const u32 throw_park_pal[] = {
	0x2010, 0xff7fff00, 0x3b5da87f, 0x16980023, 0x1215477e, 0x90001a1e, 0x31000031, 0x20210846, 0x1300000, 0x0
};

const u32 throw_dream_img[] = {
	0x18010, 0x60000028, 0x200cc01, 0xc00024, 0xc0005754, 0x4c007175, 0x575502, 0x80c5544c, 0x2241001c, 0x44260400, 0x2055000c,
	0xc41003, 0x3004c, 0x1c44cc, 0xbccc4c00, 0xc994c000, 0x98c0000b, 0x88100099, 0x1202e40, 0xcc44cb00, 0xc3cccb00, 0x333c0000,
	0x8838000c, 0x8878000c, 0x73706510, 0x1d1001d0, 0x32c00077, 0x87005577, 0x1cc46000, 0x40001cc0, 0x55040055, 0x4c000c55, 0xc0845,
	0x7f004ccb, 0xc33c4c, 0xccc3c000, 0xcccc3c00, 0xcc8700b8, 0x3008700, 0xc33c8770, 0x4008cc4, 0xcc000c, 0x34032083, 0x3300220c,
	0x5587b0, 0x40a40000, 0x3b10d2, 0x300c803, 0x300cbcc, 0xf10b9bb, 0x1c00bb, 0xcc0300e2, 0x85030004, 0x8c4710, 0x1e30bccc,
	0x960f00bb, 0xc0001910, 0xc2f00, 0xc0031007, 0xc0560096, 0xbb17100b, 0x67101c20, 0x3710b9bc, 0x100300cb, 0xbb33001c, 0x803b000c,
	0x7f30, 0x0
};
const u32 throw_dream_pal[] = {
	0x2010, 0xff7fff00, 0xf8517f7f, 0x5e7c004d, 0x5e1f6adf, 0x4d00775f, 0x617045, 0x8463100, 0x2108, 0x110, 0x0
};

const u32 throw_beast_img[] = {
	0x18010, 0x50000020, 0x9901, 0xcc007890, 0x45178900, 0x784c00, 0x82200054, 0x223c0068, 0x1e90c840, 0x987cc, 0x98007154,
	0xc4874500, 0x4288600, 0x228c0002, 0x431400c3, 0x3c00001c, 0x7900bccc, 0xc832, 0x328790, 0xa023c900, 0x50cc2d00, 0xcc33cb36,
	0xcc00c100, 0x238c00c3, 0x7230097, 0x32000978, 0xa01c809c, 0xc7ff001, 0x1cc22c00, 0x7f707ff0, 0xc2002ccb, 0x4c2c0000, 0xc000c4,
	0x4c00ccc4, 0x2c00cccc, 0xc9030080, 0x8000cc7c, 0xa24487, 0x8710222d, 0xc2c44c, 0x80c04, 0x30c4cccc, 0x9cc703, 0x8724406,
	0x84002200, 0x2548740, 0xcc580000, 0x3b007000, 0x300a5c0, 0xcc0300c2, 0xbb0300cb, 0xbb290f10, 0x85441045, 0x7cc0300, 0x10850300,
	0xcc002c47, 0xbb1e30bc, 0x108c0f00, 0xc2c00019, 0x3107f30, 0xa0c774c9, 0x11007f, 0x37102ccc, 0x7f108700, 0x7fb04740, 0x0
};
const u32 throw_beast_pal[] = {
	0x2010, 0xff7fff00, 0x6b58e77f, 0x69a8007d, 0x7f317ea8, 0x77001f5d, 0x21b332, 0x604a5200, 0x10050008, 0x1, 0x0
};

const struct tile_ball ball_tiles[NO_BALLS] = {
    {(void*) 0x8C0173C, 0x180, 0xD6D8}, // 0
    {(void*) 0x8C01818, 0x180, 0xD6D9}, // 1
    {(void*) 0x8C018F8, 0x180, 0xD6DA}, // 2
    {(void*) 0x8C019E0, 0x180, 0xD6DB}, // 3
    {(void*) 0x8C01AB4, 0x180, 0xD6DC}, // 4
    {(void*) 0x8C01B98, 0x180, 0xD6DD}, // 5
    {(void*) 0x8C01C78, 0x180, 0xD6DE}, // 6
    {(void*) 0x8C01DB4, 0x180, 0xD6DF}, // 7
    {(void*) 0x8C01E9C, 0x180, 0xD6E0}, // 8
    {(void*) 0x8C01F80, 0x180, 0xD6E1}, // 9
    {(void*) 0x8C0209C, 0x180, 0xD6E2}, // 10
    {(void*) 0x8C021F0, 0x180, 0xD6E3}, // 11
    {(void*) throw_level_img, 0x180, NEWBALLS_TILE + 0}, //12
    {(void*) throw_lure_img, 0x180, NEWBALLS_TILE + 1}, //13
    {(void*) throw_moon_img, 0x180, NEWBALLS_TILE + 2}, //14
    {(void*) throw_friend_img, 0x180, NEWBALLS_TILE + 3}, //15
    {(void*) throw_love_img, 0x180, NEWBALLS_TILE + 4}, //16
    {(void*) throw_heavy_img, 0x180, NEWBALLS_TILE + 5}, //17
    {(void*) throw_fast_img, 0x180, NEWBALLS_TILE + 6}, //18
    {(void*) throw_sport_img, 0x180, NEWBALLS_TILE + 7}, //19
    {(void*) throw_dusk_img, 0x180, NEWBALLS_TILE + 8}, //20
    {(void*) throw_quick_img, 0x180, NEWBALLS_TILE + 9}, //21
    {(void*) throw_heal_img, 0x180, NEWBALLS_TILE + 10}, //22
    {(void*) throw_cherish_img, 0x180, NEWBALLS_TILE + 11}, //23
    {(void*) throw_park_img, 0x180, NEWBALLS_TILE + 12}, //24
    {(void*) throw_dream_img, 0x180, NEWBALLS_TILE + 13}, //25
    {(void*) throw_beast_img, 0x180, NEWBALLS_TILE + 14}, //26
    [27 ... NO_BALLS - 1] = {(void*) 0x8C0173C, 0x180, 0xD6D8} //set others to pokeblall
};

const struct tile_pal ball_pals[NO_BALLS] = {
    {(void*)0x8C017F8, 0xD6D8}, // 0
    {(void*)0x8C018D4, 0xD6D9}, // 1
    {(void*)0x8C019BC, 0xD6DA}, // 2
    {(void*)0x8C01A94, 0xD6DB}, // 3
    {(void*)0x8C01B74, 0xD6DC}, // 4
    {(void*)0x8C01C58, 0xD6DD}, // 5
    {(void*)0x8C01D8C, 0xD6DE}, // 6
    {(void*)0x8C01E78, 0xD6DF}, // 7
    {(void*)0x8C01F5C, 0xD6E0}, // 8
    {(void*)0x8C02078, 0xD6E1}, // 9
    {(void*)0x8C021C8, 0xD6E2}, // 10
    {(void*)0x8C022E0, 0xD6E3}, // 11
    {(void*) throw_level_pal, NEWBALLS_TILE + 0}, //12
    {(void*) throw_lure_pal, NEWBALLS_TILE + 1}, //13
    {(void*) throw_moon_pal, NEWBALLS_TILE + 2}, //14
    {(void*) throw_friend_pal, NEWBALLS_TILE + 3}, //15
    {(void*) throw_love_pal, NEWBALLS_TILE + 4}, //16
    {(void*) throw_heavy_pal, NEWBALLS_TILE + 5}, //17
    {(void*) throw_fast_pal, NEWBALLS_TILE + 6}, //18
    {(void*) throw_sport_pal, NEWBALLS_TILE + 7}, //19
    {(void*) throw_dusk_pal, NEWBALLS_TILE + 8}, //20
    {(void*) throw_quick_pal, NEWBALLS_TILE + 9}, //21
    {(void*) throw_heal_pal, NEWBALLS_TILE + 10}, //22
    {(void*) throw_cherish_pal, NEWBALLS_TILE + 11}, //23
    {(void*) throw_park_pal, NEWBALLS_TILE + 12}, //24
    {(void*) throw_dream_pal, NEWBALLS_TILE + 13}, //25
    {(void*) throw_beast_pal, NEWBALLS_TILE + 14}, //26
    [27 ... NO_BALLS - 1] = {(void*)0x8C017F8, 0xD6D8} //set others to pokeblall
};

const struct template ball_templates[NO_BALLS] = {
    {0xD6D8, 0xD6D8, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 0
    {0xD6D9, 0xD6D9, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 1
    {0xD6DA, 0xD6DA, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 2
    {0xD6DB, 0xD6DB, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 3
    {0xD6DC, 0xD6DC, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 4
    {0xD6DD, 0xD6DD, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 5
    {0xD6DE, 0xD6DE, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 6
    {0xD6DF, 0xD6DF, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 7
    {0xD6E0, 0xD6E0, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 8
    {0xD6E1, 0xD6E1, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 9
    {0xD6E2, 0xD6E2, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 10
    {0xD6E3, 0xD6E3, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, // 11
    {NEWBALLS_TILE + 0, NEWBALLS_TILE + 0, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //12
	{NEWBALLS_TILE + 1, NEWBALLS_TILE + 1, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //13
	{NEWBALLS_TILE + 2, NEWBALLS_TILE + 2, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //14
	{NEWBALLS_TILE + 3, NEWBALLS_TILE + 3, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //15
	{NEWBALLS_TILE + 4, NEWBALLS_TILE + 4, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //16
	{NEWBALLS_TILE + 5, NEWBALLS_TILE + 5, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //17
	{NEWBALLS_TILE + 6, NEWBALLS_TILE + 6, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //18
	{NEWBALLS_TILE + 7, NEWBALLS_TILE + 7, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //19
	{NEWBALLS_TILE + 8, NEWBALLS_TILE + 8, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //20
	{NEWBALLS_TILE + 9, NEWBALLS_TILE + 9, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //21
	{NEWBALLS_TILE + 10, NEWBALLS_TILE + 10, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //22
	{NEWBALLS_TILE + 11, NEWBALLS_TILE + 11, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //23
	{NEWBALLS_TILE + 12, NEWBALLS_TILE + 12, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //24
	{NEWBALLS_TILE + 13, NEWBALLS_TILE + 13, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //25
	{NEWBALLS_TILE + 14, NEWBALLS_TILE + 14, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}, //26
    [27 ... NO_BALLS - 1] = {0xD6D8, 0xD6D8, (void*) 0x832C4C0, (void*) 0x832C508, 0, (void*) 0x832C574, (void*) 0x804ABD4+1}
};

//ball stars

const struct tile_ball ball_stars_tiles[NO_BALLS] = {
    {(void*) 0x8C1A490, 0x100, 0xD6EC}, // 0
    {(void*) 0x8C1A490, 0x100, 0xD6ED}, // 1
    {(void*) 0x8C1A490, 0x100, 0xD6EE}, // 2
    {(void*) 0x8C1A490, 0x100, 0xD6EF}, // 3
    {(void*) 0x8C1A490, 0x100, 0xD6F0}, // 4
    {(void*) 0x8C1A490, 0x100, 0xD6F1}, // 5
    {(void*) 0x8C1A490, 0x100, 0xD6F2}, // 6
    {(void*) 0x8C1A490, 0x100, 0xD6F3}, // 7
    {(void*) 0x8C1A490, 0x100, 0xD6F4}, // 8
    {(void*) 0x8C1A490, 0x100, 0xD6F5}, // 9
    {(void*) 0x8C1A490, 0x100, 0xD6F6}, // 10
    {(void*) 0x8C1A490, 0x100, 0xD6F7}, // 11
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 0}, //12
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 1}, //13
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 2}, //14
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 3}, //15
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 4}, //16
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 5}, //17
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 6}, //18
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 7}, //19
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 8}, //20
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 9}, //21
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 10}, //22
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 11}, //23
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 12}, //24
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 13}, //25
    {(void*) 0x8C1A490, 0x100, NEWBALLS_STARS + 14}, //26
    [27 ... NO_BALLS - 1] = {(void*) 0x8C1A490, 0x100, 0xD6EC} //set others to pokeblall
};

const struct tile_pal ball_stars_pals[NO_BALLS] = {
    {(void*) 0x8C1A564, 0xD6EC}, // 0
    {(void*) 0x8C1A564, 0xD6ED}, // 1
    {(void*) 0x8C1A564, 0xD6EE}, // 2
    {(void*) 0x8C1A564, 0xD6EF}, // 3
    {(void*) 0x8C1A564, 0xD6F0}, // 4
    {(void*) 0x8C1A564, 0xD6F1}, // 5
    {(void*) 0x8C1A564, 0xD6F2}, // 6
    {(void*) 0x8C1A564, 0xD6F3}, // 7
    {(void*) 0x8C1A564, 0xD6F4}, // 8
    {(void*) 0x8C1A564, 0xD6F5}, // 9
    {(void*) 0x8C1A564, 0xD6F6}, // 10
    {(void*) 0x8C1A564, 0xD6F7}, // 11
    {(void*) 0x8C1A564, NEWBALLS_STARS + 0}, //12
    {(void*) 0x8C1A564, NEWBALLS_STARS + 1}, //13
    {(void*) 0x8C1A564, NEWBALLS_STARS + 2}, //14
    {(void*) 0x8C1A564, NEWBALLS_STARS + 3}, //15
    {(void*) 0x8C1A564, NEWBALLS_STARS + 4}, //16
    {(void*) 0x8C1A564, NEWBALLS_STARS + 5}, //17
    {(void*) 0x8C1A564, NEWBALLS_STARS + 6}, //18
    {(void*) 0x8C1A564, NEWBALLS_STARS + 7}, //19
    {(void*) 0x8C1A564, NEWBALLS_STARS + 8}, //20
    {(void*) 0x8C1A564, NEWBALLS_STARS + 9}, //21
    {(void*) 0x8C1A564, NEWBALLS_STARS + 10}, //22
    {(void*) 0x8C1A564, NEWBALLS_STARS + 11}, //23
    {(void*) 0x8C1A564, NEWBALLS_STARS + 12}, //24
    {(void*) 0x8C1A564, NEWBALLS_STARS + 13}, //25
    {(void*) 0x8C1A564, NEWBALLS_STARS + 14}, //26
    [27 ... NO_BALLS - 1] = {(void*) 0x8C1A564, 0xD6EC} //set others to pokeblall
};

const struct template ball_stars_templates[NO_BALLS] = {
    {0xD6EC, 0xD6EC, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 0
    {0xD6ED, 0xD6ED, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 1
    {0xD6EE, 0xD6EE, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 2
    {0xD6EF, 0xD6EF, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 3
    {0xD6F0, 0xD6F0, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 4
    {0xD6F1, 0xD6F1, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 5
    {0xD6F2, 0xD6F2, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 6
    {0xD6F3, 0xD6F3, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 7
    {0xD6F4, 0xD6F4, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 8
    {0xD6F5, 0xD6F5, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 9
    {0xD6F6, 0xD6F6, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 10
    {0xD6F7, 0xD6F7, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, // 11
    {NEWBALLS_STARS + 0, NEWBALLS_STARS + 0, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //12
	{NEWBALLS_STARS + 1, NEWBALLS_STARS + 1, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //13
	{NEWBALLS_STARS + 2, NEWBALLS_STARS + 2, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //14
	{NEWBALLS_STARS + 3, NEWBALLS_STARS + 3, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //15
	{NEWBALLS_STARS + 4, NEWBALLS_STARS + 4, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //16
	{NEWBALLS_STARS + 5, NEWBALLS_STARS + 5, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //17
	{NEWBALLS_STARS + 6, NEWBALLS_STARS + 6, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //18
	{NEWBALLS_STARS + 7, NEWBALLS_STARS + 7, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //19
	{NEWBALLS_STARS + 8, NEWBALLS_STARS + 8, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //20
	{NEWBALLS_STARS + 9, NEWBALLS_STARS + 9, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //21
	{NEWBALLS_STARS + 10, NEWBALLS_STARS + 10, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //22
	{NEWBALLS_STARS + 11, NEWBALLS_STARS + 11, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //23
	{NEWBALLS_STARS + 12, NEWBALLS_STARS + 12, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //24
	{NEWBALLS_STARS + 13, NEWBALLS_STARS + 13, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //25
	{NEWBALLS_STARS + 14, NEWBALLS_STARS + 14, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485}, //26
    [27 ... NO_BALLS - 1] = {0xD6EC, 0xD6EC, (void*) 0x8524904, (void*) 0x85E519C, 0, (void*) 0x82EC6A8, nullsub_1485} //poke ball
};


const enum ball_stars Ball_Stars[NO_BALLS] = {
    BALL_STICKS, BALL_STICKS, BALL_STICKS, BALL_SMALL_CROSSES, BALL_STARS,
    BALL_BUBBLES, BALL_BUBBLES, BALL_HEARTS, BALL_SMALL_CROSSES, BALL_SMALL_CROSSES,
    BALL_BIG_CROSSES, BALL_BIG_CROSSES,
    BALL_STICKS, //0xC Level
    BALL_STICKS, //0xD Lure
    BALL_STICKS, //0xE Moon
    BALL_STICKS, //0xF Friend
    BALL_STICKS, //0x10 Love
    BALL_STICKS, //0x11 Heavy
    BALL_STICKS, //0x12 Fast
    BALL_STICKS, //0x13 Sport
    BALL_STICKS, //0x14 Dusk
    BALL_STICKS, //0x15 Quick
    BALL_STICKS, //0x16 Heal
    BALL_STICKS, //0x17 Cherish
    BALL_STICKS, //0x18 Park
    BALL_STICKS, //0x19 Dream
    BALL_STICKS, //0x1A Beast
    [27 ... NO_BALLS - 1] = BALL_STICKS
};

typedef void (*ball_task)(u8 taskID);

//tasks

const ball_task ball_anim_tasks[NO_BALLS] = {
    (void*) 0x8171E51, // 0
    (void*) 0x81723D5, // 1
    (void*) 0x81721CD, // 2
    (void*) 0x81722CD, // 3
    (void*) 0x81726BD, // 4
    (void*) 0x81721CD, // 5
    (void*) 0x81720C9, // 6
    (void*) 0x81722CD, // 7
    (void*) 0x8172561, // 8
    (void*) 0x8171FC5, // 9
    (void*) 0x81723D5, // 0xA
    (void*) 0x81727E9, // 0xB
    [12 ... NO_BALLS - 1] = (void*) 0x8171E51
};

//fade table

const u16 ball_fadepoke_table[NO_BALLS] = {
    0x7ADF, 0x7AF0, 0x53D7, 0x3FFF, 0x7297, 0x67F5,
    0x7B2C, 0x2B7E, 0x431F, 0x7BDD, 0x2A3F, 0x293F,
    [12 ... NO_BALLS - 1] = 0x72DF
};


u8 item_to_ball(u16 ballItem)
{
    switch (ballItem)
    {
    case ITEM_POKE_BALL:
        return BALL_POKE;
    case ITEM_GREAT_BALL:
        return BALL_GREAT;
    case ITEM_ULTRA_BALL:
        return BALL_ULTRA;
    case ITEM_MASTER_BALL:
        return BALL_MASTER;
    case ITEM_PREMIER_BALL:
        return BALL_PREMIER;
    case ITEM_HEAL_BALL:
        return BALL_HEAL;
    case ITEM_NET_BALL:
        return BALL_NET;
    case ITEM_NEST_BALL:
        return BALL_NEST;
    case ITEM_DIVE_BALL:
        return BALL_DIVE;
    case ITEM_DUSK_BALL:
        return BALL_DUSK;
    case ITEM_TIMER_BALL:
        return BALL_TIMER;
    case ITEM_QUICK_BALL:
        return BALL_QUICK;
    case ITEM_REPEAT_BALL:
        return BALL_REPEAT;
    case ITEM_LUXURY_BALL:
        return BALL_LUXURY;
    case ITEM_LEVEL_BALL:
        return BALL_LEVEL;
    case ITEM_LURE_BALL:
        return BALL_LURE;
    case ITEM_MOON_BALL:
        return BALL_MOON;
    case ITEM_FRIEND_BALL:
        return BALL_FRIEND;
    case ITEM_LOVE_BALL:
        return BALL_LOVE;
    case ITEM_FAST_BALL:
        return BALL_FAST;
    case ITEM_HEAVY_BALL:
        return BALL_HEAVY;
    case ITEM_DREAM_BALL:
        return BALL_DREAM;
    case ITEM_SAFARI_BALL:
        return BALL_SAFARI;
    case ITEM_SPORT_BALL:
        return BALL_SPORT;
    case ITEM_PARK_BALL:
        return BALL_PARK;
    case ITEM_BEAST_BALL:
        return BALL_BEAST;
    case ITEM_CHERISH_BALL:
        return BALL_CHERISH;
    default:
        return BALL_POKE;
    }
}

/*u16 ball_to_item(enum ball_index ball)
{
    if (ball < BALL_LEVEL) //return old ball item ID
    {
        switch (ball)
        {
        case BALL_MASTER:
            return ITEM_MASTERBALL;
        case BALL_ULTRA:
            return ITEM_ULTRABALL;
        case BALL_GREAT:
            return ITEM_GREATBALL;
        case BALL_POKE:
            return ITEM_POKEBALL;
        case BALL_SAFARI:
            return ITEM_SAFARIBALL;
        default:
            return ball + 1;
        }
    }
    return ball - 0xC + FIRST_NEW_BALL_ID;
}
*/

