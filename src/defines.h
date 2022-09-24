#ifndef DEFINES_H
#define DEFINES_H

#include "types.h"

#define ALL_POKES 1234
#define DEX_POKES 999
#define HOENN_DEX_POKES 202
#define EVOS_PER_MON 10

#define BALL_POCKET_MAX_NEW 16
#define ITEM_POCKET_MAX_NEW 30
#define KEY_POCKET_MAX_NEW 30
#define TM_POCKET_MAX_NEW 108
#define BERRY_POCKET_MAX_NEW 46

#define POK_DIV8 DEX_POKES / 8
#define FLAGS_NUMBER POK_DIV8 % 8 ? POK_DIV8 + 1 : POK_DIV8

#include "functions.h"
#include "locations.h"

/// IDE support
#if defined(__APPLE__) || defined(__CYGWIN__) || defined(__INTELLISENSE__)
// We define these when using certain IDEs to fool preproc
#define _(x)        (x)
#define __(x)       (x)
#define INCBIN(...) {0}
#define INCBIN_U8   INCBIN
#define INCBIN_U16  INCBIN
#define INCBIN_U32  INCBIN
#define INCBIN_S8   INCBIN
#define INCBIN_S16  INCBIN
#define INCBIN_S32  INCBIN
#endif // IDE support

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) >= (b) ? (a) : (b))

#define TRUE 1
#define FALSE 0
enum dex_mode{
    hoenn = 0,
    national = 1
};

enum dex_order{
    numerical = 0,
    a_to_z = 1,
    heaviest = 2,
    lightest = 3,
    tallest = 4,
    smallest = 5
};

enum dex_cursor_side{
    cursor_jump = 0,
    cursor_up = 1,
    cursor_down = 2
};

#endif /* DEFINES_H */


