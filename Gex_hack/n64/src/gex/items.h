#include <archipelago.h>
#ifndef GEX_ITEM_FLAGS
#define GEX_ITEM_FLAGS

typedef struct {
    u8 RED_REMOTE[13]; // -> 0x800C573B
} red_remotes_t;

typedef struct {
    u8 OOT_unused: 5;
    u8 OOT_RR3: 1;
    u8 OOT_RR2: 1;
    u8 OOT_RR1: 1;

    u8 SR_unused: 5;
    u8 SR_RR3: 1;
    u8 SR_RR2: 1;
    u8 SR_RR1: 1;

    u8 GC_unused: 5;
    u8 GC_RR3: 1;
    u8 GC_RR2: 1;
    u8 GC_RR1: 1;

    u8 FS_unused: 5;
    u8 FS_RR3: 1;
    u8 FS_RR2: 1;
    u8 FS_RR1: 1;

    u8 WWW_unused: 6;
    u8 WWW_RR2: 1;
    u8 WWW_RR1: 1;

    u8 MTT_unused: 6;
    u8 MTT_RR2: 1;
    u8 MTT_RR1: 1;

    u8 USO_unused: 6;
    u8 USO_RR2: 1;
    u8 USO_RR1: 1;

    u8 P9_unused: 6;
    u8 P9_RR2: 1;
    u8 P9_RR1: 1;

    u8 FT_unused: 6;
    u8 FT_RR2: 1;
    u8 FT_RR1: 1;

    u8 OC_unused: 5;
    u8 OC_RR3: 1;
    u8 OC_RR2: 1;
    u8 OC_RR1: 1;

    u8 HSG_unused: 5;
    u8 HSG_RR3: 1;
    u8 HSG_RR2: 1;
    u8 HSG_RR1: 1;

    u8 PA_unused: 5;
    u8 PA_RR3: 1;
    u8 PA_RR2: 1;
    u8 PA_RR1: 1;

    u8 SNF_unused: 5;
    u8 SNF_RR3: 1;
    u8 SNF_RR2: 1;
    u8 SNF_RR1: 1;

    u8 NWF_unused: 7;
    u8 NWF_RR1: 1;
} red_remote_locations_t;

typedef struct {
    u8 SILVER_REMOTE[4]; // ->  0x800C5754
} silver_remotes_t;

typedef struct {
    u8 GOLD_REMOTE[1]; // -> 0x800C575A
} gold_remotes_t;

typedef struct {
    u8 unused_rest: 7;
    u8 CZ_GM: 1;

    u8 GVM_GM: 1;
    u8 MSP_GM: 1;
    u8 GGX_GM: 1;
    u8 unused_halfbyte: 5;
    
    u8 unused_byte: 8;
    u8 unused: 1;
    u8 CAD_GM: 1;
    u8 BO_GM: 1;
    u8 LCS_GM: 1;
    u8 SLM_GM: 1;
    u8 IDN_GR: 1;
    u8 TT_GR: 1;
    u8 AS_GR: 1;
} gold_remote_locations_t;

#define gex_red_remotes_levels (*(red_remotes_t*)0x800C572E)
#define gex_red_remotes_locations (*(red_remote_locations_t*)0x800C572E)

#define gex_silver_remotes_levels (*(silver_remotes_t*)0x800C5754)
#define gex_gold_remotes_levels (*(gold_remotes_t*)0x800C5758) //actually its a u32 in size
#define gex_gold_remotes_locations (*(gold_remote_locations_t*)0x800C5758)

enum {
    RED_REMOTE_OOT = 0x800C572E, // -> 0x800C573B
    SILVER_REMOTE_OOT = 0x800C5754, // -> 0x800C5754
    GOLD_REMOTE = 0x800C5758, // -> 0x800C575A
    // first_token 800C56BC 
    // 2nd token 800C56C3 
    // 3rd token 800C56C7 
    HUB_OBJECT = 0x000BA150,
    HUB_POST_OBJ = 0x0049D870
};

#endif