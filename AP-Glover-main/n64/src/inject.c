#include <stdint.h>
#include <stdbool.h>
#include "glover.h"
#include "ap.h"
#include "map_handler.h"
#include "worlds.h"
#include "tools.h"
#include "sfx.h"
#include "portal_doors.h"

bool init = false;
bool gotdjump = false;
bool dpad_pressed = false;
bool changed_ball = false;
bool respawned = false;
bool credits = false;
bool inversed = false;
void watch_controls()
{
  if(gvr_controls.DPAD_L && !dpad_pressed) {
    dpad_pressed = true;
  }
  else if(gvr_controls.DPAD_R && !dpad_pressed) {
    if(ap_memory.pc.items[AP_DEBUG])
    {
      ap_memory.pc.items[AP_HELICOPTER_TRANSFORM]++;
    }
    dpad_pressed = true;
  }
  else if(gvr_controls.DPAD_U && !dpad_pressed) {
    dpad_pressed = true;
  }
  else if(gvr_controls.DPAD_D && !dpad_pressed) {
    if(gvr_current_map == MAP_PREHISTORIC_3)
    {
      ap_memory.pc.items[AP_DPAD_DOWN] = 1;
    }
    dpad_pressed = true;
  }
  if(dpad_pressed && !gvr_controls.DPAD_L && !gvr_controls.DPAD_R && !gvr_controls.DPAD_U && !gvr_controls.DPAD_D)
  {
    dpad_pressed = false;
  }
}

void force_ball()
{
  if((u32) animation_ptr->animations != 0x0)
  {
    if(animation_ptr->animations->current_animation == 0x0003 && gvr_current_ball == CURRENT_RUBBER_BALL && !changed_ball && gvr_bosscutscene == 0)
    {
      ap_memory.pc.forcechange = true;
    }
    return;
  }
  else if((u32) animation_ptr->animations == 0x0) {
    changed_ball = false;
    ap_memory.pc.forcechange = false;
  }
}

void pre_loop()
{
  if(!init)
  {
    csrand(12212);
    ap_memory.pc.version_major = 1;
    ap_memory.pc.version_minor = 0;
    ap_memory.pc.version_patch = 1;
    InitAPWorlds();
    ap_memory.pc.id_gen = 1;
    gvr_double_jump_clear1 = 0;
    gvr_double_jump_clear2 = 0;
    InitLocationIds();
    ap_memory.pc.text_ready = 1;
    //ap_memory.pc.settings.portals = 1;
    //ap_memory.pc.settings.garib_logic = 1;
    //ap_memory.pc.settings.random_sounds= 1;
    //ap_memory.pc.settings.randomize_switches = true;
    //ap_memory.pc.settings.randomize_checkpoints = true;
    //ap_memory.pc.settings.checkpoint_items = true;
    
    init = true;
  }

  if(gvr_fade_var == 0 && gvr_loaded_timer > 0 && gvr_bosscutscene == 0)
  {
    if(gvr_current_map != 0xFF && gvr_current_map != 0x2B && gvr_current_map != 0x2C)
    {
      if (gvr_current_map != 0x0A && gvr_prev_map != 0xFF)
      {
        CheckSensitiveReceivedAPItems();
        TrapTimer();
      }
    }
  }
  CheckReceivedAPItems();
  if(!ap_memory.pc.items[AP_DOUBLE_JUMP])
  {
    gvr_double_jumping = true;
  }
  if(!gotdjump && ap_memory.pc.items[AP_DOUBLE_JUMP])
  {
    gotdjump = true;
    gvr_double_jump_clear1 = 0xAC20FC04;
    gvr_double_jump_clear2 = 0xAC20FC04;
  }
  DialogTimer();
  if(gvr_current_map != 0xFF && gvr_current_map != 0x2B)
  {
    DialogCheck();
  }
  else if(!credits)
  {
    display_dialog(0x0A0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0.75, 0.75, 0, "AP-ROM BY JJJJ12212, SMG065", 1);
    credits = true;
  }
  if(gvr_current_map == 0x2B)
  {
    DialogClear(); //Items received prior
  }

  if(ap_memory.pc.settings.inverse)
  {
    if(animation_ptr != 0 && animation_ptr->animations != 0)
    {
      if(animation_ptr->animations->current_animation == 0x14 && gvr_difficulty == 0x01 && gvr_fade_var == 0)
      {
        gvr_difficulty = 0x00;
        inversed = true;
      }
      else if (inversed && (animation_ptr->animations->current_animation != 0x14 || gvr_fade_var != 0))
      {
        gvr_difficulty = 0x01;
        inversed = false;
      }
    }
  }
  
  
  SetAPGaribs();
  watch_controls();
  force_ball();
  BacktoHub();
  HubHandler();
  CheckWorld();

  VisitedTiphatsWayroom();

  GaribAtlantis1Shiny();
  AllCollectedAtlantis1();
  VisitedTiphatsAtlantis1();
  MonitorCheckpointAtlantis1();
  MonitorEventsAtlantis1();
  MonitorFallenEnemiesAtlantis1();
  
  GaribAtlantis2Shiny();
  AllCollectedAtlantis2();
  VisitedTiphatsAtlantis2();
  MonitorCheckpointAtlantis2();
  MonitorEventsAtlantis2();
  MonitorPotionAtlantis2();

  GaribAtlantis3Shiny();
  AllCollectedAtlantis3();
  MonitorCheckpointAtlantis3();
  MonitorEventsAtlantis3();
  MonitorPotionAtlantis3();
  MonitorFallenEnemiesAtlantis3();

  GaribAtlantisBONUSShiny();
  AllCollectedAtlantisBONUS();

  GaribCarnival1Shiny();
  AllCollectedCarnival1();
  VisitedTiphatsCarnival1();
  MonitorCheckpointCarnival1();
  MonitorEventsCarnival1();
  MonitorPotionCarnival1();
  MonitorFallenEnemiesCarnival1();

  GaribCarnival2Shiny();
  AllCollectedCarnival2();
  VisitedTiphatsCarnival2();
  MonitorCheckpointCarnival2();
  MonitorEventsCarnival2();
  MonitorPotionCarnival2();
  MonitorFallenEnemiesCarnival2();

  GaribCarnival3Shiny();
  AllCollectedCarnival3();
  MonitorCheckpointCarnival3();
  MonitorEventsCarnival3();
  MonitorPotionCarnival3();
  MonitorFallenEnemiesCarnival3();

  GaribCarnivalBONUSShiny();
  AllCollectedCarnivalBONUS();

  GaribPirates1Shiny();
  AllCollectedPirates1();
  VisitedTiphatsPirates1();
  MonitorCheckpointPirates1();
  MonitorEventsPirates1();
  MonitorFallenEnemiesPirates1();

  GaribPirates2Shiny();
  AllCollectedPirates2();
  MonitorCheckpointPirates2();
  MonitorEventsPirates2();
  MonitorFallenEnemiesPirates2();

  GaribPirates3Shiny();
  AllCollectedPirates3();
  VisitedTiphatsPirates3();
  MonitorCheckpointPirates3();
  MonitorEventsPirates3();
  MonitorPotionPirates3();
  MonitorFallenEnemiesPirates3();

  GaribPiratesBONUSShiny();
  AllCollectedPiratesBONUS();

  GaribPrehistoric1Shiny();
  AllCollectedPrehistoric1();
  MonitorCheckpointPrehistoric1();
  MonitorFallenEnemiesPrehistoric1();
  MonitorEventsPrehistoric1();

  GaribPrehistoric2Shiny();
  AllCollectedPrehistoric2();
  MonitorCheckpointPrehistoric2();
  MonitorEventsPrehistoric2();

  GaribPrehistoric3Shiny();
  AllCollectedPrehistoric3();
  MonitorCheckpointPrehistoric3();
  MonitorEventsPrehistoric3();
  MonitorPotionPrehistoric3();
  ResetMonolithsPrehistoric3();

  GaribPrehistoricBONUSShiny();
  AllCollectedPrehistoricBONUS();

  GaribFear1Shiny();
  AllCollectedFear1();
  MonitorCheckpointFear1();
  MonitorFallenEnemiesFear1();
  MonitorEventsFear1();
  MonitorPotionFear1();

  GaribFear2Shiny();
  AllCollectedFear2();
  MonitorCheckpointFear2();
  MonitorFallenEnemiesFear2();
  MonitorEventsFear2();
  VisitedTiphatsFear2();

  GaribFear3Shiny();
  AllCollectedFear3();
  MonitorCheckpointFear3();
  MonitorFallenEnemiesFear3();
  MonitorEventsFear3();
  MonitorPotionFear3();

  GaribFearBONUSShiny();
  AllCollectedFearBONUS();

  GaribSpace1Shiny();
  AllCollectedSpace1();
  MonitorCheckpointSpace1();
  MonitorEventsSpace1();

  GaribSpace2Shiny();
  AllCollectedSpace2();
  MonitorCheckpointSpace2();
  MonitorFallenEnemiesSpace2();
  MonitorEventsSpace2();
  MonitorPotionSpace2();

  GaribSpace3Shiny();
  AllCollectedSpace3();
  MonitorCheckpointSpace3();
  MonitorFallenEnemiesSpace3();
  MonitorEventsSpace3();
  MonitorPotionSpace3();

  GaribSpaceBONUSShiny();
  AllCollectedSpaceBONUS();
  MonitorPotionSpaceBONUS();

  MonitorEventsTraining();
  VisitedTiphatsTraining();

  if(ap_memory.pc.settings.randomize_checkpoints)
  {
    RandomizeCheckpointAtlantis1();
    RandomizeCheckpointAtlantis2();
    RandomizeCheckpointAtlantis3();

    RandomizeCheckpointCarnival1();
    RandomizeCheckpointCarnival2();
    RandomizeCheckpointCarnival3();

    RandomizeCheckpointPirates1();
    RandomizeCheckpointPirates2();
    RandomizeCheckpointPirates3();

    RandomizeCheckpointPrehistoric1();
    RandomizeCheckpointPrehistoric2();
    RandomizeCheckpointPrehistoric3();

    RandomizeCheckpointFear1();
    RandomizeCheckpointFear2();
    RandomizeCheckpointFear3();

    RandomizeCheckpointSpace1();
    RandomizeCheckpointSpace3();
  }
  monitorObjectIds();//TMP

  if(ap_memory.pc.settings.portals == 0)
  {
    UnlockStarWorld();
  }
}

