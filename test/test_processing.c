#include <stdio.h>
#include <assert.h>
#include "src/processing.h"

int main() {
  // Test case 1: Raw glucose of 100 should result in calibrated glucose of 110
  float calibrated_glucose1 = process_glucose(100);
  assert(calibrated_glucose1 == 110.0);
  printf("Test case 1 passed: 100 -> 110.0\n");

  // Test case 2: Raw glucose of 200 should result in calibrated glucose of 220
  float calibrated_glucose2 = process_glucose(200);
  assert(calibrated_glucose2 == 220.0);
  printf("Test case 2 passed: 200 -> 220.0\n");

  //Test case 3:  Raw glucose of 0
  float calibrated_glucose3 = process_glucose(0);
  assert(calibrated_glucose3 == 0.0);
  printf("Test case 3 passed: 0 -> 0.0\n");

  printf("All tests passed!\n");
  return 0;
}
