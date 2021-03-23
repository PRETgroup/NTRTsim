#ifndef STRINGS_INPUT_347_H_
#define STRINGS_INPUT_347_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_347 States
enum StringsInput347States {
    STRINGS_INPUT_347_INTEGRATE,
    STRINGS_INPUT_347_LIMIT,
    STRINGS_INPUT_347_SPIKE,
    STRINGS_INPUT_347_REFRACTORY,
};

// strings_input_347 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput347States state;
} StringsInput347;

// strings_input_347 Initialisation function
void StringsInput347Init(StringsInput347* me);

// strings_input_347 Execution function
void StringsInput347Run(StringsInput347* me);

#endif // STRINGS_INPUT_347_H_