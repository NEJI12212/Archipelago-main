#include "training.h"

bool trg_sand = false;
bool trg_lowertarget = false;
bool trg_stairs = false;

//Tip

void TipInitTraining()
{
    for(int i = 0; i < 15; i++)
    {
        ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void TipTraining(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_TRAINING && obj_type == 0x00C0)
    {
        switch (item_id)
        {
            //Ball Switch Tip
            case 0x108:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[0].ptr = ptr;
                return;
            //Bounce Throw Tip
            case 0x10D:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[1].ptr = ptr;
                return;
            //Camera Tip
            case 0x103:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[2].ptr = ptr;
                return;
            //Crate Tip
            case 0x110:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[3].ptr = ptr;
                return;
            //Deep Pool Tip
            case 0x10A:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[4].ptr = ptr;
                return;
            //Dribble Tip
            case 0x104:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[5].ptr = ptr;
                return;
            //Duck Tip
            case 0x10F:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[6].ptr = ptr;
                return;
            //Fist Slam Tip
            case 0x10B:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[7].ptr = ptr;
                return;
            //Glover Switch Tip
            case 0x10C:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[8].ptr = ptr;
                return;
            //Intro Tip
            case 0x111:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[9].ptr = ptr;
                return;
            //No Ball Tip
            case 0x10E:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[10].ptr = ptr;
                return;
            //Shallow Pool Tip
            case 0x109:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[11].ptr = ptr;
                return;
            //Slap Tip
            case 0x107:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[12].ptr = ptr;
                return;
            //Toss Tip
            case 0x105:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[13].ptr = ptr;
                return;
            //Z-Cancel Tip
            case 0x106:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[14].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedTipTraining(u32 ptr)
{
    if(gvr_current_map == MAP_TRAINING)
    {
        for(int i = 0; i < 15; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].ptr == ptr)
            {
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].collected = 1;
                ap_memory.pc.last_tip_ptr = ptr;
                break;
            }
        }
    }
}

void VisitedTiphatsTraining()
{
    if(gvr_current_map == MAP_TRAINING)
    {
        for(int i = 0; i < 15; i++)
        {
            if((u32)ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].ptr != 0)
            {
                tip_hat_t *object = (tip_hat_t*)ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].ptr;
                if(object->visited == 0 && ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].collected == 1)
                {
                    object->visited = 1;
                }
            }
        }
    }
}

void TipTextHintTraining(u32 orig_txt_ptr)
{
    if(gvr_current_map == MAP_TRAINING)
    {
        u32 copy_ptr = orig_txt_ptr;
        for(int i = 0; i < 15; i++)
        {
            if(ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].ptr == ap_memory.pc.last_tip_ptr)
            {
                if(ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].tip_text.last_line == 0 || ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].active)
                {
                    return;
                }
                for(int line = 0; line < ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].tip_text.last_line; line++)
                {
                    u32 text_action = copy_ptr + 4;
                    (*(u32*)copy_ptr) = (u32)&ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].tip_text.lines[line].text;

                    if(line + 1 == ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].tip_text.last_line)
                    {
                        (*(u32*)text_action) = 0x00000002;
                        ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].active = true;
                        return;
                    }
                    else
                    {
                        copy_ptr += 8;
                        (*(u32*)text_action) = 0x00000000;
                    }
                }
            }
            else if(ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].active)
            {
                ap_memory.pc.worlds[AP_TRAINING_WORLD].tip_checks[i].active = false;
            }
        }
    }
}

// Switch

void SwitchInitTraining()
{
    for(int i = 0; i < 3; i++)
    {
        ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].id = ap_memory.pc.id_gen++;
    }
}

void SwitchTraining(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_TRAINING && obj_type == 0x0180)
    {
        switch (item_id)
        {
            //Ball Switch
            case 0x8D:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[0].ptr = ptr;
                trg_sand = false;
                return;
            //Glover Switch
            case 0x93:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[1].ptr = ptr;
                trg_lowertarget = false;
                return;
            //Target
            case 0x9A:
                ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[2].ptr = ptr;
                trg_stairs = false;
                return;
            default:
                return;
        }
    }
}

