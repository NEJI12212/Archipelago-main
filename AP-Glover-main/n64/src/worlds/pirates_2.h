#ifndef PIRATES2_H
#define PIRATES2_H
    #include "../glover.h"
    //Garibs
    void GaribInitPirates2();
    void GaribPirates2(u32 ptr, u16 obj_type, u16 item_id);
    void GaribPirates2Shiny();
    void CollectedPirates2(u32 ptr);
    void SpawnPirates2(u32 ptr);
    void AllCollectedPirates2();
    //Life
    void LifeInitPirates2();
    void LifePirates2(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifePirates2(u32 ptr);
    //Checkpoints
    void CheckpointInitPirates2();
    void CheckpointPirates2(u32 ptr,  u16 item_id);
    void MonitorCheckpointPirates2();
    void RandomizeCheckpointPirates2();
    bool CheckpointAPPirates2(u32 warp_ptr);
    //Switch
    void SwitchInitPirates2();
    void SwitchPirates2(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsPirates2();
    void HitSwitchPirates2();
    void HitBallSwitchPirates2(u32 ptr);
    //Enemies
    void EnemyInitPirates2();
    void EnemyPirates2(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyPirates2(u32 ptr);
    void MonitorFallenEnemiesPirates2();
#endif