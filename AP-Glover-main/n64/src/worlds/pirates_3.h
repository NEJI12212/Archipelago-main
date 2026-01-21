#ifndef PIRATES3_H
#define PIRATES3_H
    #include "../glover.h"
    //Garibs
    void GaribInitPirates3();
    void GaribPirates3(u32 ptr, u16 obj_type, u16 item_id);
    void GaribPirates3Shiny();
    void CollectedPirates3(u32 ptr);
    void SpawnPirates3(u32 ptr);
    void AllCollectedPirates3();
    //Life
    void LifeInitPirates3();
    void LifePirates3(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifePirates3(u32 ptr);
    //Tip
    void TipInitPirates3();
    void TipPirates3(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedTipPirates3(u32 ptr);
    void VisitedTiphatsPirates3();
    void TipTextHintPirates3(u32 orig_txt_ptr);
    //Checkpoints
    void CheckpointInitPirates3();
    void CheckpointPirates3(u32 ptr,  u16 item_id);
    void MonitorCheckpointPirates3();
    void RandomizeCheckpointPirates3();
    bool CheckpointAPPirates3(u32 warp_ptr);
    //Switch
    void SwitchInitPirates3();
    void SwitchPirates3(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsPirates3();
    void HitSwitchPirates3();
    void HitBallSwitchPirates3(u32 ptr);
    //Enemies
    void EnemyInitPirates3();
    void EnemyPirates3(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyPirates3(u32 ptr);
    void MonitorFallenEnemiesPirates3();
    //Potions
    void PotionInitPirates3();
    void PotionPirates3(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorPotionPirates3();
#endif