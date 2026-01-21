#ifndef FEARBONUS_H
#define FEARBONUS_H
    #include "../glover.h"
    //Garibs
    void GaribInitFearBONUS();
    void GaribFearBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void GaribFearBONUSShiny();
    void CollectedFearBONUS(u32 ptr);
    void SpawnFearBONUS(u32 ptr);
    void AllCollectedFearBONUS();
    //Life
    void LifeInitFearBONUS();
    void LifeFearBONUS(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedLifeFearBONUS(u32 ptr);
#endif