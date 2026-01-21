#include "atlantis_3.h"

bool atl3_spin_wheel = false;
bool atl3_access_cave = false;
bool atl3_switch_pressed = false;
u8   atl3_switch_timer = 0;


void GaribInitAtlantis3()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L3]; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribAtlantis3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_3 && obj_type == 0x00B0)
    {
        switch (item_id)
        {
            //Alcove
            case 0x9B:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[0].object_id = item_id;
                return;
            case 0x9D:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[1].object_id = item_id;
                return;
            case 0x9C:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[2].object_id = item_id;
                return;
            //Balcony
            case 0x12C:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[3].object_id = item_id;
                return;
            case 0x12D:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[4].object_id = item_id;
                return;
            case 0x12E:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[5].object_id = item_id;
                return;
            case 0x12F:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[6].object_id = item_id;
                return;
            case 0x130:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[7].object_id = item_id;
                return;
            case 0x12B:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[8].object_id = item_id;
                return;
            //Cave
            case 0x87:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[9].object_id = item_id;
                return;
            case 0x8D:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[10].object_id = item_id;
                return;
            case 0x8C:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[11].object_id = item_id;
                return;
            case 0x89:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[12].object_id = item_id;
                return;
            case 0x88:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[13].object_id = item_id;
                return;
            //Cave Ceiling
            case 0x2C:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[14].object_id = item_id;
                return;
            case 0x36:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[15].object_id = item_id;
                return;
            case 0x31:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[16].object_id = item_id;
                return;
            case 0x2D:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[17].object_id = item_id;
                return;
            case 0x35:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[18].object_id = item_id;
                return;
            case 0x2F:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[19].object_id = item_id;
                return;
            case 0x30:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[20].object_id = item_id;
                return;
            case 0x2E:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[21].object_id = item_id;
                return;
            //Cliff
            case 0xEF:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[22].object_id = item_id;
                return;
            case 0xF6:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[23].object_id = item_id;
                return;
            case 0xF5:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[24].object_id = item_id;
                return;
            case 0xF4:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[25].object_id = item_id;
                return;
            case 0xF3:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[26].object_id = item_id;
                return;
            case 0xF2:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[27].object_id = item_id;
                return;
            case 0xF1:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[28].object_id = item_id;
                return;
            case 0xF0:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[29].object_id = item_id;
                return;
            //Island
            case 0x122:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[30].object_id = item_id;
                return;
            case 0x127:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[31].object_id = item_id;
                return;
            case 0x125:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[32].object_id = item_id;
                return;
            case 0x124:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[33].object_id = item_id;
                return;
            case 0x123:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[34].object_id = item_id;
                return;
            case 0x126:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[35].object_id = item_id;
                return;
            case 0x128:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[36].object_id = item_id;
                return;
            case 0x129:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[37].object_id = item_id;
                return;
            //Path
            case 0x114:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[38].object_id = item_id;
                return;
            case 0x112:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[39].object_id = item_id;
                return;
            case 0x110:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[40].object_id = item_id;
                return;
            case 0x10E:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[41].object_id = item_id;
                return;
            //Pool
            case 0x119:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[42].object_id = item_id;
                return;
            case 0x11C:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[43].object_id = item_id;
                return;
            case 0x11F:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[44].object_id = item_id;
                return;
            case 0x120:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[45].object_id = item_id;
                return;
            case 0x11D:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[46].object_id = item_id;
                return;
            case 0x11A:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[47].object_id = item_id;
                return;
            case 0x11B:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[48].object_id = item_id;
                return;
            case 0x11E:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[49].object_id = item_id;
                return;
            case 0x118:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[50].object_id = item_id;
                return;
            // Slide Cliff
            case 0x82:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[51].object_id = item_id;
                return;
            case 0x85:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[52].object_id = item_id;
                return;
            case 0x84:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[53].object_id = item_id;
                return;
            case 0x83:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[54].object_id = item_id;
                return;
            //Stairs
            case 0x10C:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[55].object_id = item_id;
                return;
            case 0x10A:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[56].object_id = item_id;
                return;
            case 0x108:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[57].object_id = item_id;
                return;
            case 0x106:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[58].object_id = item_id;
                return;
            case 0x104:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[59].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[59].object_id = item_id;
                return;
            //Under Waterfall
            case 0xE3:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[60].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[60].object_id = item_id;
                return;
            case 0xE8:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[61].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[61].object_id = item_id;
                return;
            case 0xE4:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[62].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[62].object_id = item_id;
                return;
            case 0xE9:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[63].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[63].object_id = item_id;
                return;
            //Waterfall
            case 0x9F:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[64].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[64].object_id = item_id;
                return;
            case 0xA3:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[65].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[65].object_id = item_id;
                return;
            case 0xA2:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[66].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[66].object_id = item_id;
                return;
            case 0xA1:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[67].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[67].object_id = item_id;
                return;
            case 0xA0:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[68].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[68].object_id = item_id;
                return;
        default:
            return;
        }
    }
}

