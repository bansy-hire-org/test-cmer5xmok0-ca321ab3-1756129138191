#include <stdio.h>
#include <stdlib.h>
#include "sensor.h"
#include "ble.h"
#include "processing.h"
#include "power.h"
#include "error.h"

#define SAMPLE_RATE_MS 1000

int main() {
  // Initialize hardware (simulated)
  sensor_init();
  ble_init();
  power_init();

  while (1) {
    // Simulate sensor reading
    int raw_glucose = sensor_read();
    if (raw_glucose < 0) {
        error_handler(SENSOR_ERROR, "Sensor read failed");
        continue;
    }

    // Process data
    float calibrated_glucose = process_glucose(raw_glucose);

    // Transmit data via BLE
    ble_transmit(calibrated_glucose);

    // Enter low power mode
    power_sleep(SAMPLE_RATE_MS);
  }

  return 0;
}
