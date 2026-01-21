#include "fear_2.h"

bool fear2_gates = false;
bool fear2_mummy = false;
bool fear2_garib_spawn = false;
u8 fear2_garib_timer = 0;

void GaribInitFear2()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L2]; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribFear2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_2 && obj_type == 0x00B0)
    {     
        switch (item_id)
        {
            //Carpet Garibs
            case 0x46:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[0].object_id = item_id;
                return;
            case 0x4A:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[1].object_id = item_id;
                return;
            case 0x49:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[2].object_id = item_id;
                return;
            case 0x47:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[3].object_id = item_id;
                return;
            case 0x48:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[4].object_id = item_id;
                return;
            //Collapsing Garibs
            case 0xCC:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[5].object_id = item_id;
                return;
            case 0xCF:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[6].object_id = item_id;
                return;
            case 0xCE:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[7].object_id = item_id;
                return;
            case 0xD1:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[8].object_id = item_id;
                return;
            case 0xD0:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[9].object_id = item_id;
                return;
            case 0xCD:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[10].object_id = item_id;
                return;
            //Dropdown Garibs
            case 0x6C:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[11].object_id = item_id;
                return;
            case 0x6B:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[12].object_id = item_id;
                return;
            case 0x68:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[13].object_id = item_id;
                return;
            case 0x69:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[14].object_id = item_id;
                return;
            case 0x65:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[15].object_id = item_id;
                return;
            case 0x66:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[16].object_id = item_id;
                return;
            case 0x64:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[17].object_id = item_id;
                return;
            //Electric Garibs
            case 0x3B:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[18].object_id = item_id;
                return;
            case 0x44:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[19].object_id = item_id;
                return;
            case 0x43:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[20].object_id = item_id;
                return;
            case 0x42:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[21].object_id = item_id;
                return;
            case 0x41:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[22].object_id = item_id;
                return;
            case 0x40:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[23].object_id = item_id;
                return;
            case 0x3F:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[24].object_id = item_id;
                return;
            case 0x3E:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[25].object_id = item_id;
                return;
            case 0x3D:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[26].object_id = item_id;
                return;
            case 0x3C:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[27].object_id = item_id;
                return;
            //Gate Garibs
            case 0x38:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[28].object_id = item_id;
                return;
            case 0x39:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[29].object_id = item_id;
                return;
            //Left Rooftop Garibs
            case 0xBC:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[30].object_id = item_id;
                return;
            case 0xC0:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[31].object_id = item_id;
                return;
            case 0xBF:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[32].object_id = item_id;
                return;
            case 0xBE:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[33].object_id = item_id;
                return;
            case 0xBD:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[34].object_id = item_id;
                return;
            //Mummy Garibs
            case 0xB6:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[35].object_id = item_id;
                return;
            case 0xB4:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[36].object_id = item_id;
                return;
            case 0xB2:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[37].object_id = item_id;
                return;
            //Pillar Garibs
            case 0x58:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[38].object_id = item_id;
                return;
            case 0x59:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[39].object_id = item_id;
                return;
            case 0x5A:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[40].object_id = item_id;
                return;
            case 0x5B:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[41].object_id = item_id;
                return;
            case 0x57:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[42].object_id = item_id;
                return;
            //Right Rooftop Garibs
            case 0xC2:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[43].object_id = item_id;
                return;
            case 0xC6:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[44].object_id = item_id;
                return;
            case 0xC5:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[45].object_id = item_id;
                return;
            case 0xC4:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[46].object_id = item_id;
                return;
            case 0xC3:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[47].object_id = item_id;
                return;
            //Samtex Garibs
            case 0xB8:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[48].object_id = item_id;
                return;
            case 0xBA:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[49].object_id = item_id;
                return;
            case 0xB9:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[50].object_id = item_id;
                return;
            //Swinging Garibs
            case 0xC9:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[51].object_id = item_id;
                return;
            case 0xCA:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[52].object_id = item_id;
                return;
            case 0xC8:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[53].object_id = item_id;
                return;
            //Wood Garibs
            case 0xD3:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[54].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[54].object_id = item_id;
                return;
            case 0xD7:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[55].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[55].object_id = item_id;
                return;
            case 0xD6:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[56].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[56].object_id = item_id;
                return;
            case 0xD5:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[57].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[57].object_id = item_id;
                return;
            case 0xD4:
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[58].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[58].object_id = item_id;
                return;
            default:
                return;
        }
    }
}

