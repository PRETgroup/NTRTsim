#ifndef STRINGS_INPUT_184_H_
#define STRINGS_INPUT_184_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_184 States
enum StringsInput184States {
    STRINGS_INPUT_184_INTEGRATE,
    STRINGS_INPUT_184_LIMIT,
    STRINGS_INPUT_184_SPIKE,
    STRINGS_INPUT_184_REFRACTORY,
};

// strings_input_184 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput184States state;
} StringsInput184;

// strings_input_184 Initialisation function
void StringsInput184Init(StringsInput184* me);

// strings_input_184 Execution function
void StringsInput184Run(StringsInput184* me);

#endif // STRINGS_INPUT_184_H_