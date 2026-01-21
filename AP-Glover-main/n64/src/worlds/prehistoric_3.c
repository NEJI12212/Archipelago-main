#include "prehistoric_3.h"

bool pre3_spin_stones = false;
bool pre3_float_platforms = false;
bool pre3_spin_platforms = false;
bool pre3_switch_pressed;
bool pre3_garib_spawn1 = false;
bool pre3_garib_spawn2 = false;
bool pre3_elevator = false;

bool pre3_monolitha = false;
bool pre3_monolithb = false;
bool pre3_monolithc = false;
bool pre3_monolithd = false;
u8 pre3_monolith_lowered = 0;


u8 pre3_switch_timer = 0;
u8 pre3_garib_timer = 0;
u8 pre3_monolith_timer = 0;
u8 pre3_event_timer = 0;


void GaribInitPrehistoric3()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L3]; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribPrehistoric3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_3 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Cave Garibs
            case 0x85:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[0].object_id = item_id;
                return;
            case 0x88:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[1].object_id = item_id;
                return;
            case 0x87:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[2].object_id = item_id;
                return;
            case 0x86:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[3].object_id = item_id;
                return;
            case 0x8B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[4].object_id = item_id;
                return;
            case 0x8A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[5].object_id = item_id;
                return;
            case 0x89:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[6].object_id = item_id;
                return;
            //Circle Lava Garibs
            case 0x164:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[7].object_id = item_id;
                return;
            case 0x163:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[8].object_id = item_id;
                return;
            case 0x162:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[9].object_id = item_id;
                return;
            case 0x169:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[10].object_id = item_id;
                return;
            case 0x168:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[11].object_id = item_id;
                return;
            case 0x167:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[12].object_id = item_id;
                return;
            case 0x166:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[13].object_id = item_id;
                return;
            case 0x165:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[14].object_id = item_id;
                return;
            //Flying Lava Garibs
            case 0x3B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[15].object_id = item_id;
                return;
            case 0x39:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[16].object_id = item_id;
                return;
            case 0x37:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[17].object_id = item_id;
                return;
            //Grass Ring Garibs
            case 0x141:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[18].object_id = item_id;
                return;
            case 0x149:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[19].object_id = item_id;
                return;
            case 0x14A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[20].object_id = item_id;
                return;
            case 0x14B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[21].object_id = item_id;
                return;
            case 0x14C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[22].object_id = item_id;
                return;
            case 0x14D:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[23].object_id = item_id;
                return;
            case 0x14E:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[24].object_id = item_id;
                return;
            case 0x14F:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[25].object_id = item_id;
                return;
            case 0x142:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[26].object_id = item_id;
                return;
            case 0x143:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[27].object_id = item_id;
                return;
            case 0x144:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[28].object_id = item_id;
                return;
            case 0x145:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[29].object_id = item_id;
                return;
            case 0x146:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[30].object_id = item_id;
                return;
            case 0x147:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[31].object_id = item_id;
                return;
            case 0x148:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[32].object_id = item_id;
                return;
            //Lava Ledge Garibs
            case 0x16C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[33].object_id = item_id;
                return;
            case 0x16D:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[34].object_id = item_id;
                return;
            case 0x16E:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[35].object_id = item_id;
                return;
            case 0x16F:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[36].object_id = item_id;
                return;
            case 0x170:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[37].object_id = item_id;
                return;
            case 0x171:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[38].object_id = item_id;
                return;
            case 0x172:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[39].object_id = item_id;
                return;
            case 0x173:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[40].object_id = item_id;
                return;
            case 0x174:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[41].object_id = item_id;
                return;
            case 0x16B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[42].object_id = item_id;
                return;
            //Love Tree Garibs
            case 0x59:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[43].object_id = item_id;
                return;
            case 0x5C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[44].object_id = item_id;
                return;
            case 0x5F:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[45].object_id = item_id;
                return;
            case 0x5E:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[46].object_id = item_id;
                return;
            case 0x5D:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[47].object_id = item_id;
                return;
            case 0x58:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[48].object_id = item_id;
                return;
            case 0x5B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[49].object_id = item_id;
                return;
            case 0x5A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[50].object_id = item_id;
                return;
            //Lower Grass Ledge Garibs
            case 0x13F:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[51].object_id = item_id;
                return;
            case 0x13E:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[52].object_id = item_id;
                return;
            //Tracey Garibs
            case 0x155:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[53].object_id = item_id;
                return;
            case 0x154:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[54].object_id = item_id;
                return;
            case 0x153:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[55].object_id = item_id;
                return;
            case 0x152:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[56].object_id = item_id;
                return;
            case 0x151:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[57].object_id = item_id;
                return;
            case 0x160:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[58].object_id = item_id;
                return;
            case 0x15F:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[59].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[59].object_id = item_id;
                return;
            case 0x15E:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[60].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[60].object_id = item_id;
                return;
            case 0x15D:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[61].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[61].object_id = item_id;
                return;
            case 0x15C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[62].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[62].object_id = item_id;
                return;
            case 0x15B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[63].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[63].object_id = item_id;
                return;
            case 0x15A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[64].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[64].object_id = item_id;
                return;
            case 0x159:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[65].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[65].object_id = item_id;
                return;
            case 0x158:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[66].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[66].object_id = item_id;
                return;
            case 0x157:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[67].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[67].object_id = item_id;
                return;
            case 0x156:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[68].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[68].object_id = item_id;
                return;
            //Turning Stones Garibs
            case 0x2E:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[69].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[69].object_id = item_id;
                return;
            case 0x2A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[70].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[70].object_id = item_id;
                return;
            case 0x33:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[71].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[71].object_id = item_id;
                return;
            case 0x2C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[72].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[72].object_id = item_id;
                return;
            case 0x35:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[73].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[73].object_id = item_id;
                return;
            //Upper Grass Ledge Garibs
            case 0x13B:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[74].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[74].object_id = item_id;
                return;
            case 0x13C:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[75].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[75].object_id = item_id;
                return;
            case 0x13A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[76].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[76].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribPrehistoric3Shiny()
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedPrehistoric3(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnPrehistoric3(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedPrehistoric3() {
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L3]; i++)
        {
            collected += ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L3])
        {
            ap_memory.pc.worlds[AP_PREHISTORIC_L3].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitPrehistoric3()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L3].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyPrehistoric3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_3 && 
        (obj_type == WIND_UP || obj_type == TRACY))
    {    
        switch (item_id)
        {	
            //Grass Ring Wind-Up
            case 0x1C6:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].enemy_checks[0].ptr = ptr;
                return;
            //Monolith Wind-Ups
            case 0x224:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].enemy_checks[1].ptr = ptr;
                return;
            case 0x238:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].enemy_checks[2].ptr = ptr;
                return;
            //Tracey
            case 0x1B8:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].enemy_checks[3].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyPrehistoric3(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        u16 found_id;
        for(int i = 0; i < 4; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_PREHISTORIC_L3].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}


