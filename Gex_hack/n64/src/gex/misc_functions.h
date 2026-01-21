#ifndef GEX_FN_INJECTED_H
#define GEX_FN_INJECTED_H

// typedef void (*sg_fnt_main_init)(u32);
// #define sg_fn_main_init ((sg_fnt_main_init)0x80057950)
//8003B5DC JAL 0x80057950

typedef bool (*gex_fnt_unknown_start_loop)();
#define gex_fn_unknown_start_loop ((gex_fnt_unknown_start_loop)0x8005DD00)


#endif