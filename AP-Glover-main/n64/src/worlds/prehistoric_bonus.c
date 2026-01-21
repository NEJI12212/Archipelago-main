#include "prehistoric_bonus.h"

void GaribInitPrehistoricBONUS()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_BONUS]; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribPrehistoricBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_BONUS && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Archway Garibs
            case 0x7B:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[0].object_id = item_id;
                return;
            case 0x4C:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[1].object_id = item_id;
                return;
            case 0x6D:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[2].object_id = item_id;
                return;
            case 0x4B:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[3].object_id = item_id;
                return;
            case 0x81:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[4].object_id = item_id;
                return;
            case 0x4A:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[5].object_id = item_id;
                return;
            case 0x6C:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[6].object_id = item_id;
                return;
            case 0x49:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[7].object_id = item_id;
                return;
            case 0x79:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[8].object_id = item_id;
                return;
            case 0x48:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[9].object_id = item_id;
                return;
            //Fossil Garibs
            case 0x7F:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[10].object_id = item_id;
                return;
            case 0x6B:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[11].object_id = item_id;
                return;
            case 0x47:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[12].object_id = item_id;
                return;
            case 0x83:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[13].object_id = item_id;
                return;
            case 0x46:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[14].object_id = item_id;
                return;
            case 0x6A:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[15].object_id = item_id;
                return;
            case 0x45:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[16].object_id = item_id;
                return;
            case 0x85:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[17].object_id = item_id;
                return;
            case 0x44:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[18].object_id = item_id;
                return;
            case 0x69:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[19].object_id = item_id;
                return;
            //Goal Garibs
            case 0x55:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[20].object_id = item_id;
                return;
            case 0x63:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[21].object_id = item_id;
                return;
            case 0x56:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[22].object_id = item_id;
                return;
            case 0x62:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[23].object_id = item_id;
                return;
            case 0x57:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[24].object_id = item_id;
                return;
            case 0x61:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[25].object_id = item_id;
                return;
            case 0x58:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[26].object_id = item_id;
                return;
            case 0x60:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[27].object_id = item_id;
                return;
            case 0x3B:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[28].object_id = item_id;
                return;
            case 0x71:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[29].object_id = item_id;
                return;
            //Lava Garibs
            case 0x43:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[30].object_id = item_id;
                return;
            case 0x7D:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[31].object_id = item_id;
                return;
            case 0x42:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[32].object_id = item_id;
                return;
            case 0x51:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[33].object_id = item_id;
                return;
            case 0x68:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[34].object_id = item_id;
                return;
            case 0x41:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[35].object_id = item_id;
                return;
            case 0x77:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[36].object_id = item_id;
                return;
            case 0x3C:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[37].object_id = item_id;
                return;
            case 0x67:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[38].object_id = item_id;
                return;
            case 0x52:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[39].object_id = item_id;
                return;
            //Sharp Turn Garibs
            case 0x3D:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[40].object_id = item_id;
                return;
            case 0x66:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[41].object_id = item_id;
                return;
            case 0x40:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[42].object_id = item_id;
                return;
            case 0x75:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[43].object_id = item_id;
                return;
            case 0x3F:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[44].object_id = item_id;
                return;
            case 0x65:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[45].object_id = item_id;
                return;
            case 0x3E:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[46].object_id = item_id;
                return;
            case 0x64:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[47].object_id = item_id;
                return;
            case 0x54:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[48].object_id = item_id;
                return;
            case 0x73:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[49].object_id = item_id;
                return;
            //Spawn Garibs
            case 0x5F:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[50].object_id = item_id;
                return;
            case 0x87:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[51].object_id = item_id;
                return;
            case 0x50:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[52].object_id = item_id;
                return;
            case 0x53:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[53].object_id = item_id;
                return;
            case 0x6F:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[54].object_id = item_id;
                return;
            case 0x4F:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[55].object_id = item_id;
                return;
            case 0x89:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[56].object_id = item_id;
                return;
            case 0x4E:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[57].object_id = item_id;
                return;
            case 0x6E:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[58].object_id = item_id;
                return;
            case 0x4D:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[59].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[59].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribPrehistoricBONUSShiny()
{
    if(gvr_current_map == MAP_PREHISTORIC_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_BONUS]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedPrehistoricBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_BONUS]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnPrehistoricBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_BONUS]; i++)
        {
            if(ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedPrehistoricBONUS() 
{
    if(gvr_current_map == MAP_PREHISTORIC_BONUS)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PREHISTORIC_BONUS]; i++)
        {
            collected += ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_PREHISTORIC_BONUS])
        {
            ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].all_collected = true;
        }
    }
}

//Life

void LifeInitPrehistoricBONUS()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifePrehistoricBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PREHISTORIC_BONUS && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Archway Life
            case 0x5D:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].life_checks[0].ptr = ptr;
                return;
            //Fossils Life
            case 0x5C:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].life_checks[1].ptr = ptr;
                return;
            //Homestretch Life
            case 0x5B:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].life_checks[2].ptr = ptr;
                return;
            //Rock Life
            case 0x5A:
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].life_checks[3].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifePrehistoricBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_PREHISTORIC_BONUS)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_PREHISTORIC_BONUS].life_checks[i].ptr = 0;
            }
        }
    }
}