//Life

void LifeInitPrehistoric3()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L3].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifePrehistoric3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_3 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Cave Life
            case 0x46:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].life_checks[0].ptr = ptr;
                return;
            //Love Tree Life
            case 0x42:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].life_checks[1].ptr = ptr;
                return;
            //Lower Grass Ledge Life
            case 0x44:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].life_checks[2].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifePrehistoric3(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L3].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].life_checks[i].ptr = 0;
            }
        }
    }
}

//Checkpoint

void CheckpointInitPrehistoric3()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointPrehistoric3(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x2A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            //Checkpoint 2
            case 0xD8:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[1].warp_ptr = 0x8031CFB0;
                return;
            //Checkpoint 3
            case 0x210:
                if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[2].ptr == 0) // 3
                {
                    ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[2].ptr = ptr;
                    ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[2].warp_ptr = 0x80305B10;
                }
                else // 4
                {
                    ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[3].ptr = ptr;
                    ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[3].warp_ptr = 0x80305990;
                }
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointPrehistoric3()
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointPrehistoric3()
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 4; i++)
            {
                if(i == ap_memory.pc.worlds[AP_PREHISTORIC_L3].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPPrehistoric3(u32 warp_ptr)
{
    for(int i = 0;i < 4; i++)
    {
        if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_PREHISTORIC_L3_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_PREHISTORIC_L3_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_PREHISTORIC_L3_CHECKPOINT3] > 0)
            {
                return 0;
            }
            else if(i == 3 && ap_memory.pc.items[AP_PREHISTORIC_L3_CHECKPOINT4] > 0)
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

void SwitchInitPrehistoric3()
{
    for(int i = 0; i < 10; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchPrehistoric3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_3 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Flying Lava Ball Switch
            case 0x1FE:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[0].ptr = ptr;
                pre3_spin_platforms = false;
                return;
            //Lava Pit Ball Switch
            case 0x1A8:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[1].ptr = ptr;
                pre3_elevator = false;
                return;
            //Monolith A
            case 0xCB:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[2].ptr = ptr;
                return;
            //Monolith B
            case 0xCE:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[3].ptr = ptr;
                return;
            //Monolith Ball Switch
            case 0x1DE:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[4].ptr = ptr;
                pre3_float_platforms = false;
                return;
            //Monolith C
            case 0xC9:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[5].ptr = ptr;
                return;
            //Monolith D
            case 0xD1:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[6].ptr = ptr;
                return;
            //Platforms Glover Switch
            case 0x1A2:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[7].ptr = ptr;
                pre3_switch_pressed = false;
                pre3_switch_timer = 0;
                return;
            //Trees Glover Switch
            case 0x208:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[9].ptr = ptr;
                pre3_spin_stones = false;
                pre3_garib_timer = 0xC1;
                pre3_monolith_timer = 0xD1;
                pre3_garib_spawn1 = false;
                pre3_garib_spawn2 = false;
                pre3_monolitha = false;
                pre3_monolithb = false;
                pre3_monolithc = false;
                pre3_monolithd = false;
                pre3_monolith_lowered = 0;
                return;
            case 0x1AD:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[10].ptr = ptr;
                //Frame of Lava Pit Ball Switch to track coords
                return;
            default:
                return;
        }
    }
}

void MonitorEventsPrehistoric3()
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[9].ptr != 0) // spin
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[9].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[9].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!pre3_spin_stones && ap_memory.pc.items[AP_PREHISTORIC_L3_SPIN_STONES])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0xC2BE0000;
                        pre3_spin_stones = true;
                    }
                    if(!ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[9].collected 
                        && ((*(u16*)door_open_offset) == 0xFFFE || (*(u16*)door_open_offset) == 0xFF9B)) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0xC2B6E2FC;
                    }
                    if(!ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[9].collected && (*(u16*)door_open_offset) == 0xFF9B)
                    {
                        (*(u16*)door_open_offset) == 0xFFFE;
                    }
                }
            }

            if(!pre3_garib_spawn1 && pre3_garib_timer == 0 && ap_memory.pc.items[AP_PREHISTORIC_L3_DROP_GARIBS])
            {
                gvr_fn_spawn_garibgroup(6,0);
                gvr_fn_spawn_garibgroup(9,0);
                pre3_garib_spawn1 = true;
            }
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[4].ptr != 0) // floating platforms
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[4].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[4].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;

                if(!ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[4].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFD)) // Switch not yet collected
                {
                    if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] == 0)
                    {
                        (*(u32*)position_addr) = 0x43F70000;
                    }
                    else if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] == 1)
                    {
                        (*(u32*)position_addr) = 0x43DCC000;
                    }
                    else if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] == 2)
                    {
                        (*(u32*)position_addr) = 0x43C64000;
                    }
                    else if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] == 3)
                    {
                        (*(u32*)position_addr) = 0x43A20000;
                    }
                    else
                    {
                        (*(u32*)position_addr) = 0x4360FBBB;
                    }

                    if((*(u16*)door_open_offset) == 0xFF9B)
                    {
                        (*(u16*)door_open_offset) = 0xFFFD;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[0].ptr != 0) // spin platforms
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;

                if(!ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[0].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFD)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x42A79F82;
                    if((*(u16*)door_open_offset) == 0xFF9B)
                    {
                        (*(u16*)door_open_offset) = 0xFFFD;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[7].ptr != 0) //glover switch
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[7].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[7].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(pre3_switch_pressed && pre3_switch_timer == 0x1E)
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    pre3_switch_timer--;
                }
                else if(pre3_switch_pressed && pre3_switch_timer < 0x1E && pre3_switch_timer > 0x0)
                {
                    pre3_switch_timer--;
                }
                if(pre3_switch_timer == 0 && (*(u16*)door_open_offset) == 0x0 && pre3_switch_pressed)
                {
                    (*(u32*)position_addr) = 0xC2BBCD7E;
                    pre3_switch_pressed = false;
                }
            } 
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[1].ptr != 0) // lava pit
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[1].ptr + 0x00B8;
                u32 frame_position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[10].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!pre3_elevator && ap_memory.pc.items[AP_PREHISTORIC_L3_DIRT_ELEVATOR])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(float*)position_addr) = (*(float*)frame_position_addr) - 2;
                        pre3_elevator = true;
                    }
                    if(!ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[1].collected 
                        && ((*(u16*)door_open_offset) == 0xFFFD || (*(u16*)door_open_offset) == 0xFF9B)) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = (*(u32*)frame_position_addr);
                    }
                    if(!ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[1].collected && (*(u16*)door_open_offset) == 0xFF9B)
                    {
                        (*(u16*)door_open_offset) = 0xFFFD;
                    }
                }
            }
            if(pre3_garib_timer > 0x00)
            {
                pre3_garib_timer--;
            }
            if(pre3_monolith_timer > 0x00)
            {
                pre3_monolith_timer--;
            }
            if(pre3_event_timer > 0x00)
            {
                pre3_event_timer--;
            }
        }
    } 
    else
    {
        for(int i = 0; i < 9; i++)
        {
            ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr = 0;
        }
    }
}

