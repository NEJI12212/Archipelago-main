#ifndef PREHISTORIC3_H
#define PREHISTORIC3_H
    #include "../glover.h"
    //Garibs
    void GaribInitPrehistoric3();
    void GaribPrehistoric3(u32 ptr, u16 obj_type, u16 item_id);
    void GaribPrehistoric3Shiny();
    void CollectedPrehistoric3(u32 ptr);
    void SpawnPrehistoric3(u32 ptr);
    void AllCollectedPrehistoric3();
    //Life
    void LifeInitPrehistoric3();
    void LifePrehistoric3(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifePrehistoric3(u32 ptr);
    //Checkpoints
    void CheckpointInitPrehistoric3();
    void CheckpointPrehistoric3(u32 ptr,  u16 item_id);
    void MonitorCheckpointPrehistoric3();
    void RandomizeCheckpointPrehistoric3();
    bool CheckpointAPPrehistoric3(u32 warp_ptr);
    //Switch
    void SwitchInitPrehistoric3();
    void SwitchPrehistoric3(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsPrehistoric3();
    void SwitchTreePrehistoric3();
    void PuzzleEventsPrehistoric3(u32 ptr);
    u32 MonolithsPrehistoric3(u32 ptr);
    void ResetMonolithsPrehistoric3();
    void HitSwitchPrehistoric3();
    void HitBallSwitchPrehistoric3(u32 ptr);
    //Enemies
    void EnemyInitPrehistoric3();
    void EnemyPrehistoric3(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyPrehistoric3(u32 ptr);
    //Potions
    void PotionInitPrehistoric3();
    void PotionPrehistoric3(u32 ptr, u16 obj_type, u16 item_id);
    void PotionSpawnPrehistoric3(u32 ptr);
    void MonitorPotionPrehistoric3();
#endif