bool can_input(u32 input)
{
  if(gvr_cutscene == 0) {
    if(input == 2)
    {
      if(ap_memory.pc.items[AP_JUMP])
      {
        return gvr_fn_input_handler(input);
      }
      return false;
    }
    else if(input == 0x00000016)
    {
      if(ap_memory.pc.items[AP_CARTWHEEL])
      {
        return gvr_fn_input_handler(input);
      }
      return false;
    }
    else if(input == 0x00000008)
    {
      if(ap_memory.pc.items[AP_CRAWL])
      {
        return gvr_fn_input_handler(input);
      }
      return false;
    }
    else if(input == 0x0000002A)
    {
      if(ap_memory.pc.items[AP_LOCATE_BALL])
      {
        return gvr_fn_input_handler(input);
      }
      return false;
    }
    else if(input == 0x0000001D)
    {
      if(ap_memory.pc.items[AP_PUSH])
      {
        return gvr_fn_input_handler(input);
      }
      return false;
    }
    else if(input == 0x00000012)
    {
      if(ap_memory.pc.items[AP_FISTSLAM])
      {
        return gvr_fn_input_handler(input);
      }
      return false;
    }
    else if(input == 0x00000019)
    {
      if(ap_memory.pc.items[AP_LEDGEGRAB])
      {
        return gvr_fn_input_handler(input);
      }
      return false;
    }
    else if(input == 0x00000020) // R
    {
      return gvr_fn_input_handler(input);
    }
    else if(input == 0x0000000E)
    {
      if(ap_memory.pc.items[AP_DRIBBLE])
      {
        return gvr_fn_input_handler(input);
      }
      return false;
    }
    else if(input == 0x0000001E)
    {
      if(ap_memory.pc.items[AP_TOSS])
      {
        return gvr_fn_input_handler(input);
      }
      return false;
    }
    else if(input == 0x0000000B)
    {
      if(ap_memory.pc.items[AP_THROW])
      {
        return gvr_fn_input_handler(input);
      }
      return false;
    }
    else if(input == 0x00000005)
    {
      if(ap_memory.pc.items[AP_SLAP])
      {
        return gvr_fn_input_handler(input);
      }
      return false;
    }
  }

  return gvr_fn_input_handler(input);
}

bool can_quick_swap()
{
  if(ap_memory.pc.items[AP_QUICKSWAP] && gvr_can_move)
  {
    return true;
  }
  return false;
}

