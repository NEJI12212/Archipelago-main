#include "carnival_1.h"

bool carn1_conveyor = false;
bool carn1_gate = false;
bool carn1_door1 = false;
bool carn1_door2 = false;
bool carn1_door3 = false;
bool carn1_rramp1 = false;
bool carn1_rramp2 = false;
bool carn1_rramp3 = false;
bool carn1_sm = false;
u8 carn1_switch_timer = 0;
u8 rocket_timer = 0;

void GaribInitCarnival1()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L1]; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribCarnival1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_1 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
    //Chicken Garibs
            case 0x382:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[0].object_id = item_id;
                return;
            case 0x381:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[1].object_id = item_id;
                return;
            case 0x380:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[2].object_id = item_id;
                return;
            case 0x385:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[3].object_id = item_id;
                return;
            case 0x384:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[4].object_id = item_id;
                return;
            case 0x386:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[5].object_id = item_id;
                return;
            case 0x387:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[6].object_id = item_id;
                return;
            case 0x383:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[7].object_id = item_id;
                return;
            //Dennis Garibs
            case 0x1BC:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[8].object_id = item_id;
                return;
            case 0x1BB:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[9].object_id = item_id;
                return;
            case 0x1BD:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[10].object_id = item_id;
                return;
            case 0x1BE:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[11].object_id = item_id;
                return;
            //Plinko Garibs
            case 0x1E7:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[12].object_id = item_id;
                return;
            case 0x1E6:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[13].object_id = item_id;
                return;
            case 0x1EB:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[14].object_id = item_id;
                return;
            case 0x1E9:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[15].object_id = item_id;
                return;
            case 0x1EA:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[16].object_id = item_id;
                return;
            case 0x1EF:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[17].object_id = item_id;
                return;
            case 0x1ED:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[18].object_id = item_id;
                return;
            case 0x1EE:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[19].object_id = item_id;
                return;
            case 0x1F3:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[20].object_id = item_id;
                return;
            case 0x1F1:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[21].object_id = item_id;
                return;
            case 0x1F2:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[22].object_id = item_id;
                return;
            //Pregate Garibs
            case 0x37C:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[23].object_id = item_id;
                return;
            case 0x37B:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[24].object_id = item_id;
                return;
            case 0x37D:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[25].object_id = item_id;
                return;
            case 0x37E:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[26].object_id = item_id;
                return;
            //Rocket Garibs
            case 0x3B9:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[27].object_id = item_id;
                return;
            case 0x3B8:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[28].object_id = item_id;
                return;
            case 0x3B7:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[29].object_id = item_id;
                return;
            case 0x3B6:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[30].object_id = item_id;
                return;
            case 0x3B5:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[31].object_id = item_id;
                return;
            case 0x3B4:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[32].object_id = item_id;
                return;
            case 0x3B3:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[33].object_id = item_id;
                return;
            //Slide Garibs
            case 0x399:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[34].object_id = item_id;
                return;
            case 0x39A:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[35].object_id = item_id;
                return;
            case 0x39B:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[36].object_id = item_id;
                return;
            case 0x39C:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[37].object_id = item_id;
                return;
            case 0x39D:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[38].object_id = item_id;
                return;
            case 0x39E:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[39].object_id = item_id;
                return;
            case 0x3A1:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[40].object_id = item_id;
                return;
            case 0x3A2:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[41].object_id = item_id;
                return;
            //Slots Garibs
            case 0x119:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[42].object_id = item_id;
                return;
            case 0x11A:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[43].object_id = item_id;
                return;
            case 0x11B:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[44].object_id = item_id;
                return;
            case 0x112:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[45].object_id = item_id;
                return;
            case 0x113:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[46].object_id = item_id;
                return;
            case 0x114:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[47].object_id = item_id;
                return;
            case 0x115:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[48].object_id = item_id;
                return;
            case 0x116:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[49].object_id = item_id;
                return;
            case 0x117:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[50].object_id = item_id;
                return;
            case 0x118:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[51].object_id = item_id;
                return;
            //Strongman Garibs
            case 0x25:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[52].object_id = item_id;
                return;
            case 0x26:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[53].object_id = item_id;
                return;
            case 0x27:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[54].object_id = item_id;
                return;
            case 0x28:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[55].object_id = item_id;
                return;
        default:
            return;
        }
    }
}

