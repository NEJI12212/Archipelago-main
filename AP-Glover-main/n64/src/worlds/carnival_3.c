#include "carnival_3.h"

bool carn3_door = false;
bool carn3_hands = false;

void GaribInitCarnival3()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L3]; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribCarnival3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_3 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
        //Bee Garibs
		case 0x6F:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[0].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[0].object_id = item_id;
			return;
		case 0x6D:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[1].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[1].object_id = item_id;
			return;
		case 0x6E:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[2].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[2].object_id = item_id;
			return;
		case 0x6C:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[3].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[3].object_id = item_id;
			return;
		//Cutout Garibs
		case 0x60:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[4].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[4].object_id = item_id;
			return;
		case 0x5E:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[5].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[5].object_id = item_id;
			return;
		case 0x5C:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[6].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[6].object_id = item_id;
			return;
		case 0x5A:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[7].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[7].object_id = item_id;
			return;
		case 0x2B:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[8].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[8].object_id = item_id;
			return;
		case 0x58:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[9].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[9].object_id = item_id;
			return;
		//Dennis Platform Garibs
		case 0x42:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[10].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[10].object_id = item_id;
			return;
		case 0x3F:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[11].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[11].object_id = item_id;
			return;
		case 0x41:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[12].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[12].object_id = item_id;
			return;
		case 0x40:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[13].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[13].object_id = item_id;
			return;
		//Funnel Garibs
		case 0x62:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[14].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[14].object_id = item_id;
			return;
		case 0x6A:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[15].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[15].object_id = item_id;
			return;
		case 0x69:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[16].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[16].object_id = item_id;
			return;
		case 0x68:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[17].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[17].object_id = item_id;
			return;
		case 0x67:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[18].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[18].object_id = item_id;
			return;
		case 0x66:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[19].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[19].object_id = item_id;
			return;
		case 0x65:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[20].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[20].object_id = item_id;
			return;
		case 0x64:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[21].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[21].object_id = item_id;
			return;
		case 0x63:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[22].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[22].object_id = item_id;
			return;
		//Left Pool Garibs
		case 0x86:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[23].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[23].object_id = item_id;
			return;
		case 0x89:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[24].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[24].object_id = item_id;
			return;
		case 0x88:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[25].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[25].object_id = item_id;
			return;
		case 0x87:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[26].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[26].object_id = item_id;
			return;
		//Lower Spintop Garibs
		case 0x9D:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[27].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[27].object_id = item_id;
			return;
		case 0xA4:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[28].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[28].object_id = item_id;
			return;
		case 0xA3:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[29].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[29].object_id = item_id;
			return;
		case 0xA2:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[30].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[30].object_id = item_id;
			return;
		case 0xA1:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[31].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[31].object_id = item_id;
			return;
		case 0xA0:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[32].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[32].object_id = item_id;
			return;
		case 0x9F:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[33].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[33].object_id = item_id;
			return;
		case 0x9E:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[34].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[34].object_id = item_id;
			return;
		//Portal Garibs
		case 0x50:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[35].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[35].object_id = item_id;
			return;
		case 0x4E:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[36].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[36].object_id = item_id;
			return;
		case 0x4F:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[37].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[37].object_id = item_id;
			return;
		case 0x4D:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[38].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[38].object_id = item_id;
			return;
		//Right Pool Garibs
		case 0x8B:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[39].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[39].object_id = item_id;
			return;
		case 0x8E:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[40].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[40].object_id = item_id;
			return;
		case 0x8D:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[41].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[41].object_id = item_id;
			return;
		case 0x8C:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[42].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[42].object_id = item_id;
			return;
		//Ships Garibs
		case 0xE4:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[43].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[43].object_id = item_id;
			return;
		case 0xE5:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[44].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[44].object_id = item_id;
			return;
		case 0xE3:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[45].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[45].object_id = item_id;
			return;
		//Slide A Garibs
		case 0x80:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[46].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[46].object_id = item_id;
			return;
		case 0x82:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[47].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[47].object_id = item_id;
			return;
		case 0x81:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[48].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[48].object_id = item_id;
			return;
		//Slide B Garibs
		case 0x7C:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[49].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[49].object_id = item_id;
			return;
		case 0x7E:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[50].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[50].object_id = item_id;
			return;
		case 0x7D:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[51].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[51].object_id = item_id;
			return;
		//Slide C Garibs
		case 0x78:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[52].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[52].object_id = item_id;
			return;
		case 0x7A:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[53].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[53].object_id = item_id;
			return;
		case 0x79:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[54].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[54].object_id = item_id;
			return;
		//Slide D Garibs
		case 0x73:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[55].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[55].object_id = item_id;
			return;
		case 0x76:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[56].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[56].object_id = item_id;
			return;
		case 0x75:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[57].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[57].object_id = item_id;
			return;
		case 0x74:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[58].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[58].object_id = item_id;
			return;
		//Tent Garibs
		case 0x39:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[59].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[59].object_id = item_id;
			return;
		case 0x3B:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[60].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[60].object_id = item_id;
			return;
		case 0x3A:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[61].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[61].object_id = item_id;
			return;
		//Upper Spintop Garibs
		case 0x90:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[62].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[62].object_id = item_id;
			return;
		case 0x9B:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[63].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[63].object_id = item_id;
			return;
		case 0x9A:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[64].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[64].object_id = item_id;
			return;
		case 0x99:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[65].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[65].object_id = item_id;
			return;
		case 0x98:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[66].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[66].object_id = item_id;
			return;
		case 0x97:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[67].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[67].object_id = item_id;
			return;
		case 0x96:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[68].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[68].object_id = item_id;
			return;
		case 0x95:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[69].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[69].object_id = item_id;
			return;
		case 0x94:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[70].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[70].object_id = item_id;
			return;
		case 0x93:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[71].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[71].object_id = item_id;
			return;
		case 0x92:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[72].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[72].object_id = item_id;
			return;
		case 0x91:
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[73].ptr = ptr;
			ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[73].object_id = item_id;
			return;
        default:
            return;
        }
    }
}

