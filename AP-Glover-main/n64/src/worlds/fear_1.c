#include "fear_1.h"

bool fear1_coffins = false;
bool fear1_door = false;
bool fear1_dedend = false;
bool fear1_drawbridge = false;

void GaribInitFear1()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L1]; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribFear1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_1 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Above Electric Garib
            case 0x28:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[0].object_id = item_id;
                return;
            //Beachball Garibs
            case 0xB8:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[1].object_id = item_id;
                return;
            case 0xB6:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[2].object_id = item_id;
                return;
            case 0xB0:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[3].object_id = item_id;
                return;
            case 0xB4:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[4].object_id = item_id;
                return;
            case 0xB2:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[5].object_id = item_id;
                return;
            //Cleets Garibs
            case 0xBA:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[6].object_id = item_id;
                return;
            case 0xBF:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[7].object_id = item_id;
                return;
            case 0xBE:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[8].object_id = item_id;
                return;
            case 0xBD:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[9].object_id = item_id;
                return;
            case 0xBC:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[10].object_id = item_id;
                return;
            case 0xBB:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[11].object_id = item_id;
                return;
            //Coffin Garibs
            case 0x31:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[12].object_id = item_id;
                return;
            case 0x30:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[13].object_id = item_id;
                return;
            case 0x2F:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[14].object_id = item_id;
                return;
            case 0x2B:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[15].object_id = item_id;
                return;
            case 0x2A:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[16].object_id = item_id;
                return;
            case 0x32:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[17].object_id = item_id;
                return;
            //Dirt Hill Garibs
            case 0xA9:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[18].object_id = item_id;
                return;
            case 0xA7:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[19].object_id = item_id;
                return;
            case 0xA5:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[20].object_id = item_id;
                return;
            //Dropdown Garibs
            case 0x58:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[21].object_id = item_id;
                return;
            case 0x5A:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[22].object_id = item_id;
                return;
            case 0x59:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[23].object_id = item_id;
                return;
            case 0x5B:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[24].object_id = item_id;
                return;
            //Electric Garibs
            case 0xAB:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[25].object_id = item_id;
                return;
            case 0xAE:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[26].object_id = item_id;
                return;
            case 0xAD:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[27].object_id = item_id;
                return;
            case 0xAC:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[28].object_id = item_id;
                return;
            //Ghost Garibs
            case 0x3E:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[29].object_id = item_id;
                return;
            case 0x40:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[30].object_id = item_id;
                return;
            case 0x41:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[31].object_id = item_id;
                return;
            case 0x42:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[32].object_id = item_id;
                return;
            case 0x43:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[33].object_id = item_id;
                return;
            case 0x44:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[34].object_id = item_id;
                return;
            case 0x45:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[35].object_id = item_id;
                return;
            case 0x3F:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[36].object_id = item_id;
                return;
            //Glover Switch Garibs
            case 0xC2:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[37].object_id = item_id;
                return;
            case 0xC1:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[38].object_id = item_id;
                return;
            //Large Plank Garibs
            case 0x4B:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[39].object_id = item_id;
                return;
            case 0x4F:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[40].object_id = item_id;
                return;
            case 0x4E:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[41].object_id = item_id;
                return;
            case 0x4D:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[42].object_id = item_id;
                return;
            case 0x4C:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[43].object_id = item_id;
                return;
            //Left Ghost Ledge Garibs
            case 0x47:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[44].object_id = item_id;
                return;
            case 0x49:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[45].object_id = item_id;
                return;
            case 0x48:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[46].object_id = item_id;
                return;
            //Left Tower Garib
            case 0x36:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[47].object_id = item_id;
                return;
            //Right Ghost Ledge Garibs
            case 0x3A:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[48].object_id = item_id;
                return;
            case 0x3C:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[49].object_id = item_id;
                return;
            case 0x3B:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[50].object_id = item_id;
                return;
            //Right Tower Garib
            case 0x38:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[51].object_id = item_id;
                return;
            //Sky Platform Garibs
            case 0x5F:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[52].object_id = item_id;
                return;
            case 0x5D:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[53].object_id = item_id;
                return;
            case 0x60:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[54].object_id = item_id;
                return;
            case 0x5E:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[55].object_id = item_id;
                return;
            //Small Plank Garibs
            case 0xC4:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[56].object_id = item_id;
                return;
            case 0xC6:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[57].object_id = item_id;
                return;
            case 0xC5:
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[58].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribFear1Shiny()
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedFear1(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnFear1(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L1]; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedFear1() {
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L1]; i++)
        {
            collected += ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_FORTRESS_L1])
        {
            ap_memory.pc.worlds[AP_FORTRESS_L1].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitFear1()
{
    for(int i = 0; i < 7; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyFear1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_1 && 
        (obj_type == BAT || obj_type == CLEET || obj_type == KNIGHT || obj_type == WEEVIL || obj_type == WIND_UP))
    {    
        switch (item_id)
        {	
            //Bat
           case 0x116:
               ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[0].ptr = ptr;
               return;
           //Cleets
           case 0x160:
               ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[1].ptr = ptr;
               return;
           //Knights
           case 0x188:
               ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[2].ptr = ptr;
               return;
           case 0x1AD:
               ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[3].ptr = ptr;
               return;
           case 0x192:
               ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[4].ptr = ptr;
               return;
           //Weevil
           case 0x174:
               ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[5].ptr = ptr;
               return;
           //Wind-Up
           case 0x1C8:
               ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[6].ptr = ptr;
               return;
            default:
                return;
        }
    }
}

void DefeatedEnemyFear1(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        u16 found_id;
        for(int i = 0; i < 7; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L1]; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_FORTRESS_L1].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesFear1()
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        if(ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[1].ptr != 0) // Cleet
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[1].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[1].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xBF800000) //(-1 in float)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[1].collected = 1;
                    ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[1].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[6].ptr != 0) // Wind-up
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[6].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[6].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3160000) //(-150 in float)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[6].collected = 1;
                    ap_memory.pc.worlds[AP_FORTRESS_L1].enemy_checks[6].ptr = 0;
                }
            }
        }
    }
}