void GaribCarnival1Shiny()
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedCarnival1(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnCarnival1(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L1]; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedCarnival1() {
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L1]; i++)
        {
            collected += ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_CARNIVAL_L1])
        {
            ap_memory.pc.worlds[AP_CARNIVAL_L1].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitCarnival1()
{
    for(int i = 0; i < 13; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyCarnival1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_1 && 
        (obj_type == WIND_UP || obj_type == BEE || obj_type == BUGLE || obj_type == CHICKEN || obj_type == DENNIS))
    {    
        switch (item_id)
        {
            //Bee
            case 0x185:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[0].ptr = ptr;
                return;
            //Bugle
            case 0xD0:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[1].ptr = ptr;
                return;
            //Chicken
            case 0x18D:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[2].ptr = ptr;
                return;
            //Dennis
            case 0x1A7:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[3].ptr = ptr;
                return;
            //Spawn Wind-Up
            case 0x3A0:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[4].ptr = ptr;
                return;
            //Whack-A-Mole Wind-Ups
            case 0x25E:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[5].ptr = ptr;
                return;
            case 0x29E:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[6].ptr = ptr;
                return;
            case 0x26E:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[7].ptr = ptr;
                return;
            case 0x243:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[8].ptr = ptr;
                return;
            case 0x2AE:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[9].ptr = ptr;
                return;
            case 0x27E:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[10].ptr = ptr;
                return;
            case 0x24E:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[11].ptr = ptr;
                return;
            case 0x28E:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[12].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyCarnival1(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        u16 found_id;
        for(int i = 0; i < 13; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_CARNIVAL_L1]; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L1].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesCarnival1()
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        if(ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[1].ptr != 0) // Bugle
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[1].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[1].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC1C80000) //(-25 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[1].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[1].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[2].ptr != 0) // Chicken
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[2].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[2].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC1C80000) //(-25 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[2].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[2].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[0].ptr != 0) // Bee
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[0].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[0].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC1C80000) //(-25 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[0].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[0].ptr = 0;
                }
            }
        }
        if(ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[3].ptr != 0) // Dennis
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[3].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[3].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC1C80000) //(-25 in float)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[3].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[3].ptr = 0;
                }
            }
        }
    }
}

//Life

void LifeInitCarnival1()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L1].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeCarnival1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_1 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //In Tent Life
            case 0x396:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].life_checks[0].ptr = ptr;
                return;
            //Plinko Life
            case 0x1E5:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].life_checks[1].ptr = ptr;
                return;
            //Strongman Life
            case 0x40:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].life_checks[2].ptr = ptr;
                return;
            //Top Tent Life
            case 0x397:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].life_checks[3].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeCarnival1(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L1].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].life_checks[i].ptr = 0;
            }
        }
    }
}

//Tip

void TipInitCarnival1()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void TipCarnival1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_1 && obj_type == 0x00C0)
    {    
        switch (item_id)
        {
            //Bugle Tip
            case 0x3BA:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[0].ptr = ptr;
                return;
            //Dennis Tip
            case 0x3BC:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[1].ptr = ptr;
                return;
            //Gate Tip
            case 0x3BB:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[2].ptr = ptr;
                return;
            //Slide Tip
            case 0x3BD:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[3].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedTipCarnival1(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].collected = 1;
                ap_memory.pc.last_tip_ptr = ptr;
            }
        }
    }
}

