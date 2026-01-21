#ifndef UTIL_H
#define UTIL_H

#include <archipelago.h>
#include <ap_memory/items.h>

extern ap_memory_t ap_memory;
extern ap_memory_t* AP_MEMORY_PTR;

// typedef struct {
//   u8 n64_saves_fake[AP_NOTE_MAX];
//   u8 n64_queue;
//   u8 text_ready;
// } ap_memory_ptr_t;
// extern ap_memory_ptr_t ap_memory_ptrs;
// extern ap_memory_ptr_t* AP_MEMORY_PTR;


enum UTIL_INJECT {
  UTIL_INJECT_RAW,
  UTIL_INJECT_JUMP,
  UTIL_INJECT_FUNCTION,
  UTIL_INJECT_BRANCH,
  UTIL_INJECT_RETVALUE,
};

void util_inject(enum UTIL_INJECT type, u32 addr, u32 data, u8 addNOP);
void csrand(u32 seed);
u32 crand();
#define TICKS_PER_MILLISECOND (93750000/2/1000)

#define C0_COUNT() ({ \
    uint32_t x; \
    asm volatile("mfc0 %0,$9":"=r"(x)); \
    x; \
})

#endif // UTIL_H
