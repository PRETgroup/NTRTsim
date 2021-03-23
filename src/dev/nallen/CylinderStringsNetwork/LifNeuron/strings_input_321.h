#ifndef STRINGS_INPUT_321_H_
#define STRINGS_INPUT_321_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_321 States
enum StringsInput321States {
    STRINGS_INPUT_321_INTEGRATE,
    STRINGS_INPUT_321_LIMIT,
    STRINGS_INPUT_321_SPIKE,
    STRINGS_INPUT_321_REFRACTORY,
};

// strings_input_321 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput321States state;
} StringsInput321;

// strings_input_321 Initialisation function
void StringsInput321Init(StringsInput321* me);

// strings_input_321 Execution function
void StringsInput321Run(StringsInput321* me);

#endif // STRINGS_INPUT_321_H_