void VisitedTiphatsCarnival1()
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].ptr != 0)
            {
                tip_hat_t *object = (tip_hat_t*)ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].ptr;
                if(object->visited == 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].collected == 1)
                {
                    object->visited = 1;
                }
            }
        }
    }
}

void TipTextHintCarnival1(u32 orig_txt_ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        u32 copy_ptr = orig_txt_ptr;
        for(int i = 0; i < 4; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].ptr == ap_memory.pc.last_tip_ptr)
            {
                if(ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].tip_text.last_line == 0 || ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].active)
                {
                    return;
                }
                for(int line = 0; line < ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].tip_text.last_line; line++)
                {
                    u32 text_action = copy_ptr + 4;
                    (*(u32*)copy_ptr) = (u32)&ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].tip_text.lines[line].text;

                    if(line + 1 == ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].tip_text.last_line)
                    {
                        (*(u32*)text_action) = 0x00000002;
                        ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].active = true;
                        return;
                    }
                    else
                    {
                        copy_ptr += 8;
                        (*(u32*)text_action) = 0x00000000;
                    }
                }
            }
            else if(ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].active)
            {
                ap_memory.pc.worlds[AP_CARNIVAL_L1].tip_checks[i].active = false;
            }
        }
    }
}

//Checkpoint

void CheckpointInitCarnival1()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointCarnival1(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x90:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[0].warp_ptr = 0x8030C390;
                return;
            //Checkpoint 2
            case 0x91:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[1].warp_ptr = 0x8030C170;
                return;
            //Checkpoint 3
            case 0x94:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[2].warp_ptr = 0x8030BF30;
                return;
            //Checkpoint 4
            case 0x96:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[3].ptr = ptr;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[3].warp_ptr = 0x8030BC50;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointCarnival1()
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        for(int i = 0; i < 4; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointCarnival1()
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 4; i++)
            {
                if(i == ap_memory.pc.worlds[AP_CARNIVAL_L1].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPCarnival1(u32 warp_ptr)
{
    for(int i = 0;i < 4; i++)
    {
        if(ap_memory.pc.worlds[AP_CARNIVAL_L1].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_CARNIVAL_L1_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_CARNIVAL_L1_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_CARNIVAL_L1_CHECKPOINT3] > 0)
            {
                return 0;
            }
            else if(i == 3 && ap_memory.pc.items[AP_CARNIVAL_L1_CHECKPOINT4] > 0)
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

void SwitchInitCarnival1()
{
    for(int i = 0; i < 9; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchCarnival1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_CARNIVAL_1 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Bars Glover Switch
            case 0x358:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[0].ptr = ptr;
                carn1_gate = false;
                return;
            //Conveyor Target
            case 0x328:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[1].ptr = ptr;
                carn1_conveyor = false;
                return;
            //Ice Cream Glover Switch
            case 0x2F5:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[2].ptr = ptr;
                carn1_door2 = false;
                return;
            //Plinko Glover Switch
            case 0x1D2:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[3].ptr = ptr;
                carn1_rramp2 = false;
                return;
            //Ramp Ball Switch
            case 0x2D6:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[4].ptr = ptr;
                carn1_door1 = false;
                return;
            //Slide Glover Switch
            case 0x314:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[5].ptr = ptr;
                carn1_door3 = false;
                return;
            //Slots Glover Switch
            case 0xFA:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[6].ptr = ptr;
                carn1_rramp3 = false;
                return;
            //Strong Man Switch
            case 0x2F:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[7].ptr = ptr;
                carn1_sm = false;
                return;
            //Whack-A-Mole Glover Switch
            case 0x2BC:
                ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[8].ptr = ptr;
                carn1_rramp1 = false;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsCarnival1()
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[0].ptr != 0) // Gate
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!carn1_gate && ap_memory.pc.items[AP_CARNIVAL_L1_GATE])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x43720000;
                    carn1_gate = true;
                }
                if(!ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[0].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFF)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x43780000;
                }
            }  
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[1].ptr != 0) // Conveyor
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[1].ptr + 0x00B4; //Z axis
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!carn1_conveyor && ap_memory.pc.items[AP_CARNIVAL_L1_CONVEYOR])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0xC2480000;
                    carn1_conveyor = true;
                }
                if(!ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[1].collected && (*(u16*)door_open_offset) == 0xFFFD) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0xC2380000;
                }
            }
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[2].ptr != 0) // Door 2
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[2].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!carn1_door2 && ap_memory.pc.items[AP_CARNIVAL_L1_DOORB])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x44244000;
                    carn1_door2 = true;
                }
                if(!ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[2].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFF)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x44258000;
                }
            } 
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[3].ptr != 0) // Rocket 2 (plinko)
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[3].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[3].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!carn1_rramp2 && ap_memory.pc.items[AP_CARNIVAL_L1_ROCKET_RAMP] > 1 && (*(u16*)door_open_offset) == 0xFF9B && rocket_timer == 0)
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x40A00000;
                    rocket_timer = 0xD0;

                }
                else if(!carn1_rramp2 && ap_memory.pc.items[AP_CARNIVAL_L1_ROCKET_RAMP] > 1 && (*(u16*)door_open_offset) == 0xFFFF)
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x40A00000;
                    carn1_rramp2 = true;
                }
                if(!ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[3].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFF)) // Switch not yet collected
                {
                    u8 not_set = (*(u8*)0x802FCDBF);
                    if(not_set == 1)
                    {
                        (*(u32*)position_addr) = 0x40A00000;
                    }
                    else
                    {
                        (*(u32*)position_addr) = 0x41400000;
                    }
                }
            } 
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[4].ptr != 0) // Door 1
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[4].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[4].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!carn1_door1 && ap_memory.pc.items[AP_CARNIVAL_L1_DOORA])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x443AC000;
                    carn1_door1 = true;
                }
                if(!ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[4].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFD) ) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x443BA000;
                    if((*(u16*)door_open_offset) == 0xFF9B)
                    {
                        (*(u16*)door_open_offset) = 0xFFFD;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[5].ptr != 0) // Door 3
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[5].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[5].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!carn1_door3 && ap_memory.pc.items[AP_CARNIVAL_L1_DOORC])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x44394000;
                    carn1_door3 = true;
                }
                if(!ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[5].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFF)) // Switch not yet collected
                {
                    (*(u32*)position_addr) = 0x443A4000;
                }
            } 
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[6].ptr != 0) // Rocket 3 (slots)
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[6].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[6].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!carn1_rramp3 && ap_memory.pc.items[AP_CARNIVAL_L1_ROCKET_RAMP] > 2 && (*(u16*)door_open_offset) == 0xFF9B && rocket_timer == 0)
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x40A00000;
                    rocket_timer = 0xD0;
                }
                else if(!carn1_rramp3 && ap_memory.pc.items[AP_CARNIVAL_L1_ROCKET_RAMP] > 2 && (*(u16*)door_open_offset) == 0xFFFF)
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x40A00000;
                    carn1_rramp3 = true;
                }
                if(!ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[6].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFF)) // Switch not yet collected
                {
                    u8 not_set = (*(u8*)0x80303BAF);
                    if(not_set == 1)
                    {
                        (*(u32*)position_addr) = 0x40A00000;
                    }
                    else
                    {
                        (*(u32*)position_addr) = 0x41400000;
                    }
                }
            }
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[7].ptr != 0) //Strong Man
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[7].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[7].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(carn1_sm && carn1_switch_timer == 0x1E)
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    carn1_switch_timer--;
                }
                else if(carn1_sm && carn1_switch_timer < 0x1E && carn1_switch_timer > 0x0)
                {
                    carn1_switch_timer--;
                }
                if(carn1_switch_timer == 0 && (*(u16*)door_open_offset) == 0x0 && carn1_sm)
                {
                    (*(u32*)position_addr) = 0x41200000;
                    carn1_sm = false;
                }
            } 
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[8].ptr != 0) // Rocket 1 (wmole)
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[8].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[8].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!carn1_rramp1 && ap_memory.pc.items[AP_CARNIVAL_L1_ROCKET_RAMP] > 0 && (*(u16*)door_open_offset) == 0xFF9B && rocket_timer == 0)
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x4430C000;
                    rocket_timer = 0xD0;
                }
                else if(!carn1_rramp1 && ap_memory.pc.items[AP_CARNIVAL_L1_ROCKET_RAMP] > 0 && (*(u16*)door_open_offset) == 0xFFFF)
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x4430C000;
                    carn1_rramp1 = true;
                }
                if(!ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[8].collected 
                    && ((*(u16*)door_open_offset) == 0xFF9B || (*(u16*)door_open_offset) == 0xFFFF)) // Switch not yet collected
                {
                    bool whacks = true;
                    for(int whack_enemies = 5; whack_enemies < 13; whack_enemies++)
                    {
                        if(ap_memory.pc.worlds[AP_CARNIVAL_L1].enemy_checks[whack_enemies].collected == 0)
                        {
                            whacks = false;
                            break;
                        }
                    }
                    if(!whacks)
                    {
                        (*(u32*)position_addr) = 0x442E0000;
                    }
                    else
                    {
                        (*(u32*)position_addr) = 0x4431C000;
                    }
                }
            }
            if(rocket_timer != 0x0)
            {
                rocket_timer--;
            }
        }
    } 
    else
    {
        for(int i = 0; i < 9; i++)
        {
            ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr = 0;
        }
    }
}

