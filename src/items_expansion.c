#include "defines.h"
#include "functions.h"
#include "locations.h"
#include "include/party_menu.h"
#include "include/moves.h"
#include "include/items.h"
#include "include/get_attr.h"
#include "include/species.h"

extern const u32 sTutorLearnsets[];
extern const u32 gTMHMLearnsets[][2];
static const u16 sTMHMMoves[] =
{
    [ITEM_TM01 - ITEM_TM01] = MOVE_FOCUS_PUNCH,
    [ITEM_TM02 - ITEM_TM01] = MOVE_DRAGON_CLAW,
    [ITEM_TM03 - ITEM_TM01] = MOVE_WATER_PULSE,
    [ITEM_TM04 - ITEM_TM01] = MOVE_CALM_MIND,
    [ITEM_TM05 - ITEM_TM01] = MOVE_ROAR,
    [ITEM_TM06 - ITEM_TM01] = MOVE_TOXIC,
    [ITEM_TM07 - ITEM_TM01] = MOVE_HAIL,
    [ITEM_TM08 - ITEM_TM01] = MOVE_BULK_UP,
    [ITEM_TM09 - ITEM_TM01] = MOVE_BULLET_SEED,
    [ITEM_TM10 - ITEM_TM01] = MOVE_HIDDEN_POWER,
    [ITEM_TM11 - ITEM_TM01] = MOVE_SUNNY_DAY,
    [ITEM_TM12 - ITEM_TM01] = MOVE_TAUNT,
    [ITEM_TM13 - ITEM_TM01] = MOVE_ICE_BEAM,
    [ITEM_TM14 - ITEM_TM01] = MOVE_BLIZZARD,
    [ITEM_TM15 - ITEM_TM01] = MOVE_HYPER_BEAM,
    [ITEM_TM16 - ITEM_TM01] = MOVE_LIGHT_SCREEN,
    [ITEM_TM17 - ITEM_TM01] = MOVE_PROTECT,
    [ITEM_TM18 - ITEM_TM01] = MOVE_RAIN_DANCE,
    [ITEM_TM19 - ITEM_TM01] = MOVE_GIGA_DRAIN,
    [ITEM_TM20 - ITEM_TM01] = MOVE_SAFEGUARD,
    [ITEM_TM21 - ITEM_TM01] = MOVE_FRUSTRATION,
    [ITEM_TM22 - ITEM_TM01] = MOVE_SOLAR_BEAM,
    [ITEM_TM23 - ITEM_TM01] = MOVE_IRON_TAIL,
    [ITEM_TM24 - ITEM_TM01] = MOVE_THUNDERBOLT,
    [ITEM_TM25 - ITEM_TM01] = MOVE_THUNDER,
    [ITEM_TM26 - ITEM_TM01] = MOVE_EARTHQUAKE,
    [ITEM_TM27 - ITEM_TM01] = MOVE_RETURN,
    [ITEM_TM28 - ITEM_TM01] = MOVE_DIG,
    [ITEM_TM29 - ITEM_TM01] = MOVE_PSYCHIC,
    [ITEM_TM30 - ITEM_TM01] = MOVE_SHADOW_BALL,
    [ITEM_TM31 - ITEM_TM01] = MOVE_BRICK_BREAK,
    [ITEM_TM32 - ITEM_TM01] = MOVE_DOUBLE_TEAM,
    [ITEM_TM33 - ITEM_TM01] = MOVE_REFLECT,
    [ITEM_TM34 - ITEM_TM01] = MOVE_SHOCK_WAVE,
    [ITEM_TM35 - ITEM_TM01] = MOVE_FLAMETHROWER,
    [ITEM_TM36 - ITEM_TM01] = MOVE_SLUDGE_BOMB,
    [ITEM_TM37 - ITEM_TM01] = MOVE_SANDSTORM,
    [ITEM_TM38 - ITEM_TM01] = MOVE_FIRE_BLAST,
    [ITEM_TM39 - ITEM_TM01] = MOVE_ROCK_TOMB,
    [ITEM_TM40 - ITEM_TM01] = MOVE_AERIAL_ACE,
    [ITEM_TM41 - ITEM_TM01] = MOVE_TORMENT,
    [ITEM_TM42 - ITEM_TM01] = MOVE_FACADE,
    [ITEM_TM43 - ITEM_TM01] = MOVE_SECRET_POWER,
    [ITEM_TM44 - ITEM_TM01] = MOVE_REST,
    [ITEM_TM45 - ITEM_TM01] = MOVE_ATTRACT,
    [ITEM_TM46 - ITEM_TM01] = MOVE_THIEF,
    [ITEM_TM47 - ITEM_TM01] = MOVE_STEEL_WING,
    [ITEM_TM48 - ITEM_TM01] = MOVE_SKILL_SWAP,
    [ITEM_TM49 - ITEM_TM01] = MOVE_SNATCH,
    [ITEM_TM50 - ITEM_TM01] = MOVE_OVERHEAT,
    [ITEM_TM51 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM52 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM53 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM54 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM55 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM56 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM57 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM58 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM59 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM60 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM61 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM62 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM63 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM64 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM65 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM66 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM67 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM68 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM69 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM70 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM71 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM72 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM73 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM74 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM75 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM76 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM77 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM78 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM79 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM80 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM81 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM82 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM83 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM84 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM85 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM86 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM87 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM88 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM89 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM90 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM91 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM92 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM93 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM94 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM95 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM96 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM97 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM98 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM99 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_TM100 - ITEM_TM01] = MOVE_NONE, // Todo
    [ITEM_HM01 - ITEM_TM01] = MOVE_CUT,
    [ITEM_HM02 - ITEM_TM01] = MOVE_FLY,
    [ITEM_HM03 - ITEM_TM01] = MOVE_SURF,
    [ITEM_HM04 - ITEM_TM01] = MOVE_STRENGTH,
    [ITEM_HM05 - ITEM_TM01] = MOVE_FLASH,
    [ITEM_HM06 - ITEM_TM01] = MOVE_ROCK_SMASH,
    [ITEM_HM07 - ITEM_TM01] = MOVE_WATERFALL,
    [ITEM_HM08 - ITEM_TM01] = MOVE_DIVE,
};
#define FIRST_TM_INDEX ITEM_TM01
#define ALL_TMS 100


