#include "fear_3.h"

bool fear3_gate = false;
bool fear3_spikes = false;

void GaribInitFear3()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L3]; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribFear3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_3 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Beachball Garibs
            case 0x35:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[0].object_id = item_id;
                return;
            case 0x33:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[1].object_id = item_id;
                return;
            case 0x34:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[2].object_id = item_id;
                return;
            case 0x32:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[3].object_id = item_id;
                return;
            //Coffin Garibs
            case 0x120:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[4].object_id = item_id;
                return;
            case 0x11E:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[5].object_id = item_id;
                return;
            case 0x11F:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[6].object_id = item_id;
                return;
            case 0x11D:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[7].object_id = item_id;
                return;
            //Crumbling Garibs
            case 0x11B:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[8].object_id = item_id;
                return;
            case 0x11A:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[9].object_id = item_id;
                return;
            //Electric Garibs
            case 0x66:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[10].object_id = item_id;
                return;
            case 0x65:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[11].object_id = item_id;
                return;
            case 0x64:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[12].object_id = item_id;
                return;
            case 0x63:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[13].object_id = item_id;
                return;
            case 0x62:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[14].object_id = item_id;
                return;
            case 0x61:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[15].object_id = item_id;
                return;
            case 0x68:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[16].object_id = item_id;
                return;
            case 0x67:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[17].object_id = item_id;
                return;
            //Electric Roof Garibs
            case 0xB5:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[18].object_id = item_id;
                return;
            case 0xB6:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[19].object_id = item_id;
                return;
            case 0xAA:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[20].object_id = item_id;
                return;
            case 0xAD:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[21].object_id = item_id;
                return;
            case 0xB2:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[22].object_id = item_id;
                return;
            case 0xB3:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[23].object_id = item_id;
                return;
            case 0xAF:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[24].object_id = item_id;
                return;
            case 0xB0:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[25].object_id = item_id;
                return;
            //Gate Garibs
            case 0x117:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[26].object_id = item_id;
                return;
            case 0x118:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[27].object_id = item_id;
                return;
            //Guillotine Garibs
            case 0x122:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[28].object_id = item_id;
                return;
            case 0x124:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[29].object_id = item_id;
                return;
            case 0x123:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[30].object_id = item_id;
                return;
            //L Roof Garibs
            case 0x10E:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[31].object_id = item_id;
                return;
            case 0x10F:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[32].object_id = item_id;
                return;
            case 0x10D:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[33].object_id = item_id;
                return;
            case 0xA7:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[34].object_id = item_id;
                return;
            case 0xA9:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[35].object_id = item_id;
                return;
            case 0xA8:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[36].object_id = item_id;
                return;
            //Left U Roof Garibs
            case 0x3C:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[37].object_id = item_id;
                return;
            case 0x3D:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[38].object_id = item_id;
                return;
            case 0x3B:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[39].object_id = item_id;
                return;
            //Path Lip Garibs
            case 0x111:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[40].object_id = item_id;
                return;
            case 0x115:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[41].object_id = item_id;
                return;
            case 0x114:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[42].object_id = item_id;
                return;
            case 0x113:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[43].object_id = item_id;
                return;
            case 0x112:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[44].object_id = item_id;
                return;
            //Right U Roof Garibs
            case 0x38:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[45].object_id = item_id;
                return;
            case 0x39:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[46].object_id = item_id;
                return;
            case 0x37:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[47].object_id = item_id;
                return;
            //Slant Ring Garibs
            case 0x49:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[48].object_id = item_id;
                return;
            case 0x4A:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[49].object_id = item_id;
                return;
            case 0x4B:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[50].object_id = item_id;
                return;
            case 0x4C:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[51].object_id = item_id;
                return;
            case 0x4D:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[52].object_id = item_id;
                return;
            case 0x4E:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[53].object_id = item_id;
                return;
            case 0x4F:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[54].object_id = item_id;
                return;
            case 0x50:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[55].object_id = item_id;
                return;
            case 0x51:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[56].object_id = item_id;
                return;
            case 0x52:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[57].object_id = item_id;
                return;
            //Stone Garibs
            case 0x41:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[58].object_id = item_id;
                return;
            case 0x42:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[59].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[59].object_id = item_id;
                return;
            //Swinging Garibs
            case 0xC8:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[60].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[60].object_id = item_id;
                return;
            case 0xCB:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[61].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[61].object_id = item_id;
                return;
            case 0xCA:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[62].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[62].object_id = item_id;
                return;
            case 0xC9:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[63].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[63].object_id = item_id;
                return;
            //Wood Slant Garibs
            case 0x126:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[64].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[64].object_id = item_id;
                return;
            case 0x128:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[65].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[65].object_id = item_id;
                return;
            case 0x127:
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[66].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[66].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribFear3Shiny()
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedFear3(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L3]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnFear3(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedFear3() {
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L3]; i++)
        {
            collected += ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_FORTRESS_L3])
        {
            ap_memory.pc.worlds[AP_FORTRESS_L3].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitFear3()
{
    for(int i = 0; i < 7; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyFear3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_3 && 
        (obj_type == WIND_UP || obj_type == SAMTEX || obj_type == CANNONBALL))
    {    
        switch (item_id)
        {	
           //Crenels Cannonball
            case 0x1B9:
                ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[0].ptr = ptr;
                return;
            //Electric Wind-Up
            case 0x20E:
                ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[1].ptr = ptr;
                return;
            //End Cannonballs
            case 0x1D9:
                ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[2].ptr = ptr;
                return;
            case 0x1E2:
                ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[3].ptr = ptr;
                return;
            //Samtex
            case 0x1C0:
                ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[4].ptr = ptr;
                return;
            //Stone Wind-Ups
            case 0x1FC:
                ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[5].ptr = ptr;
                return;
            case 0x1EF:
                ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[6].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyFear3(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        u16 found_id;
        for(int i = 0; i < 7; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L3]; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_FORTRESS_L3].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}


void MonitorFallenEnemiesFear3()
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        if(ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[0].ptr != 0) // Cannonball
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[0].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[0].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xBF800000) //(-1 in float)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[0].collected = 1;
                    ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[0].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[2].ptr != 0) // Cannonball
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[2].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[2].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xBF800000) //(-1 in float)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[2].collected = 1;
                    ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[2].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[3].ptr != 0) // Cannonball
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[3].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[3].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xBF800000) //(-1 in float)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[3].collected = 1;
                    ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[3].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[4].ptr != 0) // samtex
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[4].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[4].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xBF800000) //(-1 in float)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[4].collected = 1;
                    ap_memory.pc.worlds[AP_FORTRESS_L3].enemy_checks[4].ptr = 0;
                }
            }
        }
    }
}

