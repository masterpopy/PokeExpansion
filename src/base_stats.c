#include "defines.h"
#include "include/species.h"
#include "include/pokemon.h"
#include "include/items.h"
#include "include/abilities.h"
#include "include/moves.h"
#include "include/party_menu.h"
#include "include/region_map_sections.h"
#include "include/map_groups.h"
#include "include/hold_effects.h"

struct Item
{
    u8 name[14];
    u16 itemId;
    u16 price;
    u8 holdEffect;
    u8 holdEffectParam;
    const u8 *description;
    u8 importance;
    u8 registrability; // unused
    u8 pocket;
    u8 type;
    void* fieldUseFunc;
    u8 battleUsage;
    void* battleUseFunc;
    u8 secondaryId;
};


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

void ItemUseOutOfBattle_Mail(u8);
void ItemUseOutOfBattle_Bike(u8);
void ItemUseOutOfBattle_Rod(u8);
void ItemUseOutOfBattle_Itemfinder(u8);
void ItemUseOutOfBattle_PokeblockCase(u8);
void ItemUseOutOfBattle_CoinCase(u8);
void ItemUseOutOfBattle_PowderJar(u8);
void ItemUseOutOfBattle_SSTicket(u8);
void ItemUseOutOfBattle_WailmerPail(u8);
void ItemUseOutOfBattle_Medicine(u8);
void ItemUseOutOfBattle_ReduceEV(u8);
void ItemUseOutOfBattle_SacredAsh(u8);
void ItemUseOutOfBattle_PPRecovery(u8);
void ItemUseOutOfBattle_PPUp(u8);
void ItemUseOutOfBattle_RareCandy(u8);
void ItemUseOutOfBattle_TMHM(u8);
void ItemUseOutOfBattle_Repel(u8);
void ItemUseOutOfBattle_EscapeRope(u8);
void ItemUseOutOfBattle_BlackWhiteFlute(u8);
void ItemUseOutOfBattle_EvolutionStone(u8);
void ItemUseOutOfBattle_Berry(u8);
void ItemUseOutOfBattle_EnigmaBerry(u8);
void ItemUseOutOfBattle_CannotUse(u8);
void ItemUseInBattle_PokeBall(u8);
void ItemUseInBattle_StatIncrease(u8);
void ItemUseInBattle_Medicine(u8);
void ItemUseInBattle_PPRecovery(u8);
void ItemUseInBattle_Escape(u8);
void ItemUseInBattle_EnigmaBerry(u8);
#include "data/item_descriptions.h"
#include "data/items.h"