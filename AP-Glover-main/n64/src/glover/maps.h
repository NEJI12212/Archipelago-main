#ifndef DKR_FN_MAPS_H
#define DKR_FN_MAPS_H
    typedef enum {
        WAYROOM_ATLANTIS_HUB = 0x06,
        WAYROOM_CARNIVAL_HUB = 0x07,
        WAYROOM_PIRATES_HUB = 0x08,
        WAYROOM_PREHISTORIC_HUB = 0x09,
        WAYROOM_FORTRESS_HUB = 0x0A,
        WAYROOM_SPACE_HUB = 0x0B,
        WAYROOM_CAVE = 0x0C,
        WAYROOM_TRAINING = 0x15
    } WAYROOMS;
    // 0x0F = MENU
    // 0x0E = HUB1
    // 0x0D = HUB2
    #define gvr_wayroom_type (*(u8*)0x801E7541)

    typedef enum {
        MAP_HUB1 = 0x00,
        MAP_HUB2,
        MAP_HUB3,
        MAP_HUB4,
        MAP_HUB5,
        MAP_HUB6,
        MAP_HUB7,
        MAP_HUB8,
        MAP_CASTLE_CAVE,
        MAP_TRAINING,
        MAP_ATLANTIS_1,
        MAP_ATLANTIS_2,
        MAP_ATLANTIS_3,
        MAP_ATLANTIS_BOSS,
        MAP_ATLANTIS_BONUS,
        MAP_CARNIVAL_1,
        MAP_CARNIVAL_2,
        MAP_CARNIVAL_3,
        MAP_CARNIVAL_BOSS,
        MAP_CARNIVAL_BONUS,
        MAP_PIRATES_1,
        MAP_PIRATES_2,
        MAP_PIRATES_3,
        MAP_PIRATES_BOSS,
        MAP_PIRATES_BONUS,
        MAP_PREHISTORIC_1,
        MAP_PREHISTORIC_2,
        MAP_PREHISTORIC_3,
        MAP_PREHISTORIC_BOSS,
        MAP_PREHISTORIC_BONUS,
        MAP_FORTRESS_1,
        MAP_FORTRESS_2,
        MAP_FORTRESS_3,
        MAP_FORTRESS_BOSS,
        MAP_FORTRESS_BONUS,
        MAP_SPACE_1,
        MAP_SPACE_2,
        MAP_SPACE_3,
        MAP_SPACE_BOSS_1,
        MAP_SPACE_BOSS_2,
        MAP_SPACE_BOSS_3,
        MAP_SPACE_BONUS,
        MAP_WAYROOM = 0x2A,
        MAP_WIN = 0x2F
    } MAPS;

    typedef struct { 
        u8 unused1: 1; //801EAA4C
        u8 unused2: 1;
        u8 spc_bonus: 1;
        u8 spc_boss: 1;
        u8 spc_3: 1;
        u8 spc_2: 1;
        u8 spc_1: 1;
        u8 fof_bonus: 1;

        u8 fof_boss: 1; //801EAA4D
        u8 fof_3: 1;
        u8 fof_2: 1;
        u8 fof_1: 1;
        u8 pre_bonus: 1;
        u8 pre_boss: 1;
        u8 pre_3: 1;
        u8 pre_2: 1;

        u8 pre_1: 1; //801EAA4E
        u8 pir_bonus: 1;
        u8 pir_boss: 1;
        u8 pir_3: 1;
        u8 pir_2: 1;
        u8 pir_1: 1;
        u8 carn_bonus: 1;
        u8 carn_boss: 1;

        u8 carn_3: 1; //801EAA4F
        u8 carn_2: 1;
        u8 carn_1: 1;
        u8 atl_bonus: 1;
        u8 atl_boss: 1;
        u8 atl_3: 1;
        u8 atl_2: 1;
        u8 atl_1: 1;
    } perfect_t;

    typedef struct {
        u8 none1: 1;
        u8 none2: 1;
        u8 spc_door_bonus: 1;
        u8 spc_boss_defeated: 1;
        u8 spc_door_boss: 1;
        u8 spc_door_3: 1;
        u8 spc_door_2: 1;
        u8 fort_door_bonus: 1;

        u8 fort_boss_defeated: 1;
        u8 fort_door_boss: 1;
        u8 fort_door_3: 1;
        u8 fort_door_2: 1;
        u8 pre_door_bonus: 1;
        u8 pre_boss_defeated: 1;
        u8 pre_door_boss: 1;
        u8 pre_door_3: 1;

        u8 pre_door_2: 1;
        u8 pir_door_bonus: 1;
        u8 pir_boss_defeated: 1;
        u8 pir_door_boss: 1;
        u8 pir_door_3: 1;
        u8 pir_door_2: 1;
        u8 carn_door_bonus: 1;
        u8 carn_boss_defeated: 1;

        u8 carn_door_boss: 1;
        u8 carn_door_3: 1;
        u8 carn_door_2: 1;
        u8 atl_door_bonus: 1;
        u8 atl_boss_defeated: 1;
        u8 atl_door_boss: 1;
        u8 atl_door_3: 1;
        u8 atl_door_2: 1;
    } doors_t;
    #define gvr_current_map (*(u8*)0x801E7531)
    #define gvr_prev_map (*(u8*)0x801E7532)
    #define gvr_map_transistion (*(u8*)0x801E75C4)
    #define gvr_gates (*(doors_t*)0x801EAA48)
    #define gvr_perfect (*(perfect_t*)0x801EAA4C)
    #define gvr_atlantis_bonus_completed (*(u8*)0x801E7584)

    #define spawn_ball_hub (*(u8*)0x801EAA56)

#endif