void GaribFear2Shiny()
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedFear2(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnFear2(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedFear2() {
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L2]; i++)
        {
            collected += ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].collected;
        }
        if(collected >= ap_memory.pc.max_garib_totals[AP_FORTRESS_L2])
        {
            ap_memory.pc.worlds[AP_FORTRESS_L2].all_collected = true;
        }
    }
}

// Enemy
void EnemyInitFear2()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyFear2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_2 && 
        (obj_type == SAMTEX || obj_type == WIND_UP))
    {    
        switch (item_id)
        {	
            //Samtex
            case 0x1BD:
                ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[0].ptr = ptr;
                return;
            //Wind-Up
            case 0x1EB:
                ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[1].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyFear2(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        u16 found_id;
        for(int i = 0; i < 2; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[i].id;
                ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[i].ptr = 0;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_FORTRESS_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_FORTRESS_L2].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesFear2()
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        if(ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[0].ptr != 0) // Samtex
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[0].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[0].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue <= 0x42480000 || yvalue >= 0xBF800000) //(50 in float or <-1)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[0].collected = 1;
                    ap_memory.pc.worlds[AP_FORTRESS_L2].enemy_checks[0].ptr = 0;
                }
            }
        }
    }
}


//Life

void LifeInitFear2()
{
    for(int i = 0; i < 5; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L2].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeFear2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_2 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Above Doorway Life
            case 0x25:
                ap_memory.pc.worlds[AP_FORTRESS_L2].life_checks[0].ptr = ptr;
                return;
            //Brick Life
            case 0x80:
                ap_memory.pc.worlds[AP_FORTRESS_L2].life_checks[1].ptr = ptr;
                return;
            //Collapsing Life
            case 0x7E:
                ap_memory.pc.worlds[AP_FORTRESS_L2].life_checks[2].ptr = ptr;
                return;
            //Dropdown Life
            case 0x62:
                ap_memory.pc.worlds[AP_FORTRESS_L2].life_checks[3].ptr = ptr;
                return;
            //Gate Life
            case 0x82:
                ap_memory.pc.worlds[AP_FORTRESS_L2].life_checks[4].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeFear2(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        for(int i = 0; i < 5; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L2].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_FORTRESS_L2].life_checks[i].ptr = 0;
            }
        }
    }
}

//Tip

void TipInitFear2()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void TipFear2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_2 && obj_type == 0x00C0)
    {    
        switch (item_id)
        {
            //Tip
            case 0x21C:
                ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedTipFear2(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].collected = 1;
                ap_memory.pc.last_tip_ptr = ptr;
            }
        }
    }
}

void VisitedTiphatsFear2()
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].ptr != 0)
            {
                tip_hat_t *object = (tip_hat_t*)ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].ptr;
                if(object->visited == 0 && ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].collected == 1)
                {
                    object->visited = 1;
                }
            }
        }
    }
}

void TipTextHintFear2(u32 orig_txt_ptr)
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        u32 copy_ptr = orig_txt_ptr;
        for(int i = 0; i < 1; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].ptr == ap_memory.pc.last_tip_ptr)
            {
                if(ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].tip_text.last_line == 0 || ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].active)
                {
                    return;
                }
                for(int line = 0; line < ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].tip_text.last_line; line++)
                {
                    u32 text_action = copy_ptr + 4;
                    (*(u32*)copy_ptr) = (u32)&ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].tip_text.lines[line].text;

                    if(line + 1 == ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].tip_text.last_line)
                    {
                        (*(u32*)text_action) = 0x00000002;
                        ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].active = true;
                        return;
                    }
                    else
                    {
                        copy_ptr += 8;
                        (*(u32*)text_action) = 0x00000000;
                    }
                }
            }
            else if(ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].active)
            {
                ap_memory.pc.worlds[AP_FORTRESS_L2].tip_checks[i].active = false;
            }
        }
    }
}

