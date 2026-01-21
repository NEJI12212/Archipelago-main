#include "prehistoric_1.h"

bool pre1_garib_spawn = false;
u8 pre1_garib_timer = 0;


void GaribInitPrehistoric1()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L1]; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribPrehistoric1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_1 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Alcove Garibs
            case 0xDE:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[0].object_id = item_id;
                return;
            case 0xDF:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[1].object_id = item_id;
                return;
            case 0xE0:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[2].object_id = item_id;
                return;
            case 0xE1:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[3].object_id = item_id;
                return;
            case 0xD6:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[4].object_id = item_id;
                return;
            case 0xDB:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[5].object_id = item_id;
                return;
            case 0xDC:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[6].object_id = item_id;
                return;
            case 0xDA:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[7].object_id = item_id;
                return;
            case 0xD9:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[8].object_id = item_id;
                return;
            case 0xD8:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[9].object_id = item_id;
                return;
            case 0xD7:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[10].object_id = item_id;
                return;
            case 0xDD:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[11].object_id = item_id;
                return;
            //Big Island Garibs
            case 0xFA:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[12].object_id = item_id;
                return;
            case 0xFF:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[13].object_id = item_id;
                return;
            case 0xFD:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[14].object_id = item_id;
                return;
            case 0xFC:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[15].object_id = item_id;
                return;
            case 0xFB:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[16].object_id = item_id;
                return;
            case 0xFE:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[17].object_id = item_id;
                return;
            case 0x100:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[18].object_id = item_id;
                return;
            case 0x101:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[19].object_id = item_id;
                return;
            //Cliff Bottom Garibs
            case 0x10F:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[20].object_id = item_id;
                return;
            case 0x111:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[21].object_id = item_id;
                return;
            case 0x110:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[22].object_id = item_id;
                return;
            //Dino Garibs
            case 0x4B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[23].object_id = item_id;
                return;
            case 0x50:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[24].object_id = item_id;
                return;
            case 0x4F:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[25].object_id = item_id;
                return;
            case 0x4E:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[26].object_id = item_id;
                return;
            case 0x4D:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[27].object_id = item_id;
                return;
            case 0x4C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[28].object_id = item_id;
                return;
            //Double Ice Wall Garibs
            case 0x3D:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[29].object_id = item_id;
                return;
            case 0x3E:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[30].object_id = item_id;
                return;
            //Frozen Ball Garibs
            case 0x107:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[31].object_id = item_id;
                return;
            case 0x109:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[32].object_id = item_id;
                return;
            case 0x108:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[33].object_id = item_id;
                return;
            //Goal Garibs
            case 0x3A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[34].object_id = item_id;
                return;
            case 0x3B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[35].object_id = item_id;
                return;
            //Hanging Garibs
            case 0x103:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[36].object_id = item_id;
                return;
            case 0x105:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[37].object_id = item_id;
                return;
            case 0x104:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[38].object_id = item_id;
                return;
            //Ice Bridge Garibs
            case 0x29:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[39].object_id = item_id;
                return;
            case 0x2A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[40].object_id = item_id;
                return;
            case 0x2E:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[41].object_id = item_id;
                return;
            case 0x2F:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[42].object_id = item_id;
                return;
            case 0x30:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[43].object_id = item_id;
                return;
            case 0x31:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[44].object_id = item_id;
                return;
            case 0x32:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[45].object_id = item_id;
                return;
            case 0x28:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[46].object_id = item_id;
                return;
            //Ice Cave Garibs
            case 0xF0:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[47].object_id = item_id;
                return;
            case 0xEE:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[48].object_id = item_id;
                return;
            case 0xED:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[49].object_id = item_id;
                return;
            case 0xEC:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[50].object_id = item_id;
                return;
            case 0xEF:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[51].object_id = item_id;
                return;
            case 0xF1:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[52].object_id = item_id;
                return;
            case 0xF2:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[53].object_id = item_id;
                return;
            case 0xEB:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[54].object_id = item_id;
                return;
            //Ice Face Garibs
            case 0x10B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[55].object_id = item_id;
                return;
            case 0x10D:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[56].object_id = item_id;
                return;
            case 0x10C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[57].object_id = item_id;
                return;
            //Lake Path Garibs
            case 0x25:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[58].object_id = item_id;
                return;
            case 0x26:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[59].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[59].object_id = item_id;
                return;
            //Left Below Ice Garibs
            case 0xE3:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[60].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[60].object_id = item_id;
                return;
            case 0xE4:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[61].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[61].object_id = item_id;
                return;
            case 0xE5:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[62].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[62].object_id = item_id;
                return;
            //Lower Cliffside Garibs
            case 0x38:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[63].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[63].object_id = item_id;
                return;
            case 0x37:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[64].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[64].object_id = item_id;
                return;
            //Right Below Ice Garibs
            case 0xE7:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[65].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[65].object_id = item_id;
                return;
            case 0xE9:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[66].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[66].object_id = item_id;
                return;
            case 0xE8:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[67].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[67].object_id = item_id;
                return;
            //Small Island Garibs
            case 0xF4:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[68].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[68].object_id = item_id;
                return;
            case 0xF6:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[69].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[69].object_id = item_id;
                return;
            case 0xF5:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[70].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[70].object_id = item_id;
                return;
            case 0xF8:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[71].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[71].object_id = item_id;
                return;
            case 0xF7:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[72].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[72].object_id = item_id;
                return;
            //Snowball Hill Garibs
            case 0xD0:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[73].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[73].object_id = item_id;
                return;
            case 0xD1:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[74].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[74].object_id = item_id;
                return;
            case 0xD4:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[75].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[75].object_id = item_id;
                return;
            case 0xCF:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[76].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[76].object_id = item_id;
                return;
            //Upper Cliffside Garibs
            case 0x34:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[77].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[77].object_id = item_id;
                return;
            case 0x35:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[78].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[78].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribPrehistoric1Shiny()
{
    if(gvr_current_map == MAP_PREHISTORIC_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedPrehistoric1(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnPrehistoric1(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L1]; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedPrehistoric1() {
    if(gvr_current_map == MAP_PREHISTORIC_1)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L1]; i++)
        {
            collected += ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L1])
        {
            ap_memory.pc.worlds[AP_PREHISTORIC_L1].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitPrehistoric1()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyPrehistoric1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_1 && (obj_type == WIND_UP || obj_type == RAPTOR))
    {    
        switch (item_id)
        {
            //Raptor
            case 0x14C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[0].ptr = ptr;
                return;
            //Wind-Up
            case 0x162:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[1].ptr = ptr;
                pre1_garib_timer = 0xE1;
                pre1_garib_spawn = false;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyPrehistoric1(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_1)
    {
        u16 found_id;
        for(int i = 0; i < 2; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L1]; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesPrehistoric1()
{
    if(gvr_current_map == MAP_PREHISTORIC_1)
    {
        if(ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[0].ptr != 0) // rapter
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[0].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[0].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xBF800000) //(-1 in float)
                {
                    ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[0].collected = 1;
                    ap_memory.pc.worlds[AP_PREHISTORIC_L1].enemy_checks[0].ptr = 0;
                }
            }
        }
    }
}


//Life

void LifeInitPrehistoric1()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L1].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifePrehistoric1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_1 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Alcove Life 1
            case 0x45:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].life_checks[0].ptr = ptr;
                return;
            //Alcove Life 2
            case 0x47:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].life_checks[1].ptr = ptr;
                return;
            //Ice Cave Life
            case 0x49:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].life_checks[2].ptr = ptr;
                return;
            //Ice Face Life
            case 0x43:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].life_checks[3].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifePrehistoric1(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_1)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L1].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].life_checks[i].ptr = 0;
            }
        }
    }
}

