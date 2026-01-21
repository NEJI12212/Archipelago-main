#include "pirates_1.h"

bool pir1_beach = false;
bool pir1_elevator = false;
// bool pir1_treasure = false;
// u16 treasure_timer = 0;
bool pir1_sandpile = false;
bool pir1_waterspout = false;
// bool pir1_lighthouse = false;
// u8 lighthouse_timer = 0;
bool pir1_ship = false;
bool pir1_bridge = false;

void GaribInitPirates1()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L1]; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribPirates1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_1 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Beach Garibs
            case 0xBA:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[0].object_id = item_id;
                return;
            case 0xBB:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[1].object_id = item_id;
                return;
            case 0xBC:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[2].object_id = item_id;
                return;
            case 0xBD:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[3].object_id = item_id;
                return;
            case 0xBE:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[4].object_id = item_id;
                return;
            case 0xBF:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[5].object_id = item_id;
                return;
            case 0xC0:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[6].object_id = item_id;
                return;
            case 0xB9:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[7].object_id = item_id;
                return;
            //Box Garibs
            case 0x3F:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[8].object_id = item_id;
                return;
            case 0x28:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[9].object_id = item_id;
                return;
            case 0x33:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[10].object_id = item_id;
                return;
            case 0x2A:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[11].object_id = item_id;
                return;
            case 0x2C:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[12].object_id = item_id;
                return;
            case 0x31:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[13].object_id = item_id;
                return;
            case 0x3D:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[14].object_id = item_id;
                return;
            //Bridge Garibs
            case 0x6C:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[15].object_id = item_id;
                return;
            case 0x6F:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[16].object_id = item_id;
                return;
            case 0x6D:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[17].object_id = item_id;
                return;
            case 0x6E:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[18].object_id = item_id;
                return;
            //Cannon House Garibs
            case 0x35:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[19].object_id = item_id;
                return;
            case 0x3B:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[20].object_id = item_id;
                return;
            case 0x39:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[21].object_id = item_id;
                return;
            case 0x37:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[22].object_id = item_id;
                return;
            //Flying Ship A Garibs
            case 0x81:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[23].object_id = item_id;
                return;
            case 0x82:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[24].object_id = item_id;
                return;
            case 0x83:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[25].object_id = item_id;
                return;
            case 0x84:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[26].object_id = item_id;
                return;
            case 0x80:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[27].object_id = item_id;
                return;
            //Flying Ship B Garibs
            case 0x87:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[28].object_id = item_id;
                return;
            case 0x88:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[29].object_id = item_id;
                return;
            case 0x89:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[30].object_id = item_id;
                return;
            case 0x86:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[31].object_id = item_id;
                return;
            //Lighthouse Garibs
            case 0xB3:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[32].object_id = item_id;
                return;
            case 0xB4:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[33].object_id = item_id;
                return;
            case 0xB5:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[34].object_id = item_id;
                return;
            case 0xB6:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[35].object_id = item_id;
                return;
            case 0xB7:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[36].object_id = item_id;
                return;
            case 0xB2:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[37].object_id = item_id;
                return;
            //Ramp Garibs
            case 0xA1:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[38].object_id = item_id;
                return;
            case 0xA9:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[39].object_id = item_id;
                return;
            case 0xA8:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[40].object_id = item_id;
                return;
            case 0xA7:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[41].object_id = item_id;
                return;
            case 0xA6:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[42].object_id = item_id;
                return;
            case 0xA2:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[43].object_id = item_id;
                return;
            //Spawn Garibs
            case 0xCE:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[44].object_id = item_id;
                return;
            case 0xCF:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[45].object_id = item_id;
                return;
            case 0xCD:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[46].object_id = item_id;
                return;
            case 0xCC:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[47].object_id = item_id;
                return;
            //Sunken Ship Garibs
            case 0xD1:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[48].object_id = item_id;
                return;
            case 0xD4:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[49].object_id = item_id;
                return;
            case 0xD3:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[50].object_id = item_id;
                return;
            case 0xD2:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[51].object_id = item_id;
                return;
            //Tilt Garibs A
            case 0xC7:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[52].object_id = item_id;
                return;
            case 0xCA:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[53].object_id = item_id;
                return;
            case 0xC9:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[54].object_id = item_id;
                return;
            case 0xC8:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[55].object_id = item_id;
                return;
            //Tilt Garibs B
            case 0xC2:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[56].object_id = item_id;
                return;
            case 0xC5:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[57].object_id = item_id;
                return;
            case 0xC4:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[58].object_id = item_id;
                return;
            case 0xC3:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[59].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[59].object_id = item_id;
                return;
            //Tip House Garibs
            case 0xAB:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[60].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[60].object_id = item_id;
                return;
            case 0xB0:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[61].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[61].object_id = item_id;
                return;
            case 0xAF:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[62].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[62].object_id = item_id;
                return;
            case 0xAE:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[63].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[63].object_id = item_id;
                return;
            case 0xAD:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[64].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[64].object_id = item_id;
                return;
            case 0xAC:
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[65].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[65].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribPirates1Shiny()
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedPirates1(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnPirates1(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L1]; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedPirates1() {
    if(gvr_current_map == MAP_PIRATES_1)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L1]; i++)
        {
            collected += ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_PIRATES_L1])
        {
            ap_memory.pc.worlds[AP_PIRATES_L1].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitPirates1()
{
    for(int i = 0; i < 11; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyPirates1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_1 && 
        (obj_type == WIND_UP || obj_type == CANNONBALL || obj_type == SWISH || obj_type == CHESTER || obj_type == LOBSTER))
    {    
        switch (item_id)
        {
            //Cannonballs
            case 0x225:
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[0].ptr = ptr;
                return;
            case 0x21E:
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[1].ptr = ptr;
                return;
            case 0x22E:
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[2].ptr = ptr;
                return;
            //Crates Swish
            case 0x2A7:
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[3].ptr = ptr;
                return;
            //End Chester
            case 0x23F:
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[4].ptr = ptr;
                return;
            //Lighthouse Chester
            case 0x24D:
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[5].ptr = ptr;
                return;
            //Lighthouse Lobster
            case 0x25E:
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[6].ptr = ptr;
                return;
            //Lighthouse Swish
            case 0x26B:
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[7].ptr = ptr;
                return;
            //Lighthouse Wind-Up
            case 0x297:
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[8].ptr = ptr;
                return;
            //Shore Wind-Up
            case 0xEF:
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[9].ptr = ptr;
                return;
            //Underwater Lobster
            case 0x2FC:
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[10].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyPirates1(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        u16 found_id;
        for(int i = 0; i < 13; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_PIRATES_L1]; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_PIRATES_L1].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesPirates1()
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        if(ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[0].ptr != 0) //cannonball
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[0].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[0].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3FA0000) //(-500 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[0].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[0].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[1].ptr != 0) // cannonball
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[1].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[1].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3FA0000) //(-500 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[1].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[1].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[2].ptr != 0) // cannonball
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[2].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[2].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3FA0000) //(-500 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[2].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[2].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[4].ptr != 0) // chest
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[4].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[4].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3FA0000) //(-500 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[4].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[4].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[5].ptr != 0) // chest
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[5].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[5].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3FA0000) //(-500 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[5].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[5].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[7].ptr != 0) // swish
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[7].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[7].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3FA0000) //(-500 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[7].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[7].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[3].ptr != 0) // swish
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[3].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[3].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC3FA0000) //(-500 in float)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[3].collected = 1;
                    ap_memory.pc.worlds[AP_PIRATES_L1].enemy_checks[3].ptr = 0;
                }
            }
        }
    }
}


