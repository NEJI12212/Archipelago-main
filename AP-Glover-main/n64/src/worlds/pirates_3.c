#include "pirates_3.h"

bool pir3_switch_pressed = false;
u8   pir3_switch_timer = 0;
bool pir3_net = false;
bool pir3_stairs = false;
bool pir3_elevator = false;



void GaribInitPirates3()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L3]; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribPirates3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_3 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Arch Garibs
            case 0x39:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[0].object_id = item_id;
                return;
            case 0x38:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[1].object_id = item_id;
                return;
            //Barrel Garibs
            case 0xDB:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[2].object_id = item_id;
                return;
            case 0xDC:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[3].object_id = item_id;
                return;
            case 0xD8:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[4].object_id = item_id;
                return;
            case 0xD9:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[5].object_id = item_id;
                return;
            //Bridge Garibs
            case 0x25:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[6].object_id = item_id;
                return;
            case 0x28:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[7].object_id = item_id;
                return;
            case 0x27:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[8].object_id = item_id;
                return;
            case 0x26:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[9].object_id = item_id;
                return;
            //Cave Garibs
            case 0x35:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[10].object_id = item_id;
                return;
            case 0x34:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[11].object_id = item_id;
                return;
            case 0x33:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[12].object_id = item_id;
                return;
            case 0x32:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[13].object_id = item_id;
                return;
            case 0x31:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[14].object_id = item_id;
                return;
            case 0x36:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[15].object_id = item_id;
                return;
            case 0x2F:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[16].object_id = item_id;
                return;
            case 0x30:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[17].object_id = item_id;
                return;
            //Cave Mouth Garibs
            case 0xC0:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[18].object_id = item_id;
                return;
            case 0xC1:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[19].object_id = item_id;
                return;
            //Cracked Wall Garibs
            case 0xBD:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[20].object_id = item_id;
                return;
            case 0xBE:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[21].object_id = item_id;
                return;
            //Dead End Garibs
            case 0xB5:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[22].object_id = item_id;
                return;
            case 0xB7:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[23].object_id = item_id;
                return;
            case 0xB6:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[24].object_id = item_id;
                return;
            case 0xB8:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[25].object_id = item_id;
                return;
            //High House Garibs
            case 0x3C:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[26].object_id = item_id;
                return;
            case 0x3D:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[27].object_id = item_id;
                return;
            case 0x3B:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[28].object_id = item_id;
                return;
            //Lobstervator Garibs
            case 0xCA:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[29].object_id = item_id;
                return;
            case 0xC9:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[30].object_id = item_id;
                return;
            //Post-Stair Garibs
            case 0x3F:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[31].object_id = item_id;
                return;
            case 0x41:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[32].object_id = item_id;
                return;
            case 0x40:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[33].object_id = item_id;
                return;
            //Push Crate Garibs
            case 0x4E:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[34].object_id = item_id;
                return;
            case 0x51:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[35].object_id = item_id;
                return;
            case 0x50:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[36].object_id = item_id;
                return;
            case 0x4F:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[37].object_id = item_id;
                return;
            //Push Plank Garibs
            case 0xBA:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[38].object_id = item_id;
                return;
            case 0xBB:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[39].object_id = item_id;
                return;
            //Ramp Garibs
            case 0xD1:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[40].object_id = item_id;
                return;
            case 0xD5:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[41].object_id = item_id;
                return;
            case 0xD3:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[42].object_id = item_id;
                return;
            case 0xD2:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[43].object_id = item_id;
                return;
            case 0xD4:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[44].object_id = item_id;
                return;
            case 0xD6:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[45].object_id = item_id;
                return;
            //Stone Path Garibs
            case 0xC6:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[46].object_id = item_id;
                return;
            case 0xC7:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[47].object_id = item_id;
                return;
            case 0xC3:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[48].object_id = item_id;
                return;
            case 0xC4:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[49].object_id = item_id;
                return;
            //Tilted Cliff Garibs
            case 0xDF:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[50].object_id = item_id;
                return;
            case 0xE0:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[51].object_id = item_id;
                return;
            case 0xE1:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[52].object_id = item_id;
                return;
            case 0xDE:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[53].object_id = item_id;
                return;
            //Trampoline Garibs
            case 0xE5:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[54].object_id = item_id;
                return;
            case 0xE7:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[55].object_id = item_id;
                return;
            case 0xE9:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[56].object_id = item_id;
                return;
            case 0xEB:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[57].object_id = item_id;
                return;
            case 0xED:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[58].object_id = item_id;
                return;
            case 0xEF:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[59].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[59].object_id = item_id;
                return;
            case 0xF1:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[60].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[60].object_id = item_id;
                return;
            case 0xE3:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[61].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[61].object_id = item_id;
                return;
            case 0xF2:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[62].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[62].object_id = item_id;
                return;
            case 0xF0:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[63].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[63].object_id = item_id;
                return;
            case 0xEE:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[64].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[64].object_id = item_id;
                return;
            case 0xEC:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[65].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[65].object_id = item_id;
                return;
            case 0xEA:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[66].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[66].object_id = item_id;
                return;
            case 0xE8:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[67].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[67].object_id = item_id;
                return;
            case 0xE6:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[68].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[68].object_id = item_id;
                return;
            case 0xE4:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[69].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[69].object_id = item_id;
                return;
            //Warp House Garibs
            case 0xCD:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[70].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[70].object_id = item_id;
                return;
            case 0xCE:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[71].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[71].object_id = item_id;
                return;
            case 0xCF:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[72].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[72].object_id = item_id;
                return;
            case 0xCC:
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[73].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[73].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribPirates3Shiny()
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedPirates3(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnPirates3(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedPirates3() {
    if(gvr_current_map == MAP_PIRATES_3)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L3]; i++)
        {
            collected += ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_PIRATES_L3])
        {
            ap_memory.pc.worlds[AP_PIRATES_L3].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitPirates3()
{
    for(int i = 0; i < 10; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyPirates3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_3 && 
        (obj_type == WIND_UP || obj_type == CANNONBALL || obj_type == CHESTER || obj_type == LOBSTER))
    {    
        switch (item_id)
        {
            //Cannonballs
            case 0x19A:
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[0].ptr = ptr;
                return;
            case 0x193:
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[1].ptr = ptr;
                return;
            case 0x1A3:
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[2].ptr = ptr;
                return;
            //Cliff Lobster
            case 0x20A:
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[3].ptr = ptr;
                return;
            //Crate Chester
            case 0x1AC:
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[4].ptr = ptr;
                return;
            //Dead End Wind-Up
            case 0x26A:
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[5].ptr = ptr;
                return;
            //Stairs Wind-Ups
            case 0x21E:
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[6].ptr = ptr;
                return;
            case 0x229:
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[7].ptr = ptr;
                return;
            case 0x239:
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[8].ptr = ptr;
                return;
            //Trampoline Lobster
            case 0x249:
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[9].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyPirates3(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        u16 found_id;
        for(int i = 0; i < 10; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_PIRATES_L3].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesPirates3()
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        if(ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[1].ptr != 0) // cannonball
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[1].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[1].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3480000) //(-200 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[1].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[1].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[0].ptr != 0) // cannonball
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[0].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[0].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3480000) //(-200 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[0].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[0].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[2].ptr != 0) // cannonball
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[2].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[2].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3480000) //(-200 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[2].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[2].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[4].ptr != 0) // chest
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[4].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[4].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3480000) //(-200 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[4].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L3].enemy_checks[4].ptr = 0;
                }
            }
        }
    }
}


