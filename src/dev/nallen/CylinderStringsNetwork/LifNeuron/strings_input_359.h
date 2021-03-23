#ifndef STRINGS_INPUT_359_H_
#define STRINGS_INPUT_359_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_359 States
enum StringsInput359States {
    STRINGS_INPUT_359_INTEGRATE,
    STRINGS_INPUT_359_LIMIT,
    STRINGS_INPUT_359_SPIKE,
    STRINGS_INPUT_359_REFRACTORY,
};

// strings_input_359 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput359States state;
} StringsInput359;

// strings_input_359 Initialisation function
void StringsInput359Init(StringsInput359* me);

// strings_input_359 Execution function
void StringsInput359Run(StringsInput359* me);

#endif // STRINGS_INPUT_359_H_