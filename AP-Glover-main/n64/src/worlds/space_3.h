#ifndef SPACE3_H
#define SPACE3_H
    #include "../glover.h"
    //Garibs
    void GaribInitSpace3();
    void GaribSpace3(u32 ptr, u16 obj_type, u16 item_id);
    void GaribSpace3Shiny();
    void CollectedSpace3(u32 ptr);
    void SpawnSpace3(u32 ptr);
    void AllCollectedSpace3();
    //Life
    void LifeInitSpace3();
    void LifeSpace3(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeSpace3(u32 ptr);
    // //Checkpoints
    void CheckpointInitSpace3();
    void CheckpointSpace3(u32 ptr,  u16 item_id);
    void MonitorCheckpointSpace3();
    void RandomizeCheckpointSpace3();
    bool CheckpointAPSpace3(u32 warp_ptr);
    // //Switch
    void SwitchInitSpace3();
    void SwitchSpace3(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsSpace3();
    void PuzzleEventsSpace3(u32 ptr);
    void HitSwitchSpace3();
    void HitBallSwitchSpace3(u32 ptr);
    // //Enemies
    void EnemyInitSpace3();
    void EnemySpace3(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemySpace3(u32 ptr);
    void MonitorFallenEnemiesSpace3();
    //Potions
    void PotionInitSpace3();
    void PotionSpace3(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorPotionSpace3();
#endif