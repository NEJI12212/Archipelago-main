#ifndef CARNIVALBONUS_H
#define CARNIVALBONUS_H
    #include "../glover.h"
    //Garibs
    void GaribInitCarnivalBONUS();
    void GaribCarnivalBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void GaribCarnivalBONUSShiny();
    void CollectedCarnivalBONUS(u32 ptr);
    void AllCollectedCarnivalBONUS();
    //Life
    void LifeInitCarnivalBONUS();
    void LifeCarnivalBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeCarnivalBONUS(u32 ptr);
#endif
