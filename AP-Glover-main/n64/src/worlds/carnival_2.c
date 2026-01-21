#include "carnival_2.h"

bool carn2_rc = false;
u8 carn2_switch_timer = 0;
bool carn2_fan = false;
bool carn2_garib_spawn = false;
u8 carn2_garib_timer = 0;



void GaribInitCarnival2()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L2]; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribCarnival2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_2 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //After Coaster Garibs
            case 0x86:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[0].object_id = item_id;
                return;
            case 0x89:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[1].object_id = item_id;
                return;
            case 0x88:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[2].object_id = item_id;
                return;
            case 0x87:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[3].object_id = item_id;
                return;
            //Before Coaster Garibs
            case 0x81:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[4].object_id = item_id;
                return;
            case 0x84:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[5].object_id = item_id;
                return;
            case 0x83:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[6].object_id = item_id;
                return;
            case 0x82:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[7].object_id = item_id;
                return;
            //Big Top Garibs
            case 0x2B:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[8].object_id = item_id;
                return;
            case 0x2A:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[9].object_id = item_id;
                return;
            case 0x29:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[10].object_id = item_id;
                return;
            case 0x33:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[11].object_id = item_id;
                return;
            case 0x32:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[12].object_id = item_id;
                return;
            case 0x2E:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[13].object_id = item_id;
                return;
            case 0x2D:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[14].object_id = item_id;
                return;
            case 0x2C:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[15].object_id = item_id;
                return;
            //Checkered Tilt Garibs
            case 0x8F:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[16].object_id = item_id;
                return;
            case 0x91:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[17].object_id = item_id;
                return;
            case 0x90:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[18].object_id = item_id;
                return;
            case 0x8C:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[19].object_id = item_id;
                return;
            case 0x8D:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[20].object_id = item_id;
                return;
            case 0x8B:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[21].object_id = item_id;
                return;
            //Chicken Garibs
            case 0x70:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[22].object_id = item_id;
                return;
            case 0x71:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[23].object_id = item_id;
                return;
            case 0x72:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[24].object_id = item_id;
                return;
            case 0x75:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[25].object_id = item_id;
                return;
            case 0x74:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[26].object_id = item_id;
                return;
            case 0x73:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[27].object_id = item_id;
                return;
            case 0x76:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[28].object_id = item_id;
                return;
            case 0x77:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[29].object_id = item_id;
                return;
            case 0x78:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[30].object_id = item_id;
                return;
            case 0x6F:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[31].object_id = item_id;
                return;
            case 0x7A:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[32].object_id = item_id;
                return;
            case 0x79:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[33].object_id = item_id;
                return;
            //Clown Teeth Garibs
            case 0x5B:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[34].object_id = item_id;
                return;
            case 0x5F:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[35].object_id = item_id;
                return;
            case 0x5E:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[36].object_id = item_id;
                return;
            case 0x5C:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[37].object_id = item_id;
                return;
            //Fan Garibs
            case 0x7C:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[38].object_id = item_id;
                return;
            case 0x7F:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[39].object_id = item_id;
                return;
            case 0x7E:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[40].object_id = item_id;
                return;
            case 0x7D:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[41].object_id = item_id;
                return;
            //Flying Garibs
            case 0x35:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[42].object_id = item_id;
                return;
            case 0x37:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[43].object_id = item_id;
                return;
            case 0x39:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[44].object_id = item_id;
                return;
            //Red Tilt Garibs
            case 0x6C:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[45].object_id = item_id;
                return;
            case 0x6D:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[46].object_id = item_id;
                return;
            case 0x6B:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[47].object_id = item_id;
                return;
            case 0x67:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[48].object_id = item_id;
                return;
            case 0x69:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[49].object_id = item_id;
                return;
            case 0x68:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[50].object_id = item_id;
                return;
            //Teacups Garibs
            case 0x41:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[51].object_id = item_id;
                return;
            case 0x40:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[52].object_id = item_id;
                return;
            case 0x3F:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[53].object_id = item_id;
                return;
            case 0x3E:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[54].object_id = item_id;
                return;
            case 0x3D:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[55].object_id = item_id;
                return;
            case 0x42:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[56].object_id = item_id;
                return;
            //Tent Garib
            case 0x56:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[57].object_id = item_id;
                return;
            //Tent Tilt Garibs
            case 0x4A:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[58].object_id = item_id;
                return;
            case 0x4E:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[59].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[59].object_id = item_id;
                return;
            case 0x4D:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[60].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[60].object_id = item_id;
                return;
            case 0x4C:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[61].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[61].object_id = item_id;
                return;
            case 0x4B:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[62].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[62].object_id = item_id;
                return;
            case 0x51:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[63].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[63].object_id = item_id;
                return;
            case 0x52:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[64].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[64].object_id = item_id;
                return;
            case 0x53:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[65].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[65].object_id = item_id;
                return;
            case 0x54:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[66].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[66].object_id = item_id;
                return;
            case 0x50:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[67].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[67].object_id = item_id;
                return;
            //Underwater Garibs
            case 0x9A:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[68].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[68].object_id = item_id;
                return;
            case 0x99:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[69].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[69].object_id = item_id;
                return;
            case 0x98:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[70].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[70].object_id = item_id;
                return;
            case 0x97:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[71].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[71].object_id = item_id;
                return;
            case 0x93:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[72].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[72].object_id = item_id;
                return;
            case 0x96:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[73].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[73].object_id = item_id;
                return;
            case 0x95:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[74].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[74].object_id = item_id;
                return;
            case 0x94:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[75].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[75].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribCarnival2Shiny()
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedCarnival2(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnCarnival2(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedCarnival2() {
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L2]; i++)
        {
            collected += ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_CARNIVAL_L2])
        {
            ap_memory.pc.worlds[AP_CARNIVAL_L2].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitCarnival2()
{
    for(int i = 0; i < 7; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyCarnival2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_2 && 
        (obj_type == WIND_UP || obj_type == BEE || obj_type == BUGLE || obj_type == CHICKEN))
    {    
        switch (item_id)
        {
            //After Coaster Wind-Up
            case 0x215:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[0].ptr = ptr;
                return;
            //Bee
            case 0x24F:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[1].ptr = ptr;
                return;
            //Before Coaster Wind-Up
            case 0x225:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[2].ptr = ptr;
                return;
            //Bugle
            case 0x194:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[3].ptr = ptr;
                return;
            //Chicken
            case 0x1A4:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[4].ptr = ptr;
                return;
            //Conveyor Wind-Ups
            case 0x1FA:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[5].ptr = ptr;
                return;
            case 0x205:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[6].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyCarnival2(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        u16 found_id;
        for(int i = 0; i < 7; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L2].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesCarnival2()
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        if(ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[3].ptr != 0) // Bugle
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[3].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[3].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC47A0000) //(-1000 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[3].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[3].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[4].ptr != 0) // Chicken
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[4].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[4].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC47A0000) //(-1000 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[4].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[4].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[5].ptr != 0) // windup
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[5].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[5].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC47A0000) //(-1000 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[5].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[5].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[6].ptr != 0) // windup
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[6].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[6].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC47A0000) //(-1000 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[6].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[6].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[0].ptr != 0) // windup
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[0].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[0].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC47A0000) //(-1000 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[0].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[0].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[2].ptr != 0) // windup
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[2].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[2].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC47A0000) //(-1000 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[2].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[2].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[1].ptr != 0) // bee
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[1].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[1].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC47A0000) //(-1000 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[1].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].enemy_checks[1].ptr = 0;
                }
            }
        }
    }
}

