#include <Arduino.h>
#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "ui/test.h"



void setup()
{

  lv_init();
  lv_port_disp_init();
  lv_port_indev_init();
  // screen_list();
  transition_list();
  
}

void loop()
{


  lv_task_handler();
  delay(5);
}


