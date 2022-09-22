#include "defines.h"
#include "defines/species.h"
#include "defines/pokemon.h"
#include "defines/items.h"
#include "defines/abilities.h"
#include "defines/moves.h"
#include "defines/party_menu.h"
#include "defines/region_map_sections.h"
#include "defines/map_groups.h"


struct LevelUpMove
{
    u16 move;
    u16 level;
};

struct BaseStats
{
 /* 0x00 */ u8 baseHP;
 /* 0x01 */ u8 baseAttack;
 /* 0x02 */ u8 baseDefense;
 /* 0x03 */ u8 baseSpeed;
 /* 0x04 */ u8 baseSpAttack;
 /* 0x05 */ u8 baseSpDefense;
 /* 0x06 */ u8 type1;
 /* 0x07 */ u8 type2;
 /* 0x08 */ u8 catchRate;
 /* 0x09 */ u16 expYield;
 /* 0x0A */ u16 evYield_HP:2;
 /* 0x0A */ u16 evYield_Attack:2;
 /* 0x0A */ u16 evYield_Defense:2;
 /* 0x0A */ u16 evYield_Speed:2;
 /* 0x0B */ u16 evYield_SpAttack:2;
 /* 0x0B */ u16 evYield_SpDefense:2;
 /* 0x0C */ u16 item1;
 /* 0x0E */ u16 item2;
 /* 0x10 */ u8 genderRatio;
 /* 0x11 */ u8 eggCycles;
 /* 0x12 */ u8 friendship;
 /* 0x13 */ u8 growthRate;
 /* 0x14 */ u8 eggGroup1;
 /* 0x15 */ u8 eggGroup2;
 /* 0x16 */ u16 abilities[3];
            u8 safariZoneFleeRate;
            u8 bodyColor : 7;
            u8 noFlip : 1;
            u8 flags;
};

struct AnimFrameCmd
{
    // If the sprite has an array of images, this is the array index.
    // If the sprite has a sheet, this is the tile offset.
    u32 imageValue:16;

    u32 duration:6;
    u32 hFlip:1;
    u32 vFlip:1;
};

struct AnimLoopCmd
{
    u32 type:16;
    u32 count:6;
};

struct AnimJumpCmd
{
    u32 type:16;
    u32 target:6;
};

// The first halfword of this union specifies the type of command.
// If it -2, then it is a jump command. If it is -1, then it is the end of the script.
// Otherwise, it is the imageValue for a frame command.
union AnimCmd
{
    s16 type;
    struct AnimFrameCmd frame;
    struct AnimLoopCmd loop;
    struct AnimJumpCmd jump;
};

#define ANIMCMD_FRAME(...) \
    {.frame = {__VA_ARGS__}}
#define ANIMCMD_LOOP(_count) \
    {.loop = {.type = -3, .count = _count}}
#define ANIMCMD_JUMP(_target) \
    {.jump = {.type = -2, .target = _target}}
#define ANIMCMD_END \
    {.type = -1}

struct Evolution
{
    u16 method;
    u16 param;
    u16 targetSpecies;
};


#include "data/base_stats.h"
#include "data/egg_moves.h"
#include "data/level_up_learnsets.h"
#include "data/level_up_learnset_pointers.h"
#include "data/tutor_learnsets.h"
#include "data/tmhm_learnsets.h"
#include "data/front_pic_anims.h"
#include "data/evolution.h"