//Life

void LifeInitPirates1()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L1].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifePirates1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_1 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Chest Life
            case 0x41:
                ap_memory.pc.worlds[AP_PIRATES_L1].life_checks[0].ptr = ptr;
                return;
            //Lighthouse Door Life
            case 0x8B:
                ap_memory.pc.worlds[AP_PIRATES_L1].life_checks[1].ptr = ptr;
                return;
            //Ramp Life
            case 0x8E:
                ap_memory.pc.worlds[AP_PIRATES_L1].life_checks[2].ptr = ptr;
                return;
            //Trapped Lighthosue Life
            case 0x43:
                ap_memory.pc.worlds[AP_PIRATES_L1].life_checks[3].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifePirates1(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L1].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_PIRATES_L1].life_checks[i].ptr = 0;
            }
        }
    }
}

//Tip

void TipInitPirates1()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void TipPirates1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_1 && obj_type == 0x00C0)
    {    
        switch (item_id)
        {
            //Tip
            case 0x32C:
                ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedTipPirates1(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].collected = 1;
                ap_memory.pc.last_tip_ptr = ptr;
            }
        }
    }
}

void VisitedTiphatsPirates1()
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].ptr != 0)
            {
                tip_hat_t *object = (tip_hat_t*)ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].ptr;
                if(object->visited == 0 && ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].collected == 1)
                {
                    object->visited = 1;
                }
            }
        }
    }
}

