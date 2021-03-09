#ifndef STRINGS_INPUT_110_H_
#define STRINGS_INPUT_110_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_110 States
enum StringsInput110States {
    STRINGS_INPUT_110_INTEGRATE,
    STRINGS_INPUT_110_LIMIT,
    STRINGS_INPUT_110_SPIKE,
    STRINGS_INPUT_110_REFRACTORY,
};

// strings_input_110 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput110States state;
} StringsInput110;

// strings_input_110 Initialisation function
void StringsInput110Init(StringsInput110* me);

// strings_input_110 Execution function
void StringsInput110Run(StringsInput110* me);

#endif // STRINGS_INPUT_110_H_