//Life

void LifeInitFear1()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L1].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeFear1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_1 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Above Electric Life
            case 0x26:
                ap_memory.pc.worlds[AP_FORTRESS_L1].life_checks[0].ptr = ptr;
                return;
            //Behind Tower Life
            case 0x34:
                ap_memory.pc.worlds[AP_FORTRESS_L1].life_checks[1].ptr = ptr;
                return;
            //Sky Platform Life 1
            case 0x71:
                ap_memory.pc.worlds[AP_FORTRESS_L1].life_checks[2].ptr = ptr;
                return;
            //Sky Platform Life 2
            case 0x73:
                ap_memory.pc.worlds[AP_FORTRESS_L1].life_checks[3].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeFear1(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L1].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_FORTRESS_L1].life_checks[i].ptr = 0;
            }
        }
    }
}

//Checkpoint

void CheckpointInitFear1()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointFear1(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x26:
                ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            //Checkpoint 2
            case 0x78:
                ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[1].warp_ptr = 0x8030E8F0;
                return;
            //Checkpoint 3
            case 0x1D8:
                ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[2].warp_ptr = 0x802FAFD0;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointFear1()
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointFear1()
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 3; i++)
            {
                if(i == ap_memory.pc.worlds[AP_FORTRESS_L1].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPFear1(u32 warp_ptr)
{
    for(int i = 0;i < 3; i++)
    {
        if(ap_memory.pc.worlds[AP_FORTRESS_L1].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_FORTRESS_L1_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_FORTRESS_L1_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_FORTRESS_L1_CHECKPOINT3] > 0)
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

void SwitchInitFear1()
{
    for(int i = 0; i < 5; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchFear1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_1 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Coffin Glover Switch
            case 0x14C:
                ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[0].ptr = ptr;
                fear1_drawbridge = false;
                return;
            //Dead-End Glover Switch
            case 0xF0:
                ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[1].ptr = ptr;
                fear1_coffins = false;
                return;
            //Left Target
            case 0x178:
                ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[2].ptr = ptr;
                fear1_door = false;
                return;
            //Push Blocks
            // offset 3 is set when ALL blocks are set
            //Right Target
            case 0x17E:
                ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[4].ptr = ptr;
                return;
            //Push Blocks
            case 0x135: //closest
                ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[5].ptr = ptr;
                fear1_dedend = false;
                return;
            case 0x131: //left
                ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[6].ptr = ptr;
                return;
            case 0x12D: //furthest
                ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[7].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsFear1()
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[1].ptr != 0) // coffins
            {
                u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[1].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!fear1_coffins && ap_memory.pc.items[AP_FORTRESS_L1_COFFIN])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0xC2A8332F;
                        fear1_coffins = true;
                    }
                    if(!ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[1].collected 
                        && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0xC29ECCCA;
                    }
                    // if(!ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[0].collected && (*(u16*)door_open_offset) == 0xFF9B)
                    // {
                    //     (*(u16*)door_open_offset) == 0xFFFE;
                    // }
                }
            }
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[2].ptr != 0 && ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[4].ptr != 0) // Door
            {
                u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[2].ptr + 0x00BC; //X axis
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);

                u32 position_addr1 = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[4].ptr + 0x00BC; //X Axis
                u32 gate_ptr_offset1 = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[4].ptr + 0x038;
                u32 gate_ptr1 = (*(u32*)gate_ptr_offset1);

                if(gate_ptr > 0x80000000 && gate_ptr1 > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    u32 door_open_offset1 = gate_ptr1 + 0x0050;
                    if(!fear1_door && ap_memory.pc.items[AP_FORTRESS_L1_PROGRESSIVE_DOORWAY_KEY] >= 2)
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0xC55B4006; // orig: C55AD4D0

                        (*(u16*)door_open_offset1) = 0x0001;
                        (*(u32*)position_addr1) = 0xC55B3F9B; //orig: C55AE603
                        fear1_door = true;
                    }
                    if(!ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[2].collected
                        && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                    {
                        (*(u16*)door_open_offset) = 0xFFFD;
                        (*(u32*)position_addr) = 0xC55AD4D0;
                    }
                    if(!ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[4].collected
                        && (*(u16*)door_open_offset1) == 0xFF9B) // Switch not yet collected
                    {
                        (*(u16*)door_open_offset1) = 0xFFFD;
                        (*(u32*)position_addr) = 0xC55AE603;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[5].ptr != 0) // Furthest Block
            {
                u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[5].ptr + 0x00B4; //Z axis
                u32 pos = (*(u32*)position_addr);
                if(pos == 0x450389FA)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[5].collected = true;
                }       
            }
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[6].ptr != 0) // Left Block
            {
                u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[6].ptr + 0x00B4; //Z axis
                u32 pos = (*(u32*)position_addr);
                if(pos == 0x44F4D366)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[6].collected = true;
                }       
            }
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[7].ptr != 0) // Closest Block
            {
                u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[7].ptr + 0x00B4; //Z axis
                u32 pos = (*(u32*)position_addr);
                if(pos == 0x44E27B16)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[7].collected = true;
                }       
            }
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[3].collected == false)
            {
                if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[5].collected && ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[6].collected &&
                ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[7].collected)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[3].collected = true;
                }
            }
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[0].ptr != 0) // bridge
            {
                u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!fear1_drawbridge && ap_memory.pc.items[AP_FORTRESS_L1_DRAWBRIDGE])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0xC1F80000;
                        fear1_drawbridge = true;
                    }
                    if(!ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[0].collected 
                        && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0xC1D80000;
                    }
                    // if(!ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[0].collected && (*(u16*)door_open_offset) == 0xFF9B)
                    // {
                    //     (*(u16*)door_open_offset) == 0xFFFE;
                    // }
                }
            }
        }
    } 
    else
    {
        for(int i = 0; i < 6; i++)
        {
            ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr = 0;
        }
    }
}

