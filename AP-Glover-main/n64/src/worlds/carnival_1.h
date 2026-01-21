#ifndef CARNIVAL1_H
#define CARNIVAL1_H
    #include "../glover.h"
    //Garibs
    void GaribInitCarnival1();
    void GaribCarnival1(u32 ptr, u16 obj_type, u16 item_id);
    void GaribCarnival1Shiny();
    void CollectedCarnival1(u32 ptr);
    void SpawnCarnival1(u32 ptr);
    void AllCollectedCarnival1();
    //Life
    void LifeInitCarnival1();
    void LifeCarnival1(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeCarnival1(u32 ptr);
    //Tip
    void TipInitCarnival1();
    void TipCarnival1(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedTipCarnival1(u32 ptr);
    void VisitedTiphatsCarnival1();
    void TipTextHintCarnival1(u32 orig_txt_ptr);
    //Checkpoints
    void CheckpointInitCarnival1();
    void CheckpointCarnival1(u32 ptr,  u16 item_id);
    void MonitorCheckpointCarnival1();
    void RandomizeCheckpointCarnival1();
    bool CheckpointAPCarnival1(u32 warp_ptr);
    //Switch
    void SwitchInitCarnival1();
    void SwitchCarnival1(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsCarnival1();
    void HitSwitchCarnival1();
    void HitBallSwitchCarnival1(u32 ptr);
    //Enemies
    void EnemyInitCarnival1();
    void EnemyCarnival1(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyCarnival1(u32 ptr);
    void MonitorFallenEnemiesCarnival1();
    //Potions
    void PotionInitCarnival1();
    void PotionSpawnCarnival1(u32 ptr);
    void MonitorPotionCarnival1();
#endif