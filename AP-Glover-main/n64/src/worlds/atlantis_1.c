#include "atlantis_1.h"

bool atl1_gate_open = false;

void GaribInitAtlantis1()
{
    for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L1]; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].id = ap_memory.pc.id_gen++;
    }
}

void GaribAtlantis1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_1 && obj_type == 0x00B0)
    {
        switch (item_id)
        {
            //Arch Garibs
            case 0x64:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[0].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[0].object_id = item_id;
                return;
            case 0x69:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[1].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[1].object_id = item_id;
                return;
            case 0x68:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[2].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[2].object_id = item_id;
                return;
            case 0x67:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[3].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[3].object_id = item_id;
                return;
            case 0x66:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[4].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[4].object_id = item_id;
                return;
            case 0x65:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[5].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[5].object_id = item_id;
                return;
            //Block Garibs
            case 0x40:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[6].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[6].object_id = item_id;
                return;
            case 0x44:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[7].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[7].object_id = item_id;
                return;
            //Checkers Garibs
            case 0x46:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[8].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[8].object_id = item_id;
                return;
            case 0x42:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[9].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[9].object_id = item_id;
                return;
            //Pillar Garibs
            case 0x60:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[10].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[10].object_id = item_id;
                return;
            case 0x62:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[11].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[11].object_id = item_id;
                return;
            case 0x61:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[12].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[12].object_id = item_id;
                return;
            //Platform A Garibs
            case 0x79:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[13].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[13].object_id = item_id;
                return;
            case 0x7B:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[14].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[14].object_id = item_id;
                return;
            case 0x7C:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[15].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[15].object_id = item_id;
                return;
            case 0x7A:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[16].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[16].object_id = item_id;
                return;
            //Platform B Garibs
            case 0x7E:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[17].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[17].object_id = item_id;
                return;
            case 0x80:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[18].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[18].object_id = item_id;
                return;
            case 0x81:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[19].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[19].object_id = item_id;
                return;
            case 0x7F:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[20].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[20].object_id = item_id;
                return;
            //Platform C Garibs
            case 0x83:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[21].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[21].object_id = item_id;
                return;
            case 0x85:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[22].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[22].object_id = item_id;
                return;
            case 0x86:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[23].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[23].object_id = item_id;
                return;
            case 0x84:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[24].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[24].object_id = item_id;
                return;
            //Platform D Garibs
            case 0x88:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[25].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[25].object_id = item_id;
                return;
            case 0x8A:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[26].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[26].object_id = item_id;
                return;
            case 0x8B:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[27].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[27].object_id = item_id;
                return;
            case 0x89:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[28].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[28].object_id = item_id;
                return;
            //Platform E Garibs
            case 0x8D:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[29].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[29].object_id = item_id;
                return;
            case 0x8F:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[30].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[30].object_id = item_id;
                return;
            case 0x90:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[31].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[31].object_id = item_id;
                return;
            case 0x8E:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[32].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[32].object_id = item_id;
                return;
            //Pool Edge Garibs
            case 0x77:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[33].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[33].object_id = item_id;
                return;
            case 0x4E:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[34].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[34].object_id = item_id;
                return;
            case 0x4C:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[35].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[35].object_id = item_id;
                return;
            case 0x50:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[36].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[36].object_id = item_id;
                return;
            case 0x52:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[37].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[37].object_id = item_id;
                return;
            //Shark Garibs
            case 0x6D:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[38].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[38].object_id = item_id;
                return;
            case 0x73:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[39].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[39].object_id = item_id;
                return;
            case 0x70:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[40].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[40].object_id = item_id;
                return;
            case 0x75:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[41].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[41].object_id = item_id;
                return;
            case 0x72:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[42].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[42].object_id = item_id;
                return;
            case 0x6F:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[43].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[43].object_id = item_id;
                return;
            case 0x74:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[44].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[44].object_id = item_id;
                return;
            case 0x71:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[45].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[45].object_id = item_id;
                return;
            case 0x6E:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[46].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[46].object_id = item_id;
                return;
            //Waterspout Garibs
            case 0x48:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[47].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[47].object_id = item_id;
                return;
            case 0x4A:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[48].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[48].object_id = item_id;
                return;
        default:
            return;
        }
    }
}

void GaribAtlantis1Shiny()
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].ptr != 0)
            {
                garib_life_t *object = (garib_life_t*)ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].ptr;
                if(object->needs_collected != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].collected == 1)
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].ptr + 0x39;
                    (*(u8*)shiny_addr) = 0x0F;
                    //object->type = 0x02; //Shiny
                    ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].revealed = true;
                }
                else
                {
                    u32 shiny_addr = (u32) ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].ptr + 0x38;
                    (*(u8*)shiny_addr) = 0xFF;
                }
            }
        }
    }
}

