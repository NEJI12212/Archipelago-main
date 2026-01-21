#include "atlantis_bonus.h"

void GaribInitAtlantisBONUS()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_BONUS]; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribAtlantisBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_BONUS && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //A
            case 0x43:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[0].object_id = item_id;
                return;
            case 0x47:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[1].object_id = item_id;
                return;
            case 0x46:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[2].object_id = item_id;
                return;
            case 0x45:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[3].object_id = item_id;
                return;
            case 0x44:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[4].object_id = item_id;
                return;
            //B
            case 0x3D:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[5].object_id = item_id;
                return;
            case 0x41:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[6].object_id = item_id;
                return;
            case 0x40:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[7].object_id = item_id;
                return;
            case 0x3F:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[8].object_id = item_id;
                return;
            case 0x3E:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[9].object_id = item_id;
                return;
            //C
            case 0x35:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[10].object_id = item_id;
                return;
            case 0x39:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[11].object_id = item_id;
                return;
            case 0x38:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[12].object_id = item_id;
                return;
            case 0x37:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[13].object_id = item_id;
                return;
            case 0x36:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[14].object_id = item_id;
                return;
            //D
            case 0x2F:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[15].object_id = item_id;
                return;
            case 0x33:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[16].object_id = item_id;
                return;
            case 0x32:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[17].object_id = item_id;
                return;
            case 0x31:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[18].object_id = item_id;
                return;
            case 0x30:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[19].object_id = item_id;
                return;
            //E
            case 0x26:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[20].object_id = item_id;
                return;
            case 0x2A:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[21].object_id = item_id;
                return;
            case 0x29:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[22].object_id = item_id;
                return;
            case 0x28:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[23].object_id = item_id;
                return;
            case 0x27:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[24].object_id = item_id;
                return;
        default:
            return;
        }
    }
}

void GaribAtlantisBONUSShiny()
{
    if(gvr_current_map == MAP_ATLANTIS_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_BONUS]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedAtlantisBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_BONUS]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[i].ptr = 0;
            }
        }
    }
}


void AllCollectedAtlantisBONUS() {
    if(gvr_current_map == MAP_ATLANTIS_BONUS)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_BONUS]; i++)
        {
            collected += ap_memory.pc.worlds[AP_ATLANTIS_BONUS].garibs[i].collected;
        }
        if(collected == 50)
        {
            ap_memory.pc.worlds[AP_ATLANTIS_BONUS].all_collected = true;
        }
    }
}

//Life

void LifeInitAtlantisBONUS()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_BONUS].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeAtlantisBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_BONUS && obj_type == 0x00B0)
    {   
        switch (item_id)
        {
            case 0x3B:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].life_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeAtlantisBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_BONUS)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_BONUS].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].life_checks[i].ptr = 0;
            }
        }
    }
}

// Enemy
void EnemyInitAtlantisBONUS()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_BONUS].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyAtlantisBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_BONUS && (obj_type == BUTTERFLY || obj_type == DRAGONFLY))
    {
        switch (item_id)
        {
            case 0x116:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].enemy_checks[0].ptr = ptr;
                return;
            case 0x11B:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].enemy_checks[1].ptr = ptr;
                return;    
            case 0x121:
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].enemy_checks[2].ptr = ptr;
                return;   
            default:
                return;
        }
    }
}

void DefeatedEnemyAtlantisBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_BONUS)
    {
        for(int i = 0; i < 3; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_BONUS].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_BONUS].enemy_checks[i].collected = 1;
                break;
            }
        }
    }
}