void GaribAtlantis3Shiny()
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedAtlantis3(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnAtlantis3(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedAtlantis3() {
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L3]; i++)
        {
            collected += ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].collected;
        }
        if(collected == 60)
        {
            ap_memory.pc.worlds[AP_ATLANTIS_L3].all_collected = true;
        }
    }
}

//Life

void LifeInitAtlantis3()
{
    for(int i = 0; i < 5; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L3].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeAtlantis3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_3 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            case 0xA5:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].life_checks[0].ptr = ptr;
                return;
            case 0x116:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].life_checks[1].ptr = ptr;
                return;
            case 0x6B:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].life_checks[2].ptr = ptr;
                return;
            case 0x5F:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].life_checks[3].ptr = ptr;
                return;
            case 0x99:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].life_checks[4].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeAtlantis3(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        for(int i = 0; i < 5; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L3].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].life_checks[i].ptr = 0;
            }
        }
    }
}

//Checkpoint

void CheckpointInitAtlantis3()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointAtlantis3(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        switch (item_id)
        {
            case 0x2C:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            case 0x41:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[1].warp_ptr = 0x80321FB0;
                return;
            case 0x48:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[2].warp_ptr = 0x803210B0;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointAtlantis3()
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointAtlantis3()
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 3; i++)
            {
                if(i == ap_memory.pc.worlds[AP_ATLANTIS_L3].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPAtlantis3(u32 warp_ptr)
{
    for(int i = 0;i < 3; i++)
    {
        if(ap_memory.pc.worlds[AP_ATLANTIS_L3].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_ATLANTIS_L3_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_ATLANTIS_L3_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_ATLANTIS_L3_CHECKPOINT3] > 0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        } 
    }
    return 1;
}
// Switch

void SwitchInitAtlantis3()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchAtlantis3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_3 && obj_type == 0x0180)
    {    
        switch (item_id)
        {
            case 0x204: //Cliff Ball Switch
                ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[0].object_type = 0x181;
                atl3_access_cave = false;
                return;
            case 0x281: // Glover Switch
                ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[1].object_type = obj_type;
                atl3_switch_pressed = false;
                return;
            case 0x1EA: //Pyramid Ball Switch
                ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[2].object_type = 0x182;
                atl3_spin_wheel = false;
                return;

            default:
                return;
        }
    }
}