struct item_ptr{
    void* ptr;
    u8 max;
};

struct bag_items_pointers{
    struct item_ptr items;
    struct item_ptr balls;
    struct item_ptr tms;
    struct item_ptr berries;
    struct item_ptr key_items;
};

extern struct bag_items_pointers bag_items_ptrs;


struct bag_info_struct{
    void* callback;
    u8 player_location;
    u8 curr_pocket;
    u8 field6;
    u8 field7;
    u16 cursor_pos_in_pckt[5];
    u16 scroll_pos_in_pckt[5];
    void* pocket_strings_ptr1;
    void* pocket_strings_ptr2;
};

extern struct bag_info_struct bag_info;

const u16 gTutorMoves[] =
{
    [TUTOR_MOVE_MEGA_PUNCH] = MOVE_MEGA_PUNCH,
    [TUTOR_MOVE_SWORDS_DANCE] = MOVE_SWORDS_DANCE,
    [TUTOR_MOVE_MEGA_KICK] = MOVE_MEGA_KICK,
    [TUTOR_MOVE_BODY_SLAM] = MOVE_BODY_SLAM,
    [TUTOR_MOVE_DOUBLE_EDGE] = MOVE_DOUBLE_EDGE,
    [TUTOR_MOVE_COUNTER] = MOVE_COUNTER,
    [TUTOR_MOVE_SEISMIC_TOSS] = MOVE_SEISMIC_TOSS,
    [TUTOR_MOVE_MIMIC] = MOVE_MIMIC,
    [TUTOR_MOVE_METRONOME] = MOVE_METRONOME,
    [TUTOR_MOVE_SOFT_BOILED] = MOVE_SOFT_BOILED,
    [TUTOR_MOVE_DREAM_EATER] = MOVE_DREAM_EATER,
    [TUTOR_MOVE_THUNDER_WAVE] = MOVE_THUNDER_WAVE,
    [TUTOR_MOVE_EXPLOSION] = MOVE_EXPLOSION,
    [TUTOR_MOVE_ROCK_SLIDE] = MOVE_ROCK_SLIDE,
    [TUTOR_MOVE_SUBSTITUTE] = MOVE_SUBSTITUTE,
    [TUTOR_MOVE_DYNAMIC_PUNCH] = MOVE_DYNAMIC_PUNCH,
    [TUTOR_MOVE_ROLLOUT] = MOVE_ROLLOUT,
    [TUTOR_MOVE_PSYCH_UP] = MOVE_PSYCH_UP,
    [TUTOR_MOVE_SNORE] = MOVE_SNORE,
    [TUTOR_MOVE_ICY_WIND] = MOVE_ICY_WIND,
    [TUTOR_MOVE_ENDURE] = MOVE_ENDURE,
    [TUTOR_MOVE_MUD_SLAP] = MOVE_MUD_SLAP,
    [TUTOR_MOVE_ICE_PUNCH] = MOVE_ICE_PUNCH,
    [TUTOR_MOVE_SWAGGER] = MOVE_SWAGGER,
    [TUTOR_MOVE_SLEEP_TALK] = MOVE_SLEEP_TALK,
    [TUTOR_MOVE_SWIFT] = MOVE_SWIFT,
    [TUTOR_MOVE_DEFENSE_CURL] = MOVE_DEFENSE_CURL,
    [TUTOR_MOVE_THUNDER_PUNCH] = MOVE_THUNDER_PUNCH,
    [TUTOR_MOVE_FIRE_PUNCH] = MOVE_FIRE_PUNCH,
    [TUTOR_MOVE_FURY_CUTTER] = MOVE_FURY_CUTTER,
};