void PuzzleEventsPrehistoric3(u32 ptr)
{
    if(!pre3_float_platforms && ap_memory.pc.items[AP_PREHISTORIC_L3_FLOATING_PLATFORMS])
    {
        pre3_float_platforms = true;
        pre3_event_timer = 0xC1;
        return gvr_fn_activate_puzzle(0x8031E430);
    }
    if(!pre3_spin_platforms && ap_memory.pc.items[AP_PREHISTORIC_L3_LAVA_SPINNING] && pre3_event_timer == 0)
    {
        pre3_spin_platforms = true;
        return gvr_fn_activate_puzzle(0x8031E600);
    }
    return gvr_fn_activate_puzzle(ptr);
}

u32 MonolithsPrehistoric3(u32 ptr)
{
    if(pre3_monolith_timer == 0)
    {
        for(int i = 0; i < 10; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr == ptr)
            {
                u32 trigger_flag = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr + 0x14;
                u32 alpha_flag = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr + 0xA6;

                if(!ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].collected && (*(u32*)0x803249E0) == ptr)
                {
                    ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].collected = 1;
                    (*(u16*)alpha_flag) = 0;
                }
                else if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].collected)
                {
                    (*(u16*)alpha_flag) = 0;
                }
                else
                {
                    (*(u16*)alpha_flag) = 0x0064;
                }
            }
        }
        if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] > 0 
            && ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] == pre3_monolith_lowered)
        {
            ap_memory.pc.items[AP_DPAD_DOWN] = 0;
        }
        if(ptr == ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[2].ptr) //Monolith A //runs second
        {
            if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] >= 1 && !pre3_monolitha && ap_memory.pc.items[AP_DPAD_DOWN])
            {
                pre3_monolith_timer = 0xC1;
                pre3_monolitha = true;
                pre3_monolith_lowered++;
                return ptr;
            }
        }
        else if(ptr == ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[3].ptr) //Monolith B //runs first
        {
            if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] >= 2 && !pre3_monolithb && ap_memory.pc.items[AP_DPAD_DOWN])
            {
                pre3_monolith_timer = 0xC1;
                pre3_monolithb = true;
                pre3_monolith_lowered++;
                return ptr;
            }
        }
        else if(ptr == ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[5].ptr) //Monolith C // runs last
        {
            if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] >= 3 && !pre3_monolithc && ap_memory.pc.items[AP_DPAD_DOWN])
            {
                pre3_monolith_timer = 0xC1;
                pre3_monolithc = true;
                pre3_monolith_lowered++;
                return ptr;
            }
        }
        else if(ptr == ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[6].ptr && ap_memory.pc.items[AP_DPAD_DOWN]) //Monolith D // runs third
        {
            if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] == 4 && !pre3_monolithd)
            {
                pre3_monolithd = true;
                pre3_monolith_timer = 0xC1;
                pre3_monolith_lowered++;
                return ptr;
            }
        }
    }
    return 1;
}

