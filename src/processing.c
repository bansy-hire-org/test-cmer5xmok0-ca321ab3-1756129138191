#include "processing.h"

float process_glucose(int raw_glucose) {
  // Simulate calibration and filtering
  float calibrated_glucose = (float)raw_glucose * 1.1;
  return calibrated_glucose; // Simple calibration factor
}
