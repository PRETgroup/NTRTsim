#ifndef STRINGS_INPUT_380_H_
#define STRINGS_INPUT_380_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_380 States
enum StringsInput380States {
    STRINGS_INPUT_380_INTEGRATE,
    STRINGS_INPUT_380_LIMIT,
    STRINGS_INPUT_380_SPIKE,
    STRINGS_INPUT_380_REFRACTORY,
};

// strings_input_380 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput380States state;
} StringsInput380;

// strings_input_380 Initialisation function
void StringsInput380Init(StringsInput380* me);

// strings_input_380 Execution function
void StringsInput380Run(StringsInput380* me);

#endif // STRINGS_INPUT_380_H_