#include "map_handler.h"
u8 gvr_hub = 0;
u16 prehis_timer = 0;
bool prehis_timer_on = false;

void HubHandler()
{
    if(gvr_wayroom_type != gvr_hub)
    {
        switch (gvr_wayroom_type)
        {
            case WAYROOM_ATLANTIS_HUB:
                if(ap_memory.pc.hub_order[AP_ATLANTIS_HUB] != 0)
                { 
                    gvr_wayroom_type = APHubConverter(ap_memory.pc.hub_order[AP_ATLANTIS_HUB]);
                }
                ap_memory.pc.hub_map = gvr_wayroom_type;
                gvr_hub = gvr_wayroom_type;
                return;
            case WAYROOM_CARNIVAL_HUB:
                if(ap_memory.pc.hub_order[AP_CARNIVAL_HUB] != 0)
                { 
                    gvr_wayroom_type = APHubConverter(ap_memory.pc.hub_order[AP_CARNIVAL_HUB]);
                }
                ap_memory.pc.hub_map = gvr_wayroom_type;
                gvr_hub = gvr_wayroom_type;
                return;
            case WAYROOM_PIRATES_HUB:
                if(ap_memory.pc.hub_order[AP_PIRATES_HUB] != 0)
                { 
                    gvr_wayroom_type = APHubConverter(ap_memory.pc.hub_order[AP_PIRATES_HUB]);
                }
                ap_memory.pc.hub_map = gvr_wayroom_type;
                gvr_hub = gvr_wayroom_type;
                return;        
            case WAYROOM_PREHISTORIC_HUB:
                if(ap_memory.pc.hub_order[AP_PREHISTORIC_HUB] != 0)
                { 
                    gvr_wayroom_type = APHubConverter(ap_memory.pc.hub_order[AP_PREHISTORIC_HUB]);
                }
                ap_memory.pc.hub_map = gvr_wayroom_type;
                gvr_hub = gvr_wayroom_type;
                return;        
            case WAYROOM_FORTRESS_HUB:
                if(ap_memory.pc.hub_order[AP_FORTRESS_HUB] != 0)
                { 
                    gvr_wayroom_type = APHubConverter(ap_memory.pc.hub_order[AP_FORTRESS_HUB]);
                }
                ap_memory.pc.hub_map = gvr_wayroom_type;
                gvr_hub = gvr_wayroom_type;
                return;
            case WAYROOM_SPACE_HUB:
                if(ap_memory.pc.hub_order[AP_SPACE_HUB] != 0)
                { 
                    gvr_wayroom_type = APHubConverter(ap_memory.pc.hub_order[AP_SPACE_HUB]);
                }
                ap_memory.pc.hub_map = gvr_wayroom_type;
                gvr_hub = gvr_wayroom_type;
                return;
            case WAYROOM_TRAINING: //goes staright to world
                ap_memory.pc.hub_map = WAYROOM_TRAINING;
                gvr_hub = gvr_wayroom_type;
                return;
            default:
                gvr_hub = gvr_wayroom_type;
                return;
        }
    }
}

void CheckWorld()
{
    if(gvr_current_map != ap_memory.pc.world_map)
    {
        switch(gvr_current_map)
        {
            case MAP_ATLANTIS_1:
            case MAP_CARNIVAL_1:
            case MAP_PIRATES_1:
            case MAP_PREHISTORIC_1:
            case MAP_FORTRESS_1:
            case MAP_SPACE_1:
                MapChange(1);
                break;
            case MAP_ATLANTIS_2:
            case MAP_CARNIVAL_2:
            case MAP_PIRATES_2:
            case MAP_PREHISTORIC_2:
            case MAP_FORTRESS_2:
            case MAP_SPACE_2:
                MapChange(2);
                break;
            case MAP_ATLANTIS_3:
            case MAP_CARNIVAL_3:
            case MAP_PIRATES_3:
            case MAP_PREHISTORIC_3:
            case MAP_FORTRESS_3:
            case MAP_SPACE_3:
                MapChange(3);
                break;
            case MAP_ATLANTIS_BOSS:
            case MAP_CARNIVAL_BOSS:
            case MAP_PIRATES_BOSS:
            case MAP_PREHISTORIC_BOSS:
            case MAP_FORTRESS_BOSS:
            case MAP_SPACE_BOSS_1:
                MapChange(4);
                break;
            case MAP_ATLANTIS_BONUS:
            case MAP_CARNIVAL_BONUS:
            case MAP_PIRATES_BONUS:
            case MAP_PREHISTORIC_BONUS:
            case MAP_FORTRESS_BONUS:
            case MAP_SPACE_BONUS:
                MapChange(5);
                break;
            case MAP_TRAINING:
                MapChange(0);
                break;
            default:
                ap_memory.pc.world_map = gvr_current_map;
                ap_memory.pc.respawned = false;
                break;
        }
        UnlockSecret();
    }
}

void MapChange(u8 door_id)
{
    for(int i = 0; i < AP_MAX_WORLDS; i++)
    {
        if(APHubConverter(ap_memory.pc.worlds[i].hub_entrance) == ap_memory.pc.hub_map)
        {
            if(ap_memory.pc.worlds[i].door == door_id)
            {
                gvr_current_map = APWorldConverter(i);
                ap_memory.pc.world_map = gvr_current_map;
                ap_memory.pc.current_world_key = i;
                ap_memory.pc.need_respawn = true;
                if(gvr_current_map == MAP_PREHISTORIC_3)
                {
                    if(!prehis_timer_on)
                    {
                        prehis_timer = 500;
                        prehis_timer_on = true;
                    }
                    else
                    {
                        if(prehis_timer == 0)
                        {
                            char *text = "DPAD DOWN USES MONOLITH ITEMS";
                            DialogQueue(text);
                            ap_memory.pc.send_text++;
                            prehis_timer_on = false;
                        }
                        else {
                            prehis_timer--;
                        }
                    }
                }
                else
                {
                    prehis_timer_on = false;
                }
                return;
            }
        }
    }
}

