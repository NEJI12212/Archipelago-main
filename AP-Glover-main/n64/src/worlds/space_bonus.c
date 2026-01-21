#include "space_bonus.h"


void GaribInitSpaceBONUS()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_BONUS]; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribSpaceBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_BONUS && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
           	//Bottom Ring Garibs
            case 0x59:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[0].object_id = item_id;
                return;
            case 0x58:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[1].object_id = item_id;
                return;
            case 0x5D:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[2].object_id = item_id;
                return;
            case 0x5C:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[3].object_id = item_id;
                return;
            case 0x5B:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[4].object_id = item_id;
                return;
            case 0x5A:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[5].object_id = item_id;
                return;
            //Column A Garibs
            case 0x3D:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[6].object_id = item_id;
                return;
            case 0x44:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[7].object_id = item_id;
                return;
            case 0x43:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[8].object_id = item_id;
                return;
            case 0x42:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[9].object_id = item_id;
                return;
            case 0x41:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[10].object_id = item_id;
                return;
            case 0x40:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[11].object_id = item_id;
                return;
            case 0x3F:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[12].object_id = item_id;
                return;
            case 0x3E:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[13].object_id = item_id;
                return;
            //Column B Garibs
            case 0x34:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[14].object_id = item_id;
                return;
            case 0x3B:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[15].object_id = item_id;
                return;
            case 0x3A:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[16].object_id = item_id;
                return;
            case 0x39:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[17].object_id = item_id;
                return;
            case 0x38:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[18].object_id = item_id;
                return;
            case 0x37:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[19].object_id = item_id;
                return;
            case 0x36:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[20].object_id = item_id;
                return;
            case 0x35:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[21].object_id = item_id;
                return;
            //Column C Garibs
            case 0x46:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[22].object_id = item_id;
                return;
            case 0x4D:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[23].object_id = item_id;
                return;
            case 0x4C:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[24].object_id = item_id;
                return;
            case 0x4B:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[25].object_id = item_id;
                return;
            case 0x4A:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[26].object_id = item_id;
                return;
            case 0x49:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[27].object_id = item_id;
                return;
            case 0x48:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[28].object_id = item_id;
                return;
            case 0x47:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[29].object_id = item_id;
                return;
            //Column D Garibs
            case 0x4F:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[30].object_id = item_id;
                return;
            case 0x50:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[31].object_id = item_id;
                return;
            case 0x51:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[32].object_id = item_id;
                return;
            case 0x52:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[33].object_id = item_id;
                return;
            case 0x53:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[34].object_id = item_id;
                return;
            case 0x54:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[35].object_id = item_id;
                return;
            case 0x55:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[36].object_id = item_id;
                return;
            case 0x56:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[37].object_id = item_id;
                return;
            //Middle Ring Garibs
            case 0x60:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[38].object_id = item_id;
                return;
            case 0x5F:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[39].object_id = item_id;
                return;
            case 0x64:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[40].object_id = item_id;
                return;
            case 0x63:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[41].object_id = item_id;
                return;
            case 0x62:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[42].object_id = item_id;
                return;
            case 0x61:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[43].object_id = item_id;
                return;
            //Top Ring Garibs
            case 0x66:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[44].object_id = item_id;
                return;
            case 0x67:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[45].object_id = item_id;
                return;
            case 0x68:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[46].object_id = item_id;
                return;
            case 0x69:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[47].object_id = item_id;
                return;
            case 0x6A:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[48].object_id = item_id;
                return;
            case 0x6B:
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[49].object_id = item_id;
                return; 
            default:
                return;
        }
    }
}

void GaribSpaceBONUSShiny()
{
    if(gvr_current_map == MAP_SPACE_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_BONUS]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedSpaceBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_BONUS]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnSpaceBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_BONUS]; i++)
        {
            if(ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedSpaceBONUS() {
    if(gvr_current_map == MAP_SPACE_BONUS)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_SPACE_BONUS]; i++)
        {
            collected += ap_memory.pc.worlds[AP_SPACE_BONUS].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_SPACE_BONUS])
        {
            ap_memory.pc.worlds[AP_SPACE_BONUS].all_collected = true;
        }
    }
}

//Life

void LifeInitSpaceBONUS()
{
    for(int i = 0; i < 6; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_BONUS].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeSpaceBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_BONUS && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Life 1
            case 0x30:
                ap_memory.pc.worlds[AP_SPACE_BONUS].life_checks[0].ptr = ptr;
                return;
            //Life 2
            case 0x29:
                ap_memory.pc.worlds[AP_SPACE_BONUS].life_checks[1].ptr = ptr;
                return;
            //Life 3
            case 0x2E:
                ap_memory.pc.worlds[AP_SPACE_BONUS].life_checks[2].ptr = ptr;
                return;
            //Life 4
            case 0x27:
                ap_memory.pc.worlds[AP_SPACE_BONUS].life_checks[3].ptr = ptr;
                return;
            //Life 5
            case 0x25:
                ap_memory.pc.worlds[AP_SPACE_BONUS].life_checks[4].ptr = ptr;
                return;
            //Life 6
            case 0x32:
                ap_memory.pc.worlds[AP_SPACE_BONUS].life_checks[5].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeSpaceBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_SPACE_BONUS)
    {
        for(int i = 0; i < 6; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_BONUS].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_SPACE_BONUS].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_SPACE_BONUS].life_checks[i].ptr = 0;
            }
        }
    }
}

// //Potions

void PotionInitSpaceBONUS()
{
    for(int i = 0; i < 9; i++)
    {
        ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionSpaceBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_SPACE_BONUS && obj_type == 0x0100)
    {
        switch (item_id)
        {
            //Air Helicopter Potion A
            case 0xDC:
                ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[0].ptr = ptr;
                return;
            //Air Helicopter Potion B
            case 0xD9:
                ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[1].ptr = ptr;
                return;
            //Air Helicopter Potion C
            case 0xE2:
                ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[2].ptr = ptr;
                return;
            //Air Helicopter Potion D
            case 0xDF:
                ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[3].ptr = ptr;
                return;
            //Floor Helicopter Potion A
            case 0xD0:
                ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[4].ptr = ptr;
                return;
            //Floor Helicopter Potion B
            case 0xD3:
                ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[5].ptr = ptr;
                return;
            //Floor Helicopter Potion C
            case 0xD6:
                ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[6].ptr = ptr;
                return;
            //Floor Helicopter Potion D
            case 0xCD:
                ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[7].ptr = ptr;
                return;
            //Spawn Helicopter Potion
            case 0xCA:
                ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[8].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void MonitorPotionSpaceBONUS()
{
    if(gvr_current_map == MAP_SPACE_BONUS)
    {
        for(int i = 0; i < 9; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_SPACE_BONUS].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}

