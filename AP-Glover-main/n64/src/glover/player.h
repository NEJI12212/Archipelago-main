#ifndef DKR_FN_PLAYER_H
#define DKR_FN_PLAYER_H
    
    typedef struct {
        u8 A;
        u8 B;
        u8 Z;
        u8 not_used;
        u8 L;
        u8 R;
        u8 DPAD_L;
        u8 DPAD_R;
        u8 DPAD_U;
        u8 DPAD_D;
        u8 C_L;
        u8 C_R;
        u8 C_U;
        u8 C_D;
    } controls;

    #define gvr_controls (*(controls*) 0x801FAAAA)

    #define gvr_cutscene (*(u32*) 0x801EC7F0)
    #define gvr_bosscutscene (*(u16*)0x801E7542)

    typedef bool (*gvr_fnt_input_handler)(u32 control);
    #define gvr_fn_input_handler ((gvr_fnt_input_handler)0x8016536C)

    typedef void (*gvr_fnt_quick_swap)(u32 control);
    #define gvr_fn_quick_swap ((gvr_fnt_quick_swap)0x80167604)

    #define gvr_double_jump_clear1 (*(u32*) 0x8016A7C4)
    #define gvr_double_jump_clear2 (*(u32*) 0x80167A60)
    #define gvr_double_jumping (*(u32*) 0x8028FC04)

    #define gvr_can_move (*(u32*) 0x801EC740)

    typedef struct {
        u32 _unkown;
        u16 current_animation;
        u16 last_animation;
    } gvr_animation_t;

    typedef struct {
        gvr_animation_t* animations;
    } animation_ptr_t;

    #define animation_ptr ((animation_ptr_t*) 0x802903AC)

    #define gvr_collected_garibs (*(u32*) 0x8029018C)
    #define gvr_current_lives (*(u32*) 0x80290190)
    #define gvr_current_health (*(u32*) 0x80290194)
    #define gvr_score (*(u32*)0x80290188)

    typedef void (*gvr_fnt_respawn)();
    #define gvr_fn_respawn ((gvr_fnt_respawn)0x8017479C)

    #define gvr_checkpoint_ptr (*(u32*) 0x802900E0)
    #define gvr_loaded_timer (*(u16*) 0x8029019A)
    #define gvr_invuln_timer (*(u8*) 0x802901DF)

    typedef void (*gvr_fnt_glover_transform)(u32 power_type, u16 power_uptimer, u8 a1, u8 a18);
    #define gvr_fn_glover_transform ((gvr_fnt_glover_transform)0x80167604)

    typedef void (*gvr_fnt_glover_died)();
    #define gvr_fn_glover_died ((gvr_fnt_glover_died)0x80174058)

    #define gvr_max_garibs (*(u8*)0x8029939B)

    typedef void (*gvr_fnt_glover_cheat)(u8 cheat_id, u8 character);
    #define gvr_fn_glover_cheat ((gvr_fnt_glover_cheat)0x801BB9AC)
    //14 = frog
    //C = camera left
    //16 = clear

    typedef void (*gvr_fnt_glover_fadein)();
    #define gvr_fn_glover_fadein ((gvr_fnt_glover_fadein)0x8014d4d0)
    #define gvr_fade_var (*(u16*)0x801E753C)
    #define gvr_fade_var_transition (*(u8*)0x801E753E)
    #define gvr_difficulty (*(u8*)0x801EAA55)

#endif
