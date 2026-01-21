#include "tools.h"

typedef struct {
    u32 object_pointer;
    u16 object_type;
    u16 object_id;
    bool life;
    bool collected;
    u16 none1;
    u32 none2;
} object_finder;
object_finder object_list[255];

u8 tool_map = 0;

void initObjectIds(u32 ram_ptr, u16 obj_type, u16 obj_id)
{
    for(int i = 0; i < 255; i++)
    {
        if(object_list[i].object_pointer == 0)
        {
            object_list[i].object_pointer = ram_ptr;
            object_list[i].object_type = obj_type;
            object_list[i].object_id = obj_id;
            object_list[i].life = 0;
            object_list[i].collected = 0;
            break;
        }
    }
}

void initSwitchIds(u32 ram_ptr, u16 obj_type, u16 obj_id)
{
    for(int i = 0; i < 255; i++)
    {
        if(object_list[i].object_pointer == 0)
        {
            object_list[i].object_pointer = ram_ptr;
            object_list[i].object_type = obj_type;
            object_list[i].object_id = obj_id;
            object_list[i].life = 0;
            object_list[i].collected = 0;
            break;
        }
    }

}

void initCheckpointIds(u32 ptr, u16 item_id)
{
    for(int i = 0; i < 255; i++)
    {
            if(object_list[i].object_pointer == 0)
            {
                object_list[i].object_pointer = ptr;
                object_list[i].object_type = 0x1221;
                object_list[i].object_id = item_id;
                object_list[i].life = 0;
                object_list[i].collected = 0;
                break;
            }
    }
}

void spawnedItems(u32 ptr)
{
    for(int i = 0; i < 255; i++)
    {
        if(object_list[i].object_pointer == 0)
        {
            object_list[i].object_pointer = ptr;
            object_list[i].object_type = 0xFFFF;
            object_list[i].object_id = 0;
            object_list[i].life = 0;
            object_list[i].collected = 0;
            break;
        }
    }
}

void monitorObjectIds()
{

    for(int i = 0; i < 255; i++)
    {
        if(object_list[i].object_pointer != 0)
        {
            if(object_list[i].object_type == 0x00B0)
            {
                garib_life_t *object = (garib_life_t*) object_list[i].object_pointer;
                if(object->type == 1)
                {
                    object_list[i].life = true;
                }
            }
            else if(object_list[i].object_pointer != 0 && object_list[i].object_type == 0x1221)
            {
                partial_checkpoint_obj_t* object = (partial_checkpoint_obj_t*) object_list[i].object_pointer;
                if(object->visited == 0)
                {
                    object_list[i].collected = true;
                }
            }
        }
    }
    if(gvr_current_map != tool_map)
    {
        for(int i = 0; i < 255; i++)
        {
            if(object_list[i].object_pointer != 0)
            {
                object_list[i].object_pointer = 0;
                object_list[i].object_type = 0;
                object_list[i].object_id = 0;
                object_list[i].life = 0;
                object_list[i].collected = 0;
            }
        }
        tool_map = gvr_current_map;
    }
}


void CollectedObjectIds(u32 ptr)
{
    for(int i = 0; i < 255; i++)
    {
        if(object_list[i].object_pointer == ptr)
        {
            object_list[i].collected = 1;
            break;
        }
    }
}

void DefeatedEnemyReplace(u32 ptr)
{
    object_finder found;
    for(int i = 0; i < 255; i++)
    {
        if(object_list[i].object_pointer == ptr)
        {
            object_list[i].collected = 1;
            found = object_list[i];
        }
        if(object_list[i].object_type == 0xFFFF && object_list[i].object_id == 0x0000)
        {
            object_list[i].object_id = found.object_id;
        }
    }
}
