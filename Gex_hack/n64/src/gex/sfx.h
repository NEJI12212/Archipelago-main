#ifndef GEX_FN_SFX_H
#define GEX_FN_SFX_H
    //Voiceline functions
    //0x800528B0 JAL 0x80052758 sets voiceline
    //0x80052C14 JAL 0x80052758 sets warp voiceline
    // |>  800527A4 JAL 0x80050B64 A0 = voiceline
    // if statement located at 0x80024BA8
    // voice memory address 80154833
    // u32 80156854 - Timer for Voice if = 0x01

    enum {
        BLURB = 0x01,
        FELL,
        COLLECTED,
        WOOSH = 0x05,
        GULP,
        JUMP,
        FELL2,
        WARP,
        WARP2,
        BRAKES,
        LICK,
        POP,
        SPRING,
        FLIP,
        BREAK,
        SPIN,
        SMACK,
        BEEP,
        WARP3,
        //don't use 0x16
    } sfx_enum;

    //Voicelines start at ID 0x160 ands at 0x1CC
    // enum {

    // } voicelines_enum;

    #define gex_voice_timer (*(u32*)0x80156854)
    typedef void (*gex_fnt_voiceline)(u32 voice_id);
    #define gex_fn_voiceline ((gex_fnt_voiceline)0x80050B64)
#endif