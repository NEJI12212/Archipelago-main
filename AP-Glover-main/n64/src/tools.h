#ifndef TOOLS_H
#define TOOLS_H
    #include "glover.h"
    void initObjectIds(u32 ram_ptr, u16 obj_type, u16 obj_id);
    void initCheckpointIds(u32 real_obj_ptr, u16 item_id);
    void initSwitchIds(u32 ram_ptr, u16 obj_type, u16 obj_id);
    void spawnedItems(u32 ptr);
    void monitorObjectIds();
    void CollectedObjectIds(u32 ptr);
    void DefeatedEnemyReplace(u32 ptr);



#endif