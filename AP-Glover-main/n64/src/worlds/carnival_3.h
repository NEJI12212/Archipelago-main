#ifndef CARNIVAL3_H
#define CARNIVAL3_H
    #include "../glover.h"
    //Garibs
    void GaribInitCarnival3();
    void GaribCarnival3(u32 ptr, u16 obj_type, u16 item_id);
    void GaribCarnival3Shiny();
    void CollectedCarnival3(u32 ptr);
    void SpawnCarnival3(u32 ptr);
    void AllCollectedCarnival3();
    //Life
    void LifeInitCarnival3();
    void LifeCarnival3(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeCarnival3(u32 ptr);
    //Checkpoints
    void CheckpointInitCarnival3();
    void CheckpointCarnival3(u32 ptr,  u16 item_id);
    void MonitorCheckpointCarnival3();
    void RandomizeCheckpointCarnival3();
    bool CheckpointAPCarnival3(u32 warp_ptr);
    //Switch
    void SwitchInitCarnival3();
    void SwitchCarnival3(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsCarnival3();
    void HitSwitchCarnival3();
    void HitBallSwitchCarnival3(u32 ptr);
    //Enemies
    void EnemyInitCarnival3();
    void EnemyCarnival3(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyCarnival3(u32 ptr);
    void MonitorFallenEnemiesCarnival3();
    //Potions
    void PotionInitCarnival3();
    void PotionCarnival3(u32 ptr, u16 obj_type, u16 item_id);
    //void PotionSpawnCarnival1(u32 ptr);
    void MonitorPotionCarnival3();
#endif