void PuzzleEventsFear1(u32 ptr)
{
    if(!fear1_dedend && ap_memory.pc.items[AP_FORTRESS_L1_COFFIN_LIGHTNING])
    {
        fear1_dedend = true;
        return gvr_fn_activate_puzzle(0x8030E620);
    }
    return gvr_fn_activate_puzzle(ptr);
}


void HitSwitchFear1()
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        u32 on_switch = (*(u32*)0x80314258);
        if(on_switch != 0)
        {
            for(int i=0; i < 5; i++)
            {
                if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr == on_switch 
                    && i == 1)
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0xC2A8332F;
                    ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr == on_switch 
                    && i == 0)
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0xC1F80000;
                    ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].collected = 1;
                }
            }
        }
    }
}

void HitBallSwitchFear1(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        for(int i=0; i < 5; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr == ptr &&
                i == 2) //left target
            {
                u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr + 0x00BC; //X axis
                (*(u32*)position_addr) = 0xC55B4006;
                ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr == ptr &&
                i == 4) //right target
            {
                u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr + 0x00BC; //X axis
                (*(u32*)position_addr) = 0xC55B3F9B;
                ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].collected = 1;
            }
            // if(ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr == ptr &&
            //     i == 2) //platform 2
            // {
            //     u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].ptr + 0x00B8;
            //     (*(u32*)position_addr) = 0xC3B2F324;
            //     ap_memory.pc.worlds[AP_FORTRESS_L1].switch_checks[i].collected = 1;
            // }
        }
    }
}

// //Potions

void PotionInitFear1()
{
    for(int i = 0; i < 6; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L1].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionFear1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_1 && obj_type == 0x0100)
    {
        switch (item_id)
        {
            //Beachball
            case 0xFB:
                ap_memory.pc.worlds[AP_FORTRESS_L1].potion_checks[0].ptr = ptr;
                return;
            //Dirt Hill Helicopter Potion
            case 0x124:
                ap_memory.pc.worlds[AP_FORTRESS_L1].potion_checks[1].ptr = ptr;
                return;
            //Dropdown Boomerang Ball
            case 0x1D3:
                ap_memory.pc.worlds[AP_FORTRESS_L1].potion_checks[2].ptr = ptr;
                return;
            //Frog Potion
            case 0x11B:
                ap_memory.pc.worlds[AP_FORTRESS_L1].potion_checks[3].ptr = ptr;
                return;
            //Ramp Boomerang Ball
            case 0x77:
                ap_memory.pc.worlds[AP_FORTRESS_L1].potion_checks[4].ptr = ptr;
                return;
            //Sky Platform Helicopter Potion
            case 0x1E0:
                ap_memory.pc.worlds[AP_FORTRESS_L1].potion_checks[5].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void MonitorPotionFear1()
{
    if(gvr_current_map == MAP_FORTRESS_1)
    {
        for(int i = 0; i < 6; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L1].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_FORTRESS_L1].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L1].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_FORTRESS_L1].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}
