#include "error.h"
#include <stdio.h>

void error_handler(ErrorType type, const char* message) {
    //Simple error handling function
    fprintf(stderr, "Error: %d - %s\n", type, message);
    // In a real system, this might trigger a reset or other corrective action
}
