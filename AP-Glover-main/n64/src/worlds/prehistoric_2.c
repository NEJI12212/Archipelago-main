#include "prehistoric_2.h"

bool pre2_platform2 = false;
bool pre2_lower_switches = false;

void GaribInitPrehistoric2()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L2]; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribPrehistoric2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_2 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //After Valley Garibs
            case 0x4A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[0].object_id = item_id;
                return;
            case 0x4D:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[1].object_id = item_id;
                return;
            case 0x4C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[2].object_id = item_id;
                return;
            case 0x4B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[3].object_id = item_id;
                return;
            //Bottom Avalanche Garibs
            case 0x87:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[4].object_id = item_id;
                return;
            case 0x88:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[5].object_id = item_id;
                return;
            case 0x89:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[6].object_id = item_id;
                return;
            //Island Garibs
            case 0x7A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[7].object_id = item_id;
                return;
            case 0x7C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[8].object_id = item_id;
                return;
            case 0x7B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[9].object_id = item_id;
                return;
            case 0x7D:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[10].object_id = item_id;
                return;
            //Lavafall Garib
            case 0xCF:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[11].object_id = item_id;
                return;
            //Middle Avalanche Garibs
            case 0x7F:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[12].object_id = item_id;
                return;
            case 0x81:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[13].object_id = item_id;
                return;
            case 0x80:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[14].object_id = item_id;
                return;
            //Nook Garibs
            case 0xE0:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[15].object_id = item_id;
                return;
            case 0xE1:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[16].object_id = item_id;
                return;
            //Push Wall Garibs
            case 0xE4:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[17].object_id = item_id;
                return;
            case 0xE5:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[18].object_id = item_id;
                return;
            case 0xE3:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[19].object_id = item_id;
                return;
            case 0xE6:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[20].object_id = item_id;
                return;
            case 0xE7:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[21].object_id = item_id;
                return;
            //Raptor Garibs
            case 0x11E:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[22].object_id = item_id;
                return;
            case 0x11D:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[23].object_id = item_id;
                return;
            case 0x11C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[24].object_id = item_id;
                return;
            case 0x11F:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[25].object_id = item_id;
                return;
            case 0x120:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[26].object_id = item_id;
                return;
            case 0x11B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[27].object_id = item_id;
                return;
            case 0x122:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[28].object_id = item_id;
                return;
            case 0x121:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[29].object_id = item_id;
                return;
            //Raptor Tree Garibs
            case 0xEB:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[30].object_id = item_id;
                return;
            case 0xEA:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[31].object_id = item_id;
                return;
            case 0xEC:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[32].object_id = item_id;
                return;
            case 0xE9:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[33].object_id = item_id;
                return;
            //Sign Garibs
            case 0x75:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[34].object_id = item_id;
                return;
            case 0x77:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[35].object_id = item_id;
                return;
            case 0x76:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[36].object_id = item_id;
                return;
            case 0x78:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[37].object_id = item_id;
                return;
            //Skull Garib
            case 0xC7:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[38].object_id = item_id;
                return;
            //Slope Garibs
            case 0xDC:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[39].object_id = item_id;
                return;
            case 0xDD:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[40].object_id = item_id;
                return;
            case 0xDE:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[41].object_id = item_id;
                return;
            case 0xDB:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[42].object_id = item_id;
                return;
            //Spawn Garibs
            case 0x53:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[43].object_id = item_id;
                return;
            case 0x4F:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[44].object_id = item_id;
                return;
            case 0x51:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[45].object_id = item_id;
                return;
            case 0xEE:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[46].object_id = item_id;
                return;
            case 0xEF:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[47].object_id = item_id;
                return;
            //Switches Garibs
            case 0xC9:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[48].object_id = item_id;
                return;
            case 0xCA:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[49].object_id = item_id;
                return;
            case 0xCB:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[50].object_id = item_id;
                return;
            case 0xCC:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[51].object_id = item_id;
                return;
            case 0xCD:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[52].object_id = item_id;
                return;
            //Tilt Garibs
            case 0xD1:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[53].object_id = item_id;
                return;
            case 0xD3:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[54].object_id = item_id;
                return;
            case 0xD7:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[55].object_id = item_id;
                return;
            case 0xD5:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[56].object_id = item_id;
                return;
            case 0xD9:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[57].object_id = item_id;
                return;
            //Top Avalanche Garibs
            case 0x83:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[58].object_id = item_id;
                return;
            case 0x85:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[59].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[59].object_id = item_id;
                return;
            case 0x84:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[60].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[60].object_id = item_id;
                return;
            //Tracey Garibs
            case 0x2C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[61].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[61].object_id = item_id;
                return;
            case 0x31:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[62].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[62].object_id = item_id;
                return;
            case 0x30:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[63].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[63].object_id = item_id;
                return;
            case 0x2D:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[64].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[64].object_id = item_id;
                return;
            //Trees Garib
            case 0xC5:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[65].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[65].object_id = item_id;
                return;
            //Valley Garibs
            case 0xBE:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[66].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[66].object_id = item_id;
                return;
            case 0xC1:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[67].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[67].object_id = item_id;
                return;
            case 0xBA:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[68].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[68].object_id = item_id;
                return;
            case 0xBB:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[69].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[69].object_id = item_id;
                return;
            case 0xBC:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[70].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[70].object_id = item_id;
                return;
            case 0xBD:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[71].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[71].object_id = item_id;
                return;
            case 0xC0:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[72].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[72].object_id = item_id;
                return;
            case 0xB9:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[73].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[73].object_id = item_id;
                return;
            case 0xC3:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[74].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[74].object_id = item_id;
                return;
            case 0xC2:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[75].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[75].object_id = item_id;
                return;
            case 0xBF:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[76].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[76].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribPrehistoric2Shiny()
{
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedPrehistoric2(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnPrehistoric2(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedPrehistoric2() {
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L2]; i++)
        {
            collected += ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L2])
        {
            ap_memory.pc.worlds[AP_PREHISTORIC_L2].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitPrehistoric2()
{
    for(int i = 0; i < 7; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyPrehistoric2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_2 && 
        (obj_type == WIND_UP || obj_type == RAPTOR || obj_type == TRACY))
    {    
        switch (item_id)
        {
            //Lavashore Raptor
            case 0x1D2:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[0].ptr = ptr;
                return;
            //Slope Wind-Up
            case 0x1FF:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[1].ptr = ptr;
                return;
            //Traceys
            case 0x170:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[2].ptr = ptr;
                return;
            case 0x182:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[3].ptr = ptr;
                return;
            //Traceys Wind-Up
            case 0x219:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[4].ptr = ptr;
                return;
            //Tree Raptor
            case 0x19B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[5].ptr = ptr;
                return;
            //Valley Wind-Up
            case 0x1F4:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[6].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyPrehistoric2(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        u16 found_id;
        for(int i = 0; i < 7; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}


//Life

void LifeInitPrehistoric2()
{
    for(int i = 0; i < 5; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L2].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifePrehistoric2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_2 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Bottom Valley Life
            case 0x60:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].life_checks[0].ptr = ptr;
                return;
            //Goal Life
            case 0x57:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].life_checks[1].ptr = ptr;
                return;
            //Push Wall Life
            case 0x5E:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].life_checks[2].ptr = ptr;
                return;
            //Switches Life
            case 0x55:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].life_checks[3].ptr = ptr;
                return;
            //Top Valley Life
            case 0x33:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].life_checks[4].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifePrehistoric2(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        for(int i = 0; i < 5; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L2].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].life_checks[i].ptr = 0;
            }
        }
    }
}

