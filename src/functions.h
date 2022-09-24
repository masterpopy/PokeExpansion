#ifndef VANILLA_FUNCTIONS
#define VANILLA_FUNCTIONS

#include "types.h"
#include "structs.h"
void* memset(void* ptr, int val, unsigned int size);
#pragma long_calls
u16 sav_get_checksum(struct sav_buff* ptr, u32 size);
u8 sub_8152908(u8 unkown, u8* data);
u8 copy_flash_section(u8 index, void* dst);
u8 has_national();
u16 hoenn_to_national(u16 hoenn_no);
u16 national_to_hoenn(u16 national_no);
u16 species_to_national_dex(u16 species);
u16 species_to_hoeen_dex(u16 species);
void sub_80BD28C(u8 arg1, u8 arg2, u16 arg3);
void dex_cursor_print_pokename(u16 national_no, u8 arg2, u8 arg3);
void dex_cursor_print_pokeball(u16 caught, u8 arg2, u8 arg3);
void dex_cursor_print_no(u16 stateID, u8 arg2, u8 arg3);
void rbox_to_vram(u8 rboxID, u8 switchID);
u8 sub_80BE91C(struct pokedex_state* state, u8 objID);
u32 __udivsi3(u32 numerator, u32 denumerator);
u32 __umodsi3(u32 numerator, u32 denumerator);
u8 get_attributes(struct pokemon* poke_address, u8 request, void* destination);
void buffer_item(u16 itemID, void* text_buffer);
void* strcpy_xFF_terminated_0(void* dst, void* src);
void* int_to_string(void* dst, u32 number, u8 formatting, u8 max_digits);
void* fdecode_and_copy(void* dst, void* src);
u8 check_if_move_learnt(struct pokemon* poke_addres, u16 move);
void bag_print_msg(u8 taskID, u8 arg, void* text_ptr, void* callback);
void TM_boot_sound_and_print(u8 taskID);
void* Malloc(u32);
#pragma long_calls_off
#endif /* VANILLA_FUNCTIONS */
