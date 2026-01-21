#ifndef PREHISTORIC1_H
#define PREHISTORIC1_H
    #include "../glover.h"
    //Garibs
    void GaribInitPrehistoric1();
    void GaribPrehistoric1(u32 ptr, u16 obj_type, u16 item_id);
    void GaribPrehistoric1Shiny();
    void CollectedPrehistoric1(u32 ptr);
    void SpawnPrehistoric1(u32 ptr);
    void AllCollectedPrehistoric1();
    //Life
    void LifeInitPrehistoric1();
    void LifePrehistoric1(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifePrehistoric1(u32 ptr);
    //Checkpoints
    void CheckpointInitPrehistoric1();
    void CheckpointPrehistoric1(u32 ptr,  u16 item_id);
    void MonitorCheckpointPrehistoric1();
    void RandomizeCheckpointPrehistoric1();
    bool CheckpointAPPrehistoric1(u32 warp_ptr);
    //Enemies
    void EnemyInitPrehistoric1();
    void EnemyPrehistoric1(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyPrehistoric1(u32 ptr);
    void MonitorFallenEnemiesPrehistoric1();
    //Switch
    void SwitchInitPrehistoric1();
    void SwitchIciclesPrehistoric1();
    void MonitorEventsPrehistoric1();

#endif