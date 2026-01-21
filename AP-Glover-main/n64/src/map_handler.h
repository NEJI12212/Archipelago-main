#ifndef MAP_HANDLER_H
#define MAP_HANDLER_H
    #include "glover.h"
    #include "ap.h"
    void HubHandler();
    void CheckWorld();
    void MapChange(u8 door_id);
    void BacktoHub();
    u8 APHubConverter(u8 map);
    u8 APWorldConverter(u8 map);
#endif
