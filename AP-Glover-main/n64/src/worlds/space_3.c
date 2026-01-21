#include "space_3.h"

bool space3_maingate = false;
bool space3_sign = false;
bool space3_fan = false;
u8 space3_magnet_timer = 0;
bool space3_magnet = false;
bool space3_ballmagnet = false;
bool space3_glassdoor = false;

void GaribInitSpace3()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L3]; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribSpace3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_3 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Above Fan Garibs
            case 0xA7:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[0].object_id = item_id;
                return;
            case 0xAF:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[1].object_id = item_id;
                return;
            case 0xAE:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[2].object_id = item_id;
                return;
            case 0xAB:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[3].object_id = item_id;
                return;
            case 0xA8:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[4].object_id = item_id;
                return;
            case 0xA9:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[5].object_id = item_id;
                return;
            case 0xAA:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[6].object_id = item_id;
                return;
            case 0xAD:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[7].object_id = item_id;
                return;
            case 0xAC:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[8].object_id = item_id;
                return;
            //Conveyor Island Garibs
            case 0xB1:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[9].object_id = item_id;
                return;
            case 0xB3:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[10].object_id = item_id;
                return;
            case 0xB2:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[11].object_id = item_id;
                return;
            //First Conveyor Garibs
            case 0x4A:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[12].object_id = item_id;
                return;
            case 0x43:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[13].object_id = item_id;
                return;
            case 0x48:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[14].object_id = item_id;
                return;
            case 0x4F:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[15].object_id = item_id;
                return;
            //Glass Pyramids Garibs
            case 0x36:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[16].object_id = item_id;
                return;
            case 0x31:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[17].object_id = item_id;
                return;
            case 0x35:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[18].object_id = item_id;
                return;
            case 0x37:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[19].object_id = item_id;
                return;
            case 0x30:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[20].object_id = item_id;
                return;
            case 0x38:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[21].object_id = item_id;
                return;
            //Last Conveyor Garibs
            case 0x4C:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[22].object_id = item_id;
                return;
            case 0x45:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[23].object_id = item_id;
                return;
            case 0x44:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[24].object_id = item_id;
                return;
            case 0x4B:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[25].object_id = item_id;
                return;
            //Left Guard Rail Garibs
            case 0x82:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[26].object_id = item_id;
                return;
            case 0x86:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[27].object_id = item_id;
                return;
            case 0x85:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[28].object_id = item_id;
                return;
            case 0x84:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[29].object_id = item_id;
                return;
            case 0x83:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[30].object_id = item_id;
                return;
            //Middle Conveyor Garibs
            case 0x47:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[31].object_id = item_id;
                return;
            case 0x4E:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[32].object_id = item_id;
                return;
            case 0x4D:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[33].object_id = item_id;
                return;
            case 0x46:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[34].object_id = item_id;
                return;
            //Pinwheel Garibs
            case 0xB9:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[35].object_id = item_id;
                return;
            case 0xBD:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[36].object_id = item_id;
                return;
            case 0xB5:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[37].object_id = item_id;
                return;
            case 0xC0:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[38].object_id = item_id;
                return;
            case 0xBC:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[39].object_id = item_id;
                return;
            case 0xB8:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[40].object_id = item_id;
                return;
            case 0xB7:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[41].object_id = item_id;
                return;
            case 0xBB:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[42].object_id = item_id;
                return;
            case 0xBF:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[43].object_id = item_id;
                return;
            case 0xBE:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[44].object_id = item_id;
                return;
            case 0xBA:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[45].object_id = item_id;
                return;
            case 0xB6:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[46].object_id = item_id;
                return;
            //Ramp Garibs
            case 0xC2:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[47].object_id = item_id;
                return;
            case 0xC4:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[48].object_id = item_id;
                return;
            case 0xC3:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[49].object_id = item_id;
                return;
            case 0xC6:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[50].object_id = item_id;
                return;
            case 0xC9:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[51].object_id = item_id;
                return;
            case 0xC8:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[52].object_id = item_id;
                return;
            case 0xC7:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[53].object_id = item_id;
                return;
            //Right Guard Rail Garibs
            case 0x88:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[54].object_id = item_id;
                return;
            case 0x8C:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[55].object_id = item_id;
                return;
            case 0x8B:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[56].object_id = item_id;
                return;
            case 0x8A:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[57].object_id = item_id;
                return;
            case 0x89:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[58].object_id = item_id;
                return;
            //Split Path Left Garibs
            case 0x9B:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[59].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[59].object_id = item_id;
                return;
            case 0x9E:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[60].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[60].object_id = item_id;
                return;
            case 0x9D:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[61].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[61].object_id = item_id;
                return;
            case 0x9C:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[62].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[62].object_id = item_id;
                return;
            case 0x97:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[63].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[63].object_id = item_id;
                return;
            case 0x99:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[64].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[64].object_id = item_id;
                return;
            case 0x98:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[65].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[65].object_id = item_id;
                return;
            //Split Path Right Garibs
            case 0xA0:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[66].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[66].object_id = item_id;
                return;
            case 0xA5:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[67].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[67].object_id = item_id;
                return;
            case 0xA4:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[68].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[68].object_id = item_id;
                return;
            case 0xA3:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[69].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[69].object_id = item_id;
                return;
            case 0xA2:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[70].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[70].object_id = item_id;
                return;
            case 0xA1:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[71].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[71].object_id = item_id;
                return;
            //Walkway Corner Garibs
            case 0x40:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[72].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[72].object_id = item_id;
                return;
            case 0x3F:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[73].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[73].object_id = item_id;
                return;
            case 0x3E:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[74].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[74].object_id = item_id;
                return;
            case 0x3D:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[75].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[75].object_id = item_id;
                return;
            case 0x3C:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[76].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[76].object_id = item_id;
                return;
            case 0x3B:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[77].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[77].object_id = item_id;
                return;
            case 0x3A:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[78].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[78].object_id = item_id;
                return;
            case 0x41:
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[79].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[79].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribSpace3Shiny()
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedSpace3(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnSpace3(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedSpace3() {
    if(gvr_current_map == MAP_SPACE_3)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L3]; i++)
        {
            collected += ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_SPACE_L3])
        {
            ap_memory.pc.worlds[AP_SPACE_L3].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitSpace3()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemySpace3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_3 && 
        (obj_type == SUCKER || obj_type == THROWBOT))
    {    
        switch (item_id)
        {	
            //Gate Throwbot
            case 0x194:
                ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[0].ptr = ptr;
                return;
            //L Turn Throwbot
            case 0x222:
                ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[1].ptr = ptr;
                return;
            //Opec
            case 0x263:
                ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[2].ptr = ptr;
                return;
            //Sucker
            case 0x259:
                ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[3].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemySpace3(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        u16 found_id;
        for(int i = 0; i < 4; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_SPACE_L3].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesSpace3()
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        for(int i = 0;i < 4; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[i].ptr != 0) // Cannonball
            {
                u32 spawn_ptr = ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[i].ptr + 0x22;
                if((*(u8*)spawn_ptr) == 1)
                {
                    u32 ypos = ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[i].ptr + 0x38;
                    u32 yvalue = (*(u32*)ypos);
                    if(yvalue >= 0xBF800000) //(-1 in float)
                    {
                        ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[i].collected = 1;
                        ap_memory.pc.worlds[AP_SPACE_L3].enemy_checks[i].ptr = 0;
                    }
                }
            }
        }
    }
}

