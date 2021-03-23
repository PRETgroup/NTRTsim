#ifndef STRINGS_INPUT_343_H_
#define STRINGS_INPUT_343_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_343 States
enum StringsInput343States {
    STRINGS_INPUT_343_INTEGRATE,
    STRINGS_INPUT_343_LIMIT,
    STRINGS_INPUT_343_SPIKE,
    STRINGS_INPUT_343_REFRACTORY,
};

// strings_input_343 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput343States state;
} StringsInput343;

// strings_input_343 Initialisation function
void StringsInput343Init(StringsInput343* me);

// strings_input_343 Execution function
void StringsInput343Run(StringsInput343* me);

#endif // STRINGS_INPUT_343_H_