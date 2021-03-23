#ifndef STRINGS_INPUT_223_H_
#define STRINGS_INPUT_223_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_223 States
enum StringsInput223States {
    STRINGS_INPUT_223_INTEGRATE,
    STRINGS_INPUT_223_LIMIT,
    STRINGS_INPUT_223_SPIKE,
    STRINGS_INPUT_223_REFRACTORY,
};

// strings_input_223 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput223States state;
} StringsInput223;

// strings_input_223 Initialisation function
void StringsInput223Init(StringsInput223* me);

// strings_input_223 Execution function
void StringsInput223Run(StringsInput223* me);

#endif // STRINGS_INPUT_223_H_