void can_change_ball(u32 balltype, u32 a80, u8 a1, u8 a18) // Also changes Glover via potions
{
  if(balltype == TRANSFORM_BEACH_BALL)
  {
    if(ap_memory.pc.items[AP_BEACHBALL_POTION])
      return gvr_fn_change_ball(balltype, a80, a1, a18);
    else
      return;
  }
  else if(balltype == TRANSFORM_HERCULES_POTION)
  {
    if(ap_memory.pc.items[AP_HERCULES_POTION])
      return gvr_fn_change_ball(balltype, a80, a1, a18);
    else
      return;
  }
  else if(balltype == TRANSFORM_SPEED_POTION)
  {
    if(ap_memory.pc.items[AP_SPEED_POTION])
      return gvr_fn_change_ball(balltype, a80, a1, a18);
    else
      return;
  }
  else if(balltype == TRANSFORM_STICKY_POTION)
  {
    if(ap_memory.pc.items[AP_STICKY_POTION])
      return gvr_fn_change_ball(balltype, a80, a1, a18);
    else
      return;
  }
  else if(balltype == TRANSFORM_FROG_POTION)
  {
    if(ap_memory.pc.items[AP_FROG_POTION])
      return gvr_fn_change_ball(balltype, a80, a1, a18);
    else
      return;
  }
  else if(balltype == TRANSFORM_BOOMERANG_POTION)
  {
    if(ap_memory.pc.items[AP_BOOMERANG_POTION])
      return gvr_fn_change_ball(balltype, a80, a1, a18);
    else
      return;
  }
  else if(balltype == TRANSFORM_HELICOPTER_POTION)
  {
    if(ap_memory.pc.items[AP_HELICOPTER_POTION])
      return gvr_fn_change_ball(balltype, a80, a1, a18);
    else
      return;
  }
  else if(balltype == TRANSFORM_DEATH_POTION)
  {
    if(ap_memory.pc.items[AP_DEATH_POTION])
      return gvr_fn_change_ball(balltype, a80, a1, a18);
    else
      return;
  }

  if(ap_memory.pc.forcechange)
  {
    ap_memory.pc.forcechange = false;
    changed_ball = true;
    if(ap_memory.pc.items[AP_RUBBER_BALL])
      return gvr_fn_change_ball(TRANSFORM_RUBBER_BALL, a80, a1, a18);
    else if(ap_memory.pc.items[AP_BOWLING_BALL])
      return gvr_fn_change_ball(TRANSFORM_BOWLING_BALL, a80, a1, a18);
    else if(ap_memory.pc.items[AP_POWER_BALL])
      return gvr_fn_change_ball(TRANSFORM_POWER_BALL, a80, a1, a18);
    else if(ap_memory.pc.items[AP_BEARING_BALL])
      return gvr_fn_change_ball(TRANSFORM_BEARING_BALL, a80, a1, a18);
    else if(ap_memory.pc.items[AP_CRYSTAL_BALL])
      return gvr_fn_change_ball(TRANSFORM_CRYSTAL_BALL, a80, a1, a18);
  }

  switch (gvr_current_ball)
  {
  case CURRENT_RUBBER_BALL:
    if(ap_memory.pc.items[AP_BOWLING_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_BOWLING_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_POWER_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_POWER_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_BEARING_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_BEARING_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_CRYSTAL_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_CRYSTAL_BALL, a80, a1, a18);
    }
    else
      return;
  case CURRENT_BOWLING_BALL:
    if(ap_memory.pc.items[AP_POWER_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_POWER_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_BEARING_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_BEARING_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_CRYSTAL_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_CRYSTAL_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_RUBBER_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_RUBBER_BALL, a80, a1, a18);
    }
    else
      return;
  case CURRENT_POWER_BALL:
    if(ap_memory.pc.items[AP_BEARING_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_BEARING_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_CRYSTAL_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_CRYSTAL_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_RUBBER_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_RUBBER_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_BOWLING_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_BOWLING_BALL, a80, a1, a18);
    }
    else
      return;
  case CURRENT_BEARING_BALL:
    if(ap_memory.pc.items[AP_CRYSTAL_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_CRYSTAL_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_RUBBER_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_RUBBER_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_BOWLING_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_BOWLING_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_POWER_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_POWER_BALL, a80, a1, a18);
    }
    else
      return;
  case CURRENT_CRYSTAL_BALL:
    if(ap_memory.pc.items[AP_RUBBER_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_RUBBER_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_BOWLING_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_BOWLING_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_POWER_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_POWER_BALL, a80, a1, a18);
    }
    else if(ap_memory.pc.items[AP_BEARING_BALL])
    {
      ap_memory.pc.n64_taglink++;
      return gvr_fn_change_ball(TRANSFORM_BEARING_BALL, a80, a1, a18);
    }
    else
      return;
  }
  return;
}

void ball_powerup(u32 power_type, u16 power_uptimer, u8 a1, u8 a18)
{
  if(power_type == TRANSFORM_HERCULES_POTION && ap_memory.pc.items[AP_HERCULES_POTION])
  {
    return gvr_fn_change_ball(power_type, power_uptimer, a1, a18);
  }
  else if(power_type == TRANSFORM_SPEED_POTION && ap_memory.pc.items[AP_SPEED_POTION])
  {
    return gvr_fn_change_ball(power_type, power_uptimer, a1, a18);
  }
  else if(power_type == TRANSFORM_FROG_POTION && ap_memory.pc.items[AP_FROG_POTION])
  {
    return gvr_fn_change_ball(power_type, power_uptimer, a1, a18);
  }
  else if(power_type == TRANSFORM_BOOMERANG_POTION && ap_memory.pc.items[AP_BOOMERANG_POTION])
  {
    return gvr_fn_change_ball(power_type, power_uptimer, a1, a18);
  }
  else if(power_type == TRANSFORM_HELICOPTER_POTION && ap_memory.pc.items[AP_HELICOPTER_POTION])
  {
    return gvr_fn_change_ball(power_type, power_uptimer, a1, a18);
  }
  else if(power_type == TRANSFORM_DEATH_POTION && ap_memory.pc.items[AP_DEATH_POTION])
  {
    return gvr_fn_change_ball(power_type, power_uptimer, a1, a18);
  }
  else if(power_type == TRANSFORM_BEACH_BALL && ap_memory.pc.items[AP_BEACHBALL_POTION])
  {
    return gvr_fn_change_ball(power_type, power_uptimer, a1, a18);
  }
}

