#include "worlds.h"

void InitLocationIds()
{
    GaribInitAtlantis1();
    EnemyInitAtlantis1();
    LifeInitAtlantis1();
    TipInitAtlantis1();
    CheckpointInitAtlantis1();
    SwitchInitAtlantis1();
    ap_memory.pc.id_gen++; // Goal

    GaribInitAtlantis2();
    EnemyInitAtlantis2();
    LifeInitAtlantis2();
    TipInitAtlantis2();
    CheckpointInitAtlantis2();
    SwitchInitAtlantis2();
    ap_memory.pc.id_gen++; // Goal
    PotionInitAtlantis2();

    GaribInitAtlantis3();
    EnemyInitAtlantis3();
    LifeInitAtlantis3();
    CheckpointInitAtlantis3();
    SwitchInitAtlantis3();
    ap_memory.pc.id_gen++; // Goal
    PotionInitAtlantis3();

    ap_memory.pc.id_gen++; // Goal

    GaribInitAtlantisBONUS();
    EnemyInitAtlantisBONUS();
    LifeInitAtlantisBONUS();
    ap_memory.pc.id_gen++; // Goal

    TipInitWayroom();

    GaribInitCarnival1();
    EnemyInitCarnival1();
    LifeInitCarnival1();
    TipInitCarnival1();
    CheckpointInitCarnival1();
    SwitchInitCarnival1();
    ap_memory.pc.id_gen++; // Goal
    PotionInitCarnival1();

    GaribInitCarnival2();
    EnemyInitCarnival2();
    LifeInitCarnival2();
    TipInitCarnival2();
    CheckpointInitCarnival2();
    SwitchInitCarnival2();
    ap_memory.pc.id_gen++; // Goal
    PotionInitCarnival2();

    GaribInitCarnival3();
    EnemyInitCarnival3();
    LifeInitCarnival3();
    CheckpointInitCarnival3();
    SwitchInitCarnival3();
    ap_memory.pc.id_gen++; // Goal
    PotionInitCarnival3();

    ap_memory.pc.id_gen++; // Boss Goal

    GaribInitCarnivalBONUS();
    LifeInitCarnivalBONUS();
    ap_memory.pc.id_gen++; // Goal

    TipInitWayroom();

    GaribInitPirates1();
    EnemyInitPirates1();
    LifeInitPirates1();
    TipInitPirates1();
    CheckpointInitPirates1();
    SwitchInitPirates1();
    ap_memory.pc.id_gen++; // Goal

    GaribInitPirates2();
    EnemyInitPirates2();
    LifeInitPirates2();
    CheckpointInitPirates2();
    SwitchInitPirates2();
    ap_memory.pc.id_gen++; // Goal

    GaribInitPirates3();
    EnemyInitPirates3();
    LifeInitPirates3();
    TipInitPirates3();
    CheckpointInitPirates3();
    SwitchInitPirates3();
    ap_memory.pc.id_gen++; // Goal
    PotionInitPirates3();

    ap_memory.pc.id_gen++; // Boss Goal

    GaribInitPiratesBONUS();
    EnemyInitPiratesBONUS();
    LifeInitPiratesBONUS();
    ap_memory.pc.id_gen++; // Goal

    TipInitWayroom();

    GaribInitPrehistoric1();
    EnemyInitPrehistoric1();
    LifeInitPrehistoric1();
    CheckpointInitPrehistoric1();
    SwitchInitPrehistoric1();
    ap_memory.pc.id_gen++; // Goal

    GaribInitPrehistoric2();
    EnemyInitPrehistoric2();
    LifeInitPrehistoric2();
    CheckpointInitPrehistoric2();
    SwitchInitPrehistoric2();
    ap_memory.pc.id_gen++; // Goal

    GaribInitPrehistoric3();
    EnemyInitPrehistoric3();
    LifeInitPrehistoric3();
    CheckpointInitPrehistoric3();
    SwitchInitPrehistoric3();
    ap_memory.pc.id_gen++; // Goal
    PotionInitPrehistoric3();

    ap_memory.pc.id_gen++; // Boss

    GaribInitPrehistoricBONUS();
    LifeInitPrehistoricBONUS();
    ap_memory.pc.id_gen++; // Goal

    TipInitWayroom();

    GaribInitFear1();
    EnemyInitFear1();
    LifeInitFear1();
    CheckpointInitFear1();
    SwitchInitFear1();
    ap_memory.pc.id_gen++; // Goal
    PotionInitFear1();

    GaribInitFear2();
    EnemyInitFear2();
    LifeInitFear2();
    TipInitFear2();
    CheckpointInitFear2();
    SwitchInitFear2();
    ap_memory.pc.id_gen++; // Goal

    GaribInitFear3();
    EnemyInitFear3();
    LifeInitFear3();
    CheckpointInitFear3();
    SwitchInitFear3();
    ap_memory.pc.id_gen++; // Goal
    PotionInitFear3();

    ap_memory.pc.id_gen++; // Boss switch 1
    ap_memory.pc.id_gen++; // Boss switch 2
    ap_memory.pc.id_gen++; // Boss

    GaribInitFearBONUS();
    LifeInitFearBONUS();
    ap_memory.pc.id_gen++; // Goal

    TipInitWayroom();

    GaribInitSpace1();
    EnemyInitSpace1();
    LifeInitSpace1();
    CheckpointInitSpace1();
    SwitchInitSpace1();
    ap_memory.pc.id_gen++; // Goal

    GaribInitSpace2();
    EnemyInitSpace2();
    LifeInitSpace2();
    CheckpointInitSpace2();
    SwitchInitSpace2();
    ap_memory.pc.id_gen++; // Goal
    PotionInitSpace2();

    GaribInitSpace3();
    EnemyInitSpace3();
    LifeInitSpace3();
    CheckpointInitSpace3();
    SwitchInitSpace3();
    ap_memory.pc.id_gen++; // Goal
    PotionInitSpace3();

    ap_memory.pc.id_gen++; // Boss

    GaribInitSpaceBONUS();
    LifeInitSpaceBONUS();
    ap_memory.pc.id_gen++; // Goal
    PotionInitSpaceBONUS();

    ap_memory.pc.id_gen++; // Cheat Chicken

    ap_memory.pc.id_gen++; // Ball turn-in 1
    ap_memory.pc.id_gen++; // Ball turn-in 2
    ap_memory.pc.id_gen++; // Ball turn-in 3
    ap_memory.pc.id_gen++; // Ball turn-in 4
    ap_memory.pc.id_gen++; // Ball turn-in 5
    ap_memory.pc.id_gen++; // Ball turn-in 6
    ap_memory.pc.id_gen++; // Ball turn-in 7

    TipInitTraining();
    SwitchInitTraining();

}
