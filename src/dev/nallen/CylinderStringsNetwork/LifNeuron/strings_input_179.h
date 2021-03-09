#ifndef STRINGS_INPUT_179_H_
#define STRINGS_INPUT_179_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_179 States
enum StringsInput179States {
    STRINGS_INPUT_179_INTEGRATE,
    STRINGS_INPUT_179_LIMIT,
    STRINGS_INPUT_179_SPIKE,
    STRINGS_INPUT_179_REFRACTORY,
};

// strings_input_179 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput179States state;
} StringsInput179;

// strings_input_179 Initialisation function
void StringsInput179Init(StringsInput179* me);

// strings_input_179 Execution function
void StringsInput179Run(StringsInput179* me);

#endif // STRINGS_INPUT_179_H_