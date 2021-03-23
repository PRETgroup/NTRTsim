#ifndef STRINGS_INPUT_285_H_
#define STRINGS_INPUT_285_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_285 States
enum StringsInput285States {
    STRINGS_INPUT_285_INTEGRATE,
    STRINGS_INPUT_285_LIMIT,
    STRINGS_INPUT_285_SPIKE,
    STRINGS_INPUT_285_REFRACTORY,
};

// strings_input_285 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput285States state;
} StringsInput285;

// strings_input_285 Initialisation function
void StringsInput285Init(StringsInput285* me);

// strings_input_285 Execution function
void StringsInput285Run(StringsInput285* me);

#endif // STRINGS_INPUT_285_H_