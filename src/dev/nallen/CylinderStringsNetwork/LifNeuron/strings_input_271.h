#ifndef STRINGS_INPUT_271_H_
#define STRINGS_INPUT_271_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_271 States
enum StringsInput271States {
    STRINGS_INPUT_271_INTEGRATE,
    STRINGS_INPUT_271_LIMIT,
    STRINGS_INPUT_271_SPIKE,
    STRINGS_INPUT_271_REFRACTORY,
};

// strings_input_271 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput271States state;
} StringsInput271;

// strings_input_271 Initialisation function
void StringsInput271Init(StringsInput271* me);

// strings_input_271 Execution function
void StringsInput271Run(StringsInput271* me);

#endif // STRINGS_INPUT_271_H_