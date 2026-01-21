#ifndef ATLANTIS2_H
#define ATLANTIS2_H
    #include "../glover.h"
    //Garibs
    void GaribInitAtlantis2();
    void GaribAtlantis2(u32 ptr, u16 obj_type, u16 item_id);
    void GaribAtlantis2Shiny();
    void CollectedAtlantis2(u32 ptr);
    void SpawnAtlantis2(u32 ptr);
    void AllCollectedAtlantis2();
    //Life
    void LifeInitAtlantis2();
    void LifeAtlantis2(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeAtlantis2(u32 ptr);
    //Tip
    void TipInitAtlantis2();
    void TipAtlantis2(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedTipAtlantis2(u32 ptr);
    void VisitedTiphatsAtlantis2();
    void TipTextHintAtlantis2(u32 orig_txt_ptr);
    //Checkpoints
    void CheckpointInitAtlantis2();
    void CheckpointAtlantis2(u32 ptr, u16 item_id);
    void MonitorCheckpointAtlantis2();
    void RandomizeCheckpointAtlantis2();
    bool CheckpointAPAtlantis2(u32 warp_ptr);
    //Switch
    void SwitchInitAtlantis2();
    void SwitchAtlantis2(u32 ptr, u16 obj_type, u16 item_id);
    void PuzzleEventsAtlantis2(u32 ptr);
    bool PuzzleConditionsAtlantis2(u32 ptr);
    void SwitchBlockAtlantis2(u32 ptr, u16 obj_type, u16 item_id);

    void MonitorEventsAtlantis2();
    void HitSwitchAtlantis2();
    void HitBallSwitchAtlantis2(u32 ptr);
    void MonitorBrokenBlock();
    //Enemies
    void EnemyInitAtlantis2();
    void EnemyAtlantis2(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyAtlantis2(u32 ptr);
    //Potions
    void PotionInitAtlantis2();
    void PotionAtlantis2(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorPotionAtlantis2();
#endif