//Life

void LifeInitFear3()
{
    for(int i = 0; i < 7; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L3].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeFear3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_3 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Left Buttress Life 1
            case 0x2E:
                ap_memory.pc.worlds[AP_FORTRESS_L3].life_checks[0].ptr = ptr;
                return;
            //Left Buttress Life 2
            case 0x29:
                ap_memory.pc.worlds[AP_FORTRESS_L3].life_checks[1].ptr = ptr;
                return;
            //Metal Jaws Life
            case 0x3F:
                ap_memory.pc.worlds[AP_FORTRESS_L3].life_checks[2].ptr = ptr;
                return;
            //Right Buttress Life 1
            case 0x27:
                ap_memory.pc.worlds[AP_FORTRESS_L3].life_checks[3].ptr = ptr;
                return;
            //Right Buttress Life 2
            case 0x25:
                ap_memory.pc.worlds[AP_FORTRESS_L3].life_checks[4].ptr = ptr;
                return;
            //Spiketrap Life
            case 0x44:
                ap_memory.pc.worlds[AP_FORTRESS_L3].life_checks[5].ptr = ptr;
                return;
            //Spikewall Life
            case 0x30:
                ap_memory.pc.worlds[AP_FORTRESS_L3].life_checks[6].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeFear3(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        for(int i = 0; i < 7; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L3].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_FORTRESS_L3].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_FORTRESS_L3].life_checks[i].ptr = 0;
            }
        }
    }
}

//Checkpoint