//Checkpoint

void CheckpointInitPrehistoric1()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointPrehistoric1(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_1)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x25:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            //Checkpoint 2
            case 0xB0:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[1].warp_ptr = 0x80315A50;
                return;
            //Checkpoint 3
            case 0xB7:
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[2].warp_ptr = 0x80311140;
                return;
                default:
                    return;
            }
    }
}

void MonitorCheckpointPrehistoric1()
{
    if(gvr_current_map == MAP_PREHISTORIC_1)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointPrehistoric1()
{
    if(gvr_current_map == MAP_PREHISTORIC_1)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 3; i++)
            {
                if(i == ap_memory.pc.worlds[AP_PREHISTORIC_L1].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPPrehistoric1(u32 warp_ptr)
{
    for(int i = 0;i < 3; i++)
    {
        if(ap_memory.pc.worlds[AP_PREHISTORIC_L1].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_PREHISTORIC_L1_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_PREHISTORIC_L1_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_PREHISTORIC_L1_CHECKPOINT3] > 0)
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

// Events
void SwitchInitPrehistoric1()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L1].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void MonitorEventsPrehistoric1()
{
    if(gvr_current_map == MAP_PREHISTORIC_1)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(pre1_garib_timer > 0x00)
            {
                pre1_garib_timer--;
            }
            if(!pre1_garib_spawn && pre1_garib_timer == 0 && ap_memory.pc.items[AP_PREHISTORIC_L1_LIFE_DROP])
            {
                gvr_fn_spawn_garibgroup(1,0);
                pre1_garib_spawn = true;
            }   
        }
    } 
}

void SwitchIciclesPrehistoric1()
{
	ap_memory.pc.worlds[AP_PREHISTORIC_L1].switch_checks[0].collected = 1;
    return;
}
