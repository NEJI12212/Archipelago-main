#ifndef PREHISTORICBONUS_H
#define PREHISTORICBONUS_H
    #include "../glover.h"
    //Garibs
    void GaribInitPrehistoricBONUS();
    void GaribPrehistoricBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void GaribPrehistoricBONUSShiny();
    void CollectedPrehistoricBONUS(u32 ptr);
    void SpawnPrehistoricBONUS(u32 ptr);
    void AllCollectedPrehistoricBONUS();
    //Life
    void LifeInitPrehistoricBONUS();
    void LifePrehistoricBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifePrehistoricBONUS(u32 ptr);
#endif