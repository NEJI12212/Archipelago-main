#include <stdint.h>
#include <stdbool.h>
#include "util.h"
#include "gex.h"
#include "gex/items.h"
bool dpad_upressed = false;
bool dpad_downpressed = false;
bool dpad_leftpressed = false;
bool still_pressed = false;
bool init = false;

void remote_amount();
void red_remote_stats(u8, int, int, int);
void silver_remote_stats(u8, int, int, int);
void gold_remote_stats(u8, int, int);

void initialize()
{
  // ap_memory.pc.items[AP_RED_REMOTE] = 1;
  // ap_memory.pc.items[AP_SILVER_REMOTE] = 1;
  // ap_memory.pc.items[AP_GOLD_REMOTE] = 0;

}

bool pre_loop()
{
  if(!init)
  {
    init = true;
    initialize();
  }
  
  remote_amount();
  if(controller->d_down)
  {
    if(still_pressed){
      dpad_upressed = false;
    }
    else{
      dpad_upressed = true;
      still_pressed = true;

    }
  }
  else if(controller->d_up)
  {
    if(still_pressed){
      dpad_downpressed = false;
    }
    else{
      dpad_downpressed = true;
      still_pressed = true;

    }
  }
  else if(controller->d_left)
  {
    if(still_pressed){
      dpad_leftpressed = false;
    }
    else{
      dpad_leftpressed = true;
      still_pressed = true;

    }
  }
  else
  {
    dpad_leftpressed = false;
    dpad_downpressed = false;
    dpad_upressed = false;
    still_pressed = false;
  }
 
  // dpad_upressed = true;
  if(dpad_upressed == true)
  {
    // ap_memory.pc.items[AP_SILVER_REMOTE]++;
    ap_memory.pc.items[AP_GOLD_REMOTE]++;
  }
  if(dpad_downpressed == true)
  {
    ap_memory.pc.items[AP_RED_REMOTE]++;
    // ap_memory.pc.items[AP_SILVER_REMOTE]++;
  }

  
  return gex_fn_unknown_start_loop();
}

u8 red_remote_bit_setter(u8 remotes, int i)
{
  if(i > 3 && i < 9)
  {
      return 0b01;
  }
  else if (i > 8 && i < 13)
  {
    if(remotes % 3 == 2)
      return 0b01;
    else
      return 0b011;
  }
  else if(remotes % 3 == 1)
  {
    return 0b01;
  }
  else
  {
    return 0b011;
  }
 
}

u8 silver_remote_bit_setter(u8 remotes, int i)
{
  if(i == 0)
  {
    if(remotes % 4 == 1)
    {
      return 0b01;
    }
    else if(remotes % 4 == 2)
    {
      return 0b011;
    }
    else if (remotes % 4 == 3)
    {
      return 0b111;
    }
    else
    {
      return 0b1111;
    }
  }

  if((remotes-4) % 8 == 1)
  {
    return 0b01;
  }
  else if((remotes-4) % 8 == 2)
  {
    return 0b011;
  }
  else if ((remotes-4) % 8 == 3)
  {
    return 0b111;
  }
  else if((remotes-4) % 8 == 4)
  {
    return 0b1111;
  }
  else if((remotes-4) % 8 == 5)
  {
    return 0b11111;
  }
  else if((remotes-4) % 8 == 6)
  {
    return 0b111111;
  }
  else if ((remotes-4) % 8 == 7)
  {
    return 0b1111111;
  }
  else
  {
    return 0b11111111;
  }
 
}

u8 gold_remote_bit_setter(u8 remotes)
{

  if(remotes % 7 == 1)
  {
    return 0b01;
  }
  else if(remotes % 7 == 2)
  {
    return 0b011;
  }
  else if (remotes % 7 == 3)
  {
    return 0b111;
  }
  else if(remotes % 7 == 4)
  {
    return 0b1111;
  }
  else if(remotes % 7 == 5)
  {
    return 0b11111;
  }
  else if(remotes % 7 == 6)
  {
    return 0b111111;
  }
  else
  {
    return 0b1111111;
  }

 
}

u32 inject_hooks() {
  AP_MEMORY_PTR = &ap_memory;
  util_inject(UTIL_INJECT_FUNCTION, 0x80057964, (u32)pre_loop, 0);
  // util_inject(UTIL_INJECT_FUNCTION, 0x8007F3C1, (u32)pre_loop, 0);
  util_inject(UTIL_INJECT_FUNCTION, 0x800130C0 , 0, 0);
  // util_inject(UTIL_INJECT_FUNCTION, 0x80040668, (u32)remote_amount, 1);
  util_inject(UTIL_INJECT_RAW, 0x8000CA48, 0, 0);
  
  return 0;
}

void remote_amount()
{
  u8 red_max_remote = ap_memory.pc.items[AP_RED_REMOTE];
  u8 silver_max_remote = ap_memory.pc.items[AP_SILVER_REMOTE];
  u8 gold_max_remote = ap_memory.pc.items[AP_GOLD_REMOTE];

  for( int i=0; i < 14; i++)
  {
    int min = 0;
    int max = 0;

    if(i < 4)
    {
      min = i*3;
      max = min + 3;
    }
    else if (i > 3 && i < 9)
    {
      min = 12 + ((i-4)*2);
      max = min + 2;
    }
    else if (i > 8 && i < 13)
    {
      min = 22 + ((i-9)*3);
      max = min + 3;
    }
    else
    {
      min = 34;
      max = 35;
    }

    
    red_remote_stats(red_max_remote, min, max, i);
    
  }
  for( int i=0; i < 4; i++)
  {
    int min = 20;
    int max = 28;
    
    if(i == 0)
    {
      min = 0;
      max = 4;
    }
    else if (i < 3)
    {
      min = 4 + ((i-1)*8);
      max = min + 8;
    }
    silver_remote_stats(silver_max_remote, min, max, i);
  }
  int min = 0;
  int max = 7;
  gold_remote_stats(gold_max_remote, min, max);

}


void red_remote_stats(u8 max_remote, int min_amount, int upper_amount, int i)
{
    if(max_remote > min_amount && max_remote < upper_amount)
    {
      gex_red_remotes_levels.RED_REMOTE[i] = red_remote_bit_setter(max_remote, i);
    }
    else if (max_remote >= upper_amount)
    {
      if (i > 3 && i < 9)
      {
        gex_red_remotes_levels.RED_REMOTE[i] = 0b011;
      }
      else if (i == 13)
      {
        gex_red_remotes_levels.RED_REMOTE[i] = 0b001;
      }
      else
      {
        gex_red_remotes_levels.RED_REMOTE[i] = 7;
      }
    }
}

void silver_remote_stats(u8 max_remote, int min_amount, int upper_amount, int i)
{
    if(max_remote > min_amount && max_remote < upper_amount)
    {
      gex_silver_remotes_levels.SILVER_REMOTE[i] = silver_remote_bit_setter(max_remote, i);
    }
    else  if (max_remote >= upper_amount)
    {
      if(i == 0)
      {
        gex_silver_remotes_levels.SILVER_REMOTE[i] = 0b1111;
      }
      else
      {
        gex_silver_remotes_levels.SILVER_REMOTE[i] = 0b11111111;
      }
    }
}

void gold_remote_stats(u8 max_remote, int min_amount, int upper_amount)
{
  if(max_remote > min_amount && max_remote < upper_amount)
    {
      gex_gold_remotes_levels.GOLD_REMOTE[0] = gold_remote_bit_setter(max_remote);
    }
    else if (max_remote >= upper_amount)
    {
      gex_gold_remotes_levels.GOLD_REMOTE[0] =  0b1111111;
    }
}