void GaribCarnival3Shiny()
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedCarnival3(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnCarnival3(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedCarnival3() {
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L3]; i++)
        {
            collected += ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_CARNIVAL_L3])
        {
            ap_memory.pc.worlds[AP_CARNIVAL_L3].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitCarnival3()
{
    for(int i = 0; i < 14; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyCarnival3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_3 && 
        (obj_type == WIND_UP || obj_type == BEE || obj_type == DENNIS || obj_type == BUTTERFLY || obj_type == SNAIL))
    {    
        switch (item_id)
        {
            //Bee
            case 0x1F4:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[0].ptr = ptr;
                return;
            //Dennis
            case 0x19C:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[1].ptr = ptr;
                return;
            //Dennis Butterfly
            case 0x12B:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[2].ptr = ptr;
                return;
            case 0x1BC:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[3].ptr = ptr;
                return;
            case 0x1C5:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[4].ptr = ptr;
                return;
            //Fenced Butterfly
            case 0x1D3:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[5].ptr = ptr;
                return;
            case 0x1DC:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[6].ptr = ptr;
                return;
            //Fenced Wind-Ups
            case 0x130:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[7].ptr = ptr;
                return;
            case 0xF7:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[8].ptr = ptr;
                return;
            //Hands Wind-Up
            case 0x147:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[9].ptr = ptr;
                return;
            //Snail
            case 0x1CE:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[10].ptr = ptr;
                return;
            //Spinning Wind-Ups
            case 0x1FC:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[11].ptr = ptr;
                return;
            case 0x218:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[12].ptr = ptr;
                return;
            case 0x234:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[13].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyCarnival3(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        u16 found_id;
        for(int i = 0; i < 14; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L3].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesCarnival3()
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        if(ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[8].ptr != 0) // windup
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[8].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[8].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC4480000) //(-800 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[8].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[8].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[7].ptr != 0) // windup
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[7].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[7].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC4480000) //(-800 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[7].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[7].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[9].ptr != 0) // windup
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[9].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[9].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC4480000) //(-800 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[9].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[9].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[1].ptr != 0) // dennis
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[1].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[1].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC4480000) //(-800 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[1].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[1].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[0].ptr != 0) // bee
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[0].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[0].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC44F8000) //(-800 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[0].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[0].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[11].ptr != 0) // windup
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[11].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[11].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC4480000) //(-800 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[11].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[11].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[12].ptr != 0) // windup
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[12].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[12].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC4480000) //(-800 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[12].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[12].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[13].ptr != 0) // windup
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[13].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[13].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC4480000) //(-800 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[13].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].enemy_checks[13].ptr = 0;
                }
            }
        }
    }
}

//Life

void LifeInitCarnival3()
{
    for(int i = 0; i < 10; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeCarnival3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_3 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Dennis Platform Life 1
            case 0x37:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[0].ptr = ptr;
                return;
            //Dennis Platform Life 2
            case 0x3D:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[1].ptr = ptr;
                return;
            //Dennis Platform Life 3
            case 0x35:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[2].ptr = ptr;
                return;
            //Funnel Life
            case 0x54:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[3].ptr = ptr;
                return;
            //Goal Life
            case 0x56:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[4].ptr = ptr;
                return;
            //Slide Life 1
            case 0x84:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[5].ptr = ptr;
                return;
            //Slide Life 2
            case 0x71:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[6].ptr = ptr;
                return;
            //Tent Life
            case 0x52:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[7].ptr = ptr;
                return;
            //Tube Life 1
            case 0x27:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[8].ptr = ptr;
                return;
            //Tube Life 2
            case 0x29:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[9].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeCarnival3(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        for(int i = 0; i < 10; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_CARNIVAL_L3].life_checks[i].ptr = 0;
            }
        }
    }
}

