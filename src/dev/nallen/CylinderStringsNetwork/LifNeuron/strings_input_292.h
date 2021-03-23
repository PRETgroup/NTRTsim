#ifndef STRINGS_INPUT_292_H_
#define STRINGS_INPUT_292_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_292 States
enum StringsInput292States {
    STRINGS_INPUT_292_INTEGRATE,
    STRINGS_INPUT_292_LIMIT,
    STRINGS_INPUT_292_SPIKE,
    STRINGS_INPUT_292_REFRACTORY,
};

// strings_input_292 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput292States state;
} StringsInput292;

// strings_input_292 Initialisation function
void StringsInput292Init(StringsInput292* me);

// strings_input_292 Execution function
void StringsInput292Run(StringsInput292* me);

#endif // STRINGS_INPUT_292_H_