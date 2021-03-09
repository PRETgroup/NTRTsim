#ifndef STRINGS_INPUT_145_H_
#define STRINGS_INPUT_145_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_145 States
enum StringsInput145States {
    STRINGS_INPUT_145_INTEGRATE,
    STRINGS_INPUT_145_LIMIT,
    STRINGS_INPUT_145_SPIKE,
    STRINGS_INPUT_145_REFRACTORY,
};

// strings_input_145 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput145States state;
} StringsInput145;

// strings_input_145 Initialisation function
void StringsInput145Init(StringsInput145* me);

// strings_input_145 Execution function
void StringsInput145Run(StringsInput145* me);

#endif // STRINGS_INPUT_145_H_