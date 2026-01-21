#ifndef GEX_CONTROLS_H
#define GEX_CONTROLS_H

typedef struct {
    u8 d_up2: 1;
    u8 d_down2: 1;
    u8 d_left2: 1;
    u8 d_right2: 1;

    u8 d_right: 1;
    u8 d_left: 1;
    u8 d_up: 1;
    u8 d_down: 1;
} gex_controller_buttons_t;

#define controller ((gex_controller_buttons_t*)0x800C0B03)

// 800C0B03
// 800C0ADB
// 0x8007F3C1
#endif