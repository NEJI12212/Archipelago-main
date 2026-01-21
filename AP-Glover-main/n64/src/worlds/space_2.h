#ifndef SPACE2_H
#define SPACE2_H
    #include "../glover.h"
    //Garibs
    void GaribInitSpace2();
    void GaribSpace2(u32 ptr, u16 obj_type, u16 item_id);
    void GaribSpace2Shiny();
    void CollectedSpace2(u32 ptr);
    void SpawnSpace2(u32 ptr);
    void AllCollectedSpace2();
    //Life
    void LifeInitSpace2();
    void LifeSpace2(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeSpace2(u32 ptr);
    // //Checkpoints
    void CheckpointInitSpace2();
    void CheckpointSpace2(u32 ptr,  u16 item_id);
    void MonitorCheckpointSpace2();
    // //Switch
    void SwitchInitSpace2();
    void SwitchSpace2(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsSpace2();
    void PuzzleEventsSpace2(u32 ptr);
    bool PuzzleConditionsSpace2(u32 ptr);
    void HitBallSwitchSpace2(u32 ptr);
    // //Enemies
    void EnemyInitSpace2();
    void EnemySpace2(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemySpace2(u32 ptr);
    void MonitorFallenEnemiesSpace2();
    //Potions
    void PotionInitSpace2();
    void PotionSpace2(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorPotionSpace2();
#endif