#ifndef STRINGS_INPUT_6_H_
#define STRINGS_INPUT_6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_6 States
enum StringsInput6States {
    STRINGS_INPUT_6_INTEGRATE,
    STRINGS_INPUT_6_LIMIT,
    STRINGS_INPUT_6_SPIKE,
    STRINGS_INPUT_6_REFRACTORY,
};

// strings_input_6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput6States state;
} StringsInput6;

// strings_input_6 Initialisation function
void StringsInput6Init(StringsInput6* me);

// strings_input_6 Execution function
void StringsInput6Run(StringsInput6* me);

#endif // STRINGS_INPUT_6_H_