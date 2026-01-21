#ifndef PIRATESBONUS_H
#define PIRATESBONUS_H
    #include "../glover.h"
    //Garibs
    void GaribInitPiratesBONUS();
    void GaribPiratesBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void GaribPiratesBONUSShiny();
    void CollectedPiratesBONUS(u32 ptr);
    void SpawnPiratesBONUS(u32 ptr);
    void AllCollectedPiratesBONUS();
    //Life
    void LifeInitPiratesBONUS();
    void LifePiratesBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifePiratesBONUS(u32 ptr);
    //Enemies
    void EnemyInitPiratesBONUS();
    void EnemyPiratesBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyPiratesBONUS(u32 ptr);
#endif