//Checkpoint

void CheckpointInitPrehistoric2()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointPrehistoric2(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        switch (item_id)
        {
            //Checkpoint 1
		case 0x28:
			ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[0].ptr = ptr;
            ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
			return;
		//Checkpoint 2
		case 0x169:
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[1].ptr == 0) // 2
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[1].warp_ptr = 0x8030E7D0;
            }
            else // 3
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[2].warp_ptr = 0x8030E650;
            }
			return;
		//Checkpoint 4
		case 0x16C:
			ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[3].ptr = ptr;
            ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[3].warp_ptr = 0x8030E410;
			return;
            default:
                return;
        }
    }
}

void MonitorCheckpointPrehistoric2()
{
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointPrehistoric2()
{
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 4; i++)
            {
                if(i == ap_memory.pc.worlds[AP_PREHISTORIC_L2].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPPrehistoric2(u32 warp_ptr)
{
    for(int i = 0;i < 4; i++)
    {
        if(ap_memory.pc.worlds[AP_PREHISTORIC_L2].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_PREHISTORIC_L2_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_PREHISTORIC_L2_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_PREHISTORIC_L2_CHECKPOINT3] > 0)
            {
                return 0;
            }
            else if(i == 3 && ap_memory.pc.items[AP_PREHISTORIC_L2_CHECKPOINT4] > 0)
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

void SwitchInitPrehistoric2()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchPrehistoric2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_2 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Glover Switch
            case 0x1BD:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[0].ptr = ptr;
                pre2_lower_switches = false;
                return;
            //Lavafall Ball Switch
            case 0x1AB:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[1].ptr = ptr;
                return;
            //Switches Ball Switch
            case 0x1B6:
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[2].ptr = ptr;
                pre2_platform2 = false;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsPrehistoric2()
{
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[1].ptr != 0) // platform 1
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[1].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[1].collected 
                    && ((*(u16*)door_open_offset) == 0xFFFD || (*(u16*)door_open_offset) == 0xFF9B)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0xC3A9832B;
                }
                if(!ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[2].collected && (*(u16*)door_open_offset) == 0xFF9B)
                {
                    (*(u16*)door_open_offset) = 0xFFFD;
                }
            }   
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[0].ptr != 0) // lower switches
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pre2_lower_switches && ap_memory.pc.items[AP_PREHISTORIC_L2_LOWER_BALL_SWITCH])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0xC37F0000;
                    //(*(u32*)position_addr) = 0xC3B18000;
                    pre2_lower_switches = true;
                }
                if(!ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[0].collected 
                    && ((*(u16*)door_open_offset) == 0xFFFE || (*(u16*)door_open_offset) == 0xFF9B)) // Switch not yet collected
                {
                    if(ap_memory.pc.items[AP_PREHISTORIC_L2_LOWER_BALL_SWITCH])
                    {
                        (*(u32*)position_addr) = 0xC3B00000;
                    }
                    else
                    {
                        (*(u32*)position_addr) = 0xC37B6C9B;
                    }
                }
                if(!ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[0].collected && (*(u16*)door_open_offset) == 0xFF9B)
                {
                    (*(u16*)door_open_offset) == 0xFFFE;
                }
            }
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[2].ptr != 0) // platform 2
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[2].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pre2_platform2 && ap_memory.pc.items[AP_PREHISTORIC_L2_PLATFORM_2])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    if(ap_memory.pc.items[AP_PREHISTORIC_L2_LOWER_BALL_SWITCH])
                    {
                        (*(u32*)position_addr) = 0xC3B2F324;
                    }
                    else
                    {
                        (*(u32*)position_addr) = 0xC380F324;
                    }
                    pre2_platform2 = true;
                }
                if(!ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[2].collected 
                    && ((*(u16*)door_open_offset) == 0xFFFD || (*(u16*)door_open_offset) == 0xFF9B)) // Switch not yet collected
                {
                    if(ap_memory.pc.items[AP_PREHISTORIC_L2_LOWER_BALL_SWITCH])
                    {
                        (*(u32*)position_addr) = 0xC3B17324;
                    }
                    else
                    {
                        (*(u32*)position_addr) = 0xC37EE648;
                    }
                }
                if(!ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[2].collected && (*(u16*)door_open_offset) == 0xFF9B)
                {
                    (*(u16*)door_open_offset) = 0xFFFD;
                }
            }     
        }
    } 
    else
    {
        for(int i = 0; i < 3; i++)
        {
            ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].ptr = 0;
        }
    }
}

void HitSwitchPrehistoric2()
{
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        u32 on_switch = (*(u32*)0x80321DC8);
        if(on_switch != 0)
        {
            for(int i=0; i < 1; i++)
            {
                if(ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].ptr == on_switch 
                    && i == 0)
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].ptr + 0x00B8;
                    if(ap_memory.pc.items[AP_PREHISTORIC_L2_LOWER_BALL_SWITCH])
                    {
                        (*(u32*)position_addr) = 0xC3B18000;
                    }
                    else
                    {
                        (*(u32*)position_addr) = 0xC37F0000;
                    }
                    ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].collected = 1;
                }
            }
        }
    }
}

void HitBallSwitchPrehistoric2(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_2)
    {
        for(int i=0; i < 3; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].ptr == ptr &&
                i == 1) //platform 1
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0xC3AB032B;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].ptr == ptr &&
                i == 2) //platform 2
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0xC3B2F324;
                ap_memory.pc.worlds[AP_PREHISTORIC_L2].switch_checks[i].collected = 1;
            }
        }
    }
}
