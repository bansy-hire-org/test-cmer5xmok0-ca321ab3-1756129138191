#ifndef ERROR_H
#define ERROR_H

typedef enum {
    SENSOR_ERROR = 1,
    BLE_ERROR = 2,
    PROCESSING_ERROR = 3,
    POWER_ERROR = 4
} ErrorType;

void error_handler(ErrorType type, const char* message);

#endif