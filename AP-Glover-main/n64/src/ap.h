#ifndef AP_H
#define AP_H
  #include "map_handler.h"
  #include "glover.h"
  #include "string.h"
  u32 display_dialog(u16 x_screen, u16 y_screen, u8 R, u8 G, u8 B, u8 alpha, float x_scale, float y_scale, u8 zero,
    char *ptr, u8 alignment);
  void InitAPWorlds();
  void CheckReceivedAPItems();
  void CheckSensitiveReceivedAPItems();
  void SetAPGaribs();
  void DialogCheck();
  void DialogClear();
  void DialogQueue(char *text);
  void DialogTimer();
  void Goal();
  void UnlockStarWorld();
  void UnlockSecret();
  void TrapTimer();
  void ClearObjPtrs();
#endif
