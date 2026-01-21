#ifndef ATLANTISBONUS_H
#define ATLANTISBONUS_H
    #include "../glover.h"
    //Garibs
    void GaribInitAtlantisBONUS();
    void GaribAtlantisBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void GaribAtlantisBONUSShiny();
    void CollectedAtlantisBONUS(u32 ptr);
    void AllCollectedAtlantisBONUS();
    //Life
    void LifeInitAtlantisBONUS();
    void LifeAtlantisBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeAtlantisBONUS(u32 ptr);
    //Enemies
    void EnemyInitAtlantisBONUS();
    void EnemyAtlantisBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void DefeatedEnemyAtlantisBONUS(u32 ptr);
#endif
