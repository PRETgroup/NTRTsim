#ifndef STRINGS_INPUT_395_H_
#define STRINGS_INPUT_395_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_395 States
enum StringsInput395States {
    STRINGS_INPUT_395_INTEGRATE,
    STRINGS_INPUT_395_LIMIT,
    STRINGS_INPUT_395_SPIKE,
    STRINGS_INPUT_395_REFRACTORY,
};

// strings_input_395 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput395States state;
} StringsInput395;

// strings_input_395 Initialisation function
void StringsInput395Init(StringsInput395* me);

// strings_input_395 Execution function
void StringsInput395Run(StringsInput395* me);

#endif // STRINGS_INPUT_395_H_