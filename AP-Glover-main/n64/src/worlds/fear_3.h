#ifndef FEAR3_H
#define FEAR3_H
    #include "../glover.h"
    //Garibs
    void GaribInitFear3();
    void GaribFear3(u32 ptr, u16 obj_type, u16 item_id);
    void GaribFear3Shiny();
    void CollectedFear3(u32 ptr);
    void SpawnFear3(u32 ptr);
    void AllCollectedFear3();
    //Life
    void LifeInitFear3();
    void LifeFear3(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeFear3(u32 ptr);
    //Checkpoints
    void CheckpointInitFear3();
    void CheckpointFear3(u32 ptr,  u16 item_id);
    void MonitorCheckpointFear3();
    void RandomizeCheckpointFear3();
    bool CheckpointAPFear3(u32 warp_ptr);
    //Switch
    void SwitchInitFear3();
    void SwitchFear3(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsFear3();
    void PuzzleEventsFear3(u32 ptr);
    void HitBallSwitchFear3(u32 ptr);
    // //Enemies
    void EnemyInitFear3();
    void EnemyFear3(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyFear3(u32 ptr);
    void MonitorFallenEnemiesFear3();
    // //Potions
    void PotionInitFear3();
    void PotionFear3(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorPotionFear3();
#endif