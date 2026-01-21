#include "atlantis_2.h"

bool atl2_water_drained = false;
bool atl2_gate_open = false;
bool atl2_water_rise = false;


void GaribInitAtlantis2()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L2]; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribAtlantis2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_2 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            //Arch Garibs
            case 0x72:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[0].object_id = item_id;
                return;
            case 0x73:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[1].object_id = item_id;
                return;
            case 0x74:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[2].object_id = item_id;
                return;
            case 0x75:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[3].object_id = item_id;
                return;
            case 0x71:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[4].object_id = item_id;
                return;
            //Bridge A Garibs
            case 0x9E:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[5].object_id = item_id;
                return;
            case 0x9F:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[6].object_id = item_id;
                return;
            case 0xA0:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[7].object_id = item_id;
                return;
            case 0xA1:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[8].object_id = item_id;
                return;
            case 0x9D:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[9].object_id = item_id;
                return;
            //Bridge B Garibs
            case 0x98:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[10].object_id = item_id;
                return;
            case 0x99:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[11].object_id = item_id;
                return;
            case 0x9A:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[12].object_id = item_id;
                return;
            case 0x9B:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[13].object_id = item_id;
                return;
            case 0x97:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[14].object_id = item_id;
                return;
            //Clifftop Garibs
            case 0x8A:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[15].object_id = item_id;
                return;
            case 0x8B:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[16].object_id = item_id;
                return;
            case 0x8C:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[17].object_id = item_id;
                return;
            case 0x8D:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[18].object_id = item_id;
                return;
            case 0x8E:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[19].object_id = item_id;
                return;
            case 0x8F:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[20].object_id = item_id;
                return;
            case 0x89:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[21].object_id = item_id;
                return;
            //Mesa Garibs
            case 0x91:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[22].object_id = item_id;
                return;
            case 0x93:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[23].object_id = item_id;
                return;
            case 0x95:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[24].object_id = item_id;
                return;
            //Mesa Jar
            case 0x29:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[25].object_id = item_id;
                return;
            //Pool Edge Garibs
            case 0x60:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[26].object_id = item_id;
                return;
            case 0x61:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[27].object_id = item_id;
                return;
            case 0x62:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[28].object_id = item_id;
                return;
            case 0x5F:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[29].object_id = item_id;
                return;
            //Roof Garibs
            case 0xA3:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[30].object_id = item_id;
                return;
            case 0xA7:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[31].object_id = item_id;
                return;
            case 0xA6:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[32].object_id = item_id;
                return;
            case 0xA5:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[33].object_id = item_id;
                return;
            case 0xA4:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[34].object_id = item_id;
                return;
            //Shark Jars
            case 0x2D:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[35].object_id = item_id;
                return;
            case 0x2B:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[36].object_id = item_id;
                return;
            //Under Roof Garibs
            case 0x65:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[37].object_id = item_id;
                return;
            case 0x66:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[38].object_id = item_id;
                return;
            case 0x67:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[39].object_id = item_id;
                return;
            case 0x68:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[40].object_id = item_id;
                return;
            case 0x64:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[41].object_id = item_id;
                return;
            //Vault Garibs
            case 0x44:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[42].object_id = item_id;
                return;
            case 0x43:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[43].object_id = item_id;
                return;
            case 0x42:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[44].object_id = item_id;
                return;
            case 0x41:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[45].object_id = item_id;
                return;
            case 0x3B:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[46].object_id = item_id;
                return;
            case 0x3F:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[47].object_id = item_id;
                return;
            case 0x3E:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[48].object_id = item_id;
                return;
            case 0x3D:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[49].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[49].object_id = item_id;
                return;
            case 0x3C:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[50].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[50].object_id = item_id;
                return;
            case 0x40:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[51].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[51].object_id = item_id;
                return;
            //Waterfall Garibs
            case 0x32:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[52].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[52].object_id = item_id;
                return;
            case 0x33:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[53].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[53].object_id = item_id;
                return;
        default:
            return;
        }
    }
}

void GaribAtlantis2Shiny()
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedAtlantis2(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L2]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnAtlantis2(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].object_id == 0x0)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].object_id = 0xFFFF;
                return;
            }
        }
    }
}

void AllCollectedAtlantis2() {
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L2]; i++)
        {
            collected += ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].collected;
        }
        if(collected == 60)
        {
            ap_memory.pc.worlds[AP_ATLANTIS_L2].all_collected = true;
        }
    }
}

//Life

void LifeInitAtlantis2()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L2].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeAtlantis2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_2 && obj_type == 0x00B0)
    {    
        switch (item_id)
        {
            case 0x35:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].life_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeAtlantis2(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L2].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].life_checks[i].ptr = 0;
            }
        }
    }
}

