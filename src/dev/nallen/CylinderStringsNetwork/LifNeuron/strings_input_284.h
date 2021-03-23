#ifndef STRINGS_INPUT_284_H_
#define STRINGS_INPUT_284_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_284 States
enum StringsInput284States {
    STRINGS_INPUT_284_INTEGRATE,
    STRINGS_INPUT_284_LIMIT,
    STRINGS_INPUT_284_SPIKE,
    STRINGS_INPUT_284_REFRACTORY,
};

// strings_input_284 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput284States state;
} StringsInput284;

// strings_input_284 Initialisation function
void StringsInput284Init(StringsInput284* me);

// strings_input_284 Execution function
void StringsInput284Run(StringsInput284* me);

#endif // STRINGS_INPUT_284_H_