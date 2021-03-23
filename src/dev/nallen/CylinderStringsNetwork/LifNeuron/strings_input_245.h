#ifndef STRINGS_INPUT_245_H_
#define STRINGS_INPUT_245_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_245 States
enum StringsInput245States {
    STRINGS_INPUT_245_INTEGRATE,
    STRINGS_INPUT_245_LIMIT,
    STRINGS_INPUT_245_SPIKE,
    STRINGS_INPUT_245_REFRACTORY,
};

// strings_input_245 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput245States state;
} StringsInput245;

// strings_input_245 Initialisation function
void StringsInput245Init(StringsInput245* me);

// strings_input_245 Execution function
void StringsInput245Run(StringsInput245* me);

#endif // STRINGS_INPUT_245_H_