//Checkpoint

void CheckpointInitCarnival3()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointCarnival3(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        switch (item_id)
        { 
            //Checkpoint 1
            case 0x27:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            //Checkpoint 2
            case 0xEE:
                if(ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[1].ptr == 0) // 2
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[1].ptr = ptr;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[1].warp_ptr = 0x80315070;
                }
                else // 3
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[2].ptr = ptr;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[2].warp_ptr = 0x80314EF0;
                }
                return;
            //Checkpoint 4
            case 0x129:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[3].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[3].warp_ptr = 0x80305EB0;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointCarnival3()
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointCarnival3()
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 4; i++)
            {
                if(i == ap_memory.pc.worlds[AP_CARNIVAL_L3].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPCarnival3(u32 warp_ptr)
{
    for(int i = 0;i < 4; i++)
    {
        if(ap_memory.pc.worlds[AP_CARNIVAL_L3].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_CARNIVAL_L3_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_CARNIVAL_L3_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_CARNIVAL_L3_CHECKPOINT3] > 0)
            {
                return 0;
            }
            else if(i == 3 && ap_memory.pc.items[AP_CARNIVAL_L3_CHECKPOINT4] > 0)
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

void SwitchInitCarnival3()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchCarnival3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_3 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Ball Switch
            case 0x1E4:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[0].ptr = ptr;
                carn3_hands = false;
                return;
            //Glover Switch
            case 0x1EB:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[1].ptr = ptr;
                carn3_door = false;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsCarnival3()
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[0].ptr != 0) // hands
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!carn3_door && ap_memory.pc.items[AP_CARNIVAL_L3_HANDS])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0xC45A2000;
                    carn3_door = true;
                }
                if(!ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[0].collected 
                    && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0xC4596000;
                    (*(u16*)door_open_offset) == 0xFFFD;
                }
            }
            if(ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[1].ptr != 0) // Gate
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[1].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!carn3_door && ap_memory.pc.items[AP_CARNIVAL_L3_SPIN_DOOR])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x42D30000;
                    carn3_door = true;
                }
                if(!ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[1].collected 
                    && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x42DA0000;
                    (*(u16*)door_open_offset) == 0xFFFE;
                }
            } 
        }
    } 
    else
    {
        for(int i = 0; i < 2; i++)
        {
            ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[i].ptr = 0;
        }
    }
}

void HitSwitchCarnival3()
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        u32 on_switch = (*(u32*)0x80321E38);
        if(on_switch != 0)
        {
            for(int i=0; i < 2; i++)
            {
                if(ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[i].ptr == on_switch 
                    && i == 1) // gate
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x42D30000;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[i].collected = 1;
                }
            }
        }
    }
}

void HitBallSwitchCarnival3(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        for(int i=0; i < 1; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[i].ptr == ptr &&
                i == 0) //hands
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0xC45A2000;
                ap_memory.pc.worlds[AP_CARNIVAL_L3].switch_checks[i].collected = 1;
            }
        }
    }
}


//Potions

void PotionInitCarnival3()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L3].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionCarnival3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_3 && obj_type == 0x0100)
    {
        switch (item_id)
        {
            //Frog Potion
            case 0x24E:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].potion_checks[0].ptr = ptr;
                return;
            //Sticky Potion
            case 0x25F:
                ap_memory.pc.worlds[AP_CARNIVAL_L3].potion_checks[1].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

// void PotionSpawnCarnival3(u32 ptr)
// {
//     if(gvr_current_map == MAP_CARNIVAL_3)
//     {
//         partial_potion_obj_t* potion = (partial_potion_obj_t*) ptr;
//         if(potion->type == 0x04)
//         {
//             ap_memory.pc.worlds[AP_CARNIVAL_L3].potion_checks[1].ptr = ptr;
//         }
//         else if(potion->type == 0x02)
//         {
//             ap_memory.pc.worlds[AP_CARNIVAL_L3].potion_checks[0].ptr = ptr;
//         }
//     }
// }


void MonitorPotionCarnival3()
{
    if(gvr_current_map == MAP_CARNIVAL_3)
    {
        for(int i = 0; i < 2; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L3].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_CARNIVAL_L3].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L3].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}
