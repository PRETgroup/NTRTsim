#ifndef STRINGS_INPUT_334_H_
#define STRINGS_INPUT_334_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_334 States
enum StringsInput334States {
    STRINGS_INPUT_334_INTEGRATE,
    STRINGS_INPUT_334_LIMIT,
    STRINGS_INPUT_334_SPIKE,
    STRINGS_INPUT_334_REFRACTORY,
};

// strings_input_334 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput334States state;
} StringsInput334;

// strings_input_334 Initialisation function
void StringsInput334Init(StringsInput334* me);

// strings_input_334 Execution function
void StringsInput334Run(StringsInput334* me);

#endif // STRINGS_INPUT_334_H_