//Life

void LifeInitSpace3()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L3].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeSpace3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_3 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Pinwheel Life
            case 0x27:
                ap_memory.pc.worlds[AP_SPACE_L3].life_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeSpace3(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L3].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_SPACE_L3].life_checks[i].ptr = 0;
            }
        }
    }
}

//Checkpoint

void CheckpointInitSpace3()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointSpace3(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x27:
                ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            //Checkpoint 2
            case 0x1CC:
                ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[1].warp_ptr = 0x802F54F0;
                return;
            //Checkpoint 3
            case 0x1D2:
                ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[2].warp_ptr = 0x802F50D0;
                return;
            //Checkpoint 4
            case 0x1D5:
                ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[3].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[3].warp_ptr = 0x802F3BA0;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointSpace3()
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointSpace3()
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 4; i++)
            {
                if(i == ap_memory.pc.worlds[AP_SPACE_L3].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPSpace3(u32 warp_ptr)
{
    for(int i = 0;i < 4; i++)
    {
        if(ap_memory.pc.worlds[AP_SPACE_L3].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_SPACE_L3_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_SPACE_L3_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_SPACE_L3_CHECKPOINT3] > 0)
            {
                return 0;
            }
            else if(i == 3 && ap_memory.pc.items[AP_SPACE_L3_CHECKPOINT4] > 0)
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

void SwitchInitSpace3()
{
    for(int i = 0; i < 6; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchSpace3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_3 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Above Fan Red Switch
            case 0x128:
                ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[0].ptr = ptr;
                space3_fan = false;
                return;
            //Ball Switch
            case 0x182:
                ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[1].ptr = ptr;
                space3_glassdoor = false;
                return;
            //Conveyor Glover Switch
            case 0x18A:
                ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[2].ptr = ptr;
                space3_sign = false;
                space3_maingate = false;
                return;
            //Duel Switch
            // case :
            //     ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[3].ptr = ptr;
            //     return;
            //Magnet Ball Switch
            case 0x188:
                ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[4].ptr = ptr;
                space3_ballmagnet = false;
                return;
            //Red Magnet Switch
            case 0x123:
                ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[5].ptr = ptr;
                space3_magnet_timer = 0;
                space3_magnet = false;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsSpace3()
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[0].ptr != 0) // fan
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!space3_sign && ap_memory.pc.items[AP_SPACE_L3_FAN])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0x439CEB64;
                        space3_sign = true;
                    }
                    if(!ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[0].collected 
                        && (*(u16*)door_open_offset) == 0xFFFF) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0x439EEB64;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[1].ptr != 0) // glass door
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[1].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!space3_glassdoor && ap_memory.pc.items[AP_SPACE_L3_GLASS_GATE])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0x44174000;
                        space3_glassdoor = true;
                    }
                    if(!ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[1].collected 
                        && (*(u16*)door_open_offset) == 0xFFFD) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0x4417C000;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[2].ptr != 0) // sign
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[2].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(!space3_sign && ap_memory.pc.items[AP_SPACE_L3_SIGN])
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0x42E4C45E;
                        space3_sign = true;
                    }
                    if(!ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[2].collected 
                        && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0x42EAC45F;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[5].ptr != 0) // magnet
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[5].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[5].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                if(gate_ptr > 0x80000000)
                {
                    u32 door_open_offset = gate_ptr + 0x0050;
                    if(space3_magnet)
                    {
                        (*(u16*)door_open_offset) = 0x0001;
                        (*(u32*)position_addr) = 0x43CEB99A;
                        space3_magnet_timer = 0x10;
                        space3_magnet = false;
                    }
                    if(space3_magnet_timer == 0
                        && ((*(u16*)door_open_offset) == 0xFFFE || (*(u16*)door_open_offset) == 0x0000)) // Switch not yet collected
                    {
                        (*(u32*)position_addr) = 0x43D10000;
                    }
                }
            }
            if(space3_magnet_timer > 0)
            {
                space3_magnet_timer--;
            }
        }
    } 
    else
    {
        for(int i = 0; i < 6; i++)
        {
            ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr = 0;
        }
    }
}