void CollectedAtlantis1(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L1]; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                object->type = 0;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].collected = 1;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].ptr = 0;
            }
        }
    }
}

void SpawnAtlantis1(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[49].ptr = ptr;
        ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[49].object_id = 0xFFFF;
    }
}

void AllCollectedAtlantis1() {
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        int collected = 0;
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L1]; i++)
        {
            collected += ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].collected;
        }
        if(collected == 50)
        {
            ap_memory.pc.worlds[AP_ATLANTIS_L1].all_collected = true;
        }
    }
}

//Life

void LifeInitAtlantis1()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L1].life_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void LifeAtlantis1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_1 && obj_type == 0x00B0)
    {
        switch (item_id)
        {
            case 0x6B:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].life_checks[0].ptr = ptr;
                return;
            case 0x28:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].life_checks[1].ptr = ptr;
                return;
            case 0x5E:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].life_checks[2].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedLifeAtlantis1(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        for(int i = 0; i < 3; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L1].life_checks[i].ptr == ptr)
            {
                garib_life_t* object = (garib_life_t*) ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].life_checks[i].collected = 1;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].life_checks[i].ptr = 0;
            }
        }
    }
}

//Tip

void TipInitAtlantis1()
{
    for(int i = 0; i < 5; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void TipAtlantis1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_1 && obj_type == 0x00C0)
    {
        switch (item_id)
        {
            case 0x142:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[0].ptr = ptr;
                return;
            case 0x144:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[1].ptr = ptr;
                return;
            case 0x143:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[2].ptr = ptr;
                return;
            case 0x145:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[3].ptr = ptr;
                return;
            case 0x0141:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[4].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedTipAtlantis1(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        for(int i = 0; i < 5; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].collected = 1;
                ap_memory.pc.last_tip_ptr = ptr;
            }
        }
    }
}

void VisitedTiphatsAtlantis1()
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        for(int i = 0; i < 5; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].ptr != 0)
            {
                tip_hat_t *object = (tip_hat_t*)ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].ptr;
                if(object->visited == 0 && ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].collected == 1)
                {
                    object->visited = 1;
                }
            }
        }
    }
}

void TipTextHintAtlantis1(u32 orig_txt_ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        u32 copy_ptr = orig_txt_ptr;
        for(int i = 0; i < 5; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].ptr == ap_memory.pc.last_tip_ptr)
            {
                if(ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].tip_text.last_line == 0 || ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].active)
                {
                    return;
                }
                for(int line = 0; line < ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].tip_text.last_line; line++)
                {
                    u32 text_action = copy_ptr + 4;
                    (*(u32*)copy_ptr) = (u32)&ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].tip_text.lines[line].text;

                    if(line + 1 == ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].tip_text.last_line)
                    {
                        (*(u32*)text_action) = 0x00000002;
                        ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].active = true;
                        return;
                    }
                    else
                    {
                        copy_ptr += 8;
                        (*(u32*)text_action) = 0x00000000;
                    }
                }
            }
            else if(ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].active)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L1].tip_checks[i].active = false;
            }
        }
    }
}

//Checkpoint

void CheckpointInitAtlantis1()
{
    for(int i = 0; i < 2; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L1].checkpoint_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void CheckpointAtlantis1(u32 ptr, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        switch (item_id)
        {
            case 0x28:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].checkpoint_checks[0].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].checkpoint_checks[0].warp_ptr = gvr_starting_checkpoint;
                return;
            case 0x2E:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].checkpoint_checks[1].ptr = ptr;
                ap_memory.pc.worlds[AP_ATLANTIS_L1].checkpoint_checks[1].warp_ptr = gvr_checkpoint_2;
                return;
            default:
                return;
        }
    }
}

void MonitorCheckpointAtlantis1()
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        for(int i = 0; i < 2; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_ATLANTIS_L1].checkpoint_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_ATLANTIS_L1].checkpoint_checks[i].collected == 0)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) ap_memory.pc.worlds[AP_ATLANTIS_L1].checkpoint_checks[i].ptr;
                if(object->visited == 0)
                {
                    ap_memory.pc.worlds[AP_ATLANTIS_L1].checkpoint_checks[i].collected = 1;
                }
            }
        }
    }
}