void TipTextHintPirates1(u32 orig_txt_ptr)
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        u32 copy_ptr = orig_txt_ptr;
        for(int i = 0; i < 1; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].ptr == ap_memory.pc.last_tip_ptr)
            {
                if(ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].tip_text.last_line == 0 || ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].active)
                {
                    return;
                }
                for(int line = 0; line < ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].tip_text.last_line; line++)
                {
                    u32 text_action = copy_ptr + 4;
                    (*(u32*)copy_ptr) = (u32)&ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].tip_text.lines[line].text;

                    if(line + 1 == ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].tip_text.last_line)
                    {
                        (*(u32*)text_action) = 0x00000002;
                        ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].active = true;
                        return;
                    }
                    else
                    {
                        copy_ptr += 8;
                        (*(u32*)text_action) = 0x00000000;
                    }
                }
            }
            else if(ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].active)
            {
                ap_memory.pc.worlds[AP_PIRATES_L1].tip_checks[i].active = false;
            }
        }
    }
}

//Checkpoint

void CheckpointInitPirates1()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointPirates1(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x28:
                ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            //Checkpoint 2
            case 0x5C:
                ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[1].warp_ptr = 0x8031CBC0;
                return;
            //Checkpoint 3
            case 0x5F:
                ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[2].warp_ptr = 0x8031C980;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointPirates1()
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointPirates1()
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 3; i++)
            {
                if(i == ap_memory.pc.worlds[AP_PIRATES_L1].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPPirates1(u32 warp_ptr)
{
    for(int i = 0;i < 3; i++)
    {
        if(ap_memory.pc.worlds[AP_PIRATES_L1].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_PIRATES_L1_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_PIRATES_L1_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_PIRATES_L1_CHECKPOINT3] > 0)
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

void SwitchInitPirates1()
{
    for(int i = 0; i < 8; i++)
    {
        ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchPirates1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_PIRATES_1 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Coast Target
            case 0x1EA:
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[0].ptr = ptr;
                // pir1_treasure = false;
                // treasure_timer = 0x01FF;
                return;
            //Crate Ball Switch
            case 0x20C:
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[1].ptr = ptr;
                pir1_bridge = false;
                return;
            //Fan Ball Switch
            case 0x211:
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[2].ptr = ptr;
                pir1_sandpile = false;
                return;
            //Lighthouse Glover Switch
            case 0x1E2:
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[3].ptr = ptr;
                pir1_ship = false;
                return;
            //Lighthouse Target
            case 0x1F0:
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[4].ptr = ptr;
                // lighthouse_timer = 0xFF;
                // pir1_lighthouse = 0;
                return;
            //Sand Ball Switch
            case 0x216:
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[5].ptr = ptr;
                pir1_waterspout = false;
                return;
            //Ship Target
            case 0x1F6:
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[6].ptr = ptr;
                pir1_elevator = false;
                return;
            //Tower Glover Switch
            case 0x1DD:
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[7].ptr = ptr;
                pir1_beach = false;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsPirates1()
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[1].ptr != 0) // bridge
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[1].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir1_bridge && ap_memory.pc.items[AP_PIRATES_L1_BRIDGE])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x401D9021;
                    pir1_bridge = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[1].collected 
                    && ((*(u16*)door_open_offset) == 0xFFFD || (*(u16*)door_open_offset) == 0xFF9B)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x40AEC80F;
                }
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[2].ptr != 0) // sandpile
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[2].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir1_sandpile && ap_memory.pc.items[AP_PIRATES_L1_SANDPILE])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0xC439C000;
                    pir1_sandpile = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[2].collected 
                    && (*(u16*)door_open_offset) == 0xFFFD) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0xC4390000;
                }
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[3].ptr != 0) // ship
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[3].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[3].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir1_ship && ap_memory.pc.items[AP_PIRATES_L1_RAISE_SHIP])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x43A30000;
                    pir1_ship = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[3].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFE)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x43A50000;
                }
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[5].ptr != 0) // waterspout
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[5].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[5].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir1_waterspout && ap_memory.pc.items[AP_PIRATES_L1_WATERSPOUT])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0xC439C000;
                    pir1_waterspout = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[5].collected 
                    && (*(u16*)door_open_offset) == 0xFFFD) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0xC4390000;
                }
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[6].ptr != 0) // elevator
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[6].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[6].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir1_elevator && ap_memory.pc.items[AP_PIRATES_L1_ELEVATOR])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0xC4103FFA;
                    pir1_elevator = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[6].collected 
                    && (*(u16*)door_open_offset) == 0xFFFD) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0xC40F4000;
                }
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[7].ptr != 0) // beach
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[7].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[7].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!pir1_beach && ap_memory.pc.items[AP_PIRATES_L1_RAISE_BEACH])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0xC3F78000;
                    pir1_beach = true;
                }
                if(!ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[7].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFD)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0xC3F58000;
                }
            }
            
            // if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[0].ptr != 0) // chest
            // {
            //     u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[0].ptr + 0x00B4; // Z axis
            //     u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[0].ptr + 0x038;
            //     u32 gate_ptr = (*(u32*)gate_ptr_offset);
            //     u32 door_open_offset = gate_ptr + 0x0050;
            //     if(!pir1_treasure && ap_memory.pc.items[AP_PIRATES_L1_CHEST] && treasure_timer == 0)
            //     {
            //         (*(u32*)0x803237E0) = 0x802FC850;
            //         pir1_treasure = true;
            //     }
            //     if(!ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[0].collected 
            //         && (*(u16*)door_open_offset) == 0xFFFD) // Switch not yet collected
            //     {
            //         (*(u32*)position_addr) = 0x455C2000;
            //     }
            // }
            // if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[4].ptr != 0) // lighthouse
            // {
            //     u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[4].ptr + 0x00BC; // X axis
            //     u32 gate_ptr_offset = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[4].ptr + 0x038;
            //     u32 gate_ptr = (*(u32*)gate_ptr_offset);
            //     u32 door_open_offset = gate_ptr + 0x0050;
            //     if(!pir1_lighthouse && ap_memory.pc.items[AP_PIRATES_L1_LIGHTHOUSE] && (*(u16*)door_open_offset) == 0xFFFD && lighthouse_timer == 0)
            //     {
            //         (*(u32*)0x803237E0) = 0x802FBB40; //Puzzle Ptr to activate
            //         pir1_lighthouse = true;
            //     }
            //     if(!ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[4].collected 
            //         && (*(u16*)door_open_offset) == 0xFFFD) // Switch not yet collected
            //     {
            //         (*(u32*)position_addr) = 0xC4FAC000;
            //     }
            // }
            // if(lighthouse_timer != 0x0)
            // {
            //     lighthouse_timer--;
            // } 
            // if(treasure_timer != 0x0)
            // {
            //     treasure_timer--;
            // }     
        }
    } 
    else
    {
        for(int i = 0; i < 8; i++)
        {
            ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr = 0;
        }
    }
}

