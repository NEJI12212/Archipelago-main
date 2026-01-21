#include "wayroom.h"

//Tip

void TipInitWayroom()
{
    for(int i = 1; i < 6; i++)
    {
        if(ap_memory.pc.wayroom_tip_checks[i].id == 0)
        {
            ap_memory.pc.wayroom_tip_checks[i].id = ap_memory.pc.id_gen++;
            break;
        }
    }
}

void TipWayroom(u32 ptr, u16 obj_type, u16 item_id)
{
    if(gvr_current_map == MAP_WAYROOM && gvr_wayroom_type == WAYROOM_ATLANTIS_HUB && obj_type == 0x00C0)
    {
        switch (item_id)
        {
            //Wayroom Atlantis Tip
            case 0x76:
                ap_memory.pc.wayroom_tip_checks[0].ptr = ptr;
                return;
            default:
                return;
        }
    }
    else if(gvr_current_map == MAP_WAYROOM && gvr_wayroom_type == WAYROOM_CARNIVAL_HUB && obj_type == 0x00C0)
    {
        switch (item_id)
        {
            //Wayroom Carn Tip
            case 0x76:
                ap_memory.pc.wayroom_tip_checks[1].ptr = ptr;
                return;
            default:
                return;
        }
    }
    else if(gvr_current_map == MAP_WAYROOM && gvr_wayroom_type == WAYROOM_PIRATES_HUB && obj_type == 0x00C0)
    {
        switch (item_id)
        {
            //Wayroom Pirate Tip
            case 0x76:
                ap_memory.pc.wayroom_tip_checks[2].ptr = ptr;
                return;
            default:
                return;
        }
    }
    else if(gvr_current_map == MAP_WAYROOM && gvr_wayroom_type == WAYROOM_PREHISTORIC_HUB && obj_type == 0x00C0)
    {
        switch (item_id)
        {
            //Wayroom Pre Tip
            case 0x76:
                ap_memory.pc.wayroom_tip_checks[3].ptr = ptr;
                return;
            default:
                return;
        }
    }
    else if(gvr_current_map == MAP_WAYROOM && gvr_wayroom_type == WAYROOM_FORTRESS_HUB && obj_type == 0x00C0)
    {
        switch (item_id)
        {
            //Wayroom Fear Tip
            case 0x76:
                ap_memory.pc.wayroom_tip_checks[4].ptr = ptr;
                return;
            default:
                return;
        }
    }
    else if(gvr_current_map == MAP_WAYROOM && gvr_wayroom_type == WAYROOM_SPACE_HUB && obj_type == 0x00C0)
    {
        switch (item_id)
        {
            //Wayroom Space Tip
            case 0x76:
                ap_memory.pc.wayroom_tip_checks[5].ptr = ptr;
                return;
            default:
                return;
        }
    }
}

void CollectedTipWayroom(u32 ptr)
{
    if(gvr_current_map == MAP_WAYROOM)
    {
        for(int i = 0; i < 6; i++)
        {
            if((u32)ap_memory.pc.wayroom_tip_checks[i].ptr == ptr)
            {
                ap_memory.pc.wayroom_tip_checks[i].collected = 1;
                ap_memory.pc.last_tip_ptr = ptr;
            }
        }
    }
}

void VisitedTiphatsWayroom()
{
    if(gvr_current_map == MAP_WAYROOM)
    {
        for(int i = 0; i < 6; i++)
        {
            if((u32)ap_memory.pc.wayroom_tip_checks[i].ptr != 0)
            {
                tip_hat_t *object = (tip_hat_t*)ap_memory.pc.wayroom_tip_checks[i].ptr;
                if(object->visited == 0 && ap_memory.pc.wayroom_tip_checks[i].collected == 1)
                {
                    object->visited = 1;
                }
            }
        }
    }
}

void TipTextHintWayroom(u32 orig_txt_ptr)
{
    if(gvr_current_map == MAP_WAYROOM)
    {
        u32 copy_ptr = orig_txt_ptr;
        for(int i = 0; i < 6; i++)
        {
            if(ap_memory.pc.wayroom_tip_checks[i].ptr == ap_memory.pc.last_tip_ptr)
            {
                if(ap_memory.pc.wayroom_tip_checks[i].tip_text.last_line == 0 || ap_memory.pc.wayroom_tip_checks[i].active)
                {
                    return;
                }
                for(int line = 0; line < ap_memory.pc.wayroom_tip_checks[i].tip_text.last_line; line++)
                {
                    u32 text_action = copy_ptr + 4;
                    (*(u32*)copy_ptr) = (u32)&ap_memory.pc.wayroom_tip_checks[i].tip_text.lines[line].text;

                    if(line + 1 == ap_memory.pc.wayroom_tip_checks[i].tip_text.last_line)
                    {
                        (*(u32*)text_action) = 0x00000002;
                        ap_memory.pc.wayroom_tip_checks[i].active = true;
                        return;
                    }
                    else
                    {
                        copy_ptr += 8;
                        (*(u32*)text_action) = 0x00000000;
                    }
                }
            }
            else if(ap_memory.pc.wayroom_tip_checks[i].active)
            {
                ap_memory.pc.wayroom_tip_checks[i].active = false;
            }
        }
    }
}