bool start_with_APball() //Force changes the ball on pickup
{
  if(gvr_controls.R)
  {
    return true;
  }
  else if(ap_memory.pc.forcechange)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void init_objects(u32 ram_ptr, u16 obj_type, u8 zero, u16 obj_id)
{
  GaribAtlantis1(ram_ptr, obj_type, obj_id);
  LifeAtlantis1(ram_ptr, obj_type, obj_id);
  SwitchAtlantis1(ram_ptr, obj_type, obj_id);

  GaribAtlantis2(ram_ptr, obj_type, obj_id);
  LifeAtlantis2(ram_ptr, obj_type, obj_id);
  SwitchAtlantis2(ram_ptr, obj_type, obj_id);
  SwitchBlockAtlantis2(ram_ptr, obj_type, obj_id);
  PotionAtlantis2(ram_ptr, obj_type, obj_id);

  GaribAtlantis3(ram_ptr, obj_type, obj_id);
  LifeAtlantis3(ram_ptr, obj_type, obj_id);
  SwitchAtlantis3(ram_ptr, obj_type, obj_id);
  PotionAtlantis3(ram_ptr, obj_type, obj_id);

  GaribAtlantisBONUS(ram_ptr, obj_type, obj_id);
  LifeAtlantisBONUS(ram_ptr, obj_type, obj_id);

  GaribCarnival1(ram_ptr, obj_type, obj_id);
  LifeCarnival1(ram_ptr, obj_type, obj_id);
  SwitchCarnival1(ram_ptr, obj_type, obj_id);

  GaribCarnival2(ram_ptr, obj_type, obj_id);
  LifeCarnival2(ram_ptr, obj_type, obj_id);
  SwitchCarnival2(ram_ptr, obj_type, obj_id);
  PotionCarnival2(ram_ptr, obj_type, obj_id);

  GaribCarnival3(ram_ptr, obj_type, obj_id);
  LifeCarnival3(ram_ptr, obj_type, obj_id);
  SwitchCarnival3(ram_ptr, obj_type, obj_id);
  PotionCarnival3(ram_ptr, obj_type, obj_id);

  GaribCarnivalBONUS(ram_ptr, obj_type, obj_id);
  LifeCarnivalBONUS(ram_ptr, obj_type, obj_id);

  GaribPirates1(ram_ptr, obj_type, obj_id);
  LifePirates1(ram_ptr, obj_type, obj_id);
  SwitchPirates1(ram_ptr, obj_type, obj_id);

  GaribPirates2(ram_ptr, obj_type, obj_id);
  LifePirates2(ram_ptr, obj_type, obj_id);
  SwitchPirates2(ram_ptr, obj_type, obj_id);

  GaribPirates3(ram_ptr, obj_type, obj_id);
  LifePirates3(ram_ptr, obj_type, obj_id);
  SwitchPirates3(ram_ptr, obj_type, obj_id);
  PotionPirates3(ram_ptr, obj_type, obj_id);

  GaribPiratesBONUS(ram_ptr, obj_type, obj_id);
  LifePiratesBONUS(ram_ptr, obj_type, obj_id);

  GaribPrehistoric1(ram_ptr, obj_type, obj_id);
  LifePrehistoric1(ram_ptr, obj_type, obj_id);

  GaribPrehistoric2(ram_ptr, obj_type, obj_id);
  LifePrehistoric2(ram_ptr, obj_type, obj_id);
  SwitchPrehistoric2(ram_ptr, obj_type, obj_id);

  GaribPrehistoric3(ram_ptr, obj_type, obj_id);
  LifePrehistoric3(ram_ptr, obj_type, obj_id);
  SwitchPrehistoric3(ram_ptr, obj_type, obj_id);
  PotionPrehistoric3(ram_ptr, obj_type, obj_id);

  GaribPrehistoricBONUS(ram_ptr, obj_type, obj_id);
  LifePrehistoricBONUS(ram_ptr, obj_type, obj_id);

  GaribFear1(ram_ptr, obj_type, obj_id);
  LifeFear1(ram_ptr, obj_type, obj_id);
  SwitchFear1(ram_ptr, obj_type, obj_id);
  PotionFear1(ram_ptr, obj_type, obj_id);

  GaribFear2(ram_ptr, obj_type, obj_id);
  LifeFear2(ram_ptr, obj_type, obj_id);
  SwitchFear2(ram_ptr, obj_type, obj_id);

  GaribFear3(ram_ptr, obj_type, obj_id);
  LifeFear3(ram_ptr, obj_type, obj_id);
  SwitchFear3(ram_ptr, obj_type, obj_id);
  PotionFear3(ram_ptr, obj_type, obj_id);

  GaribFearBONUS(ram_ptr, obj_type, obj_id);
  LifeFearBONUS(ram_ptr, obj_type, obj_id);

  GaribSpace1(ram_ptr, obj_type, obj_id);
  LifeSpace1(ram_ptr, obj_type, obj_id);
  SwitchSpace1(ram_ptr, obj_type, obj_id);

  GaribSpace2(ram_ptr, obj_type, obj_id);
  LifeSpace2(ram_ptr, obj_type, obj_id);
  SwitchSpace2(ram_ptr, obj_type, obj_id);
  PotionSpace2(ram_ptr, obj_type, obj_id);


  GaribSpace3(ram_ptr, obj_type, obj_id);
  LifeSpace3(ram_ptr, obj_type, obj_id);
  SwitchSpace3(ram_ptr, obj_type, obj_id);
  PotionSpace3(ram_ptr, obj_type, obj_id);


  GaribSpaceBONUS(ram_ptr, obj_type, obj_id);
  LifeSpaceBONUS(ram_ptr, obj_type, obj_id);
  PotionSpaceBONUS(ram_ptr, obj_type, obj_id);

  SwitchTraining(ram_ptr, obj_type, obj_id);

  //TMP
  if(obj_type == 0x00B0 || obj_type == 0x0100) // Garibs, Life, Potions
  {
    initObjectIds(ram_ptr, obj_type, obj_id);
  }
  else if(obj_type == 0x0180 || obj_type == 0x0010) //Glover / Ball Switch // Block Event
  {
    initSwitchIds(ram_ptr, obj_type, obj_id);
  }
  //TMP
  return gvr_fn_init_objects(ram_ptr, obj_type, zero, obj_id);
}

void collected_object(u32 ram_ptr_plus_18, u32 unknown_ptr, u32 unknown_ptr2, u32 zero)
{
  u32 real_item_ptr = ram_ptr_plus_18 - 0x0018;

  CollectedAtlantis1(real_item_ptr);
  CollectedLifeAtlantis1(real_item_ptr);

  CollectedAtlantis2(real_item_ptr);
  CollectedLifeAtlantis2(real_item_ptr);

  CollectedAtlantis3(real_item_ptr);
  CollectedLifeAtlantis3(real_item_ptr);

  CollectedAtlantisBONUS(real_item_ptr);
  CollectedLifeAtlantisBONUS(real_item_ptr);

  CollectedCarnival1(real_item_ptr);
  CollectedLifeCarnival1(real_item_ptr);

  CollectedCarnival2(real_item_ptr);
  CollectedLifeCarnival2(real_item_ptr);

  CollectedCarnival3(real_item_ptr);
  CollectedLifeCarnival3(real_item_ptr);

  CollectedCarnivalBONUS(real_item_ptr);
  CollectedLifeCarnivalBONUS(real_item_ptr);

  CollectedPirates1(real_item_ptr);
  CollectedLifePirates1(real_item_ptr);

  CollectedPirates2(real_item_ptr);
  CollectedLifePirates2(real_item_ptr);

  CollectedPirates3(real_item_ptr);
  CollectedLifePirates3(real_item_ptr);

  CollectedPiratesBONUS(real_item_ptr);
  CollectedLifePiratesBONUS(real_item_ptr);

  CollectedPrehistoric1(real_item_ptr);
  CollectedLifePrehistoric1(real_item_ptr);

  CollectedPrehistoric2(real_item_ptr);
  CollectedLifePrehistoric2(real_item_ptr);

  CollectedPrehistoric3(real_item_ptr);
  CollectedLifePrehistoric3(real_item_ptr);

  CollectedPrehistoricBONUS(real_item_ptr);
  CollectedLifePrehistoricBONUS(real_item_ptr);

  CollectedFear1(real_item_ptr);
  CollectedLifeFear1(real_item_ptr);

  CollectedFear2(real_item_ptr);
  CollectedLifeFear2(real_item_ptr);

  CollectedFear3(real_item_ptr);
  CollectedLifeFear3(real_item_ptr);

  CollectedFearBONUS(real_item_ptr);
  CollectedLifeFearBONUS(real_item_ptr);

  CollectedSpace1(real_item_ptr);
  CollectedLifeSpace1(real_item_ptr);

  CollectedSpace2(real_item_ptr);
  CollectedLifeSpace2(real_item_ptr);

  CollectedSpace3(real_item_ptr);
  CollectedLifeSpace3(real_item_ptr);

  CollectedSpaceBONUS(real_item_ptr);
  CollectedLifeSpaceBONUS(real_item_ptr);

  CollectedObjectIds(real_item_ptr); //TMP

  return gvr_fn_collected_object(ram_ptr_plus_18, unknown_ptr, unknown_ptr2, zero);
}

u32 collected_switch(u8 unkown, u32 obj_ptr)
{
  HitSwitchAtlantis1(obj_ptr);
  HitSwitchAtlantis2();
  HitSwitchAtlantis3();
  HitSwitchCarnival1();
  HitSwitchCarnival2();
  HitSwitchCarnival3();
  HitSwitchPirates1();
  HitSwitchPirates2();
  HitSwitchPirates3();
  HitSwitchPrehistoric2();
  HitSwitchPrehistoric3();
  HitSwitchFear1();
  HitSwitchSpace1();
  HitSwitchSpace3();
  HitSwitchTraining();
  return (*(u32*) 0x802903B0);
}

void ball_switch(u32 unkown, u32 ptr)
{
  HitBallSwitchAtlantis2(ptr);
  HitBallSwitchAtlantis3(ptr);
  HitBallSwitchCarnival1(ptr);
  HitBallSwitchCarnival2(ptr);
  HitBallSwitchCarnival3(ptr);
  HitBallSwitchPirates1(ptr);
  HitBallSwitchPirates2(ptr);
  HitBallSwitchPirates3(ptr);
  HitBallSwitchPrehistoric2(ptr);
  HitBallSwitchPrehistoric3(ptr);
  HitBallSwitchFear1(ptr);
  HitBallSwitchFear2(ptr);
  HitBallSwitchFear3(ptr);
  HitBallSwitchSpace1(ptr);
  HitBallSwitchSpace2(ptr);
  HitBallSwitchSpace3(ptr);
  HitBallSwitchTraining(ptr);
}

void ball_switch_alt()
{
  u32 switch_ptr = (*(u32*)0x801FF810);
  HitBallSwitchAtlantis2(switch_ptr);
  HitBallSwitchAtlantis3(switch_ptr);
  HitBallSwitchCarnival1(switch_ptr); 
  HitBallSwitchCarnival2(switch_ptr); 
  HitBallSwitchCarnival3(switch_ptr); 
  HitBallSwitchPirates1(switch_ptr); 
  HitBallSwitchPirates2(switch_ptr); 
  HitBallSwitchPirates3(switch_ptr); 
  HitBallSwitchPrehistoric2(switch_ptr);
  HitBallSwitchPrehistoric3(switch_ptr);
  HitBallSwitchFear1(switch_ptr);
  HitBallSwitchFear2(switch_ptr);
  HitBallSwitchFear3(switch_ptr);
  HitBallSwitchSpace1(switch_ptr);
  HitBallSwitchSpace2(switch_ptr);
  HitBallSwitchSpace3(switch_ptr);
  HitBallSwitchTraining(switch_ptr);
}

void spawned_object(u32 unkown_ptr, u32 object_ptr, u32 zero, u16 obj_rand_id)
{
  SpawnAtlantis1(object_ptr);
  SpawnAtlantis2(object_ptr);
  SpawnAtlantis3(object_ptr);
  SpawnCarnival1(object_ptr);
  SpawnCarnival2(object_ptr);
  SpawnCarnival3(object_ptr);
  SpawnPirates1(object_ptr);
  SpawnPirates2(object_ptr);
  SpawnPirates3(object_ptr);
  SpawnPiratesBONUS(object_ptr);
  SpawnPrehistoric1(object_ptr);
  SpawnPrehistoric2(object_ptr);
  SpawnPrehistoric3(object_ptr);
  SpawnPrehistoricBONUS(object_ptr);
  SpawnFear1(object_ptr);
  SpawnFear2(object_ptr);
  SpawnFear3(object_ptr);
  SpawnSpace1(object_ptr);
  SpawnSpace2(object_ptr);
  SpawnSpace3(object_ptr);

  spawnedItems(object_ptr); //TMP
  return gvr_fn_spawn_object(unkown_ptr, object_ptr, zero, obj_rand_id);
}

void init_tiphats(u32 ram_ptr, u16 obj_type, u8 zero, u16 obj_id)
{
  TipWayroom(ram_ptr, obj_type, obj_id);
  TipAtlantis1(ram_ptr, obj_type, obj_id);
  TipAtlantis2(ram_ptr, obj_type, obj_id);
  TipCarnival1(ram_ptr, obj_type, obj_id);
  TipCarnival2(ram_ptr, obj_type, obj_id);
  TipPirates1(ram_ptr, obj_type, obj_id);
  TipPirates3(ram_ptr, obj_type, obj_id);
  TipFear2(ram_ptr, obj_type, obj_id);
  TipTraining(ram_ptr, obj_type, obj_id);

  if(obj_type == 0x00C0)
  {
    initObjectIds(ram_ptr, obj_type, obj_id); //TMP
  }
  return gvr_fn_init_tiphats(ram_ptr, obj_type, zero, obj_id);
}

void collect_tiphats(u32 unknown, u32 ram_ptr_plus_8, u8 unknown2, u16 be)
{
  u32 real_item_ptr = ram_ptr_plus_8 - 0x0008;
  CollectedTipWayroom(real_item_ptr);
  CollectedTipAtlantis1(real_item_ptr);
  CollectedTipAtlantis2(real_item_ptr);
  CollectedTipCarnival1(real_item_ptr);
  CollectedTipCarnival2(real_item_ptr);
  CollectedTipPirates1(real_item_ptr);
  CollectedTipPirates3(real_item_ptr);
  CollectedTipFear2(real_item_ptr);
  CollectedTipTraining(real_item_ptr);

  CollectedObjectIds(real_item_ptr); //TMP
  return gvr_fn_talk_tip(unknown, ram_ptr_plus_8, unknown2, be);
}

void init_checkpoint(u32 ram_ptr_plus_1c, u32 unkown_ptr, u8 iteration_num, u16 item_id)
{
  u32 real_obj_ptr = ram_ptr_plus_1c - 0x001C;
  ClearObjPtrs();
  CheckpointAtlantis1(real_obj_ptr, item_id);
  CheckpointAtlantis2(real_obj_ptr, item_id);
  CheckpointAtlantis3(real_obj_ptr, item_id);
  CheckpointCarnival1(real_obj_ptr, item_id);
  CheckpointCarnival2(real_obj_ptr, item_id);
  CheckpointCarnival3(real_obj_ptr, item_id);
  CheckpointPirates1(real_obj_ptr, item_id);
  CheckpointPirates2(real_obj_ptr, item_id);
  CheckpointPirates3(real_obj_ptr, item_id);
  CheckpointPrehistoric1(real_obj_ptr, item_id);
  CheckpointPrehistoric2(real_obj_ptr, item_id);
  CheckpointPrehistoric3(real_obj_ptr, item_id);
  CheckpointFear1(real_obj_ptr, item_id);
  CheckpointFear2(real_obj_ptr, item_id);
  CheckpointFear3(real_obj_ptr, item_id);
  CheckpointSpace1(real_obj_ptr, item_id);
  CheckpointSpace2(real_obj_ptr, item_id);
  CheckpointSpace3(real_obj_ptr, item_id);

  initCheckpointIds(real_obj_ptr, item_id); //TMP
  return gvr_fn_init_checkpoint(ram_ptr_plus_1c, unkown_ptr, iteration_num, item_id);
}

void init_enemies(u32 ram_ptr, u16 obj_type, u32 ptr2, u16 obj_id)
{
  EnemyAtlantis1(ram_ptr, obj_type, obj_id);
  EnemyAtlantis2(ram_ptr, obj_type, obj_id);
  EnemyAtlantis3(ram_ptr, obj_type, obj_id);
  EnemyAtlantisBONUS(ram_ptr, obj_type, obj_id);
  EnemyCarnival1(ram_ptr, obj_type, obj_id);
  EnemyCarnival2(ram_ptr, obj_type, obj_id);
  EnemyCarnival3(ram_ptr, obj_type, obj_id);
  EnemyPirates1(ram_ptr, obj_type, obj_id);
  EnemyPirates2(ram_ptr, obj_type, obj_id);
  EnemyPirates3(ram_ptr, obj_type, obj_id);
  EnemyPiratesBONUS(ram_ptr, obj_type, obj_id);
  EnemyPrehistoric1(ram_ptr, obj_type, obj_id);
  EnemyPrehistoric2(ram_ptr, obj_type, obj_id);
  EnemyPrehistoric3(ram_ptr, obj_type, obj_id);
  EnemyFear1(ram_ptr, obj_type, obj_id);
  EnemyFear2(ram_ptr, obj_type, obj_id);
  EnemyFear3(ram_ptr, obj_type, obj_id);
  EnemySpace1(ram_ptr, obj_type, obj_id);
  EnemySpace2(ram_ptr, obj_type, obj_id);
  EnemySpace3(ram_ptr, obj_type, obj_id);

  initObjectIds(ram_ptr, obj_type, obj_id); // TMP
  return gvr_fn_init_enemies(ram_ptr, obj_type, ptr2, obj_id);
}

void defeated_enemy(u32 ram_ptr)
{
  DefeatedEnemyAtlantis1(ram_ptr);
  DefeatedEnemyAtlantis2(ram_ptr);
  DefeatedEnemyAtlantis3(ram_ptr);
  DefeatedEnemyAtlantisBONUS(ram_ptr);
  DefeatedEnemyCarnival1(ram_ptr);
  DefeatedEnemyCarnival2(ram_ptr);
  DefeatedEnemyCarnival3(ram_ptr);
  DefeatedEnemyPirates1(ram_ptr);
  DefeatedEnemyPirates2(ram_ptr);
  DefeatedEnemyPirates3(ram_ptr);
  DefeatedEnemyPiratesBONUS(ram_ptr);
  DefeatedEnemyPrehistoric1(ram_ptr);
  DefeatedEnemyPrehistoric2(ram_ptr);
  DefeatedEnemyPrehistoric3(ram_ptr);
  DefeatedEnemyFear1(ram_ptr);
  DefeatedEnemyFear2(ram_ptr);
  DefeatedEnemyFear3(ram_ptr);
  DefeatedEnemySpace1(ram_ptr);
  DefeatedEnemySpace2(ram_ptr);
  DefeatedEnemySpace3(ram_ptr);

  DefeatedEnemyReplace(ram_ptr); //TMP
  return gvr_fn_defeated_enemy(ram_ptr);
}

u32 lose_life()
{
  if(ap_memory.pc.need_respawn)
  {
    return gvr_current_lives;
  } 
  else
  {
    gvr_current_lives = gvr_current_lives - 1;
    return gvr_current_lives;
  }
}

void deathlink_trigger()
{
  ap_memory.pc.n64_deathlink++;
  gvr_fn_respawn();
}

u32 spawned_potion(u16 powerup_type, u32 pos_ptr, u16 zero, u16 id)
{
  u32 potion_ptr = gvr_fn_init_powerup(powerup_type, pos_ptr, zero, id);
  PotionSpawnCarnival1(potion_ptr);
  PotionSpawnPrehistoric3(potion_ptr);
  return potion_ptr;
}

void puzzle_spawn_garibs(u16 ggroup, float y)
{
  if(gvr_current_map == MAP_CARNIVAL_2 && ggroup == 0x0001)
  {
    return SwitchTeethCarnival2();
  }
  else if(gvr_current_map == MAP_PREHISTORIC_1 && ggroup == 0x0001)
  {
    return SwitchIciclesPrehistoric1();
  }
  else if(gvr_current_map == MAP_PREHISTORIC_3 && (ggroup == 0x0006 || ggroup == 0x0009))
  {
    return SwitchTreePrehistoric3();
  }
  else if(gvr_current_map == MAP_FORTRESS_2 && ggroup == 0x0003)
  {
    return;
  }
  else
  {
    gvr_fn_spawn_garibgroup(ggroup, y);
  }
}

u32 puzzle_switch_condition(u32 puzzle_ptr)
{
  if(puzzle_ptr == 0x802FBB40) //Pirate 1 lighthouse
  {
    if(ap_memory.pc.items[AP_PIRATES_L1_LIGHTHOUSE])
    {
      return puzzle_ptr;
    }
    return 1;
  }
  else if(puzzle_ptr == 0x802FC850) //Pirate 1 Treasure
  {
    if(ap_memory.pc.items[AP_PIRATES_L1_CHEST])
    {
      return puzzle_ptr;
    }
    return 1;
  }
  else if(puzzle_ptr == 0x8030CBF0) //Pre 2 Platform 1
  {
    if(ap_memory.pc.items[AP_PREHISTORIC_L2_PLATFORM_1])
    {
      return puzzle_ptr;
    }
    return 1;
  }
  else if(puzzle_ptr == 0x8031DA10 || puzzle_ptr == 0x8031D700 || puzzle_ptr == 0x8031DC80 || puzzle_ptr == 0x8031D3F0) //Monolith all
  {
    return MonolithsPrehistoric3(puzzle_ptr);
  }
  return (*(u32*)0x803237E0);
}

void puzzle_activate(u32 act_ptr)
{
  if(gvr_current_map == MAP_ATLANTIS_2)
  {
    return PuzzleEventsAtlantis2(act_ptr);
  }
  if(act_ptr == 0x8031E430 && gvr_current_map == MAP_PREHISTORIC_3)
  {
    return;
  }
  if(gvr_current_map == MAP_PREHISTORIC_3)
  {
    return PuzzleEventsPrehistoric3(act_ptr);
  }
  if(act_ptr == 0x8030E620 && gvr_current_map == MAP_FORTRESS_1)
  {
    return;
  }
  if(gvr_current_map == MAP_FORTRESS_1)
  {
    return PuzzleEventsFear1(act_ptr);
  }
  if(gvr_current_map == MAP_FORTRESS_2)
  {
    return PuzzleEventsFear2(act_ptr);
  }
  if(gvr_current_map == MAP_FORTRESS_3)
  {
    return PuzzleEventsFear3(act_ptr);
  }
  if(gvr_current_map == MAP_SPACE_3)
  {
    return PuzzleEventsSpace3(act_ptr);
  }
  gvr_fn_activate_puzzle(act_ptr);
}

void chicken_check(u32 ptr1, u32 ptr2)
{
  ap_memory.pc.chicken = 1;
  return gvr_fn_chicken(ptr1, ptr2);
}

bool puzzle_condition(u32 act_ptr)
{
  if(gvr_current_map == MAP_ATLANTIS_2)
  {
    if(PuzzleConditionsAtlantis2(act_ptr))
    {
      return true;
    }
  }
  return gvr_fn_puzzle_condition(act_ptr);
}

bool checkpointItemPauseSelect(u32 checkpointl_ptr)
{
    if(checkpointl_ptr == 0)
    { 
      return 1;
    }
    u32 checkpoint_ptr_offset = checkpointl_ptr + 0x0054;
    u32 checkpoint_ptr = (*(u32*)checkpoint_ptr_offset);
    if(checkpoint_ptr == 0)
    {
        return 1;
    }
    switch(gvr_current_map)
    {
      case MAP_ATLANTIS_1:
        return CheckpointAPAtlantis1(checkpoint_ptr);
      case MAP_ATLANTIS_2:
        return CheckpointAPAtlantis2(checkpoint_ptr);
      case MAP_ATLANTIS_3:
        return CheckpointAPAtlantis3(checkpoint_ptr);
      
      case MAP_CARNIVAL_1:
        return CheckpointAPCarnival1(checkpoint_ptr);
      case MAP_CARNIVAL_2:
        return CheckpointAPCarnival2(checkpoint_ptr);
      case MAP_CARNIVAL_3:
        return CheckpointAPCarnival3(checkpoint_ptr);

      case MAP_PIRATES_1:
        return CheckpointAPPirates1(checkpoint_ptr);
      case MAP_PIRATES_2:
        return CheckpointAPPirates2(checkpoint_ptr);
      case MAP_PIRATES_3:
        return CheckpointAPPirates3(checkpoint_ptr);

      case MAP_PREHISTORIC_1:
        return CheckpointAPPrehistoric1(checkpoint_ptr);
      case MAP_PREHISTORIC_2:
        return CheckpointAPPrehistoric2(checkpoint_ptr);
      case MAP_PREHISTORIC_3:
        return CheckpointAPPrehistoric3(checkpoint_ptr);

      case MAP_FORTRESS_1:
        return CheckpointAPFear1(checkpoint_ptr);
      case MAP_FORTRESS_2:
        return CheckpointAPFear2(checkpoint_ptr);
      case MAP_FORTRESS_3:
        return CheckpointAPFear3(checkpoint_ptr);

      case MAP_SPACE_1:
        return CheckpointAPSpace1(checkpoint_ptr);
      case MAP_SPACE_3:
        return CheckpointAPSpace3(checkpoint_ptr);

      default:
        return 0;
    }
    return 0;
}

u32 TipText(u32 orig_txt_ptr)
{
  TipTextHintTraining(orig_txt_ptr);
  TipTextHintAtlantis1(orig_txt_ptr);
  TipTextHintAtlantis2(orig_txt_ptr);
  TipTextHintCarnival1(orig_txt_ptr);
  TipTextHintCarnival2(orig_txt_ptr);
  TipTextHintPirates1(orig_txt_ptr);
  TipTextHintPirates3(orig_txt_ptr);
  TipTextHintFear2(orig_txt_ptr);
  TipTextHintWayroom(orig_txt_ptr);

  return (*(u32*)orig_txt_ptr);
}

void force_change_ball(u32 balltype)
{
  if((u32) animation_ptr->animations != 0x0)
  {
    if(animation_ptr->animations->current_animation == 0x002B)
    {
        return gvr_fn_change_balltype(balltype);
    }
  }
  ap_memory.pc.forcechange = true;
  return gvr_fn_change_balltype(balltype);
}

void garib_sounds(u32 unknown)
{
  if(ap_memory.pc.settings.random_sounds)
  {
    playSFX();
    gvr_fn_garib_sounds(unknown);
  }
  else
  {
    u32 prior_score = gvr_score;
    gvr_fn_garib_sounds(unknown);
    u32 score_increase = gvr_score - prior_score;
    u32 sound = 0;
    switch (score_increase)
    {
      //Glover
    case 10:
      sound = gvr_fn_sounds(0x8C, 0x99, 0x83, 0);
      gvr_fn_sound_pitch(sound, 0x00000000);
      break;
    case 20:
      sound = gvr_fn_sounds(0x8C, 0x99, 0x7B, 0);
      gvr_fn_sound_pitch(sound, 0x3F4CCCCD);
      break;
    case 50:
      sound = gvr_fn_sounds(0x8C, 0x99, 0x7F, 0);
      gvr_fn_sound_pitch(sound, 0x3FCCCCCD);
      break;
    case 100:
      sound = gvr_fn_sounds(0x8C, 0x99, 0x76, 0);
      gvr_fn_sound_pitch(sound, 0x4019999A);   
      break;
    
      case 500:
      sound = gvr_fn_sounds(0x8C, 0x99, 0x76, 0);
      gvr_fn_sound_pitch(sound, 0x40800000);   
      break;

    case 40:
      sound = gvr_fn_sounds(0x91, 0x99, 0x82, 0); //Crystal
      gvr_fn_sound_pitch(sound, 0x3F4CCCCD);
      break;
    case 200:
      sound = gvr_fn_sounds(0x91, 0x99, 0x88, 0); //Crystal
      gvr_fn_sound_pitch(sound, 0x4019999A);
      break;
    case 1000:
      sound = gvr_fn_sounds(0x91, 0x99, 0x7F, 0); //Crystal
      gvr_fn_sound_pitch(sound, 0x40800000);
      break;
    default:
      break;
    }
  }
}

void PlatformSwitch(u32 platform_ptr)
{
  if(platform_ptr == 0x80306000 && gvr_current_map == MAP_PIRATES_2)
  {
      util_inject(UTIL_INJECT_RAW, 0x801748F8, 0x94420050, 0);
      util_inject(UTIL_INJECT_RAW, 0x80174A08, 0x84430050, 0);
      util_inject(UTIL_INJECT_RAW, 0x80174A54, 0xA4620050, 0);
      util_inject(UTIL_INJECT_RAW, 0x801749F8, 0x3C028029, 0);
      util_inject(UTIL_INJECT_RAW, 0x801749FC, 0x8C4203B0, 0);

      util_inject(UTIL_INJECT_RAW, 0x8015A7E0, 0x24030001, 0);
      util_inject(UTIL_INJECT_RAW, 0x8015A7E4, 0xA4430050, 0);
      util_inject(UTIL_INJECT_RAW, 0x8015959C, 0x24030001, 0);
      util_inject(UTIL_INJECT_RAW, 0x801595A0, 0xA4430050, 0);
  }
}

extern bool checkpointItemPauseSelectDisplaced(u32 checkpointl_ptr);
extern bool checkpointItemPauseDisplaced(u32 checkpointl_ptr);
extern u32 TipTextDisplaced(u32 orig_txt_ptr);
extern void PlatformSwitchDisplaced(u32 platformptr);
extern void PortalBarrierDisplaced(u32 gate_ptr);

bool PortalBarrier(u32 gate_ptr, u8 gate) //false = open
{
  return OpenDoor(gate);
}


u32 inject_hooks() {
  AP_MEMORY_PTR = &ap_memory;
  //Prepare inject loops
  util_inject(UTIL_INJECT_FUNCTION, 0x8040028C, (u32)pre_loop, 1);
  util_inject(UTIL_INJECT_JUMP, 0x8013DC10, 0x80400284, 1);
  util_inject(UTIL_INJECT_JUMP, 0x804002E4, 0x80400284, 1);
  util_inject(UTIL_INJECT_JUMP, 0x80400308, 0x80400284, 1);

  //disable Inputs for AP Moves
  util_inject(UTIL_INJECT_FUNCTION, 0x8017312C, (u32)can_input, 0);
  util_inject(UTIL_INJECT_FUNCTION, 0x8016BF14, (u32)can_input, 0);

  //diable quickswap
  util_inject(UTIL_INJECT_FUNCTION, 0x8016A91C, (u32)can_quick_swap, 1);
  util_inject(UTIL_INJECT_RAW, 0x8016A924, 0x1002000D, 1);

  //changing balls
  util_inject(UTIL_INJECT_FUNCTION, 0x801B3CF0, (u32)can_change_ball, 0);
  util_inject(UTIL_INJECT_FUNCTION, 0x801ADAC0, (u32)can_change_ball, 0);
  util_inject(UTIL_INJECT_FUNCTION, 0x8018DA7C, (u32)force_change_ball, 0);


  //Start with AP Ball
  util_inject(UTIL_INJECT_FUNCTION, 0x8016A9D8, (u32)start_with_APball, 1);

  /** hijack objects block **/
  //Garibs, Life and Switches
  util_inject(UTIL_INJECT_FUNCTION, 0x801404F8, (u32)init_objects, 1);
  //collected Garibs and Life
  util_inject(UTIL_INJECT_FUNCTION, 0x8018BB9C, (u32)collected_object, 0);
  util_inject(UTIL_INJECT_FUNCTION, 0x801AB50C, (u32)collected_object, 0); //Carnival Bonus Garibs
  util_inject(UTIL_INJECT_FUNCTION, 0x801AB4CC, (u32)collected_object, 0); //Carnival Bonus Life


  //Spawned Garibs from Enemies
  util_inject(UTIL_INJECT_FUNCTION, 0x80195E94, (u32)spawned_object, 0);
  if(ap_memory.pc.settings.garib_logic != 0) // don't increase Garib Counter
  {
    util_inject(UTIL_INJECT_RAW, 0x8018BEB8, (u32) 0, 0);
    util_inject(UTIL_INJECT_FUNCTION, 0x8018BE88, (u32)garib_sounds, 1);
  }
  util_inject(UTIL_INJECT_RAW, 0x8018DF84, (u32) 0, 0); // Don't increase Life when getting life
  util_inject(UTIL_INJECT_RAW, 0x8018E0D8, (u32) 0, 0); // Don't increase Life getting all garibs?
  util_inject(UTIL_INJECT_RAW, 0x8018E340, (u32) 0, 0); // Don't increase Life getting all garibs

  //hijack tiphats
  util_inject(UTIL_INJECT_FUNCTION, 0x801838A8, (u32)init_tiphats, 0);
  //talk to tuiphat
  util_inject(UTIL_INJECT_FUNCTION, 0x801B7FFC, (u32)collect_tiphats, 0);
  //hijack checkpoint
  util_inject(UTIL_INJECT_FUNCTION, 0x80186E9C, (u32)init_checkpoint, 0);
  // hijack enemies
  util_inject(UTIL_INJECT_FUNCTION, 0x80191724, (u32)init_enemies, 0);
  util_inject(UTIL_INJECT_FUNCTION, 0x8015D080, (u32)defeated_enemy, 0);

  /** EO objects */

  //Shuffle checkpoints
  if(ap_memory.pc.settings.randomize_checkpoints != 0) // don't check starting checkpoint
  {
    util_inject(UTIL_INJECT_RAW, 0x80187124, (u32) 0, 0);
    util_inject(UTIL_INJECT_FUNCTION, 0x80174828, (u32)lose_life, 1);
  }
  if(ap_memory.pc.settings.randomize_switches != 0)
  {
    if(gvr_current_map == MAP_CARNIVAL_BONUS || gvr_current_map == MAP_FORTRESS_BONUS || gvr_current_map == MAP_FORTRESS_BOSS
      || gvr_current_map == MAP_SPACE_BOSS_1 || gvr_current_map == MAP_SPACE_BOSS_2 || gvr_current_map == MAP_SPACE_BOSS_3)
    {
      util_inject(UTIL_INJECT_RAW, 0x801748F8, 0x94420050, 0);
      util_inject(UTIL_INJECT_RAW, 0x80174A08, 0x84430050, 0);
      util_inject(UTIL_INJECT_RAW, 0x80174A54, 0xA4620050, 0);
      util_inject(UTIL_INJECT_RAW, 0x801749F8, 0x3C028029, 0);
      util_inject(UTIL_INJECT_RAW, 0x801749FC, 0x8C4203B0, 0);

      util_inject(UTIL_INJECT_RAW, 0x8015A7E0, 0x24030001, 0);
      util_inject(UTIL_INJECT_RAW, 0x8015A7E4, 0xA4430050, 0);
      util_inject(UTIL_INJECT_RAW, 0x8015959C, 0x24030001, 0);
      util_inject(UTIL_INJECT_RAW, 0x801595A0, 0xA4430050, 0);
    }
    else
    {
      util_inject(UTIL_INJECT_RAW, 0x801748F8, 0x2402FFFF, 0);
      util_inject(UTIL_INJECT_RAW, 0x80174A08, 0x2403FFFF, 0);
      util_inject(UTIL_INJECT_RAW, 0x80174A54, (u32) 0, 0);
      util_inject(UTIL_INJECT_FUNCTION, 0x801749F8, (u32)collected_switch, 1);

      util_inject(UTIL_INJECT_FUNCTION, 0x8015A7E0, (u32)ball_switch, 1); //Ball Switch alt
      util_inject(UTIL_INJECT_FUNCTION, 0x8015959C, (u32)ball_switch_alt, 1); //Ball Switch alt

      util_inject(UTIL_INJECT_FUNCTION, 0x80172524, (u32)PlatformSwitchDisplaced, 1); //Pirate 2 Platform fix
    }
    util_inject(UTIL_INJECT_FUNCTION, 0x8018F408, (u32)puzzle_spawn_garibs, 1);
    util_inject(UTIL_INJECT_FUNCTION, 0x80190B54, (u32)puzzle_switch_condition, 1);
    util_inject(UTIL_INJECT_RAW, 0x80190B64, (u32)0, 0);

    util_inject(UTIL_INJECT_FUNCTION, 0x8018E830, (u32)puzzle_condition, 0);
    util_inject(UTIL_INJECT_FUNCTION, 0x8018E848, (u32)puzzle_activate, 0);

  }
  //Hijack Potions
  util_inject(UTIL_INJECT_FUNCTION, 0x8018C490, (u32)ball_powerup, 1); 
  util_inject(UTIL_INJECT_FUNCTION, 0x8018EEA0, (u32)spawned_potion, 0);

  //deathlink
  util_inject(UTIL_INJECT_FUNCTION, 0x801721A8, (u32)deathlink_trigger, 1);
  util_inject(UTIL_INJECT_FUNCTION, 0x80174128, (u32)deathlink_trigger, 1);
  util_inject(UTIL_INJECT_FUNCTION, 0x801B0D94, (u32)deathlink_trigger, 1);

  //No more Lightning flashes
  util_inject(UTIL_INJECT_RAW, 0x801BB2E0, (u32)0, 0); 

  util_inject(UTIL_INJECT_FUNCTION, 0x801A6398, (u32)chicken_check, 0);

  //Training Grounds Fix when ball is overworld
  util_inject(UTIL_INJECT_RAW, 0x80124C54, (u32)0x10420011, 0); 

  if(ap_memory.pc.settings.checkpoint_items)
  {
    util_inject(UTIL_INJECT_FUNCTION, 0x80126C74, (u32)checkpointItemPauseSelectDisplaced, 1); //Selecting Checkpoint in pause menu
    util_inject(UTIL_INJECT_RAW, 0x80126C7C, (u32)0, 0);
    util_inject(UTIL_INJECT_RAW, 0x80126C80, (u32)0, 0);

    util_inject(UTIL_INJECT_FUNCTION, 0x80126A38, (u32)checkpointItemPauseDisplaced, 1); //Pausing
    util_inject(UTIL_INJECT_RAW, 0x80126A40, (u32)0, 0);
    util_inject(UTIL_INJECT_RAW, 0x80126A44, (u32)0, 0);

    util_inject(UTIL_INJECT_RAW, 0x8017E43C, (u32)0, 0); //don't autochange checkpoint when collecting checkpoint location
  }

  if(ap_memory.pc.settings.tip_hints)
  {
    util_inject(UTIL_INJECT_FUNCTION, 0x801B8698, (u32)TipTextDisplaced, 1);
    util_inject(UTIL_INJECT_RAW, 0x801B8644, (u32)0x24020000, 0);
  }

  //Star Bonus Fix
  util_inject(UTIL_INJECT_RAW, 0x80128DA8, (u32)0x10600011, 0);
  util_inject(UTIL_INJECT_RAW, 0x80128DAC, (u32)0x24060000, 0);

  if(ap_memory.pc.settings.portals)
  {
    util_inject(UTIL_INJECT_FUNCTION, 0x801202D0, (u32)PortalBarrierDisplaced, 1);
  }
  return 0;
}
