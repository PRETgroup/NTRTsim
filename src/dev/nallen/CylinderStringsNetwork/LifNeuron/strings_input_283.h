#ifndef STRINGS_INPUT_283_H_
#define STRINGS_INPUT_283_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_283 States
enum StringsInput283States {
    STRINGS_INPUT_283_INTEGRATE,
    STRINGS_INPUT_283_LIMIT,
    STRINGS_INPUT_283_SPIKE,
    STRINGS_INPUT_283_REFRACTORY,
};

// strings_input_283 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput283States state;
} StringsInput283;

// strings_input_283 Initialisation function
void StringsInput283Init(StringsInput283* me);

// strings_input_283 Execution function
void StringsInput283Run(StringsInput283* me);

#endif // STRINGS_INPUT_283_H_