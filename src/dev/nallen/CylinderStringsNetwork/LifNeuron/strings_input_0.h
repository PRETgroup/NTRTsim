#ifndef STRINGS_INPUT_0_H_
#define STRINGS_INPUT_0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_0 States
enum StringsInput0States {
    STRINGS_INPUT_0_INTEGRATE,
    STRINGS_INPUT_0_LIMIT,
    STRINGS_INPUT_0_SPIKE,
    STRINGS_INPUT_0_REFRACTORY,
};

// strings_input_0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput0States state;
} StringsInput0;

// strings_input_0 Initialisation function
void StringsInput0Init(StringsInput0* me);

// strings_input_0 Execution function
void StringsInput0Run(StringsInput0* me);

#endif // STRINGS_INPUT_0_H_