void HitSwitchCarnival1()
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        u32 on_switch = (*(u32*)0x80316AF8);
        if(on_switch != 0)
        {
            for(int i=0; i < 9; i++)
            {
                if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr == on_switch 
                    && i == 0) // gate
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x43720000;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr == on_switch 
                    && i == 2) // door 2
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x44244000;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr == on_switch 
                    && i == 5) // door 3
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x44394000;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr == on_switch 
                    && i == 8) // rocket ramp 1
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x4430C000;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr == on_switch 
                    && i == 3) // rocket ramp 2
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x40A00000;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr == on_switch 
                    && i == 6) // rocket ramp 3
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x40A00000;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].collected = 1;
                }
                if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr == on_switch 
                    && i == 7) // sm
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x40C00000;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].collected = 1;
                    carn1_sm = true;
                    carn1_switch_timer = 0x1E;
                }
            }
        }
    }
}

void HitBallSwitchCarnival1(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        for(int i=0; i < 9; i++)
        {
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr == ptr &&
                i == 1) //conveyor
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr + 0x00B4; //Z axis
                (*(u32*)position_addr) = 0xC2480000;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr == ptr &&
                i == 4) //Door 1
            {
                u32 position_addr = ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x443AC000;
                ap_memory.pc.worlds[AP_CARNIVAL_L1].switch_checks[i].collected = 1;
            }
        }
    }
}


//Potions

void PotionInitCarnival1()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_CARNIVAL_L1].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionSpawnCarnival1(u32 ptr)
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        partial_potion_obj_t* potion = (partial_potion_obj_t*) ptr;
        if(potion->type == 0x04)
        {
            ap_memory.pc.worlds[AP_CARNIVAL_L1].potion_checks[1].ptr = ptr;
        }
        else if(potion->type == 0x02)
        {
            ap_memory.pc.worlds[AP_CARNIVAL_L1].potion_checks[0].ptr = ptr;
        }
    }
}


void MonitorPotionCarnival1()
{
    if(gvr_current_map == MAP_CARNIVAL_1)
    {
        for(int i = 0; i < 2; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_CARNIVAL_L1].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_CARNIVAL_L1].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_CARNIVAL_L1].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}
