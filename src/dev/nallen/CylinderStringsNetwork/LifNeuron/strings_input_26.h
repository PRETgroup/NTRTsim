#ifndef STRINGS_INPUT_26_H_
#define STRINGS_INPUT_26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_26 States
enum StringsInput26States {
    STRINGS_INPUT_26_INTEGRATE,
    STRINGS_INPUT_26_LIMIT,
    STRINGS_INPUT_26_SPIKE,
    STRINGS_INPUT_26_REFRACTORY,
};

// strings_input_26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput26States state;
} StringsInput26;

// strings_input_26 Initialisation function
void StringsInput26Init(StringsInput26* me);

// strings_input_26 Execution function
void StringsInput26Run(StringsInput26* me);

#endif // STRINGS_INPUT_26_H_