void PuzzleEventsSpace3(u32 ptr)
{
    if(ptr == 0x80311520)
    {
        ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[3].collected = 1;
        return;
    }   
    if(ptr == 0x8030E520)
    {
        ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[4].collected = 1;
        return;
    }  
    if(!space3_maingate && ap_memory.pc.items[AP_SPACE_L3_HAZARD_GATE] && (ptr != 0x80311A50 && ptr != 0x8030E3A0))
    {
        space3_maingate = true;
        return gvr_fn_activate_puzzle(0x80311520);
    }
    if(!space3_ballmagnet && ap_memory.pc.items[AP_SPACE_L3_BRIDGE] && (ptr != 0x80311A50 && ptr != 0x8030E3A0))
    {
        space3_ballmagnet = true;
        return gvr_fn_activate_puzzle(0x8030E520);
    }
    return gvr_fn_activate_puzzle(ptr);
}

void HitSwitchSpace3()
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        u32 on_switch = (*(u32*)0x80316FC8);
        if(on_switch != 0)
        {
            for(int i=0; i < 6; i++)
            {
                if(ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr == on_switch 
                    && i == 2) // conveyor
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x42E4C45E;
                    ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr == on_switch 
                    && i == 0) // red switch
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x439CEB64;
                    ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr == on_switch 
                    && i == 5 && space3_magnet_timer == 0) // magnet switch
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x43CEB99A;
                    ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].collected = 1;
                    space3_magnet = true;
                }
            }
        }
    }
}

void HitBallSwitchSpace3(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        for(int i=0; i < 6; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr == ptr &&
                i == 1) //glass door
            {
                u32 position_addr = ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x44174000;
                ap_memory.pc.worlds[AP_SPACE_L3].switch_checks[i].collected = 1;
            }
        }
    }
}

// //Potions

void PotionInitSpace3()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_L3].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionSpace3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_3 && obj_type == 0x0100)
    {
        switch (item_id)
        {
		    //Boomerang Ball
            case 0x268:
                ap_memory.pc.worlds[AP_SPACE_L3].potion_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void MonitorPotionSpace3()
{
    if(gvr_current_map == MAP_SPACE_3)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_L3].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_SPACE_L3].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_SPACE_L3].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_SPACE_L3].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}