void RandomizeCheckpointAtlantis1()
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        if(!ap_memory.pc.respawned && ap_memory.pc.need_respawn && gvr_loaded_timer == 0)
        {
            for(int i = 0;i < 2; i++)
            {
                if(i == ap_memory.pc.worlds[AP_ATLANTIS_L1].warp_offset_id)
                {
                    gvr_invuln_timer = 0;
                    gvr_checkpoint_ptr = ap_memory.pc.worlds[AP_ATLANTIS_L1].checkpoint_checks[i].warp_ptr;
                    ap_memory.pc.respawned = true;
                    gvr_fn_respawn();
                    ap_memory.pc.need_respawn = false;
                } 
            }
        }
    }
}

bool CheckpointAPAtlantis1(u32 warp_ptr)
{
    for(int i = 0;i < 2; i++)
    {
        if(ap_memory.pc.worlds[AP_ATLANTIS_L1].checkpoint_checks[i].ptr == warp_ptr)
        {
            if(i == 0 && ap_memory.pc.items[AP_ATLANTIS_L1_CHECKPOINT1] > 0)
            {
                return 0;
            }
            else if(i == 1 && ap_memory.pc.items[AP_ATLANTIS_L1_CHECKPOINT2] > 0)
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

void SwitchInitAtlantis1()
{
    ap_memory.pc.worlds[AP_ATLANTIS_L1].switch_checks[0].id = ap_memory.pc.id_gen++;
}

void SwitchAtlantis1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_1 && obj_type == 0x0180)
    {
        switch (item_id)
        {
            case 0xD3:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].switch_checks[0].ptr = ptr;
                atl1_gate_open = false;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsAtlantis1()
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        if(ap_memory.pc.worlds[AP_ATLANTIS_L1].switch_checks[0].ptr != 0)
        {
            if(ap_memory.pc.settings.randomize_switches) //Gate Control
            {
                u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L1].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_ATLANTIS_L1].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!atl1_gate_open && ap_memory.pc.items[AP_ATLANTIS_L1_GATE])
                {

                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x43120000;
                    atl1_gate_open = true;
                }

                if(!ap_memory.pc.worlds[AP_ATLANTIS_L1].switch_checks[0].collected && (*(u16*)door_open_offset) == 0xFF9B)
                {
                    (*(u32*)position_addr) = 0x43150000;
                }
            }
        }
    } 
    else
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L1].switch_checks[0].ptr = 0;
    }
}

void HitSwitchAtlantis1()
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        if(ap_memory.pc.worlds[AP_ATLANTIS_L1].switch_checks[0].ptr != 0)
        {
            if(ap_memory.pc.settings.randomize_switches) //Gate Control
            {
                u32 position_addr = ap_memory.pc.worlds[AP_ATLANTIS_L1].switch_checks[0].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x43120000;
            }
            ap_memory.pc.worlds[AP_ATLANTIS_L1].switch_checks[0].collected = 1;
        }
    }
}

// Enemy
void EnemyInitAtlantis1()
{
    for(int i = 0; i < 4; i++)
    {
        ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void EnemyAtlantis1(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_ATLANTIS_1 && (obj_type == BULL || obj_type == FISH || obj_type == SHARK))
    {
        switch (item_id)
        {
            case 0xC7:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[0].ptr = ptr;
                return;
            case 0xF7:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[1].ptr = ptr;
                return;    
            case 0x0106:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[2].ptr = ptr;
                return;  
            case 0x00DC:
                ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[3].ptr = ptr;
                return;  
            default:
                return;
        }
    }
}

void DefeatedEnemyAtlantis1(u32 ptr)
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        u16 found_id;
        for(int i = 0; i < 4; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[i].collected = 1;
                found_id = ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[i].id;
                break;
            }
        }
        for(int i = 0; i < ap_memory.pc.max_garib_totals[AP_ATLANTIS_L1]; i++)
        {
            if(ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].object_id == 0xFFFF)
            {
                ap_memory.pc.worlds[AP_ATLANTIS_L1].garibs[i].object_id = found_id;
                break;
            }
        }
    }
}

void MonitorFallenEnemiesAtlantis1()
{
    if(gvr_current_map == MAP_ATLANTIS_1)
    {
        if(ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[3].ptr != 0)
        {
            u32 spawn_ptr = ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[3].ptr + 0x22;
            if((*(u8*)spawn_ptr) == 1)
            {
                u32 ypos = ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[3].ptr + 0x38;
                u32 yvalue = (*(u32*)ypos);
                if(yvalue >= 0xC2480000) //(-50 in float)
                {
                    ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[3].collected = 1;
                    ap_memory.pc.worlds[AP_ATLANTIS_L1].enemy_checks[3].ptr = 0;
                }
            }
        }
    }
}
