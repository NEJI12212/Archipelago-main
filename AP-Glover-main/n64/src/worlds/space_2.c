#include "space_2.h"

bool space2_masher = false;
bool space2_ramp = false;

void GaribInitSpace2()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L2]; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribSpace2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_2 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
		    //Above Mashers Garibs
            case 0x37:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[0].object_id = item_id;
                return;
            case 0x3B:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[1].object_id = item_id;
                return;
            case 0x3A:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[2].object_id = item_id;
                return;
            case 0x39:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[3].object_id = item_id;
                return;
            case 0x38:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[4].object_id = item_id;
                return;
            //Before Mashers Garibs
            case 0x84:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[5].object_id = item_id;
                return;
            case 0x82:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[6].object_id = item_id;
                return;
            case 0x80:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[7].object_id = item_id;
                return;
            case 0x7E:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[8].object_id = item_id;
                return;
            //Behind Spawn Garibs
            case 0x86:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[9].object_id = item_id;
                return;
            case 0x88:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[10].object_id = item_id;
                return;
            case 0x87:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[11].object_id = item_id;
                return;
            //Metal Walkway Garibs
            case 0x70:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[12].object_id = item_id;
                return;
            case 0x6E:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[13].object_id = item_id;
                return;
            //Pyramid Garibs
            case 0x92:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[14].object_id = item_id;
                return;
            case 0x97:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[15].object_id = item_id;
                return;
            case 0x96:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[16].object_id = item_id;
                return;
            case 0x95:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[17].object_id = item_id;
                return;
            case 0x94:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[18].object_id = item_id;
                return;
            case 0x93:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[19].object_id = item_id;
                return;
            case 0x8C:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[20].object_id = item_id;
                return;
            case 0x91:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[21].object_id = item_id;
                return;
            case 0x90:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[22].object_id = item_id;
                return;
            case 0x8F:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[23].object_id = item_id;
                return;
            case 0x8E:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[24].object_id = item_id;
                return;
            case 0x8D:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[25].object_id = item_id;
                return;
            //Race Bridge Garibs
            case 0xB0:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[26].object_id = item_id;
                return;
            case 0xB5:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[27].object_id = item_id;
                return;
            case 0xB4:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[28].object_id = item_id;
                return;
            case 0xB3:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[29].object_id = item_id;
                return;
            case 0xB2:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[30].object_id = item_id;
                return;
            case 0xB1:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[31].object_id = item_id;
                return;
            //Ramp Jump Arch Garibs
            case 0x2F:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[32].object_id = item_id;
                return;
            case 0x30:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[33].object_id = item_id;
                return;
            case 0x31:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[34].object_id = item_id;
                return;
            case 0x32:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[35].object_id = item_id;
                return;
            case 0x2E:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[36].object_id = item_id;
                return;
            //Spike Wall Garibs
            case 0x5A:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[37].object_id = item_id;
                return;
            case 0x5C:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[38].object_id = item_id;
                return;
            case 0x5B:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[39].object_id = item_id;
                return;
            //Under Spike Garibs
            case 0x7C:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[40].object_id = item_id;
                return;
            case 0x7A:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[41].object_id = item_id;
                return;
            case 0x74:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[42].object_id = item_id;
                return;
            case 0x72:
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[43].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribSpace2Shiny()
{
    if(gvr_current_map == MAP_SPACE_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedSpace2(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnSpace2(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedSpace2() {
    if(gvr_current_map == MAP_SPACE_2)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L2]; i++)
        {
            collected += ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_SPACE_L2])
        {
            ap_memory.pc.worlds[AP_SPACE_L2].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitSpace2()
{
    for(int i = 0; i < 7; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemySpace2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_2 && 
        (obj_type == WIND_UP || obj_type == THROWBOT))
    {    
        switch (item_id)
        {	
           //Crusher Wind-Ups
            case 0x15E:
                ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[0].ptr = ptr;
                return;
            case 0x151:
                ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[1].ptr = ptr;
                return;
            //Slope Wind-Ups
            case 0x170:
                ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[2].ptr = ptr;
                return;
            case 0x180:
                ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[3].ptr = ptr;
                return;
            case 0x190:
                ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[4].ptr = ptr;
                return;
            case 0x1A0:
                ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[5].ptr = ptr;
                return;
            //Throwbot
            case 0x1C6:
                ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[6].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemySpace2(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_2)
    {
        u16 found_id;
        for(int i = 0; i < 7; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_SPACE_L2].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesSpace2()
{
    if(gvr_current_map == MAP_SPACE_2)
    {
        if(ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[6].ptr != 0) // Throwbot
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[6].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[6].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xBF800000) //(-1 in float)
                {
                    ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[6].collected = 1;
                    ap_memory.pc.worlds[AP_SPACE_L2].enemy_checks[6].ptr = 0;
                }
            }
        }
    }
}

//Life

void LifeInitSpace2()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L2].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeSpace2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_2 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Pyramid Life
            case 0x8A:
                ap_memory.pc.worlds[AP_SPACE_L2].life_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeSpace2(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_2)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L2].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_SPACE_L2].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_SPACE_L2].life_checks[i].ptr = 0;
            }
        }
    }
}

