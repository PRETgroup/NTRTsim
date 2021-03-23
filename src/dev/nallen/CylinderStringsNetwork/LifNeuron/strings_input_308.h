#ifndef STRINGS_INPUT_308_H_
#define STRINGS_INPUT_308_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_308 States
enum StringsInput308States {
    STRINGS_INPUT_308_INTEGRATE,
    STRINGS_INPUT_308_LIMIT,
    STRINGS_INPUT_308_SPIKE,
    STRINGS_INPUT_308_REFRACTORY,
};

// strings_input_308 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput308States state;
} StringsInput308;

// strings_input_308 Initialisation function
void StringsInput308Init(StringsInput308* me);

// strings_input_308 Execution function
void StringsInput308Run(StringsInput308* me);

#endif // STRINGS_INPUT_308_H_