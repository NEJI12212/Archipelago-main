#ifndef ATLANTIS3_H
#define ATLANTIS3_H
    #include "../glover.h"
    //Garibs
    void GaribInitAtlantis3();
    void GaribAtlantis3(u32 ptr, u16 obj_type, u16 item_id);
    void GaribAtlantis3Shiny();
    void CollectedAtlantis3(u32 ptr);
    void SpawnAtlantis3(u32 ptr);
    void AllCollectedAtlantis3();
    //Life
    void LifeInitAtlantis3();
    void LifeAtlantis3(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeAtlantis3(u32 ptr);
    //Checkpoints
    void CheckpointInitAtlantis3();
    void CheckpointAtlantis3(u32 ptr, u16 item_id);
    void MonitorCheckpointAtlantis3();
    bool CheckpointAPAtlantis3(u32 warp_ptr);
    //Switch
    void SwitchInitAtlantis3();
    void SwitchAtlantis3(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsAtlantis3();
    void HitSwitchAtlantis3();
    void HitBallSwitchAtlantis3(u32 ptr);
    //Enemies
    void EnemyInitAtlantis3();
    void EnemyAtlantis3(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyAtlantis3(u32 ptr);
    void MonitorFallenEnemiesAtlantis3();
    void RandomizeCheckpointAtlantis3();
    //Potions
    void PotionInitAtlantis3();
    void PotionAtlantis3(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorPotionAtlantis3();
#endif