//Life

void LifeInitCarnival2()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L2].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeCarnival2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_2 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Clown Teeth Life
            case 0x5D:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].life_checks[0].ptr = ptr;
                return;
            //Fan Life
            case 0x3B:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].life_checks[1].ptr = ptr;
                return;
            //Tent Life
            case 0x65:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].life_checks[2].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeCarnival2(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L2].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].life_checks[i].ptr = 0;
            }
        }
    }
}

//Tip

void TipInitCarnival2()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void TipCarnival2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_2 && obj_type == 0x00C0)
    {    
        switch (item_id)
        {
            //Tip
		    case 0x2A8:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedTipCarnival2(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].collected = 1;
                ap_memory.pc.last_tip_ptr = ptr;
            }
        }
    }
}

void VisitedTiphatsCarnival2()
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].ptr != 0)
            {
                tip_hat_t *object = (tip_hat_t*)ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].ptr;
                if(object->visited == 0 && ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].collected == 1)
                {
                    object->visited = 1;
                }
            }
        }
    }
}

void TipTextHintCarnival2(u32 orig_txt_ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        u32 copy_ptr = orig_txt_ptr;
        for(int i = 0; i < 1; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].ptr == ap_memory.pc.last_tip_ptr)
            {
                if(ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].tip_text.last_line == 0 || ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].active)
                {
                    return;
                }
                for(int line = 0; line < ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].tip_text.last_line; line++)
                {
                    u32 text_action = copy_ptr + 4;
                    (*(u32*)copy_ptr) = (u32)&ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].tip_text.lines[line].text;

                    if(line + 1 == ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].tip_text.last_line)
                    {
                        (*(u32*)text_action) = 0x00000002;
                        ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].active = true;
                        return;
                    }
                    else
                    {
                        copy_ptr += 8;
                        (*(u32*)text_action) = 0x00000000;
                    }
                }
            }
            else if(ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].active)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L2].tip_checks[i].active = false;
            }
        }
    }
}

//Checkpoint

