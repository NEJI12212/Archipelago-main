#include "portal_doors.h"

bool OpenDoor(u8 gate)
{
    switch(gvr_wayroom_type)
    {
        case WAYROOM_ATLANTIS_HUB:
            switch (gate)
            {
                case 1:
                    if(ap_memory.pc.items[AP_ATLANTIS_DOOR2_OPEN])
                        return false;
                    else
                        return true;
                case 2:
                    if(ap_memory.pc.items[AP_ATLANTIS_DOOR3_OPEN])
                        return false;
                    else
                        return true;
                case 3:
                    if(ap_memory.pc.items[AP_ATLANTIS_DOOR4_OPEN])
                        return false;
                    else
                        return true;
                default:
                    return false;
            }
        case WAYROOM_CARNIVAL_HUB:
            switch (gate)
            {
                case 1:
                    if(ap_memory.pc.items[AP_CARNIVAL_DOOR2_OPEN])
                        return false;
                    else
                        return true;
                case 2:
                    if(ap_memory.pc.items[AP_CARNIVAL_DOOR3_OPEN])
                        return false;
                    else
                        return true;
                case 3:
                    if(ap_memory.pc.items[AP_CARNIVAL_DOOR4_OPEN])
                        return false;
                    else
                        return true;
                default:
                    return false;
            }
        case WAYROOM_PIRATES_HUB:
            switch (gate)
            {
                case 1:
                    if(ap_memory.pc.items[AP_PIRATES_DOOR2_OPEN])
                        return false;
                    else
                        return true;
                case 2:
                    if(ap_memory.pc.items[AP_PIRATES_DOOR3_OPEN])
                        return false;
                    else
                        return true;
                case 3:
                    if(ap_memory.pc.items[AP_PIRATES_DOOR4_OPEN])
                        return false;
                    else
                        return true;
                default:
                    return false;
            }
        case WAYROOM_PREHISTORIC_HUB:
            switch (gate)
            {
                case 1:
                    if(ap_memory.pc.items[AP_PREHISTORIC_DOOR2_OPEN])
                        return false;
                    else
                        return true;
                case 2:
                    if(ap_memory.pc.items[AP_PREHISTORIC_DOOR3_OPEN])
                        return false;
                    else
                        return true;
                case 3:
                    if(ap_memory.pc.items[AP_PREHISTORIC_DOOR4_OPEN])
                        return false;
                    else
                        return true;
                default:
                    return false;
            }
        case WAYROOM_FORTRESS_HUB:
            switch (gate)
            {
                case 1:
                    if(ap_memory.pc.items[AP_FORTRESS_DOOR2_OPEN])
                        return false;
                    else
                        return true;
                case 2:
                    if(ap_memory.pc.items[AP_FORTRESS_DOOR3_OPEN])
                        return false;
                    else
                        return true;
                case 3:
                    if(ap_memory.pc.items[AP_FORTRESS_DOOR4_OPEN])
                        return false;
                    else
                        return true;
                default:
                    return false;
            }
        case WAYROOM_SPACE_HUB:
            switch (gate)
            {
                case 1:
                    if(ap_memory.pc.items[AP_SPACE_DOOR2_OPEN])
                        return false;
                    else
                        return true;
                case 2:
                    if(ap_memory.pc.items[AP_SPACE_DOOR3_OPEN])
                        return false;
                    else
                        return true;
                case 3:
                    if(ap_memory.pc.items[AP_SPACE_DOOR4_OPEN])
                        return false;
                    else
                        return true;
                default:
                    return false;
            }
        default:
            return false;
    }
    return false;
}