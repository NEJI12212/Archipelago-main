#include "carnival_bonus.h"

void GaribInitCarnivalBONUS()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_BONUS]; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribCarnivalBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_BONUS && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
           //Inner Garibs
		case 0x1BF:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[0].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[0].object_id = item_id;
			return;
		case 0x1BE:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[1].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[1].object_id = item_id;
			return;
		case 0x1BD:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[2].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[2].object_id = item_id;
			return;
		case 0x1BC:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[3].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[3].object_id = item_id;
			return;
		case 0x1BB:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[4].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[4].object_id = item_id;
			return;
		case 0x1BA:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[5].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[5].object_id = item_id;
			return;
		case 0x1B9:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[6].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[6].object_id = item_id;
			return;
		case 0x1B8:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[7].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[7].object_id = item_id;
			return;
		case 0x1B7:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[8].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[8].object_id = item_id;
			return;
		case 0x1B6:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[9].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[9].object_id = item_id;
			return;
		case 0x1C1:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[10].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[10].object_id = item_id;
			return;
		case 0x1C0:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[11].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[11].object_id = item_id;
			return;
		//Outer Garibs
		case 0x1B2:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[12].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[12].object_id = item_id;
			return;
		case 0x1B0:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[13].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[13].object_id = item_id;
			return;
		case 0x1AF:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[14].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[14].object_id = item_id;
			return;
		case 0x1AE:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[15].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[15].object_id = item_id;
			return;
		case 0x1AD:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[16].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[16].object_id = item_id;
			return;
		case 0x1AB:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[17].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[17].object_id = item_id;
			return;
		case 0x1B4:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[18].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[18].object_id = item_id;
			return;
		case 0x1B3:
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[19].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[19].object_id = item_id;
			return;
        default:
            return;
        }
    }
}

void GaribCarnivalBONUSShiny()
{
    if(gvr_current_map == MAP_CARNIVAL_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_BONUS]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedCarnivalBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_BONUS)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_BONUS]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[i].ptr = 0;
            }
        }
    }
}


void AllCollectedCarnivalBONUS() {
    if(gvr_current_map == MAP_CARNIVAL_BONUS)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_BONUS]; i++)
        {
            collected += ap_memory.pc.worlds[AP_CARNIVAL_BONUS].garibs[i].collected;
        }
        if(collected == 50)
        {
            ap_memory.pc.worlds[AP_CARNIVAL_BONUS].all_collected = true;
        }
    }
}

//Life

void LifeInitCarnivalBONUS()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_BONUS].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeCarnivalBONUS(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_BONUS && obj_type == 0x00B0)
    {   
        switch (item_id)
        {
            //Life 1
		    case 0x1AC:
                ap_memory.pc.worlds[AP_CARNIVAL_BONUS].life_checks[0].ptr = ptr;
                return;
		    //Life 2
            case 0x1B1:
                ap_memory.pc.worlds[AP_CARNIVAL_BONUS].life_checks[1].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeCarnivalBONUS(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_BONUS)
    {
        for(int i = 0; i < 2; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_BONUS].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_BONUS].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_CARNIVAL_BONUS].life_checks[i].ptr = 0;
            }
        }
    }
}
