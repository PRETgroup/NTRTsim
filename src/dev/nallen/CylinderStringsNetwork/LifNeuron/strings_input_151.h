#ifndef STRINGS_INPUT_151_H_
#define STRINGS_INPUT_151_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_151 States
enum StringsInput151States {
    STRINGS_INPUT_151_INTEGRATE,
    STRINGS_INPUT_151_LIMIT,
    STRINGS_INPUT_151_SPIKE,
    STRINGS_INPUT_151_REFRACTORY,
};

// strings_input_151 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput151States state;
} StringsInput151;

// strings_input_151 Initialisation function
void StringsInput151Init(StringsInput151* me);

// strings_input_151 Execution function
void StringsInput151Run(StringsInput151* me);

#endif // STRINGS_INPUT_151_H_