//Checkpoint

void CheckpointInitFear2()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointFear2(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        switch (item_id)
        {
            //Checkpoint 1
            case 0x25:
                ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            //Checkpoint 2
            case 0x190:
                if(ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[1].ptr == 0) // 3
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[1].ptr = ptr;
                    ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[1].warp_ptr = 0x802F50E0;

                }
                else // 3
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[2].ptr = ptr;
                    ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[2].warp_ptr = 0x802F4F60;
                }
            default:
                return;
        }
    }
}

void MonitorCheckpointFear2()
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointFear2()
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 3; i++)
            {
                if(i == ap_memory.pc.worlds[AP_FORTRESS_L2].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPFear2(u32 warp_ptr)
{
    for(int i = 0;i < 3; i++)
    {
        if(ap_memory.pc.worlds[AP_FORTRESS_L2].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_FORTRESS_L2_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_FORTRESS_L2_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_FORTRESS_L2_CHECKPOINT3] > 0)
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

void SwitchInitFear2()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchFear2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_FORTRESS_2 && obj_type == 0x0180)
    {
        switch (item_id)
        {    
            //Mummy 
            // switch_checks[0]
            //Push Switch
		    //case 0x146/0x148(?):
			// ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[1].ptr = ptr;
			// return;
            //Push Target
            case 0x1FB:
                ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[2].ptr = ptr;
                fear2_garib_timer = 0xE1;
                fear2_garib_spawn = false;
                return;
            //Slope Target
            case 0x193:
                //ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[3].ptr = ptr;
                fear2_gates = false;
                fear2_mummy = false;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsFear2()
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(!fear2_garib_spawn && fear2_garib_timer == 0 && ap_memory.pc.items[AP_FORTRESS_L2_GARIBS_FALL])
            {
                gvr_fn_spawn_garibgroup(3,0);
                fear2_garib_spawn = true;
            } 
            if(fear2_garib_timer > 0x00)
            {
                fear2_garib_timer--;
            }
        }
    } 
    else
    {
        for(int i = 0; i < 3; i++)
        {
            ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[i].ptr = 0;
        }
    }
}

void PuzzleEventsFear2(u32 ptr)
{
    if(ptr == 0x802F4B70) // Slope switch
    {
        ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[3].collected = 1;
        return;
    }
    if(ptr == 0x802F3990) // Push pole
    {
        ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[1].collected = 1;
        return;
    }
    if(ptr == 0x8030CB00) // Mummy
    {
        ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[0].collected = 1;
        return;
    }
    if(!fear2_gates && ap_memory.pc.items[AP_FORTRESS_L2_CHECKPOINT_GATES] >= 2)
    {
        fear2_gates = true;
        return gvr_fn_activate_puzzle(0x802F3990);
    }
    if(!fear2_mummy && ap_memory.pc.items[AP_FORTRESS_L2_MUMMY_GATE])
    {
        fear2_mummy = true;
        return gvr_fn_activate_puzzle(0x8030CB00);
    }
    return gvr_fn_activate_puzzle(ptr);
}

void HitBallSwitchFear2(u32 ptr)
{
    if(gvr_current_map == MAP_FORTRESS_2)
    {
        for(int i=0; i < 4; i++)
        {
            if(ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[i].ptr == ptr &&
                i == 2) //push target
            {
                u32 position_addr_z = ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[i].ptr + 0x00B4;
                u32 position_addr_y = ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[i].ptr + 0x00B8;
                u32 position_addr_x = ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[i].ptr + 0x00BC;
                (*(u32*)position_addr_z) = 0xC2EE0000;
                (*(u32*)position_addr_y) = 0x42880000;
                (*(u32*)position_addr_x) = 0xC3330000;
                ap_memory.pc.worlds[AP_FORTRESS_L2].switch_checks[i].collected = 1;
            }
        }
    }
}
