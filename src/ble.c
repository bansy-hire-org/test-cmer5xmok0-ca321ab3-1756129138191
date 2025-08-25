#include "ble.h"
#include <stdio.h>
#include "error.h"

void ble_transmit(float glucose) {
  // Simulate BLE transmission
  printf("Transmitting glucose value: %.2f\n", glucose);
  // In a real system, this would use BLE libraries to transmit data
}

void ble_init() {
  // Simulate BLE initialization
  printf("BLE module initialized\n");
}
