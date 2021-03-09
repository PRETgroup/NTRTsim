#ifndef STRINGS_INPUT_180_H_
#define STRINGS_INPUT_180_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_180 States
enum StringsInput180States {
    STRINGS_INPUT_180_INTEGRATE,
    STRINGS_INPUT_180_LIMIT,
    STRINGS_INPUT_180_SPIKE,
    STRINGS_INPUT_180_REFRACTORY,
};

// strings_input_180 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput180States state;
} StringsInput180;

// strings_input_180 Initialisation function
void StringsInput180Init(StringsInput180* me);

// strings_input_180 Execution function
void StringsInput180Run(StringsInput180* me);

#endif // STRINGS_INPUT_180_H_