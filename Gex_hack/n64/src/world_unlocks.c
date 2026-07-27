#include "world_unlocks.h"

bool gilligex = false;
bool front = false;
bool mooshoo = false;
bool channelz = false;
bool redgate = false;
bool greengate = false;
bool gexzilla = false;
bool bluegate = false;
bool liongate = false;

bool aztec2 = false;


u32 unlock_worlds()
{
    if(ap_memory.pc.items[AP_GILLIGEX] && !gilligex)
    {
        gilligex = true;
        gex_previous_opened_gate = HUB_NOTHING;
        return HUB_GILLIGEX;
    }
    if(ap_memory.pc.items[AP_FRONT_GATE] && !front)
    {
        front = true;
        gex_previous_opened_gate = HUB_GILLIGEX;
        return HUB_FRONT_GATE;
    }
    if(ap_memory.pc.items[AP_MOOSHOO] && !mooshoo)
    {
        mooshoo = true;
        gex_previous_opened_gate = HUB_FRONT_GATE;
        return HUB_MOOSHOO;
    }
    if(ap_memory.pc.items[AP_RED_GATE] && !redgate)
    {
        redgate = true;
        gex_previous_opened_gate = HUB_MOOSHOO;
        return HUB_RED_GATE;
    }
    if(ap_memory.pc.items[AP_GREEN_GATE] && !greengate)
    {
        greengate = true;
        gex_previous_opened_gate = HUB_RED_GATE;
        return HUB_GREEN_GATE;
    }
    if(ap_memory.pc.items[AP_GEXZILLA] && !gexzilla)
    {
        gexzilla = true;
        gex_previous_opened_gate = HUB_GREEN_GATE;
        return HUB_GEXZILLA;
    }
    if(ap_memory.pc.items[AP_BLUE_GATE] && !bluegate)
    {
        bluegate = true;
        gex_previous_opened_gate = HUB_GEXZILLA;
        return HUB_BLUE_GATE;
    }
    if(ap_memory.pc.items[AP_LION_GATE] && !liongate)
    {
        liongate = true;
        gex_previous_opened_gate = HUB_BLUE_GATE;
        return HUB_LION;
    }
    if(ap_memory.pc.items[AP_CHANNEL_Z] && !channelz)
    {
        channelz = true;
        gex_previous_opened_gate = HUB_LION;
        return HUB_CHANNEL_Z;
    }
    return 0x0;
}



    // HUB_NOTHING = 0b0,
    // HUB_AZTEC_2_STEP = 0b1,
    // HUB_THURSDAY_12 = 0b10,
    // HUB_DRAG_NET = 0b100,
    // HUB_SPY_WHO = 0b1000,
    // HUB_CHINA_SHOP = 0b10000,
    // HUB_BUGGED_OUT = 0b100000,
    // HUB_CHIPS_DIP = 0b1000000,

    // HUB_GILLIGEX = 0b10000000,
    // HUB_FRONT_GATE = 0b100000000000,
    // HUB_MOOSHOO = 0b100000000,
    // HUB_RED_GATE = 0b1000000000000,
    // HUB_GREEN_GATE = 0b10000000000000,
    // HUB_GEXZILLA = 0b1000000000,
    // HUB_BLUE_GATE = 0b100000000000000,
    // HUB_LION = 0b1000000000000000,
    // HUB_CHANNEL_Z = 0b10000000000,
    