#ifndef STRINGS_INPUT_254_H_
#define STRINGS_INPUT_254_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_254 States
enum StringsInput254States {
    STRINGS_INPUT_254_INTEGRATE,
    STRINGS_INPUT_254_LIMIT,
    STRINGS_INPUT_254_SPIKE,
    STRINGS_INPUT_254_REFRACTORY,
};

// strings_input_254 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput254States state;
} StringsInput254;

// strings_input_254 Initialisation function
void StringsInput254Init(StringsInput254* me);

// strings_input_254 Execution function
void StringsInput254Run(StringsInput254* me);

#endif // STRINGS_INPUT_254_H_