u8 script_text_buff1[256];
u8 script_text_buff2[256];
u32 bits_table[32];
u16 var800E_last_used_item;
u32 tm_comp_ptr;
u32 tutor_comp_ptr;

u16 valid_item_check(u16 item)
{
    if (item == 377 || item > ITEMS_COUNT)
        return 0;
    return item;
}

u16 get_TM_move(u16 item_ID)
{
    if (item_ID < ITEM_TM01 || !valid_item_check(item_ID))
        return 0;
    return sTMHMMoves[item_ID - ITEM_TM01];
}

u16 get_tutor_move(u8 tutorID)
{
    return gTutorMoves[tutorID];
}

u8 is_move_a_HM(u16 move)
{
    for (u16 i = 0; i <  8; i++)
    {
        if (sTMHMMoves[i + (ITEM_HM01 - ITEM_TM01)] == move)
            return 1;
    }
    return 0;
}

void TM_field(u8 taskID)
{
    void* text_to_display;
    if (var800E_last_used_item >= ITEM_HM01)
        text_to_display = (void*) 0x85E9047;
    else
        text_to_display = (void*) 0x85E9037;
    bag_print_msg(taskID, 1, text_to_display, &TM_boot_sound_and_print);
}

u32 check_bitfield_comp(u16 species, u16 bitID, u32 table_ptr, u8 words_no)
{
    if (species == 412 || species > ALL_POKES)
        return 0;
    u8 adder = 0;
    if (bitID > 31 && bitID <= 63)
    {
        adder = 1;
        bitID -= 32;
    }
    else if (bitID > 63 && bitID <= 95)
    {
        adder = 2;
        bitID -= 64;
    }
    else if (bitID > 95 && bitID <= 127)
    {
        adder = 3;
        bitID -= 96;
    }
    u32* bitfield = (u32*) table_ptr + (species * words_no + adder);
    return bits_table[bitID] & *bitfield;
}

u32 check_TUTOR_compatibility(struct pokemon* poke, u16 tutorID)
{
    if (sTutorLearnsets[get_attributes(poke, ATTR_SPECIES_2, 0)] & (1 << tutorID))
        return TRUE;
    else
        return FALSE;
}

u32 check_TM_compatibility(u16 species, u16 tm)
{
	if (species == SPECIES_EGG)
    {
        return 0;
    }
    else if (tm < 32)
    {
        u32 mask = 1 << tm;
        return gTMHMLearnsets[species][0] & mask;
    }
    else
    {
        u32 mask = 1 << (tm - 32);
        return gTMHMLearnsets[species][1] & mask;
    }
}

