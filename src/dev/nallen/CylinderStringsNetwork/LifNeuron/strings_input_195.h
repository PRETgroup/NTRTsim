#ifndef STRINGS_INPUT_195_H_
#define STRINGS_INPUT_195_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_195 States
enum StringsInput195States {
    STRINGS_INPUT_195_INTEGRATE,
    STRINGS_INPUT_195_LIMIT,
    STRINGS_INPUT_195_SPIKE,
    STRINGS_INPUT_195_REFRACTORY,
};

// strings_input_195 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput195States state;
} StringsInput195;

// strings_input_195 Initialisation function
void StringsInput195Init(StringsInput195* me);

// strings_input_195 Execution function
void StringsInput195Run(StringsInput195* me);

#endif // STRINGS_INPUT_195_H_