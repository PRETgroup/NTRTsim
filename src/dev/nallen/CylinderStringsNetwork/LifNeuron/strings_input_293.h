#ifndef STRINGS_INPUT_293_H_
#define STRINGS_INPUT_293_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_293 States
enum StringsInput293States {
    STRINGS_INPUT_293_INTEGRATE,
    STRINGS_INPUT_293_LIMIT,
    STRINGS_INPUT_293_SPIKE,
    STRINGS_INPUT_293_REFRACTORY,
};

// strings_input_293 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput293States state;
} StringsInput293;

// strings_input_293 Initialisation function
void StringsInput293Init(StringsInput293* me);

// strings_input_293 Execution function
void StringsInput293Run(StringsInput293* me);

#endif // STRINGS_INPUT_293_H_