void BacktoHub()
{
    if(gvr_wayroom_type == 0x01 || gvr_wayroom_type == 0x03)
    {
        gvr_wayroom_type = APHubConverter(ap_memory.pc.worlds[ap_memory.pc.current_world_key].hub_entrance);
        gvr_max_garibs = 0x0;
        Goal();
    }
    if(gvr_wayroom_type == 0x05 && gvr_atlantis_bonus_completed == 0x03)
    {
        gvr_wayroom_type = APHubConverter(ap_memory.pc.worlds[ap_memory.pc.current_world_key].hub_entrance);
        gvr_max_garibs = 0x0;
        Goal();
    }
    else if(gvr_wayroom_type == 0x05 && gvr_atlantis_bonus_completed == 0x01) //Died in Bonus stage
    {
        gvr_wayroom_type = APHubConverter(ap_memory.pc.worlds[ap_memory.pc.current_world_key].hub_entrance);
        gvr_max_garibs = 0x0;
    }
    if(gvr_current_map == MAP_HUB1 && spawn_ball_hub == 0) //Skip Intro
    {
        gvr_current_map = MAP_HUB2;
        spawn_ball_hub += 1;
    }
    else if (gvr_current_map == MAP_HUB1)
    {
        gvr_current_map = MAP_HUB2;
    }
    if(gvr_wayroom_type == 0x0D && gvr_atlantis_bonus_completed == 0x03 && gvr_current_map == MAP_TRAINING) // Beat Training Ground
    {
        Goal();
    }
}

u8 APHubConverter(u8 map)
{
    switch (map)
    {
    case AP_ATLANTIS_HUB:
        return WAYROOM_ATLANTIS_HUB;
    case AP_CARNIVAL_HUB:
        return WAYROOM_CARNIVAL_HUB;
    case AP_PIRATES_HUB:
        return WAYROOM_PIRATES_HUB;
    case AP_PREHISTORIC_HUB:
        return WAYROOM_PREHISTORIC_HUB;
    case AP_FORTRESS_HUB:
        return WAYROOM_FORTRESS_HUB;
    case AP_SPACE_HUB:
        return WAYROOM_SPACE_HUB;
    case AP_TRAINING_HUB:
        return WAYROOM_TRAINING;
    }
    return 0;
}

u8 APWorldConverter(u8 map)
{
    switch (map)
    {
        case AP_ATLANTIS_L1:
            return MAP_ATLANTIS_1;
        case AP_CARNIVAL_L1:
            return MAP_CARNIVAL_1;
        case AP_PIRATES_L1:
            return MAP_PIRATES_1;
        case AP_PREHISTORIC_L1:
            return MAP_PREHISTORIC_1;
        case AP_FORTRESS_L1:
            return MAP_FORTRESS_1;
        case AP_SPACE_L1:
            return MAP_SPACE_1;
        case AP_ATLANTIS_L2:
            return MAP_ATLANTIS_2;
        case AP_CARNIVAL_L2:
            return MAP_CARNIVAL_2;
        case AP_PIRATES_L2:
            return MAP_PIRATES_2;
        case AP_PREHISTORIC_L2:
            return MAP_PREHISTORIC_2;
        case AP_FORTRESS_L2:
            return MAP_FORTRESS_2;
        case AP_SPACE_L2:
            return MAP_SPACE_2;
        case AP_ATLANTIS_L3:
            return MAP_ATLANTIS_3;
        case AP_CARNIVAL_L3:
            return MAP_CARNIVAL_3;
        case AP_PIRATES_L3:
            return MAP_PIRATES_3;
        case AP_PREHISTORIC_L3:
            return MAP_PREHISTORIC_3;
        case AP_FORTRESS_L3:
            return MAP_FORTRESS_3;
        case AP_SPACE_L3:
            return MAP_SPACE_3;
        case AP_ATLANTIS_BOSS:
            return MAP_ATLANTIS_BOSS;
        case AP_CARNIVAL_BOSS:
            return MAP_CARNIVAL_BOSS;
        case AP_PIRATES_BOSS:
            return MAP_PIRATES_BOSS;
        case AP_PREHISTORIC_BOSS:
            return MAP_PREHISTORIC_BOSS;
        case AP_FORTRESS_BOSS:
            return MAP_FORTRESS_BOSS;
        case AP_SPACE_BOSS:
            return MAP_SPACE_BOSS_1;
        case AP_ATLANTIS_BONUS:
            return MAP_ATLANTIS_BONUS;
        case AP_CARNIVAL_BONUS:
            return MAP_CARNIVAL_BONUS;
        case AP_PIRATES_BONUS:
            return MAP_PIRATES_BONUS;
        case AP_PREHISTORIC_BONUS:
            return MAP_PREHISTORIC_BONUS;
        case AP_FORTRESS_BONUS:
            return MAP_FORTRESS_BONUS;
        case AP_SPACE_BONUS:
            return MAP_SPACE_BONUS;
        case AP_TRAINING_WORLD:
            return MAP_TRAINING;
        return 0xF;
    }
}
