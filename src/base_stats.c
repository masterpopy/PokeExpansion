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



#include "data/base_stats.h"
#include "data/egg_moves.h"
#include "data/level_up_learnsets.h"
#include "data/level_up_learnset_pointers.h"
#include "data/tutor_learnsets.h"
#include "data/tmhm_learnsets.h"
#include "data/front_pic_anims.h"
#include "data/evolution.h"
#include "data/abilities.h"