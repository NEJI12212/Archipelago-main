#ifndef GEX_WORLDS_H
#define GEX_WORLDS_H

#define gex_world_id (*(u8*)0x800C5761)
#define gex_world_mission (*(u32*)0x800C5794)

typedef enum {
    MAP_OOT_PTR = 0x8025ED3C,
    MAP_SR_PTR = 0x8025ED48,

} map_ptrs;

typedef enum {
    MAP_OOT_ID = 0x00,
    MAP_SR_ID,
    MAP_GC_ID,
    MAP_FS_ID,
    MAP_WWW_ID,
    MAP_MTT_ID,
    MAP_USO_ID,
    MAP_P9_ID,
    MAP_FT_ID,
    MAP_OC_ID,
    MAP_HSG_ID,
    MAP_PA_ID,
    MAP_SNF_ID,
    MAP_NWF_ID,
    MAP_AS_ID,
    MAP_TT_ID,
    MAP_IDN_ID,
    MAP_SLM_ID,
    MAP_LCS_ID,
    MAP_BO_ID,
    MAP_CAD_ID,
    MAP_GGX_ID,
    MAP_MSP_ID,
    MAP_GVM_ID,
    MAP_CZ_ID,
    MAP_HUB_ID = 0x19,
} map_id;

typedef void (*gex_fnt_warp)(u32 world_id_ptr, u32 map_tmp_ptr, u32 unknown_massive_ptr);
#define gex_fn_warp ((gex_fnt_warp)0x800396E0)
#endif