void CheckpointInitCarnival2()
{
    for(int i = 0; i < 5; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointCarnival2(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x29:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            //Checkpoint 2
            case 0x191:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[1].warp_ptr = 0x80308BF0;
                return;
            //Checkpoint 3 & 4
            case 0x1C2:
                if(ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[2].ptr == 0) // 3
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[2].ptr = ptr;
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[2].warp_ptr = 0x80306C20;
                }
                else // 4
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[3].ptr = ptr;
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[3].warp_ptr = 0x80306AA0;
                }
                return;
            //Checkpoint 5
            case 0x1E9:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[4].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[4].warp_ptr = 0x803019F0;
                return;

            default:
                return;
        }
    }
}

void MonitorCheckpointCarnival2()
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        for(int i = 0; i < 5; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointCarnival2()
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 5; i++)
            {
                if(i == ap_memory.pc.worlds[AP_CARNIVAL_L2].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPCarnival2(u32 warp_ptr)
{
    for(int i = 0;i < 5; i++)
    {
        if(ap_memory.pc.worlds[AP_CARNIVAL_L2].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_CARNIVAL_L2_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_CARNIVAL_L2_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_CARNIVAL_L2_CHECKPOINT3] > 0)
            {
                return 0;
            }
            else if(i == 3 && ap_memory.pc.items[AP_CARNIVAL_L2_CHECKPOINT4] > 0)
            {
                return 0;
            }
            else if(i == 4 && ap_memory.pc.items[AP_CARNIVAL_L2_CHECKPOINT5] > 0)
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

void SwitchInitCarnival2()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchCarnival2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_2 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Ball Switch
		case 0x0261:
			ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[0].ptr = ptr;
            carn2_fan = false;
			return;
		//Glover Switch Coaster
		case 0x023B:
			ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[2].ptr = ptr;
            carn2_garib_timer = 0xE1;
            carn2_garib_spawn = false;
			return;
            default:
                return;
        }
    }
}

void SwitchTeethCarnival2()
{
    // //Clown Teeth
	ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[1].collected = 1;
    return;
}


void MonitorEventsCarnival2()
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[0].ptr != 0) // Fan
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!carn2_fan && ap_memory.pc.items[AP_CARNIVAL_L2_FAN])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x42260000;
                    carn2_fan = true;
                }
                if(!ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[0].collected && (*(u16*)door_open_offset) == 0xFF9B) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x42340000;
                    (*(u16*)door_open_offset) = 0xFFFD;
                }
            }
            if(ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[2].ptr != 0) //Rollercoaster
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[2].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(carn2_rc && carn2_switch_timer == 0x1E)
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    carn2_switch_timer--;
                }
                else if(carn2_rc && carn2_switch_timer < 0x1E && carn2_switch_timer > 0x0)
                {
                    carn2_switch_timer--;
                }
                if(carn2_switch_timer == 0 && (*(u16*)door_open_offset) == 0x0 && carn2_rc)
                {
                    (*(u32*)position_addr) = 0xC1E00000;
                    carn2_rc = false;
                }
            }
            if(carn2_garib_timer > 0x00)
            {
                carn2_garib_timer--;
            }
            if(!carn2_garib_spawn && carn2_garib_timer == 0 && ap_memory.pc.items[AP_CARNIVAL_L2_TEETH])
            {
                gvr_fn_spawn_garibgroup(1,0);
                carn2_garib_spawn = true;
            }   
        }
    } 
    else
    {
        for(int i = 0; i < 3; i++)
        {
            ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[i].ptr = 0;
        }
    }
}

void HitSwitchCarnival2()
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        u32 on_switch = (*(u32*)0x80327B98);
        if(on_switch != 0)
        {
            for(int i=0; i < 3; i++)
            {
                if(ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[i].ptr == on_switch 
                    && i == 2) // gate
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[i].ptr + 0x00B8;
                    //orig C1E00000
                    (*(u32*)position_addr) = 0xC1F00000;
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[i].collected = 1;
                    carn2_rc = true;
                    carn2_switch_timer = 0x1E;
                }
            }
        }
    }
}

void HitBallSwitchCarnival2(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        for(int i=0; i < 3; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[i].ptr == ptr &&
                i == 0) //fan
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x42260000;
                ap_memory.pc.worlds[AP_CARNIVAL_L2].switch_checks[i].collected = 1;
            }
        }
    }
}


//Potions

void PotionInitCarnival2()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L2].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionCarnival2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_2 && obj_type == 0x0100)
    {
        switch (item_id)
        {
            //Boomerang Ball
            case 0x025E:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].potion_checks[0].ptr = ptr;
                return;
            //Frog Potion
            case 0x01CE:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].potion_checks[1].ptr = ptr;
                return;
            //Helicopter Potion
            case 0x01F4:
                ap_memory.pc.worlds[AP_CARNIVAL_L2].potion_checks[2].ptr = ptr;
                return;
            default:
                return;
        }
    }
}



void MonitorPotionCarnival2()
{
    if(gvr_current_map == MAP_CARNIVAL_2)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L2].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_CARNIVAL_L2].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L2].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}
