#include "defines.h"
#include "defines/species.h"
#include "defines/pokemon.h"
#include "defines/items.h"
#include "defines/abilities.h"
#include "defines/moves.h"
#include "defines/party_menu.h"

struct LevelUpMove {
	u16 level;
	u16 move;
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


#include "data/base_stats.h"
#include "data/egg_moves.h"
#include "data/level_up_learnsets.h"
#include "data/level_up_learnset_pointers.h"
#include "data/tutor_learnsets.h"
#include "data/tmhm_learnsets.h"
