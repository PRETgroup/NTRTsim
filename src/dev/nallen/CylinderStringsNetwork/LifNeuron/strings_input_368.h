#ifndef STRINGS_INPUT_368_H_
#define STRINGS_INPUT_368_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_368 States
enum StringsInput368States {
    STRINGS_INPUT_368_INTEGRATE,
    STRINGS_INPUT_368_LIMIT,
    STRINGS_INPUT_368_SPIKE,
    STRINGS_INPUT_368_REFRACTORY,
};

// strings_input_368 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput368States state;
} StringsInput368;

// strings_input_368 Initialisation function
void StringsInput368Init(StringsInput368* me);

// strings_input_368 Execution function
void StringsInput368Run(StringsInput368* me);

#endif // STRINGS_INPUT_368_H_