void CheckpointInitFear3()
{
    for(int i = 0; i < 5; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointFear3(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x25:
                ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            //Checkpoint 2
            case 0x192:
                ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[1].warp_ptr = 0x802F5A70;
                return;
            //Checkpoint 3
            case 0x240:
                if(ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[2].ptr == 0) // 3
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[2].ptr = ptr;
                    ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[2].warp_ptr = 0x802EEEC0;
                }
                else // 4
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[3].ptr = ptr;
                    ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[3].warp_ptr = 0x802EED40;
                }
                return;
            //Checkpoint 5
            case 0x243:
                ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[4].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[4].warp_ptr = 0x802EEB00;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointFear3()
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        for(int i = 0; i < 5; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointFear3()
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 5; i++)
            {
                if(i == ap_memory.pc.worlds[AP_FORTRESS_L3].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPFear3(u32 warp_ptr)
{
    for(int i = 0;i < 5; i++)
    {
        if(ap_memory.pc.worlds[AP_FORTRESS_L3].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_FORTRESS_L3_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_FORTRESS_L3_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_FORTRESS_L3_CHECKPOINT3] > 0)
            {
                return 0;
            }
            else if(i == 3 && ap_memory.pc.items[AP_FORTRESS_L3_CHECKPOINT4] > 0)
            {
                return 0;
            }
            else if(i == 4 && ap_memory.pc.items[AP_FORTRESS_L3_CHECKPOINT5] > 0)
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

void SwitchInitFear3()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchFear3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_3 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Ball Switch
            case 0x227:
                ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[0].ptr = ptr;
                fear3_spikes = false;
                fear3_gate = false;
                return;
            //Target
            // case 0x0E0:
            //     // ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[1].ptr = ptr;
            //     return;
            default:
                return;
        }
    }
}

void MonitorEventsFear3()
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            // if(ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[0].ptr != 0) // spikes
            // {
            //     u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[0].ptr + 0x00B8;
            //     u32 gate_ptr_offset = ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[0].ptr + 0x038;
            //     u32 gate_ptr = (*(u32*)gate_ptr_offset);
            //     u32 door_open_offset = gate_ptr + 0x0050;
            //     if(gate_ptr > 0x80000000)
            //     {
            //         u32 door_open_offset = gate_ptr + 0x0050;
            //         if(!fear3_spikes && ap_memory.pc.items[AP_FORTRESS_L3_SPIKES])
            //         {
            //             (*(u16*)door_open_offset) = 0x0001;
            //             (*(u32*)position_addr) = 0x42F58CCC;
            //             fear3_spikes = true;
            //         }
            //         if(!ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[0].collected 
            //             && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
            //         {
            //             (*(u32*)position_addr) = 0x42FE799A;
            //         }
            //     }
            // }
            if(!ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[1].collected) // Gate
            {
                u16 triggered = (*(u16*)0x8030761E);
                if(triggered == 0x0000)
                {
                    (*(u16*)0x8030761E) = 0x0001;
                }
            }
        }
    } 
    else
    {
        for(int i = 0; i < 2; i++)
        {
            ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[i].ptr = 0;
        }
    }
}

void PuzzleEventsFear3(u32 ptr)
{
    if(ptr == 0x80307620) // Target
    {
        ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[1].collected = 1;
        return;
    }
    if(!fear3_gate && ap_memory.pc.items[AP_FORTRESS_L3_GATE])
    {
        fear3_gate = true;
        return gvr_fn_activate_puzzle(0x80307620);
    }
    if(!fear3_spikes && ap_memory.pc.items[AP_FORTRESS_L3_SPIKES])
    {
        fear3_spikes = true;
        return gvr_fn_activate_puzzle(0x80307790);
    }
    return gvr_fn_activate_puzzle(ptr);
}

void HitBallSwitchFear3(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        for(int i=0; i < 2; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[i].ptr == ptr &&
                i == 0) //spikes
            {
                u32 position_addr = ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x42F58CCC;
                ap_memory.pc.worlds[AP_FORTRESS_L3].switch_checks[i].collected = 1;
            }
        }
    }
}

// //Potions

void PotionInitFear3()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L3].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionFear3(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_3 && obj_type == 0x0100)
    {
        switch (item_id)
        {
            	//Beachball
             case 0x1E9:
                ap_memory.pc.worlds[AP_FORTRESS_L3].potion_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void MonitorPotionFear3()
{
    if(gvr_current_map == MAP_FORTRESS_3)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L3].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_FORTRESS_L3].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L3].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_FORTRESS_L3].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}

