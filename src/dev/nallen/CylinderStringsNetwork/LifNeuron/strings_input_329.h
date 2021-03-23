#ifndef STRINGS_INPUT_329_H_
#define STRINGS_INPUT_329_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_329 States
enum StringsInput329States {
    STRINGS_INPUT_329_INTEGRATE,
    STRINGS_INPUT_329_LIMIT,
    STRINGS_INPUT_329_SPIKE,
    STRINGS_INPUT_329_REFRACTORY,
};

// strings_input_329 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput329States state;
} StringsInput329;

// strings_input_329 Initialisation function
void StringsInput329Init(StringsInput329* me);

// strings_input_329 Execution function
void StringsInput329Run(StringsInput329* me);

#endif // STRINGS_INPUT_329_H_