#include "sensor.h"
#include <stdlib.h>
#include <time.h>
#include "error.h"

// Simulate I2C communication and sensor reading
int sensor_read() {
  // Simulate random glucose value with some noise
  srand(time(NULL)); // Seed the random number generator
  int noise = rand() % 20 - 10; // Noise between -10 and 9
  int glucose = 100 + noise;

  if (glucose < 0) {
        return -1; // Indicate error
  }
  return glucose;
}

void sensor_init() {
    //Placeholder for sensor initialization
    // In a real system, this would initialize the I2C peripheral

}
