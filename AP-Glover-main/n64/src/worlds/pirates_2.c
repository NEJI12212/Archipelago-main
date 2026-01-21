#include "pirates_2.h"

bool pir2_ramp = false;
bool pir2_gate = false;
bool pir2_water = false;

void GaribInitPirates2()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L2]; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribPirates2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_2 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Falling Bridge Garibs
            case 0x3F:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[0].object_id = item_id;
                return;
            case 0x41:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[1].object_id = item_id;
                return;
            case 0x40:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[2].object_id = item_id;
                return;
            case 0x43:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[3].object_id = item_id;
                return;
            case 0x45:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[4].object_id = item_id;
                return;
            case 0x44:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[5].object_id = item_id;
                return;
            case 0x47:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[6].object_id = item_id;
                return;
            case 0x49:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[7].object_id = item_id;
                return;
            case 0x48:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[8].object_id = item_id;
                return;
            case 0x4B:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[9].object_id = item_id;
                return;
            case 0x4D:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[10].object_id = item_id;
                return;
            case 0x4C:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[11].object_id = item_id;
                return;
            //Glover Switch Garibs
            case 0x7E:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[12].object_id = item_id;
                return;
            case 0x81:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[13].object_id = item_id;
                return;
            case 0x7F:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[14].object_id = item_id;
                return;
            case 0x80:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[15].object_id = item_id;
                return;
            //Goal Garibs
            case 0x7C:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[16].object_id = item_id;
                return;
            case 0x7B:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[17].object_id = item_id;
                return;
            case 0x79:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[18].object_id = item_id;
                return;
            case 0x78:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[19].object_id = item_id;
                return;
            //Left Bridge Garibs
            case 0x2C:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[20].object_id = item_id;
                return;
            case 0x30:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[21].object_id = item_id;
                return;
            case 0x31:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[22].object_id = item_id;
                return;
            case 0x32:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[23].object_id = item_id;
                return;
            //Mini Platform Garibs
            case 0x8D:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[24].object_id = item_id;
                return;
            case 0x90:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[25].object_id = item_id;
                return;
            case 0x93:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[26].object_id = item_id;
                return;
            case 0x94:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[27].object_id = item_id;
                return;
            case 0x91:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[28].object_id = item_id;
                return;
            case 0x8E:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[29].object_id = item_id;
                return;
            case 0x8F:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[30].object_id = item_id;
                return;
            case 0x92:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[31].object_id = item_id;
                return;
            case 0x8C:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[32].object_id = item_id;
                return;
            //Moving Plank Garibs
            case 0x83:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[33].object_id = item_id;
                return;
            case 0x8A:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[34].object_id = item_id;
                return;
            case 0x89:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[35].object_id = item_id;
                return;
            case 0x88:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[36].object_id = item_id;
                return;
            case 0x87:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[37].object_id = item_id;
                return;
            case 0x86:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[38].object_id = item_id;
                return;
            case 0x85:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[39].object_id = item_id;
                return;
            case 0x84:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[40].object_id = item_id;
                return;
            //Spawn Garibs
            case 0x74:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[41].object_id = item_id;
                return;
            case 0x76:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[42].object_id = item_id;
                return;
            case 0x75:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[43].object_id = item_id;
                return;
            //Stairs Garibs
            case 0x36:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[44].object_id = item_id;
                return;
            case 0x34:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[45].object_id = item_id;
                return;
            case 0x37:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[46].object_id = item_id;
                return;
            case 0x35:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[47].object_id = item_id;
                return;
            //Water Edge Garibs
            case 0x28:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[48].object_id = item_id;
                return;
            case 0x29:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[49].object_id = item_id;
                return;
            case 0x2A:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[50].object_id = item_id;
                return;
            case 0x27:
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[51].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribPirates2Shiny()
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedPirates2(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnPirates2(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedPirates2() {
    if(gvr_current_map == MAP_PIRATES_2)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L2]; i++)
        {
            collected += ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_PIRATES_L2])
        {
            ap_memory.pc.worlds[AP_PIRATES_L2].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitPirates2()
{
    for(int i = 0; i < 10; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyPirates2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_2 && 
        (obj_type == WIND_UP  || obj_type == CHESTER || obj_type == LOBSTER))
    {    
        switch (item_id)
        {
            //Conveyor Wind-Up
            case 0x205:
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[0].ptr = ptr;
                return;
            //Glover Switch Wind-Up
            case 0x1DD:
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[1].ptr = ptr;
                return;
            //Moving Plank Wind-Ups
            case 0x1B9:
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[2].ptr = ptr;
                return;
            case 0x1AE:
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[3].ptr = ptr;
                return;
            //Platform Lobster
            case 0x172:
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[4].ptr = ptr;
                return;
            //Pool Chester
            case 0x150:
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[5].ptr = ptr;
                return;
            //Spawn Lobster
            case 0x15E:
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[6].ptr = ptr;
                return;
            //Spawn Wind-Up
            case 0x1F1:
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[7].ptr = ptr;
                return;
            //Swordtop Chester
            case 0x198:
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[8].ptr = ptr;
                return;
            //Zig-Zag Wind-Up
            case 0x1C9:
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[9].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyPirates2(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        u16 found_id;
        for(int i = 0; i < 10; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_PIRATES_L2].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesPirates2()
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        if(ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[5].ptr != 0) //chest
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[5].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[5].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC2C80000) //(-100 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[5].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[5].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[8].ptr != 0) //chest
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[8].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[8].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC2C80000) //(-100 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[8].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L2].enemy_checks[8].ptr = 0;
                }
            }
        }
    }
}


