#ifndef STRINGS_INPUT_337_H_
#define STRINGS_INPUT_337_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_337 States
enum StringsInput337States {
    STRINGS_INPUT_337_INTEGRATE,
    STRINGS_INPUT_337_LIMIT,
    STRINGS_INPUT_337_SPIKE,
    STRINGS_INPUT_337_REFRACTORY,
};

// strings_input_337 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput337States state;
} StringsInput337;

// strings_input_337 Initialisation function
void StringsInput337Init(StringsInput337* me);

// strings_input_337 Execution function
void StringsInput337Run(StringsInput337* me);

#endif // STRINGS_INPUT_337_H_