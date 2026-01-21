#ifndef PREHISTORIC2_H
#define PREHISTORIC2_H
    #include "../glover.h"
    //Garibs
    void GaribInitPrehistoric2();
    void GaribPrehistoric2(u32 ptr, u16 obj_type, u16 item_id);
    void GaribPrehistoric2Shiny();
    void CollectedPrehistoric2(u32 ptr);
    void SpawnPrehistoric2(u32 ptr);
    void AllCollectedPrehistoric2();
    //Life
    void LifeInitPrehistoric2();
    void LifePrehistoric2(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifePrehistoric2(u32 ptr);
    //Checkpoints
    void CheckpointInitPrehistoric2();
    void CheckpointPrehistoric2(u32 ptr,  u16 item_id);
    void MonitorCheckpointPrehistoric2();
    void RandomizeCheckpointPrehistoric2();
    bool CheckpointAPPrehistoric2(u32 warp_ptr);
    //Switch
    void SwitchInitPrehistoric2();
    void SwitchPrehistoric2(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsPrehistoric2();
    void HitSwitchPrehistoric2();
    void HitBallSwitchPrehistoric2(u32 ptr);
    //Enemies
    void EnemyInitPrehistoric2();
    void EnemyPrehistoric2(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyPrehistoric2(u32 ptr);
#endif