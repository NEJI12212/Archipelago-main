#include "space_1.h"

bool space1_thrusters = false;
bool space1_platforms = false;
bool space1_goo = false;
bool space1_ufo = false;
bool space1_missile = false;
bool space1_aliens = false;

void GaribInitSpace1()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L1]; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribSpace1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_1 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Alone Fan Garibs
            case 0xA0:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[0].object_id = item_id;
                return;
            case 0xA2:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[1].object_id = item_id;
                return;
            case 0xA1:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[2].object_id = item_id;
                return;
            //Atop UFO Garibs
            case 0x3F:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[3].object_id = item_id;
                return;
            case 0x3E:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[4].object_id = item_id;
                return;
            case 0x3D:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[5].object_id = item_id;
                return;
            case 0x3C:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[6].object_id = item_id;
                return;
            case 0x3B:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[7].object_id = item_id;
                return;
            case 0x3A:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[8].object_id = item_id;
                return;
            case 0x46:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[9].object_id = item_id;
                return;
            case 0x45:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[10].object_id = item_id;
                return;
            case 0x44:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[11].object_id = item_id;
                return;
            case 0x43:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[12].object_id = item_id;
                return;
            //Bridge Garibs
            case 0x7B:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[13].object_id = item_id;
                return;
            case 0x7C:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[14].object_id = item_id;
                return;
            //Flying Platform Garibs
            case 0x9A:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[15].object_id = item_id;
                return;
            case 0x98:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[16].object_id = item_id;
                return;
            case 0x96:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[17].object_id = item_id;
                return;
            case 0x94:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[18].object_id = item_id;
                return;
            //Inside UFO Garibs
            case 0x89:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[19].object_id = item_id;
                return;
            case 0x88:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[20].object_id = item_id;
                return;
            case 0x87:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[21].object_id = item_id;
                return;
            case 0x86:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[22].object_id = item_id;
                return;
            case 0x85:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[23].object_id = item_id;
                return;
            case 0x84:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[24].object_id = item_id;
                return;
            case 0x83:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[25].object_id = item_id;
                return;
            case 0x82:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[26].object_id = item_id;
                return;
            case 0x81:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[27].object_id = item_id;
                return;
            case 0x90:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[28].object_id = item_id;
                return;
            case 0x8F:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[29].object_id = item_id;
                return;
            case 0x8E:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[30].object_id = item_id;
                return;
            case 0x8D:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[31].object_id = item_id;
                return;
            case 0x8C:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[32].object_id = item_id;
                return;
            case 0x8B:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[33].object_id = item_id;
                return;
            case 0x8A:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[34].object_id = item_id;
                return;
            //Large Fan Garibs
            case 0xA4:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[35].object_id = item_id;
                return;
            case 0xA6:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[36].object_id = item_id;
                return;
            case 0xA5:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[37].object_id = item_id;
                return;
            //Medium Fan Garibs
            case 0xA8:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[38].object_id = item_id;
                return;
            case 0xAA:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[39].object_id = item_id;
                return;
            case 0xA9:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[40].object_id = item_id;
                return;
            //Sign Garib
            case 0x92:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[41].object_id = item_id;
                return;
            //Small Fan Garibs
            case 0x9C:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[42].object_id = item_id;
                return;
            case 0x9E:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[43].object_id = item_id;
                return;
            case 0x9D:
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[44].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribSpace1Shiny()
{
    if(gvr_current_map == MAP_SPACE_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedSpace1(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnSpace1(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L1]; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedSpace1() {
    if(gvr_current_map == MAP_SPACE_1)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L1]; i++)
        {
            collected += ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_SPACE_L1])
        {
            ap_memory.pc.worlds[AP_SPACE_L1].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitSpace1()
{
    for(int i = 0; i < 6; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L1].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemySpace1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_1 && 
        (obj_type == WIND_UP || obj_type == SUCKER))
    {    
        switch (item_id)
        {	
            //Alone Fan Wind-Up
            case 0x1C0:
                ap_memory.pc.worlds[AP_SPACE_L1].enemy_checks[0].ptr = ptr;
                return;
            //Glover Switch Wind-Up
            case 0x175:
                ap_memory.pc.worlds[AP_SPACE_L1].enemy_checks[1].ptr = ptr;
                return;
            //Large Fan Wind-Up
            case 0x198:
                ap_memory.pc.worlds[AP_SPACE_L1].enemy_checks[2].ptr = ptr;
                return;
            //Medium Fan Wind-Up
            case 0x1AC:
                ap_memory.pc.worlds[AP_SPACE_L1].enemy_checks[3].ptr = ptr;
                return;
            //Small Fan Wind-Up
            case 0x184:
                ap_memory.pc.worlds[AP_SPACE_L1].enemy_checks[4].ptr = ptr;
                return;
            //Sucker
            case 0x291:
                ap_memory.pc.worlds[AP_SPACE_L1].enemy_checks[5].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemySpace1(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_1)
    {
        u16 found_id;
        for(int i = 0; i < 6; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L1].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_SPACE_L1].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_SPACE_L1].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_SPACE_L1].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L1]; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_SPACE_L1].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}


//Life