//Tip

void TipInitAtlantis2()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void TipAtlantis2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_2 && obj_type == 0x00C0)
    {
        switch (item_id)
        {
            case 0x018F:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedTipAtlantis2(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].ptr = 0;
            }
        }
    }
}

void VisitedTiphatsAtlantis2()
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].ptr != 0)
            {
                tip_hat_t *object = (tip_hat_t*)ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].ptr;
                if(object->visited == 0 && ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].collected == 1)
                {
                    object->visited = 1;
                }
            }
        }
    }
}

void TipTextHintAtlantis2(u32 orig_txt_ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        u32 copy_ptr = orig_txt_ptr;
        for(int i = 0; i < 1; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].ptr == ap_memory.pc.last_tip_ptr)
            {
                if(ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].tip_text.last_line == 0 || ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].active)
                {
                    return;
                }
                for(int line = 0; line < ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].tip_text.last_line; line++)
                {
                    u32 text_action = copy_ptr + 4;
                    (*(u32*)copy_ptr) = (u32)&ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].tip_text.lines[line].text;

                    if(line + 1 == ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].tip_text.last_line)
                    {
                        (*(u32*)text_action) = 0x00000002;
                        ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].active = true;
                        return;
                    }
                    else
                    {
                        copy_ptr += 8;
                        (*(u32*)text_action) = 0x00000000;
                    }
                }
            }
            else if(ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].active)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L2].tip_checks[i].active = false;
            }
        }
    }
}

//Checkpoint

void CheckpointInitAtlantis2()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointAtlantis2(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        switch (item_id)
        {
            case 0x0029:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            case 0x0145:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[1].warp_ptr = 0x803249F0;
                return;
            case 0x017B:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[2].warp_ptr = 0x80322BF0;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointAtlantis2()
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointAtlantis2()
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 3; i++)
            {
                if(i == ap_memory.pc.worlds[AP_ATLANTIS_L2].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPAtlantis2(u32 warp_ptr)
{
    for(int i = 0;i < 3; i++)
    {
        if(ap_memory.pc.worlds[AP_ATLANTIS_L2].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_ATLANTIS_L2_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_ATLANTIS_L2_CHECKPOINT2] > 0)
            {
                return 0;
            }
            else if(i == 2 && ap_memory.pc.items[AP_ATLANTIS_L2_CHECKPOINT3] > 0)
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

void SwitchInitAtlantis2()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchAtlantis2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_2 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            case 0xE2: // Ball Switch
                ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[0].object_type = 0x181;
                atl2_gate_open = false;
                return;
            case 0xE8: // Glover Switch
                ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[2].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[2].object_type = obj_type;
                atl2_water_drained = false;
                return;
            default:
                return;
        }
    }
}

void SwitchBlockAtlantis2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_2 && obj_type == 0x0010)
    {
        switch (item_id)
        {
            case 0x82: //Drain Block
                ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[1].object_type = obj_type;
                atl2_water_rise = false;
                return;
            default:
                return;
        }
    }
}

void PuzzleEventsAtlantis2(u32 ptr)
{
    if(ptr == 0x80330870)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[1].collected = 1;
        return;
    }   
    if(!atl2_water_rise && ap_memory.pc.items[AP_ATLANTIS_L2_RAISE_WATER] && (ptr != 0x80329930 && ptr != 0x80330A60))
    {
        atl2_water_rise = true;
        return gvr_fn_activate_puzzle(0x80330870);
    }
    return gvr_fn_activate_puzzle(ptr);
}

bool PuzzleConditionsAtlantis2(u32 ptr)
{
    if(ptr == 0x80330938 && ap_memory.pc.items[AP_ATLANTIS_L2_RAISE_WATER] && !atl2_water_rise) //override this ptr
    {
        return true;
    } 
    return false;
}



void MonitorBrokenBlock()
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        if(ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[1].ptr != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[1].collected == 0)
        {
            u32 broken_offset = ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[1].ptr + 0x002E;
            if((*(u16*)broken_offset) == 0x0)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[1].collected = 1;
            }
        }
    }
}

