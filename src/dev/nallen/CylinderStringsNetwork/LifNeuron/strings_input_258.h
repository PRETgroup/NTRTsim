#ifndef STRINGS_INPUT_258_H_
#define STRINGS_INPUT_258_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_258 States
enum StringsInput258States {
    STRINGS_INPUT_258_INTEGRATE,
    STRINGS_INPUT_258_LIMIT,
    STRINGS_INPUT_258_SPIKE,
    STRINGS_INPUT_258_REFRACTORY,
};

// strings_input_258 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput258States state;
} StringsInput258;

// strings_input_258 Initialisation function
void StringsInput258Init(StringsInput258* me);

// strings_input_258 Execution function
void StringsInput258Run(StringsInput258* me);

#endif // STRINGS_INPUT_258_H_