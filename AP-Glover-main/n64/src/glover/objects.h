#ifndef DKR_FN_OBJECTS_H
#define DKR_FN_OBJECTS_H

typedef struct {
    u32 Ptr1;
    u32 Ptr2;
    u32 Zero;
    u8 Zero1;
    u8 needs_collected;
    u8 type;
} garib_life_t;

typedef struct {
    u32 Ptr1;
    u32 Ptr2;
    float Unknown;
    float Unknown1;
    float Unknown2;
    u8 currently_reading;
    u8 visited;
} tip_hat_t;

typedef struct {
    u32 Zero1;
    u32 Zero2;
    u32 Zero3;
    u32 Zero4;
    u32 Zero5;
    u16 visited;
} partial_checkpoint_obj_t;

typedef struct {
    u32 ptr1;
    u32 ptr2;
    u32 pos1;
    u8 type;
    u8 needs_collected;
} partial_potion_obj_t;

    typedef void (*gvr_fnt_init_objects)(u32 ram_ptr, u16 item_type, u8 zero, u16 item_id);
    #define gvr_fn_init_objects ((gvr_fnt_init_objects)0x8013FBC0)

    typedef void (*gvr_fnt_collected_object)(u32 ram_ptr_plus_18, u32 unknown_ptr, u32 unknown_ptr2, u32 zero);
    #define gvr_fn_collected_object ((gvr_fnt_collected_object)0x8014ACB4)

    typedef void (*gvr_fnt_spawn_object)(u32 orig_ptr, u32 unknown_ptr, u32 unknown_ptr2, u32 zero);
    #define gvr_fn_spawn_object ((gvr_fnt_spawn_object)0x8018B48C)

    typedef void (*gvr_fnt_init_tiphats)(u32 ram_ptr, u16 item_type, u8 zero, u16 item_id);
    #define gvr_fn_init_tiphats ((gvr_fnt_init_tiphats)0x801B7BD0)

    typedef void (*gvr_fnt_talk_tip)(u32 unknown, u32 ram_ptr_plus_8, u8 unknown2, u16 be);
    #define gvr_fn_talk_tip ((gvr_fnt_talk_tip)0x80178134)

    typedef void (*gvr_fnt_init_checkpoint)(u32 ram_ptr_plus_1c, u32 unkown_ptr, u8 iteration_num, u16 item_id);
    #define gvr_fn_init_checkpoint ((gvr_fnt_init_checkpoint)0x801D211C)

    typedef void (*gvr_fnt_collect_checkpoint)(u32 ram_ptr_plus_b4, u32 unkown_ptr, float unknown1);
    #define gvr_fn_collect_checkpoint ((gvr_fnt_collect_checkpoint)0x8017E418)

    #define gvr_starting_checkpoint (*(u32*) 0x802904D4)
    #define gvr_checkpoint_2 (*(u32*) 0x802904D8)

    typedef void (*gvr_fnt_init_enemies)(u32 ram_ptr, u16 enemy_type, u32 ptr2, u16 enemy_id);
    #define gvr_fn_init_enemies ((gvr_fnt_init_enemies)0x80191284)

    typedef void (*gvr_fnt_defeated_enemy)(u32 ram_ptr);
    #define gvr_fn_defeated_enemy ((gvr_fnt_defeated_enemy)0x8015CB44)

    typedef u32 (*gvr_fnt_init_powerup)(u16 powerup_type, u32 ptr, u16 zero, u16 obj_id);
    #define gvr_fn_init_powerup ((gvr_fnt_init_powerup)0x8018DD54)

    typedef void (*gvr_fnt_unkown_fn)(u32 ram_ptr);
    #define gvr_fn_unkown_fn ((gvr_fnt_unkown_fn)0x8018E914)

    typedef enum {
        BEE = 0x0007,
        CANNONBALL = 0x0008,
        BULL = 0x000A,
        SUCKER = 0x001B,
        WIND_UP = 0x002B,
        SNAIL = 0x002D,
        SHARK = 0x000B,
        FISH = 0x000C, 
        LOBSTER = 0x000F,
        CHESTER = 0x000D,
        SWISH = 0x0010,
        RAPTOR = 0x0015,
        TRACY = 0x0017,
        BUTTERFLY = 0x0033,
        DRAGONFLY = 0x0037,
        BUGLE = 0x001C, //Elephant
        DENNIS = 0x001D,
        CHICKEN = 0x001E,
        BAT = 0x0035,
        CLEET = 0x0014,
        KNIGHT = 0x0011,
        WEEVIL = 0x0031,
        SAMTEX = 0x0009,
        THROWBOT = 0x001A
    } ENEMY_TYPES;

    typedef void (*gvr_fnt_spawn_garibgroup)(u16 group, float y);
    #define gvr_fn_spawn_garibgroup ((gvr_fnt_spawn_garibgroup)0x8018B4C4)

    typedef void (*gvr_fnt_activate_puzzle)(u32 puzzle_ptr);
    #define gvr_fn_activate_puzzle ((gvr_fnt_activate_puzzle)0x8018E914)

    typedef bool (*gvr_fnt_puzzle_condition)(u32 puzzle_ptr);
    #define gvr_fn_puzzle_condition ((gvr_fnt_puzzle_condition)0x8018FE98)

    typedef void (*gvr_fnt_chicken)(u32 ptr1, u32 ptr2);
    #define gvr_fn_chicken ((gvr_fnt_chicken)0x80148EBC)

    typedef u32 (*gvr_fnt_sounds)(u16 sound_id, u16 volume, u8 eighty, u8 zero);
    #define gvr_fn_sounds ((gvr_fnt_sounds)0x801C08E4)

    typedef void (*gvr_fnt_sound_pitch)(u32 sound_ptr, u32 pitch);
    #define gvr_fn_sound_pitch ((gvr_fnt_sound_pitch)0x801C0D40)

    typedef void (*gvr_fnt_free_dialog)(u32 ptr);
    #define gvr_fn_free_dialog ((gvr_fnt_free_dialog)0x80145CEC)

    typedef void (*gvr_fnt_garib_sounds)(u32 unknown);
    #define gvr_fn_garib_sounds ((gvr_fnt_garib_sounds)0x8018E260)


#endif
