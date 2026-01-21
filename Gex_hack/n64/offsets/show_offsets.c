#include <stdio.h>
#include <util.h>

ap_memory_t ap_memory;
//ap_memory_ptr_t ap_memory_ptr;
ap_version_t ap_version;
#define mem (void *)&ap_memory
#define ver (void *)&ap_version

//#define ptr (long int)&ap_memory_ptr
#define calc(base, offset) offset-base

int main() {
  printf("    BASE_POINTER = 0x%X,\n",                        0x400000);
  printf("    PC = 0x%X,\n",                                  calc(mem, mem.pc));
  printf("    ITEMS_COUNTS = 0x%X,\n",                        calc(mem, mem.pc.items));

  // printf("    MESSAGE_TEXT = 0x%X,\n",                        calc(mem, mem.pc.message + 0x8));

  // printf("    N64_RECEIVED_MESSAGE_COUNT = 0x%X,\n",          calc(mem, mem.pc.text_queue));
  // printf("    SETTINGS = 0x%X,\n",                            calc(mem, mem.pc.settings));
  // printf("      VICTORY_CONDITION = 0x%X,\n",                 calc(mem.pc.settings, mem.pc.settings.victory_condition));
  // printf("      OPEN_WORLDS = 0x%X,\n",                       calc(mem.pc.settings, mem.pc.settings.setting_open_worlds));
  printf("    ROM_MAJOR_VERSION = 0x%X,\n",                   calc(mem, ver.major));
  printf("    ROM_MINOR_VERSION = 0x%X,\n",                   calc(mem, ver.minor));
  printf("    ROM_PATCH_VERSION = 0x%X,\n",                   calc(mem, ver.patch));
  return 0;
}
