#include "pirates_BONUS.h"

void GaribInitPiratesBONUS()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_BONUS]; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribPiratesBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_BONUS && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Barrel A Garibs
            case 0x59:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[0].object_id = item_id;
                return;
            case 0x5A:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[1].object_id = item_id;
                return;
            case 0x58:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[2].object_id = item_id;
                return;
            //Barrel B Garibs
            case 0x41:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[3].object_id = item_id;
                return;
            case 0x42:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[4].object_id = item_id;
                return;
            case 0x40:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[5].object_id = item_id;
                return;
            //Barrel C Garibs
            case 0x68:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[6].object_id = item_id;
                return;
            case 0x6A:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[7].object_id = item_id;
                return;
            case 0x69:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[8].object_id = item_id;
                return;
            //Barrel D Garibs
            case 0x70:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[9].object_id = item_id;
                return;
            case 0x72:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[10].object_id = item_id;
                return;
            case 0x71:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[11].object_id = item_id;
                return;
            //Barrel E Garibs
            case 0x60:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[12].object_id = item_id;
                return;
            case 0x62:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[13].object_id = item_id;
                return;
            case 0x61:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[14].object_id = item_id;
                return;
            //Barrel F Garibs
            case 0x4C:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[15].object_id = item_id;
                return;
            case 0x4E:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[16].object_id = item_id;
                return;
            case 0x4D:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[17].object_id = item_id;
                return;
            //Barrel G Garibs
            case 0x50:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[18].object_id = item_id;
                return;
            case 0x52:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[19].object_id = item_id;
                return;
            case 0x51:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[20].object_id = item_id;
                return;
            //Barrel H Garibs
            case 0x48:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[21].object_id = item_id;
                return;
            case 0x4A:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[22].object_id = item_id;
                return;
            case 0x49:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[23].object_id = item_id;
                return;
            //Center Column Garibs
            case 0x2D:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[24].object_id = item_id;
                return;
            case 0x2B:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[25].object_id = item_id;
                return;
            case 0x39:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[26].object_id = item_id;
                return;
            case 0x3A:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[27].object_id = item_id;
                return;
            case 0x29:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[28].object_id = item_id;
                return;
            //Floating A Garibs
            case 0x54:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[29].object_id = item_id;
                return;
            case 0x56:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[30].object_id = item_id;
                return;
            case 0x55:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[31].object_id = item_id;
                return;
            //Floating B Garibs
            case 0x3D:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[32].object_id = item_id;
                return;
            case 0x3E:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[33].object_id = item_id;
                return;
            case 0x3C:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[34].object_id = item_id;
                return;
            //Floating C Garibs
            case 0x65:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[35].object_id = item_id;
                return;
            case 0x66:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[36].object_id = item_id;
                return;
            case 0x64:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[37].object_id = item_id;
                return;
            //Floating D Garibs
            case 0x6C:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[38].object_id = item_id;
                return;
            case 0x6E:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[39].object_id = item_id;
                return;
            case 0x6D:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[40].object_id = item_id;
                return;
            //Floating E Garibs
            case 0x5C:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[41].object_id = item_id;
                return;
            case 0x5E:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[42].object_id = item_id;
                return;
            case 0x5D:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[43].object_id = item_id;
                return;
            //Floating F Garibs
            case 0x44:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[44].object_id = item_id;
                return;
            case 0x46:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[45].object_id = item_id;
                return;
            case 0x45:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[46].object_id = item_id;
                return;
            //Top Garibs
            case 0x27:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[47].object_id = item_id;
                return;
            case 0x2F:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[48].object_id = item_id;
                return;
            case 0x33:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[49].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribPiratesBONUSShiny()
{
    if(gvr_current_map == MAP_PIRATES_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_BONUS]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedPiratesBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_BONUS]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnPiratesBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_BONUS]; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedPiratesBONUS() {
    if(gvr_current_map == MAP_PIRATES_BONUS)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_BONUS]; i++)
        {
            collected += ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_PIRATES_BONUS])
        {
            ap_memory.pc.worlds[AP_PIRATES_BONUS].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitPiratesBONUS()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_BONUS].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyPiratesBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_BONUS && obj_type == FISH)
    {    
        switch (item_id)
        {
            //Fish
            case 0xF1:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].enemy_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyPiratesBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_BONUS)
    {
        u16 found_id;
        for(int i = 0; i < 1; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_BONUS].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_PIRATES_BONUS].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_PIRATES_BONUS].enemy_checks[i].id;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_BONUS]; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_PIRATES_BONUS].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

//Life

void LifeInitPiratesBONUS()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_BONUS].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifePiratesBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_BONUS && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Bottom Barrel Life
            case 0x37:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].life_checks[0].ptr = ptr;
                return;
            //Goal Life
            case 0x25:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].life_checks[1].ptr = ptr;
                return;
            //Middle Barrel Life
            case 0x35:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].life_checks[2].ptr = ptr;
                return;
            //Top Barrel Life
            case 0x31:
                ap_memory.pc.worlds[AP_PIRATES_BONUS].life_checks[3].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifePiratesBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_BONUS)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_BONUS].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_PIRATES_BONUS].life_checks[i].ptr = 0;
            }
        }
    }
}
