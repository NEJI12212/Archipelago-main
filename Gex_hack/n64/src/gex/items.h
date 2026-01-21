#include <archipelago.h>
#ifndef GEX_ITEM_FLAGS
#define GEX_ITEM_FLAGS

typedef struct {
    u8 RED_REMOTE[13]; // -> 0x800C573B
} red_remotes_t;

typedef struct {
    u8 SILVER_REMOTE[4]; // ->  0x800C5754
} silver_remotes_t;

typedef struct {
    u8 GOLD_REMOTE[1]; // -> 0x800C575A
} gold_remotes_t;

#define gex_red_remotes_levels (*(red_remotes_t*)0x800C572E)
#define gex_silver_remotes_levels (*(silver_remotes_t*)0x800C5754)
#define gex_gold_remotes_levels (*(gold_remotes_t*)0x800C5758)

enum {
    RED_REMOTE_OOT = 0x800C572E, // -> 0x800C573B
    SILVER_REMOTE_OOT = 0x800C5754, // -> 0x800C5754
    GOLD_REMOTE = 0x800C5758 // -> 0x800C575A
    // first_token 800C56BC 
    // 2nd token 800C56C3 
    // 3rd token 800C56C7 
};

#endif