u32 check_TM_compatibility2(struct pokemon* poke, u16 TM_id)
{
    return check_TM_compatibility(get_attributes(poke, ATTR_SPECIES_2, 0), TM_id);
}
extern u8 move_names_table[][13];
void bag_buffer_item(void* text_buffer, u16 itemID)
{
    void* string_to_decode;
    switch (bag_info.curr_pocket)
    {
    case 2: //tms and hms
        strcpy_xFF_terminated_0(&script_text_buff2[0], &move_names_table[get_TM_move(itemID)][0]);
        if (itemID >= FIRST_TM_INDEX + ALL_TMS)
        {
            int_to_string(&script_text_buff1[0], itemID - (FIRST_TM_INDEX + ALL_TMS) + 1, 2, 1);
            string_to_decode = (void*) 0x085E921A;
        }
        else
        {
            u16 TM_no = itemID - FIRST_TM_INDEX + 1;
            u8 formatting = 2;
            u8 digits = 2;
            if (TM_no > 99)
            {
                formatting = 0;
                digits = 3;
            }
            int_to_string(&script_text_buff1[0], TM_no, formatting, digits);
            string_to_decode = (void*) 0x085E9210;
        }
        break;
    case 3: //berries
        int_to_string(&script_text_buff1[0], itemID - 132, 2, 2);
        buffer_item(itemID, &script_text_buff2[0]);
        string_to_decode = (void*) 0x085E9210;
        break;
    default:
        buffer_item(itemID, text_buffer);
        return;
    }
    fdecode_and_copy(text_buffer, string_to_decode);
    return;
}

enum move_comp{
    CAN_LEARN = 0,
    CANT_LEARN = 1,
    ALREADY_KNOWS = 2,
    IS_EGG = 3
};

enum move_comp get_pokemove_compatibility(struct pokemon* poke, u16 itemID, u8 movetutorID)
{
    if (get_attributes(poke, ATTR_IS_EGG, 0))
        return IS_EGG;
    itemID = valid_item_check(itemID);
    u16 wanted_move;
    if (itemID >= FIRST_TM_INDEX)
    {
        if (!check_TM_compatibility2(poke, itemID - FIRST_TM_INDEX))
            return CANT_LEARN;
        wanted_move = get_TM_move(itemID);
    }
    else //move tutor move
    {
        if (!check_TUTOR_compatibility(poke, movetutorID))
            return CANT_LEARN;
        wanted_move = get_tutor_move(movetutorID);
    }
    if (check_if_move_learnt(poke, wanted_move))
        return ALREADY_KNOWS;
    else
        return CAN_LEARN;
}


void update_bag_ptrs()
{
	bag_items_ptrs.items.ptr = &new_saveblock.items_pocket;
	bag_items_ptrs.balls.ptr = &new_saveblock.balls_pocket;
	bag_items_ptrs.key_items.ptr = &new_saveblock.key_items_pocket;
	bag_items_ptrs.berries.ptr = &new_saveblock.berries_pocket;
	bag_items_ptrs.tms.ptr = &new_saveblock.tms_pocket;
	
	bag_items_ptrs.tms.max = TM_POCKET_MAX_NEW;
	bag_items_ptrs.items.max = ITEM_POCKET_MAX_NEW;
	bag_items_ptrs.balls.max = BALL_POCKET_MAX_NEW;
	bag_items_ptrs.key_items.max = KEY_POCKET_MAX_NEW;
	bag_items_ptrs.berries.max = BERRY_POCKET_MAX_NEW;

}

void get_ptrs_for_bag_strings()
{
    bag_info.pocket_strings_ptr1 = Malloc((BALL_POCKET_MAX_NEW + ITEM_POCKET_MAX_NEW + KEY_POCKET_MAX_NEW + TM_POCKET_MAX_NEW + BERRY_POCKET_MAX_NEW) * 4);
    bag_info.pocket_strings_ptr2 = Malloc((BALL_POCKET_MAX_NEW + ITEM_POCKET_MAX_NEW + KEY_POCKET_MAX_NEW + TM_POCKET_MAX_NEW + BERRY_POCKET_MAX_NEW) * 9);
}