void HitSwitchPirates1()
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        u32 on_switch = (*(u32*)0x80323A58);
        if(on_switch != 0)
        {
            for(int i=0; i < 8; i++)
            {
                if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr == on_switch 
                    && i == 7) // Tower
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0xC3F78000;
                    ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr == on_switch 
                    && i == 3) // Tower
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x43A30000;
                    ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].collected = 1;
                }
            }
        }
    }
}

void HitBallSwitchPirates1(u32 ptr)
{
    if(gvr_current_map == MAP_PIRATES_1)
    {
        for(int i=0; i < 8; i++)
        {
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr == ptr &&
                i == 6) //elevator
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0xC4103FFA;
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr == ptr &&
                i == 1) //bridge
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x401D9021;
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr == ptr &&
                i == 0) //treasure
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr + 0x00B4; //Z axis
                (*(u32*)position_addr) = 0x455C7000;
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr == ptr &&
                i == 2) //fan switch
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0xC439C000;
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr == ptr &&
                i == 5) //sandpile switch
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0xC439C000;
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr == ptr &&
                i == 4) //treasure
            {
                u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr + 0x00BC; //X axis
                (*(u32*)position_addr) = 0xC4FA0000;
                ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].collected = 1;
            }
            
            // if(ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr == ptr &&
            //     i == 4) //Door 1
            // {
            //     u32 position_addr = ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].ptr + 0x00B8;
            //     (*(u32*)position_addr) = 0x443AC000;
            //     ap_memory.pc.worlds[AP_PIRATES_L1].switch_checks[i].collected = 1;
            // }
        }
    }
}
