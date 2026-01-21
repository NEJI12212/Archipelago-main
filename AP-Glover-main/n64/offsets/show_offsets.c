#include <stdio.h>
#include <util.h>

ap_memory_t ap_memory;
//ap_memory_ptr_t ap_memory_ptr;
#define mem (void *)&ap_memory

//#define ptr (long int)&ap_memory_ptr
#define calc(base, offset) offset-base

int main() {
  printf("    base_pointer = 0x%X,\n",                      0x400000);
  printf("    pc = 0x%X,\n",                                  calc(mem, mem.pc));

  printf("    ap_items = 0x%X,\n",                            calc(mem, mem.pc.items));
  printf("    ap_world = 0x%X,\n",                          calc(mem, mem.pc.worlds[0]));

  printf("      hub_entrance = 0x%X,\n",                      calc(mem.pc.worlds, mem.pc.worlds->hub_entrance));
  printf("      door_number = 0x%X,\n",                       calc(mem.pc.worlds, mem.pc.worlds->door));
  printf("      warp_spawn_offset = 0x%X,\n",                 calc(mem.pc.worlds, mem.pc.worlds->warp_offset_id));

  printf("      garib_locations = 0x%X,\n",                   calc(mem.pc.worlds, mem.pc.worlds->garibs));
  printf("        garib_id = 0x%X,\n",                        calc(mem.pc.worlds->garibs, mem.pc.worlds->garibs->id));
  printf("        garib_collected = 0x%X,\n",                 calc(mem.pc.worlds->garibs, mem.pc.worlds->garibs->collected));
  printf("        garib_object_id = 0x%X,\n",                 calc(mem.pc.worlds->garibs, mem.pc.worlds->garibs->object_id));

  printf("      garib_size = 0x%X,\n",                        calc(mem.pc.worlds->garibs[0], mem.pc.worlds->garibs[1]));

  printf("      garib_all_collected = 0x%X,\n",               calc(mem.pc.worlds, mem.pc.worlds->all_collected));
  
  printf("      enemy_locations = 0x%X,\n",                  calc(mem.pc.worlds, mem.pc.worlds->enemy_checks));
  printf("        enemy_id = 0x%X,\n",                       calc(mem.pc.worlds->enemy_checks, mem.pc.worlds->enemy_checks->id));
  printf("        enemy_collected = 0x%X,\n",                calc(mem.pc.worlds->enemy_checks, mem.pc.worlds->enemy_checks->collected));
  printf("      enemy_size = 0x%X,\n",                       calc(mem.pc.worlds->enemy_checks[0], mem.pc.worlds->enemy_checks[1]));

  printf("      life_locations = 0x%X,\n",                    calc(mem.pc.worlds, mem.pc.worlds->life_checks));
  printf("        life_id = 0x%X,\n",                         calc(mem.pc.worlds->life_checks, mem.pc.worlds->life_checks->id));
  printf("        life_collected = 0x%X,\n",                  calc(mem.pc.worlds->life_checks, mem.pc.worlds->life_checks->collected));
  printf("      life_size = 0x%X,\n",                         calc(mem.pc.worlds->life_checks[0], mem.pc.worlds->life_checks[1]));

  printf("      tip_locations = 0x%X,\n",                     calc(mem.pc.worlds, mem.pc.worlds->tip_checks));
  printf("        tip_id = 0x%X,\n",                          calc(mem.pc.worlds->tip_checks, mem.pc.worlds->tip_checks->id));
  printf("        tip_collected = 0x%X,\n",                   calc(mem.pc.worlds->tip_checks, mem.pc.worlds->tip_checks->collected));
  printf("        tip_text = 0x%X,\n",                         calc(mem.pc.worlds->tip_checks, mem.pc.worlds->tip_checks->tip_text));
  printf("          line1 = 0x%X,\n",                         calc(mem.pc.worlds->tip_checks->tip_text, mem.pc.worlds->tip_checks->tip_text.lines[0]));
  printf("          line2 = 0x%X,\n",                         calc(mem.pc.worlds->tip_checks->tip_text, mem.pc.worlds->tip_checks->tip_text.lines[1]));
  printf("          line3 = 0x%X,\n",                         calc(mem.pc.worlds->tip_checks->tip_text, mem.pc.worlds->tip_checks->tip_text.lines[2]));
  printf("          line4 = 0x%X,\n",                         calc(mem.pc.worlds->tip_checks->tip_text, mem.pc.worlds->tip_checks->tip_text.lines[3]));
  printf("          line5 = 0x%X,\n",                         calc(mem.pc.worlds->tip_checks->tip_text, mem.pc.worlds->tip_checks->tip_text.lines[4]));
  printf("          line6 = 0x%X,\n",                         calc(mem.pc.worlds->tip_checks->tip_text, mem.pc.worlds->tip_checks->tip_text.lines[5]));
  printf("         last_line = 0x%X,\n",                     calc(mem.pc.worlds->tip_checks->tip_text, mem.pc.worlds->tip_checks->tip_text.last_line));

  printf("      tip_size = 0x%X,\n",                          calc(mem.pc.worlds->tip_checks[0], mem.pc.worlds->tip_checks[1]));

  printf("      checkpoint_locations = 0x%X,\n",              calc(mem.pc.worlds, mem.pc.worlds->checkpoint_checks));
  printf("        checkpoint_id = 0x%X,\n",                   calc(mem.pc.worlds->checkpoint_checks, mem.pc.worlds->checkpoint_checks->id));
  printf("        checkpoint_collected = 0x%X,\n",            calc(mem.pc.worlds->checkpoint_checks, mem.pc.worlds->checkpoint_checks->collected));
  printf("      checkpoint_size = 0x%X,\n",                   calc(mem.pc.worlds->checkpoint_checks[0], mem.pc.worlds->checkpoint_checks[1]));

  printf("      switch_locations = 0x%X,\n",                  calc(mem.pc.worlds, mem.pc.worlds->switch_checks));
  printf("        switch_id = 0x%X,\n",                       calc(mem.pc.worlds->switch_checks, mem.pc.worlds->switch_checks->id));
  printf("        switch_collected = 0x%X,\n",                calc(mem.pc.worlds->switch_checks, mem.pc.worlds->switch_checks->collected));
  printf("      switch_size = 0x%X,\n",                       calc(mem.pc.worlds->switch_checks[0], mem.pc.worlds->switch_checks[1]));

  printf("      potion_locations = 0x%X,\n",                  calc(mem.pc.worlds, mem.pc.worlds->potion_checks));
  printf("        potion_id = 0x%X,\n",                       calc(mem.pc.worlds->potion_checks, mem.pc.worlds->potion_checks->id));
  printf("        potion_collected = 0x%X,\n",                calc(mem.pc.worlds->potion_checks, mem.pc.worlds->potion_checks->collected));
  printf("      potion_size = 0x%X,\n",                       calc(mem.pc.worlds->potion_checks[0], mem.pc.worlds->potion_checks[1]));

  printf("      goal = 0x%X,\n",                              calc(mem.pc.worlds, mem.pc.worlds->goal));
  printf("      starred = 0x%X,\n",                           calc(mem.pc.worlds, mem.pc.worlds->star));
  printf("    ap_world_offset = 0x%X,\n",                     calc(mem.pc.worlds[0], mem.pc.worlds[1]));

  printf("    ap_hub_order = 0x%X,\n",                        calc(mem, mem.pc.hub_order));
  printf("    garib_totals = 0x%X,\n",                        calc(mem, mem.pc.garib_totals));
  
  printf("    wayroom_locations = 0x%X,\n",                   calc(mem.pc, mem.pc.wayroom_tip_checks));
  printf("      wayroom_id = 0x%X,\n",                        calc(mem.pc.wayroom_tip_checks, mem.pc.wayroom_tip_checks->id));
  printf("      wayroom_collected = 0x%X,\n",                 calc(mem.pc.wayroom_tip_checks, mem.pc.wayroom_tip_checks->collected));
  printf("        wr_tip_text = 0x%X,\n",                         calc(mem.pc.wayroom_tip_checks, mem.pc.wayroom_tip_checks->tip_text));
  printf("          wr_line1 = 0x%X,\n",                         calc(mem.pc.wayroom_tip_checks->tip_text, mem.pc.wayroom_tip_checks->tip_text.lines[0]));
  printf("          wr_line2 = 0x%X,\n",                         calc(mem.pc.wayroom_tip_checks->tip_text, mem.pc.wayroom_tip_checks->tip_text.lines[1]));
  printf("          wr_line3 = 0x%X,\n",                         calc(mem.pc.wayroom_tip_checks->tip_text, mem.pc.wayroom_tip_checks->tip_text.lines[2]));
  printf("          wr_line4 = 0x%X,\n",                         calc(mem.pc.wayroom_tip_checks->tip_text, mem.pc.wayroom_tip_checks->tip_text.lines[3]));
  printf("          wr_line5 = 0x%X,\n",                         calc(mem.pc.wayroom_tip_checks->tip_text, mem.pc.wayroom_tip_checks->tip_text.lines[4]));
  printf("          wr_line6 = 0x%X,\n",                         calc(mem.pc.wayroom_tip_checks->tip_text, mem.pc.wayroom_tip_checks->tip_text.lines[5]));
  printf("         wr_last_line = 0x%X,\n",                     calc(mem.pc.wayroom_tip_checks->tip_text, mem.pc.wayroom_tip_checks->tip_text.last_line));
  printf("    wayroom_size = 0x%X,\n",                        calc(mem.pc.wayroom_tip_checks[0], mem.pc.wayroom_tip_checks[1]));
  
  printf("    chicken_collected = 0x%X,\n",                   calc(mem.pc, mem.pc.chicken));
  printf("    wayroom_completed_stars = 0x%X,\n",             calc(mem.pc, mem.pc.secret_unlock));
  printf("    wayroom_completed_size = 0x%X,\n",             calc(mem.pc.secret_unlock[0], mem.pc.secret_unlock[1]));
  printf("    settings = 0x%X,\n",                            calc(mem, mem.pc.settings));
  printf("      garib_logic = 0x%X,\n",                       calc(mem.pc.settings, mem.pc.settings.garib_logic));
  printf("      randomize_checkpoints = 0x%X,\n",             calc(mem.pc.settings, mem.pc.settings.randomize_checkpoints));
  printf("      checkpoint_items = 0x%X,\n",                  calc(mem.pc.settings, mem.pc.settings.checkpoint_items));
  printf("      randomize_switches = 0x%X,\n",                calc(mem.pc.settings, mem.pc.settings.randomize_switches));
  printf("      deathlink = 0x%X,\n",                         calc(mem.pc.settings, mem.pc.settings.deathlink));
  printf("      taglink = 0x%X,\n",                           calc(mem.pc.settings, mem.pc.settings.taglink));
  printf("      tip_hints = 0x%X,\n",                         calc(mem.pc.settings, mem.pc.settings.tip_hints));
  printf("      inverse = 0x%X,\n",                           calc(mem.pc.settings, mem.pc.settings.inverse));
  printf("      random_garib_sounds = 0x%X,\n",               calc(mem.pc.settings, mem.pc.settings.random_sounds));
  printf("      portalsanity = 0x%X,\n",                      calc(mem.pc.settings, mem.pc.settings.portals));
  printf("      trap_timer = 0x%X,\n",                      calc(mem.pc.settings, mem.pc.settings.trap_timer));


  printf("    hub_map = 0x%X,\n",                             calc(mem, mem.pc.hub_map));
  printf("    world_map = 0x%X,\n",                           calc(mem, mem.pc.world_map));
  printf("    n64_deathlink = 0x%X,\n",                       calc(mem, mem.pc.n64_deathlink));
  printf("    n64_taglink = 0x%X,\n",                         calc(mem, mem.pc.n64_taglink));
  printf("    ROM_MAJOR_VERSION = 0x%X,\n",                   calc(mem, mem.pc.version_major));
  printf("    ROM_MINOR_VERSION = 0x%X,\n",                   calc(mem, mem.pc.version_minor));
  printf("    ROM_PATCH_VERSION = 0x%X,\n",                   calc(mem, mem.pc.version_patch));    

  return 0;
}
