#ifndef STRINGS_INPUT_141_H_
#define STRINGS_INPUT_141_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_141 States
enum StringsInput141States {
    STRINGS_INPUT_141_INTEGRATE,
    STRINGS_INPUT_141_LIMIT,
    STRINGS_INPUT_141_SPIKE,
    STRINGS_INPUT_141_REFRACTORY,
};

// strings_input_141 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput141States state;
} StringsInput141;

// strings_input_141 Initialisation function
void StringsInput141Init(StringsInput141* me);

// strings_input_141 Execution function
void StringsInput141Run(StringsInput141* me);

#endif // STRINGS_INPUT_141_H_