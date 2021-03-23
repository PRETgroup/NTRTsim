#ifndef STRINGS_INPUT_327_H_
#define STRINGS_INPUT_327_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_327 States
enum StringsInput327States {
    STRINGS_INPUT_327_INTEGRATE,
    STRINGS_INPUT_327_LIMIT,
    STRINGS_INPUT_327_SPIKE,
    STRINGS_INPUT_327_REFRACTORY,
};

// strings_input_327 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput327States state;
} StringsInput327;

// strings_input_327 Initialisation function
void StringsInput327Init(StringsInput327* me);

// strings_input_327 Execution function
void StringsInput327Run(StringsInput327* me);

#endif // STRINGS_INPUT_327_H_