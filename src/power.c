#include "power.h"
#include <stdio.h>
#include <unistd.h>

void power_sleep(int ms) {
  // Simulate low power sleep
  usleep(ms * 1000); // usleep takes microseconds
  printf("Woke up from sleep\n");
}

void power_init(){
    //Placeholder for power initialization
}
