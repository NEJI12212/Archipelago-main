#ifndef ATLANTIS1_H
#define ATLANTIS1_H
    #include "../glover.h"
    //Garibs
    void GaribInitAtlantis1();
    void GaribAtlantis1(u32 ptr, u16 obj_type, u16 item_id);
    void GaribAtlantis1Shiny();
    void CollectedAtlantis1(u32 ptr);
    void SpawnAtlantis1(u32 ptr);
    void AllCollectedAtlantis1();
    //Life
    void LifeInitAtlantis1();
    void LifeAtlantis1(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeAtlantis1(u32 ptr);
    //Tip
    void TipInitAtlantis1();
    void TipAtlantis1(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedTipAtlantis1(u32 ptr);
    void VisitedTiphatsAtlantis1();
    void TipTextHintAtlantis1(u32 orig_txt_ptr);
    //Checkpoints
    void CheckpointInitAtlantis1();
    void CheckpointAtlantis1(u32 ptr, u16 item_id);
    void MonitorCheckpointAtlantis1();
    void RandomizeCheckpointAtlantis1();
    bool CheckpointAPAtlantis1(u32 warp_ptr);
    //Switch
    void SwitchInitAtlantis1();
    void SwitchAtlantis1(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsAtlantis1();
    void HitSwitchAtlantis1();
    //Enemies
    void EnemyInitAtlantis1();
    void EnemyAtlantis1(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyAtlantis1(u32 ptr);
    void MonitorFallenEnemiesAtlantis1();

#endif
