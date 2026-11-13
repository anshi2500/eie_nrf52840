/**
 * @file main.c
 */

#include <inttypes.h>

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include "BTN.h"
#include "LED.h"

#define SLEEP_MS 1000 // slow the loop down to see outputs 

int main(void) {
  printk("Before init funcs\n");

  if (0 > BTN_init()) {
    return 0;
  }
  if (0 > LED_init()) {
    return 0;
  }
  printk("After init\n");

  int counter = 0;
  while (1) {
    counter++; 
    printk("Loop Number: %d\n", counter);
    k_msleep(SLEEP_MS);
    
  }
  return 0;
}