void LifeInitSpace1()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L1].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeSpace1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_1 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Aliens Life
            case 0x4A:
                ap_memory.pc.worlds[AP_SPACE_L1].life_checks[0].ptr = ptr;
                return;
            //Rocketship Life
            case 0x48:
                ap_memory.pc.worlds[AP_SPACE_L1].life_checks[1].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeSpace1(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_1)
    {
        for(int i = 0; i < 2; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L1].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_SPACE_L1].life_checks[i].ptr = 0;
            }
        }
    }
}

//Checkpoint

void CheckpointInitSpace1()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L1].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointSpace1(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_1)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x3A:
                ap_memory.pc.worlds[AP_SPACE_L1].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            //Checkpoint 2
            case 0x69:
                ap_memory.pc.worlds[AP_SPACE_L1].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L1].checkpoint_checks[1].warp_ptr = 0x8030A180;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointSpace1()
{
    if(gvr_current_map == MAP_SPACE_1)
    {
        for(int i = 0; i < 2; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L1].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L1].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_SPACE_L1].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_SPACE_L1].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointSpace1()
{
    if(gvr_current_map == MAP_SPACE_1)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 2; i++)
            {
                if(i == ap_memory.pc.worlds[AP_SPACE_L1].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_SPACE_L1].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPSpace1(u32 warp_ptr)
{
    for(int i = 0;i < 2; i++)
    {
        if(ap_memory.pc.worlds[AP_SPACE_L1].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_SPACE_L1_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_SPACE_L1_CHECKPOINT2] > 0)
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

// // Switch

void SwitchInitSpace1()
{
    for(int i = 0; i < 6; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchSpace1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_1 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Aliens Stone Switch
            case 0x20E:
                ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[0].ptr = ptr;
                space1_aliens = false;
                return;
            //Cliff Glover Switch
            case 0x14E:
                ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[1].ptr = ptr;
                space1_goo = false;
                return;
            //Hazard Stripe Ball Switch
            case 0x1DD:
                ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[2].ptr = ptr;
                space1_ufo = false;
                return;
            //Sign Glover Switch
            case 0x154:
                ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[3].ptr = ptr;
                space1_thrusters = false;
                return;
            //Stone Pillar Ball Switch
            case 0x142:
                ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[4].ptr = ptr;
                space1_platforms = false;
                return;
            //UFO Glover Switch
            case 0x169:
                ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[5].ptr = ptr;
                space1_missile = false;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsSpace1()
{
    if(gvr_current_map == MAP_SPACE_1)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[0].ptr != 0) // aliens
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(space1_aliens)
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0x43750000;
                        ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[0].ptr = 0;
                    }
                    if(!ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[0].collected 
                        && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0x438E8000;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[1].ptr != 0) // goo
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[1].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!space1_goo && ap_memory.pc.items[AP_SPACE_L1_GOO_PLATFORMS])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0x441EF29C;
                        space1_goo = true;
                    }
                    if(!ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[1].collected 
                        && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0x441FB29C;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[2].ptr != 0) // ufo
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[2].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!space1_ufo && ap_memory.pc.items[AP_SPACE_L1_UFO])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0xC20C0000;
                        space1_ufo = true;
                    }
                    if(!ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[2].collected 
                        && (*(u16*)door_open_offset) == 0xFFFD) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0xC1F80000;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[3].ptr != 0) // thrusters
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[3].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[3].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!space1_thrusters && ap_memory.pc.items[AP_SPACE_L1_FANS])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0xC35957AB;
                        space1_thrusters = true;
                    }
                    if(!ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[3].collected 
                        && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0xC35557AB;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[4].ptr != 0) // platforms
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[4].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[4].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!space1_platforms && ap_memory.pc.items[AP_SPACE_L1_FLYING_PLATFORMS])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0x43551D85;
                        space1_platforms = true;
                    }
                    if(!ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[4].collected 
                        && (*(u16*)door_open_offset) == 0xFFFD) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0x43581D86;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[5].ptr != 0) // missle
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[5].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[5].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!space1_missile && ap_memory.pc.items[AP_SPACE_L1_MISSILE])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0x42040000;
                        space1_missile = true;
                    }
                    if(!ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[5].collected 
                        && (*(u16*)door_open_offset) == 0xFFFD) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0x4215B799;
                    }
                }
            }

        }
    } 
    else
    {
        for(int i = 0; i < 6; i++)
        {
            ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr = 0;
        }
    }
}

void HitSwitchSpace1()
{
    if(gvr_current_map == MAP_SPACE_1)
    {
        u32 on_switch = (*(u32*)0x803135B8);
        if(on_switch != 0)
        {
            for(int i=0; i < 6; i++)
            {
                if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr == on_switch 
                    && i == 3) // sign switch
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0xC35957AB;
                    ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr == on_switch 
                    && i == 1) // cliff switch
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x441EF29C;
                    ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr == on_switch 
                    && i == 5) // ufo switch
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x42040000;
                    ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr == on_switch 
                    && i == 0) // alien switch
                {
                    // u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr + 0x00B8;
                    // (*(u32*)position_addr) = 0x43750000;
                    ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].collected = 1;
                    space1_aliens = true;
                }
            }
        }
    }
}

void HitBallSwitchSpace1(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_1)
    {
        for(int i=0; i < 6; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr == ptr &&
                i == 4) //Floating platforms
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x43551D85;
                ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr == ptr &&
                i == 2) //hazard ball switch
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0xC20C0000;
                ap_memory.pc.worlds[AP_SPACE_L1].switch_checks[i].collected = 1;
            }
        }
    }
}