//Life

void LifeInitPirates3()
{
    for(int i = 0; i < 6; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L3].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifePirates3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_3 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Arch Life
            case 0x46:
                ap_memory.pc.worlds[AP_PIRATES_L3].life_checks[0].ptr = ptr;
                return;
            //Broken Wall Life
            case 0x4A:
                ap_memory.pc.worlds[AP_PIRATES_L3].life_checks[1].ptr = ptr;
                return;
            //Caged Life
            case 0x44:
                ap_memory.pc.worlds[AP_PIRATES_L3].life_checks[2].ptr = ptr;
                return;
            //Cave Life
            case 0x2A:
                ap_memory.pc.worlds[AP_PIRATES_L3].life_checks[3].ptr = ptr;
                return;
            //Lip Life
            case 0x4C:
                ap_memory.pc.worlds[AP_PIRATES_L3].life_checks[4].ptr = ptr;
                return;
            //Warp House Life
            case 0x48:
                ap_memory.pc.worlds[AP_PIRATES_L3].life_checks[5].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifePirates3(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        for(int i = 0; i < 6; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L3].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_PIRATES_L3].life_checks[i].ptr = 0;
            }
        }
    }
}

//Tip

void TipInitPirates3()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void TipPirates3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_3 && obj_type == 0x00C0)
    {    
        switch (item_id)
        {
            //Tip
            case 0x28C:
                ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedTipPirates3(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].collected = 1;
                ap_memory.pc.last_tip_ptr = ptr;
            }
        }
    }
}

