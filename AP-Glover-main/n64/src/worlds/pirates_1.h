#ifndef PIRATES1_H
#define PIRATES1_H
    #include "../glover.h"
    //Garibs
    void GaribInitPirates1();
    void GaribPirates1(u32 ptr, u16 obj_type, u16 item_id);
    void GaribPirates1Shiny();
    void CollectedPirates1(u32 ptr);
    void SpawnPirates1(u32 ptr);
    void AllCollectedPirates1();
    //Life
    void LifeInitPirates1();
    void LifePirates1(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifePirates1(u32 ptr);
    //Tip
    void TipInitPirates1();
    void TipPirates1(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedTipPirates1(u32 ptr);
    void VisitedTiphatsPirates1();
    void TipTextHintPirates1(u32 orig_txt_ptr);
    //Checkpoints
    void CheckpointInitPirates1();
    void CheckpointPirates1(u32 ptr,  u16 item_id);
    void MonitorCheckpointPirates1();
    void RandomizeCheckpointPirates1();
    bool CheckpointAPPirates1(u32 warp_ptr);
    //Switch
    void SwitchInitPirates1();
    void SwitchPirates1(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsPirates1();
    void HitSwitchPirates1();
    void HitBallSwitchPirates1(u32 ptr);
    //Enemies
    void EnemyInitPirates1();
    void EnemyPirates1(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyPirates1(u32 ptr);
    void MonitorFallenEnemiesPirates1();
#endif