#include "world_unlocks.h"

bool gilligex = false;

u32 unlock_worlds()
{
    if(ap_memory.pc.items[AP_GILLIGEX] && !gilligex)
    {
        gilligex = true;
        gex_previous_opened_gate = HUB_NOTHING;
        return HUB_GILLIGEX;
    }
    return 0x0;
}