void MonitorEventsAtlantis2()
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[0].ptr != 0) //Open Gate
            {
                u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!atl2_gate_open && ap_memory.pc.items[AP_ATLANTIS_L2_GATE])
                {
                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x41800000;
                    atl2_gate_open = true;
                }
            }
            // if(ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[1].ptr != 0) //Raise Water and platform
            // {
            //     if(!atl2_water_rise && ap_memory.pc.items[AP_ATLANTIS_L2_RAISE_WATER])
            //     {
            //         u32 action_offset = ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[1].ptr + 0x5C;
            //         (*(u32*)action_offset) = 1;
            //         u32 drain_ptr = ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[1].ptr + 0x34;
            //         u32 drain_offset = (*(u32*)drain_ptr) + 0x0008;
            //         (*(u16*)drain_offset) = 0x0000;

            //         u32 raise_ptr_offset = drain_offset - 0x0004;
            //         u32 raise_offset = (*(u32*)raise_ptr_offset) + 0x0008;
            //         (*(u16*)raise_offset) = 0x0000;

            //         u32 lift_ptr_offset = raise_offset - 0x0004;
            //         u32 lift_offset = (*(u32*)lift_ptr_offset) + 0x0008;
            //         (*(u16*)lift_offset) = 0x0000;

            //         u32 last_ptr_offset = lift_offset - 0x0004;
            //         u32 last_offset = (*(u32*)last_ptr_offset) + 0x0008;
            //         (*(u16*)last_offset) = 0x0000;
            //         atl2_water_rise = true;
            //     }
            // }
            if(ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[2].ptr != 0) // Lower Water
            {
                u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[2].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!atl2_water_drained && ap_memory.pc.items[AP_ATLANTIS_L2_WATER_DRAIN])
                {

                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x42D16330;
                    atl2_water_drained = true;
                }

                if(!ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[2].collected && (*(u16*)door_open_offset) == 0xFF9B)
                {
                    (*(u32*)position_addr) = 0x42DD6330;
                }
            }       
        }
    } 
    else
    {
        for(int i = 0; i < 3; i++)
        {
            ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[i].ptr = 0;
        }
    }
}

void HitSwitchAtlantis2()
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        u32 on_switch = (*(u32*)0x80335508);
        if(on_switch != 0)
        {
            for(int i=0; i < 3; i++)
            {
                if(ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[i].ptr == on_switch 
                    && ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[i].object_type == 0x180)
                {
                    if(ap_memory.pc.settings.randomize_switches) //Gate Control
                    {
                        u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[i].ptr + 0x00B8;
                        if(i == 2)
                        {
                            (*(u32*)position_addr) = 0x42D16330;
                        }
                    }
                    ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[i].collected = 1;
                }
            }
        }
    }
}

void HitBallSwitchAtlantis2(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        for(int i=0; i < 3; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[i].ptr == ptr &&
                ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[i].object_type == 0x181)
            {
                if(ap_memory.pc.settings.randomize_switches) //Gate Control
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[0].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x41800000;
                }
                ap_memory.pc.worlds[AP_ATLANTIS_L2].switch_checks[0].collected = 1;
            }
        }
    }
}

// Enemy
void EnemyInitAtlantis2()
{
    for(int i = 0; i < 6; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L2].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyAtlantis2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_2 && (obj_type == BULL || obj_type == WIND_UP))
    {
        switch (item_id)
        {
            //Bulls
            case 0x012E:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].enemy_checks[0].ptr = ptr;
                return;
            case 0x0107:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].enemy_checks[1].ptr = ptr;
                return;
            case 0x0116:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].enemy_checks[2].ptr = ptr;
                return;
            //Wind-Ups
            case 0x0147:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].enemy_checks[3].ptr = ptr;
                return;
            case 0x0151:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].enemy_checks[4].ptr = ptr;
                return;
            case 0x0165:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].enemy_checks[5].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void DefeatedEnemyAtlantis2(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        u16 found_id;
        for(int i = 0; i < 6; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L2].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L2].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_ATLANTIS_L2].enemy_checks[i].id;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L2]; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L2].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

//Potions

void PotionInitAtlantis2()
{
    for(int i = 0; i < 1; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L2].potion_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void PotionAtlantis2(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_2 && obj_type == 0x0100)
    {
        switch (item_id)
        {
            case 0xDD:
                ap_memory.pc.worlds[AP_ATLANTIS_L2].potion_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void MonitorPotionAtlantis2()
{
    if(gvr_current_map == MAP_ATLANTIS_2)
    {
        for(int i = 0; i < 1; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L2].potion_checks[i].ptr != 0)
            {
                partial_potion_obj_t* object = (partial_potion_obj_t*) ap_memory.pc.worlds[AP_ATLANTIS_L2].potion_checks[i].ptr;
                if(object->needs_collected == 0)
                {
                    ap_memory.pc.worlds[AP_ATLANTIS_L2].potion_checks[i].collected = 1;
                    ap_memory.pc.worlds[AP_ATLANTIS_L2].potion_checks[i].ptr = 0;
                }
            }
        }
    }
}
