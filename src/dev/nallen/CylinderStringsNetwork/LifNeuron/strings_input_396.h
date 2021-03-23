#ifndef STRINGS_INPUT_396_H_
#define STRINGS_INPUT_396_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_396 States
enum StringsInput396States {
    STRINGS_INPUT_396_INTEGRATE,
    STRINGS_INPUT_396_LIMIT,
    STRINGS_INPUT_396_SPIKE,
    STRINGS_INPUT_396_REFRACTORY,
};

// strings_input_396 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput396States state;
} StringsInput396;

// strings_input_396 Initialisation function
void StringsInput396Init(StringsInput396* me);

// strings_input_396 Execution function
void StringsInput396Run(StringsInput396* me);

#endif // STRINGS_INPUT_396_H_