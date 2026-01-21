#ifndef SPACE1_H
#define SPACE1_H
    #include "../glover.h"
    //Garibs
    void GaribInitSpace1();
    void GaribSpace1(u32 ptr, u16 obj_type, u16 item_id);
    void GaribSpace1Shiny();
    void CollectedSpace1(u32 ptr);
    void SpawnSpace1(u32 ptr);
    void AllCollectedSpace1();
    //Life
    void LifeInitSpace1();
    void LifeSpace1(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeSpace1(u32 ptr);
    // //Checkpoints
    void CheckpointInitSpace1();
    void CheckpointSpace1(u32 ptr,  u16 item_id);
    void MonitorCheckpointSpace1();
    void RandomizeCheckpointSpace1();
    bool CheckpointAPSpace1(u32 warp_ptr);
    // //Switch
    void SwitchInitSpace1();
    void SwitchSpace1(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsSpace1();
    void HitSwitchSpace1();
    void HitBallSwitchSpace1(u32 ptr);
    // //Enemies
    void EnemyInitSpace1();
    void EnemySpace1(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemySpace1(u32 ptr);
#endif