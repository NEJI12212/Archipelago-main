#ifndef CARNIVAL2_H
#define CARNIVAL2_H
    #include "../glover.h"
    //Garibs
    void GaribInitCarnival2();
    void GaribCarnival2(u32 ptr, u16 obj_type, u16 item_id);
    void GaribCarnival2Shiny();
    void CollectedCarnival2(u32 ptr);
    void SpawnCarnival2(u32 ptr);
    void AllCollectedCarnival2();
    //Life
    void LifeInitCarnival2();
    void LifeCarnival2(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeCarnival2(u32 ptr);
    //Tip
    void TipInitCarnival2();
    void TipCarnival2(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedTipCarnival2(u32 ptr);
    void VisitedTiphatsCarnival2();
    void TipTextHintCarnival2(u32 orig_txt_ptr);
    //Checkpoints
    void CheckpointInitCarnival2();
    void CheckpointCarnival2(u32 ptr,  u16 item_id);
    void MonitorCheckpointCarnival2();
    void RandomizeCheckpointCarnival2();
    bool CheckpointAPCarnival2(u32 warp_ptr);
    //Switch
    void SwitchInitCarnival2();
    void SwitchCarnival2(u32 ptr, u16 obj_type, u16 item_id);
    void SwitchTeethCarnival2();
    void MonitorEventsCarnival2();
    void HitSwitchCarnival2();
    void HitBallSwitchCarnival2(u32 ptr);
    //Enemies
    void EnemyInitCarnival2();
    void EnemyCarnival2(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyCarnival2(u32 ptr);
    void MonitorFallenEnemiesCarnival2();
    //Potions
    void PotionInitCarnival2();
    void PotionCarnival2(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorPotionCarnival2();
#endif