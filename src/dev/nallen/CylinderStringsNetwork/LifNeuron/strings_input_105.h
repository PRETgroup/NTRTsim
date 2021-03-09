#ifndef STRINGS_INPUT_105_H_
#define STRINGS_INPUT_105_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_105 States
enum StringsInput105States {
    STRINGS_INPUT_105_INTEGRATE,
    STRINGS_INPUT_105_LIMIT,
    STRINGS_INPUT_105_SPIKE,
    STRINGS_INPUT_105_REFRACTORY,
};

// strings_input_105 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput105States state;
} StringsInput105;

// strings_input_105 Initialisation function
void StringsInput105Init(StringsInput105* me);

// strings_input_105 Execution function
void StringsInput105Run(StringsInput105* me);

#endif // STRINGS_INPUT_105_H_