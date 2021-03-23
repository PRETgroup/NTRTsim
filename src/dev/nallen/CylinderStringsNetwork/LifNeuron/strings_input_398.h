#ifndef STRINGS_INPUT_398_H_
#define STRINGS_INPUT_398_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_398 States
enum StringsInput398States {
    STRINGS_INPUT_398_INTEGRATE,
    STRINGS_INPUT_398_LIMIT,
    STRINGS_INPUT_398_SPIKE,
    STRINGS_INPUT_398_REFRACTORY,
};

// strings_input_398 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput398States state;
} StringsInput398;

// strings_input_398 Initialisation function
void StringsInput398Init(StringsInput398* me);

// strings_input_398 Execution function
void StringsInput398Run(StringsInput398* me);

#endif // STRINGS_INPUT_398_H_