//Life

void LifeInitPirates2()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L2].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifePirates2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_2 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Shack Life 1
            case 0x3B:
                ap_memory.pc.worlds[AP_PIRATES_L2].life_checks[0].ptr = ptr;
                return;
            //Shack Life 2
            case 0x3D:
                ap_memory.pc.worlds[AP_PIRATES_L2].life_checks[1].ptr = ptr;
                return;
            //Shack Life 3
            case 0x39:
                ap_memory.pc.worlds[AP_PIRATES_L2].life_checks[2].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifePirates2(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L2].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_PIRATES_L2].life_checks[i].ptr = 0;
            }
        }
    }
}

//Checkpoint

void CheckpointInitPirates2()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointPirates2(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x27:
                ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            //Checkpoint 2
            case 0x12E:
                ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[1].warp_ptr = 0x80303510;
                return;
            //Checkpoint 3
            case 0x133:
                ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[2].warp_ptr = 0x80303080;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointPirates2()
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointPirates2()
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 3; i++)
            {
                if(i == ap_memory.pc.worlds[AP_PIRATES_L2].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPPirates2(u32 warp_ptr)
{
    for(int i = 0;i < 3; i++)
    {
        if(ap_memory.pc.worlds[AP_PIRATES_L2].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_PIRATES_L2_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_PIRATES_L2_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_PIRATES_L2_CHECKPOINT3] > 0)
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

void SwitchInitPirates2()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchPirates2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_2 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Glover Switch
            case 0x12D:
                ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[0].ptr = ptr;
                pir2_water = false;
                return;
            //Platform Ball Switch
            case 0x169:
                ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[1].ptr = ptr;
                pir2_gate = false;
                return;
            //Water Ball Switch
            case 0x139:
                ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[2].ptr = ptr;
                pir2_ramp = false;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsPirates2()
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[0].ptr != 0) // water
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir2_water && ap_memory.pc.items[AP_PIRATES_L2_LOWER_WATER])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x435F0000;
                    pir2_water = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[0].collected 
                    && ((*(u16*)door_open_offset) == 0xFFFF || (*(u16*)door_open_offset) == 0xFF9B)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x43610000;
                }
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[1].ptr != 0) // gate
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[1].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir2_gate && ap_memory.pc.items[AP_PIRATES_L2_GATE])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x42000000;
                    pir2_gate = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[1].collected 
                    && ((*(u16*)door_open_offset) == 0xFFFD || (*(u16*)door_open_offset) == 0xFF9B)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x421C0000;
                    if((*(u16*)door_open_offset) == 0xFF9B)
                    {
                        (*(u16*)door_open_offset) = 0xFFFD;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[2].ptr != 0) // ramp
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[2].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir2_ramp && ap_memory.pc.items[AP_PIRATES_L2_RAMP])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x430ACCC8;
                    pir2_ramp = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[2].collected 
                    && ((*(u16*)door_open_offset) == 0xFFFD || (*(u16*)door_open_offset) == 0xFF9B)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x43100000;
                    if((*(u16*)door_open_offset) == 0xFF9B)
                    {
                        (*(u16*)door_open_offset) = 0xFFFD;
                    }
                }
            } 
        }
    } 
    else
    {
        for(int i = 0; i < 3; i++)
        {
            ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[i].ptr = 0;
        }
    }
}

void HitSwitchPirates2()
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        u32 on_switch = (*(u32*)0x8031EC38);
        if(on_switch != 0)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[0].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[0].ptr == on_switch) // drain water
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[0].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x435F0000;
                ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[0].collected = 1;
            }
        }
    }
}

void HitBallSwitchPirates2(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_2)
    {
        for(int i=0; i < 3; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[i].ptr == ptr &&
                i == 1) // gate
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x42000000;
                ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[i].collected = 1;
            } 
            if(ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[i].ptr == ptr &&
                i == 2) //ramp
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x430ACCC8;
                ap_memory.pc.worlds[AP_PIRATES_L2].switch_checks[i].collected = 1;
            }
 
        }
    }
}
