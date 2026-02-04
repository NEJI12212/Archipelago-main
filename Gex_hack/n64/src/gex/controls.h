#ifndef GEX_CONTROLS_H
#define GEX_CONTROLS_H

typedef struct {
    u8 a_button: 1;
    u8 b_button: 1;
    u8 l_button: 1;
    u8 start_button: 1;

    u8 dpad_up: 1;
    u8 dpad_down: 1;
    u8 dpad_left: 1;
    u8 dpad_right: 1;
} gex_controller_buttons_t;

#define controller ((gex_controller_buttons_t*)0x800AB0E0)


// 800C0B03
// 800C0ADB
// 0x8007F3C1

//0x8003A43C JAL 0x8004A350 controls input of buttons (not movement)

typedef enum {
 BUTTON_R = 0x0010,
 BUTTON_L = 0x0020,
 BUTTON_Z = 0x2000,
 BUTTON_B = 0x4000,
 BUTTON_A = 0x8000,
 BUTTON_AB = 0xC000,
} controls_t;

typedef void (*gex_fnt_input_control)(u32 unknown_ptr, u16 input);
#define gex_fn_input_control ((gex_fnt_input_control)0x8003A350)

#endif