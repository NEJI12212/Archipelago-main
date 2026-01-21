#ifndef SPACEBONUS_H
#define SPACEBONUS_H
    #include "../glover.h"
    //Garibs
    void GaribInitSpaceBONUS();
    void GaribSpaceBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void GaribSpaceBONUSShiny();
    void CollectedSpaceBONUS(u32 ptr);
    void SpawnSpaceBONUS(u32 ptr);
    void AllCollectedSpaceBONUS();
    //Life
    void LifeInitSpaceBONUS();
    void LifeSpaceBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeSpaceBONUS(u32 ptr);
    //Potions
    void PotionInitSpaceBONUS();
    void PotionSpaceBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorPotionSpaceBONUS();
#endif