void VisitedTiphatsPirates3()
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].ptr != 0)
            {
                tip_hat_t *object = (tip_hat_t*)ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].ptr;
                if(object->visited == 0 && ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].collected == 1)
                {
                    object->visited = 1;
                }
            }
        }
    }
}

void TipTextHintPirates3(u32 orig_txt_ptr)
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        u32 copy_ptr = orig_txt_ptr;
        for(int i = 0; i < 1; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].ptr == ap_memory.pc.last_tip_ptr)
            {
                if(ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].tip_text.last_line == 0 || ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].active)
                {
                    return;
                }
                for(int line = 0; line < ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].tip_text.last_line; line++)
                {
                    u32 text_action = copy_ptr + 4;
                    (*(u32*)copy_ptr) = (u32)&ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].tip_text.lines[line].text;

                    if(line + 1 == ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].tip_text.last_line)
                    {
                        (*(u32*)text_action) = 0x00000002;
                        ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].active = true;
                        return;
                    }
                    else
                    {
                        copy_ptr += 8;
                        (*(u32*)text_action) = 0x00000000;
                    }
                }
            }
            else if(ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].active)
            {
                ap_memory.pc.worlds[AP_PIRATES_L3].tip_checks[i].active = false;
            }
        }
    }
}
//Checkpoint

void CheckpointInitPirates3()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointPirates3(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        switch (item_id)
        {
            //Checkpoint 1
		case 0x25:
			ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[0].ptr = ptr;
            ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
			return;
		//Checkpoint 2
		case 0x176:
            if(ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[1].ptr == 0) // 2
            {
                ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[1].warp_ptr = 0x80307770;

            }
            else // 3
            {
                ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[2].warp_ptr = 0x803075F0;
            }
			return;
		//Checkpoint 4
		case 0x1F2:
			ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[3].ptr = ptr;
            ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[3].warp_ptr = 0x802FF580;
			return;
            default:
                return;
        }
    }
}

