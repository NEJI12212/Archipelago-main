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

enum {
    HUB_NOTHING = 0x0,
    HUB_GILLIGEX = 0x80,
    HUB_MOOSHOO = 0x180,
    HUB_FAR_GATE = 0x2180,
} hub_objects;

#define gex_previous_opened_gate (*(u32*)0x800C575C)

//We need to stop the DEMO Mode, its both annoying and could cause issues with AP
// function starts 0x8015EA98
//memory 80161670 u32. if value is 0x04B1, Enter's DEMO Mode
//Disabled by NOPing the ASM Code itself since its part of the Hub Object 
#endif