//Checkpoint

void CheckpointInitSpace2()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L2].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointSpace2(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_2)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x2E:
                ap_memory.pc.worlds[AP_SPACE_L2].checkpoint_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointSpace2()
{
    if(gvr_current_map == MAP_SPACE_2)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L2].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L2].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_SPACE_L2].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_SPACE_L2].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

// // Switch

void SwitchInitSpace2()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchSpace2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_2 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Cliff Ball Switch
            case 0x142:
                ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[0].ptr = ptr;
                space2_ramp = false;
                return;
            //Right Platform Ball Switch
            case 0x148:
                ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[1].ptr = ptr;
                space2_masher = false;
                return;
            //Spawn Ball Switch
            case 0x118: //Don't really need to do anything with this switch
                ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[2].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsSpace2()
{
    if(gvr_current_map == MAP_SPACE_2)
    {
        if(ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[0].ptr != 0) // ramp
        {
            u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[0].ptr + 0x00B8;
            u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[0].ptr + 0x038;
            u32 gate_ptr = (*(u32*)gate_ptr_offset);
            if(gate_ptr > 0x80000000)
            {
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!space2_ramp && ap_memory.pc.items[AP_SPACE_L2_RAMP])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x42C532B8;
                    space2_ramp = true;
                }
                if(!ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[0].collected 
                    && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x42CB32B8;
                    (*(u16*)door_open_offset) = 0xFFFD;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[1].ptr != 0) // masher
        {
            u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[1].ptr + 0x00B8;
            u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[1].ptr + 0x038;
            u32 gate_ptr = (*(u32*)gate_ptr_offset);
            if(gate_ptr > 0x80000000)
            {
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!space2_masher && ap_memory.pc.items[AP_SPACE_L2_MASHERS])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x4322FC43;
                    space2_masher = true;
                }
                if(!ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[1].collected 
                    && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x4325FC43;
                    (*(u16*)door_open_offset) = 0xFFFD;
                }
            }
        }
    } 
    else
    {
        for(int i = 0; i < 3; i++)
        {
            ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[i].ptr = 0;
        }
    }
}

void HitBallSwitchSpace2(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_2)
    {
        for(int i=0; i < 3; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[i].ptr == ptr &&
                i == 0) //right platform switch
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x42C532B8;
                ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[i].ptr == ptr &&
                i == 1) //right platform switch
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x4322FC43;
                ap_memory.pc.worlds[AP_SPACE_L2].switch_checks[i].collected = 1;
            }
        }
    }
}

// //Potions

void PotionInitSpace2()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L2].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionSpace2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_2 && obj_type == 0x0100)
    {
        switch (item_id)
        {
            //Speed Potion
            case 0x202:
                ap_memory.pc.worlds[AP_SPACE_L2].potion_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void MonitorPotionSpace2()
{
    if(gvr_current_map == MAP_SPACE_2)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L2].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_SPACE_L2].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_SPACE_L2].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_SPACE_L2].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}
