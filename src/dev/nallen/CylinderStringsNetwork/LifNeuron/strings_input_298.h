#ifndef STRINGS_INPUT_298_H_
#define STRINGS_INPUT_298_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_298 States
enum StringsInput298States {
    STRINGS_INPUT_298_INTEGRATE,
    STRINGS_INPUT_298_LIMIT,
    STRINGS_INPUT_298_SPIKE,
    STRINGS_INPUT_298_REFRACTORY,
};

// strings_input_298 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput298States state;
} StringsInput298;

// strings_input_298 Initialisation function
void StringsInput298Init(StringsInput298* me);

// strings_input_298 Execution function
void StringsInput298Run(StringsInput298* me);

#endif // STRINGS_INPUT_298_H_