void MonitorEventsTraining()
{
    if(gvr_current_map == MAP_TRAINING)
    {
        if(ap_memory.pc.settings.randomize_switches)
        {
            if(ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[0].ptr != 0) // raise sand
            {
                u32 position_addr = ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[0].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[0].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!trg_sand && ap_memory.pc.items[AP_TRAINING_WORLD_SANDPIT])
                {

                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x42F60000;
                    trg_sand = true;
                }

                if(!ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[0].collected && (*(u16*)door_open_offset) == 0xFFFD)
                {
                    (*(u32*)position_addr) = 0x42FC0000;
                }
            }
            if(ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[1].ptr != 0) // lower target
            {
                u32 position_addr = ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[1].ptr + 0x00B8;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[1].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!trg_lowertarget && ap_memory.pc.items[AP_TRAINING_WORLD_LOWER_TARGET])
                {

                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr) = 0x42EA0000;
                    trg_lowertarget = true;
                }

                if(!ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[1].collected && (*(u16*)door_open_offset) == 0xFFFD)
                {
                    (*(u32*)position_addr) = 0x42F00000;
                }
            }
            if(ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[2].ptr != 0) // stairs
            {
                u32 position_addr_z = ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[2].ptr + 0x00B4;
                u32 position_addr_x = ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[2].ptr + 0x00BC;
                u32 gate_ptr_offset = ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[2].ptr + 0x038;
                u32 gate_ptr = (*(u32*)gate_ptr_offset);
                u32 door_open_offset = gate_ptr + 0x0050;
                if(!trg_stairs && ap_memory.pc.items[AP_TRAINING_WORLD_STAIRS])
                {

                    (*(u16*)door_open_offset) = 0x0001;
                    (*(u32*)position_addr_z) = 0x43153547;
                    (*(u32*)position_addr_x) = 0xC5318548;
                    trg_stairs = true;
                }

                if(!ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[2].collected && (*(u16*)door_open_offset) == 0xFFFD)
                {
                    (*(u32*)position_addr_z) = 0x43123547;
                    (*(u32*)position_addr_x) = 0xC5313548;
                }
            }
            
        }
    } 
    else
    {
        for(int i = 0; i < 3; i++)
        {
            ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].ptr = 0;
        }
    }
}

void HitSwitchTraining()
{
    if(gvr_current_map == MAP_TRAINING)
    {
        u32 on_switch = (*(u32*)0x8031D278);
        if(on_switch != 0)
        {
            for(int i=0; i < 3; i++)
            {
                if(ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].ptr == on_switch 
                    && i == 1) // sign switch
                {
                    u32 position_addr = ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].ptr + 0x00B8;
                    (*(u32*)position_addr) = 0x42EA0000;
                    ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].collected = 1;
                }
            }
        }
    }
}

void HitBallSwitchTraining(u32 ptr)
{
    if(gvr_current_map == MAP_TRAINING)
    {
        for(int i=0; i < 3; i++)
        {
            if(ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].ptr == ptr &&
                i == 0) //ball switch
            {
                u32 position_addr = ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].ptr + 0x00B8;
                (*(u32*)position_addr) = 0x42F60000;
                ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].collected = 1;
            }
            if(ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].ptr != 0 && ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].ptr == ptr &&
                i == 2) //target switch
            {
                u32 position_addr_z = ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].ptr + 0x00B4;
                u32 position_addr_x = ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].ptr + 0x00BC;
                (*(u32*)position_addr_z) = 0x43153547;
                (*(u32*)position_addr_x) = 0xC5318548;
                ap_memory.pc.worlds[AP_TRAINING_WORLD].switch_checks[i].collected = 1;
            }
        }
    }
}
