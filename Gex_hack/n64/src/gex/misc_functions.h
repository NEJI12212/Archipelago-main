#ifndef GEX_FN_INJECTED_H
#define GEX_FN_INJECTED_H

// typedef void (*sg_fnt_main_init)(u32);
// #define sg_fn_main_init ((sg_fnt_main_init)0x80057950)
//8003B5DC JAL 0x80057950

typedef bool (*gex_fnt_unknown_start_loop)();
#define gex_fn_unknown_start_loop ((gex_fnt_unknown_start_loop)0x8005DD00)


typedef void (*gex_fnt_unknown_init_object)(u32 unknown_ptr, u32 object, u32 unknown_ptr2, u32 unkown);
#define gex_fn_unknown_init_object ((gex_fnt_unknown_init_object)0x80057AB0)
//JAL 0x8003F748 controls flash and text
//found at 80044FD0
// Maybe JAL 8003F458 instead if V0 = 8007813C

// 80040668 JAL 0x8001A310
// Above gets run when your in the Game's Total Screen

//8015EA68 JAL 0x8015E67C
// Potentially opens worlds based on how many Remotes
//8015E6B0 JAL 0x8001A1D8
// Returns a value from a table in memory 80161134 every other 32-bit. This controls which parts of the hub opens up.
// memory 800C575C controls the last item that opened based on the table.
//Table S0 values:
/*
 80
 100
*/
/*
 For Bonus levels:
 table starts at 80161178 every 32-bits up to the ptr.
*/
typedef enum {
    HUB_NOTHING = 0b0,
    HUB_AZTEC_2_STEP = 0b1,
    HUB_THURSDAY_12 = 0b10,
    HUB_DRAG_NET = 0b100,
    HUB_SPY_WHO = 0b1000,
    HUB_CHINA_SHOP = 0b10000,
    HUB_BUGGED_OUT = 0b100000,
    HUB_CHIPS_DIP = 0b1000000,
    HUB_GILLIGEX = 0b10000000,
    HUB_MOOSHOO = 0b100000000,
    HUB_GEXZILLA = 0b1000000000,
    HUB_CHANNEL_Z = 0b10000000000,
    HUB_FRONT_GATE = 0b100000000000,
    HUB_RED_GATE = 0b1000000000000,
    HUB_GREEN_GATE = 0b10000000000000,
    HUB_BLUE_GATE = 0b100000000000000,
    HUB_LION = 0b1000000000000000,
} hub_objects;

#define gex_previous_opened_gate (*(u32*)0x800C575C)

//We need to stop the DEMO Mode, its both annoying and could cause issues with AP
// function starts 0x8015EA98
//memory 80161670 u32. if value is 0x04B1, Enter's DEMO Mode
//Disabled by NOPing the ASM Code itself since its part of the Hub Object 


// 0x80040668 JAL 0x8001A310
// Above gets run when looking at totals menu. the JAL above counts the remotes 
// The total Red remotes goes into the first byte in SP value
// The total Silver remotes goes into the second byte in SP value
// The total Gold remotes goes into the third byte in SP value
// 0x80040704 JAL 8005C290. 2 lines above it puts the first byte SP value into A2.
// 0x8004072C JAL 8005C290. 2 lines above it puts the second byte SP value into A2.
// 0x80040754 JAL 8005C290. 2 lines above it puts the third byte SP value into A2.


typedef void (*gex_fnt_remote_totals)(u32 unknown_ptr, u32 unknown_ptr2, u32 red_remotes, u32 unkown);
#define gex_fn_remote_totals ((gex_fnt_remote_totals)0x8005C290)

#endif
