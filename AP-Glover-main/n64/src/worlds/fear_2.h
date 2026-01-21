#ifndef FEAR2_H
#define FEAR2_H
    #include "../glover.h"
    //Garibs
    void GaribInitFear2();
    void GaribFear2(u32 ptr, u16 obj_type, u16 item_id);
    void GaribFear2Shiny();
    void CollectedFear2(u32 ptr);
    void SpawnFear2(u32 ptr);
    void AllCollectedFear2();
    //Life
    void LifeInitFear2();
    void LifeFear2(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeFear2(u32 ptr);
    //Tip
    void TipInitFear2();
    void TipFear2(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedTipFear2(u32 ptr);
    void VisitedTiphatsFear2();
    void TipTextHintFear2(u32 orig_txt_ptr);
    // //Checkpoints
    void CheckpointInitFear2();
    void CheckpointFear2(u32 ptr,  u16 item_id);
    void MonitorCheckpointFear2();
    void RandomizeCheckpointFear2();
    bool CheckpointAPFear2(u32 warp_ptr);
    // //Switch
    void SwitchInitFear2();
    void SwitchFear2(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsFear2();
    void PuzzleEventsFear2(u32 ptr);
    void HitBallSwitchFear2(u32 ptr);
    // //Enemies
    void EnemyInitFear2();
    void EnemyFear2(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyFear2(u32 ptr);
    void MonitorFallenEnemiesFear2();
#endif