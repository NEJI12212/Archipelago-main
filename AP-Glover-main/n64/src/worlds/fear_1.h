#ifndef FEAR1_H
#define FEAR1_H
    #include "../glover.h"
    //Garibs
    void GaribInitFear1();
    void GaribFear1(u32 ptr, u16 obj_type, u16 item_id);
    void GaribFear1Shiny();
    void CollectedFear1(u32 ptr);
    void SpawnFear1(u32 ptr);
    void AllCollectedFear1();
    //Life
    void LifeInitFear1();
    void LifeFear1(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeFear1(u32 ptr);
    // //Checkpoints
    void CheckpointInitFear1();
    void CheckpointFear1(u32 ptr,  u16 item_id);
    void MonitorCheckpointFear1();
    void RandomizeCheckpointFear1();
    bool CheckpointAPFear1(u32 warp_ptr);
    // //Switch
    void SwitchInitFear1();
    void SwitchFear1(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsFear1();
    void PuzzleEventsFear1(u32 ptr);
    void HitSwitchFear1();
    void HitBallSwitchFear1(u32 ptr);
    // //Enemies
    void EnemyInitFear1();
    void EnemyFear1(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyFear1(u32 ptr);
    void MonitorFallenEnemiesFear1();
    // //Potions
    void PotionInitFear1();
    void PotionFear1(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorPotionFear1();
#endif