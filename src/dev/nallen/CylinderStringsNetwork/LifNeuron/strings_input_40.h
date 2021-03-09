#ifndef STRINGS_INPUT_40_H_
#define STRINGS_INPUT_40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_40 States
enum StringsInput40States {
    STRINGS_INPUT_40_INTEGRATE,
    STRINGS_INPUT_40_LIMIT,
    STRINGS_INPUT_40_SPIKE,
    STRINGS_INPUT_40_REFRACTORY,
};

// strings_input_40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput40States state;
} StringsInput40;

// strings_input_40 Initialisation function
void StringsInput40Init(StringsInput40* me);

// strings_input_40 Execution function
void StringsInput40Run(StringsInput40* me);

#endif // STRINGS_INPUT_40_H_