void MonitorCheckpointPirates3()
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointPirates3()
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 4; i++)
            {
                if(i == ap_memory.pc.worlds[AP_PIRATES_L3].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPPirates3(u32 warp_ptr)
{
    for(int i = 0;i < 4; i++)
    {
        if(ap_memory.pc.worlds[AP_PIRATES_L3].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_PIRATES_L3_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_PIRATES_L3_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_PIRATES_L3_CHECKPOINT3] > 0)
            {
                return 0;
            }
            else if(i == 3 && ap_memory.pc.items[AP_PIRATES_L3_CHECKPOINT4] > 0)
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

void SwitchInitPirates3()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchPirates3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_3 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Ball Switch
            case 0x1E2:
                ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[0].ptr = ptr;
                pir3_elevator = false;
                return;
            //Cannonballs Glover Switch
            case 0x18A:
                ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[1].ptr = ptr;
                pir3_switch_pressed = false;
                return;
            //Cliff Glover Switch
            case 0x16E:
                ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[2].ptr = ptr;
                pir3_net = false;
                return;
            //Target
            case 0x1BF:
                ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[3].ptr = ptr;
                pir3_stairs = false;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsPirates3()
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[0].ptr != 0) // elevator
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir3_elevator && ap_memory.pc.items[AP_PIRATES_L3_ELEVATOR])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x434BF4BE;
                    pir3_elevator = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[0].collected 
                    && ((*(u16*)door_open_offset) == 0xFFFD || (*(u16*)door_open_offset) == 0xFF9B)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x434EF4BE;
                    if((*(u16*)door_open_offset) == 0xFF9B)
                    {
                        (*(u16*)door_open_offset) = 0xFFFD;
                    }
                }
            }   
            if(ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[1].ptr != 0) //spin platform
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[1].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(pir3_switch_pressed && pir3_switch_timer == 0x1E)
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    pir3_switch_timer--;
                }
                else if(pir3_switch_pressed && pir3_switch_timer < 0x1E && pir3_switch_timer > 0x0)
                {
                    pir3_switch_timer--;
                }
                if(pir3_switch_timer == 0 && (*(u16*)door_open_offset) == 0x0 && pir3_switch_pressed)
                {
                    (*(u32*)position_addr) = 0x42D20000;
                    pir3_switch_pressed = false;
                }
            } 
            if(ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[2].ptr != 0) // trampoline
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[2].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir3_net && ap_memory.pc.items[AP_PIRATES_L3_TRAMPOLINE])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0xC3070000;
                    pir3_net = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[2].collected 
                    && ((*(u16*)door_open_offset) == 0xFFFD || (*(u16*)door_open_offset) == 0xFF9B)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0xC3040000;
                }
            }      
            if(ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[3].ptr != 0) // stairs
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[3].ptr + 0x00BC; // X axis
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[3].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir3_stairs && ap_memory.pc.items[AP_PIRATES_L3_STAIRS])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0xC422FBE7;
                    pir3_stairs = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[3].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFD)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0xC421BBE7;
                    if((*(u16*)door_open_offset) == 0xFF9B)
                    {
                        (*(u16*)door_open_offset) = 0xFFFD;
                    }
                }
            }
              
        }
    } 
    else
    {
        for(int i = 0; i < 4; i++)
        {
            ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr = 0;
        }
    }
}

void HitSwitchPirates3()
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        u32 on_switch = (*(u32*)0x803219B8);
        if(on_switch != 0)
        {
            for(int i=0; i < 4; i++)
            {
                if(ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr == on_switch 
                    && i == 1)
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x42CA0000;
                    pir3_switch_pressed = true;
                    pir3_switch_timer = 0x1E;
                    ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].collected = 1;
                }

                if(ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr == on_switch 
                    && i == 2) // trampoline
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0xC3070000;
                    ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].collected = 1;
                }
            }
        }
    }
}

void HitBallSwitchPirates3(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        for(int i=0; i < 4; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr == ptr &&
                i == 0) //elevator
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x434BF4BE;
                ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr == ptr &&
                i == 3) //stairs
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].ptr + 0x00BC; //X axis
                (*(u32*)position_addr) = 0xC422FBE7;
                ap_memory.pc.worlds[AP_PIRATES_L3].switch_checks[i].collected = 1;
            }
            

    
        }
    }
}

//Potions

void PotionInitPirates3()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L3].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionPirates3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_3 && obj_type == 0x0100)
    {
        switch (item_id)
        {
            //Hercules Potion
            case 0x1BC:
                ap_memory.pc.worlds[AP_PIRATES_L3].potion_checks[0].ptr = ptr;
                return;
            //Sticky Potion
            case 0x284:
                ap_memory.pc.worlds[AP_PIRATES_L3].potion_checks[1].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void MonitorPotionPirates3()
{
    if(gvr_current_map == MAP_PIRATES_3)
    {
        for(int i = 0; i < 2; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L3].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_PIRATES_L3].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L3].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L3].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}