void ResetMonolithsPrehistoric3()
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        for(int i = 0; i < 10; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr != 0)
            {
                if(i == 2 || i == 3 || i == 5 || i == 6)
                {
                    u32 trigger_flag = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr + 0x14;
                    if(!ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].collected)
                    {
                        (*(u32*)trigger_flag) = 0;
                    }
                }
            }
        }
    }
}

void SwitchTreePrehistoric3()
{
	ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[8].collected = 1;
    return;
}

void HitSwitchPrehistoric3()
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        u32 on_switch = (*(u32*)0x80324C58);
        if(on_switch != 0)
        {
            for(int i=0; i < 10; i++)
            {
                if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr == on_switch 
                    && i == 9)
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0xC2BE0000;
                    ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr == on_switch 
                    && i == 7)
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0xC2C44D82;
                    pre3_switch_timer = 0x1E;
                    pre3_switch_pressed = true;
                    ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].collected = 1;
                }
            }
        }
    }
}

void HitBallSwitchPrehistoric3(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        for(int i=0; i < 10; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr == ptr &&
                i == 4) //floating platform
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr + 0x00B8;
                if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] == 0)
                {
                    (*(u32*)position_addr) = 0x43F4C000;
                }
                else if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] == 1)
                {
                    (*(u32*)position_addr) = 0x43DA8000;
                }
                else if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] == 2)
                {
                    (*(u32*)position_addr) = 0x43C40000;
                }
                else if(ap_memory.pc.items[AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH] == 3)
                {
                    (*(u32*)position_addr) = 0x439FC000;
                }
                else
                {
                    (*(u32*)position_addr) = 0x435C7BBB;
                }
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr == ptr &&
                i == 0) //spin platform
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x429F391D;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr == ptr &&
                i == 1) //elevator
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr + 0x00B8;
                u32 frame_position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[10].ptr + 0x00B8;
                (*(float*)position_addr) = (*(float*)frame_position_addr) - 2;
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].collected = 1;
            }
            // if(ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr == ptr &&
            //     i == 2) //platform 2
            // {
            //     u32 position_addr = ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].ptr + 0x00B8;
            //     (*(u32*)position_addr) = 0xC3B2F324;
            //     ap_memory.pc.worlds[AP_PREHISTORIC_L3].switch_checks[i].collected = 1;
            // }
        }
    }
}

//Potions

void PotionInitPrehistoric3()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_L3].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionPrehistoric3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_3 && obj_type == 0x0100)
    {
        switch (item_id)
        {
            //Cave Speed Potion
            case 0x21A:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].potion_checks[0].ptr = ptr;
                return;
            //High Speed Potion
            case 0x2A0:
                ap_memory.pc.worlds[AP_PREHISTORIC_L3].potion_checks[2].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void PotionSpawnPrehistoric3(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        partial_potion_obj_t* potion = (partial_potion_obj_t*) ptr;
        if(potion->type == 0x01)
        {
            ap_memory.pc.worlds[AP_PREHISTORIC_L3].potion_checks[1].ptr = ptr;
        }
    }
}


void MonitorPotionPrehistoric3()
{
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_L3].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_PREHISTORIC_L3].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_PREHISTORIC_L3].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_PREHISTORIC_L3].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}