void MonitorEventsAtlantis3()
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[0].ptr != 0) // Cave Entrance
            {
                u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!atl3_access_cave && ap_memory.pc.items[AP_ATLANTIS_L3_CAVE])
                {

                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x43735740;
                    atl3_access_cave = true;
                }

                if(!ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[0].collected && (*(u16*)door_open_offset) == 0xFFFD)
                {
                    (*(u32*)position_addr) = 0x43765740;
                }
            }   
            if(ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[1].ptr != 0) //Open Pit
            {
                u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[1].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(atl3_switch_pressed && atl3_switch_timer == 0x1E)
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    atl3_switch_timer--;
                }
                else if(atl3_switch_pressed && atl3_switch_timer < 0x1E && atl3_switch_timer > 0x0)
                {
                    atl3_switch_timer--;
                }
                if(atl3_switch_timer == 0 && (*(u16*)door_open_offset) == 0x0 && atl3_switch_pressed)
                {
                    (*(u32*)position_addr) = 0xC4E1548E;
                    atl3_switch_pressed = false;
                }
            } 
            if(ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[2].ptr != 0) //Spin Wheel
            {
                u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[2].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!atl3_spin_wheel && ap_memory.pc.items[AP_ATLANTIS_L3_SPIN_WHEEL])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x437127EE;
                    atl3_spin_wheel = true;
                }
                if(!ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[2].collected && (*(u16*)door_open_offset) == 0xFFFD)
                {
                    (*(u32*)position_addr) = 0x437627EE;
                }
            } 
        }
    } 
    else
    {
        for(int i = 0; i < 3; i++)
        {
            ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].ptr = 0;
        }
    }
}

void HitSwitchAtlantis3()
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        u32 on_switch = (*(u32*)0x803263C8);
        if(on_switch != 0)
        {
            for(int i=0; i < 3; i++)
            {
                if(ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].ptr == on_switch 
                    && ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].object_type == 0x180)
                {
                    if(ap_memory.pc.settings.randomize_switches) //Life Pit
                    {
                        u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].ptr + 0x00B8;
                        if(i == 1)
                        {
                            (*(u32*)position_addr) = 0xC4E20000;
                            atl3_switch_pressed = true;
                            atl3_switch_timer = 0x1E;
                        }
                    }
                    ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].collected = 1;
                }
            }
        }
    }
}

void HitBallSwitchAtlantis3(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        for(int i=0; i < 3; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].ptr == ptr &&
                ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].object_type == 0x181) //Cave Platform
            {
                u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x43735740;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].ptr == ptr &&
                ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].object_type == 0x182) //Spin Wheel
            {
                u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x437127EE;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].switch_checks[i].collected = 1;
            }
        }
    }
}

// Enemy
void EnemyInitAtlantis3()
{
    for(int i = 0; i < 14; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyAtlantis3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_3 && (obj_type == FISH || obj_type == SHARK || obj_type == WIND_UP))
    {
        switch (item_id)
        {
            case 0x20D:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[0].ptr = ptr;
                return;
            case 0x21D:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[1].ptr = ptr;
                return;
            case 0x238:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[2].ptr = ptr;
                return;
            case 0x19B:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[3].ptr = ptr;
                return;
            case 0x187:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[4].ptr = ptr;
                return;
            case 0x22D:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[5].ptr = ptr;
                return;
            case 0x290:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[6].ptr = ptr;
                return;
            case 0x1AF:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[7].ptr = ptr;
                return;
            case 0x1DA:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[8].ptr = ptr;
                return;
            case 0x1BA:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[9].ptr = ptr;
                return;
            case 0x1CA:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[10].ptr = ptr;
                return;
            case 0x248:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[11].ptr = ptr;
                return;
            case 0x258:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[12].ptr = ptr;
                return;
            case 0x268:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[13].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyAtlantis3(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        u16 found_id;
        for(int i = 0; i < 14; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L3].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesAtlantis3()
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        if(ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[5].ptr != 0)
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[5].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[5].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xBF800000) //(-1 in float)
                {
                    ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[5].collected = 1;
                    ap_memory.pc.worlds[AP_ATLANTIS_L3].enemy_checks[5].ptr = 0;
                }
            }
        }
    }
}

//Potions

void PotionInitAtlantis3()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L3].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionAtlantis3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_3 && obj_type == 0x0100)
    {
        switch (item_id)
        {
            case 0x1E7:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].potion_checks[0].ptr = ptr;
                return;
            case 0x28A:
                ap_memory.pc.worlds[AP_ATLANTIS_L3].potion_checks[1].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void MonitorPotionAtlantis3()
{
    if(gvr_current_map == MAP_ATLANTIS_3)
    {
        for(int i = 0; i < 2; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L3].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_ATLANTIS_L3].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_ATLANTIS_L3].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_ATLANTIS_L3].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}
