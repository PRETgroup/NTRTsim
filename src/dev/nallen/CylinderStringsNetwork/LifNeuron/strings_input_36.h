#ifndef STRINGS_INPUT_36_H_
#define STRINGS_INPUT_36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_36 States
enum StringsInput36States {
    STRINGS_INPUT_36_INTEGRATE,
    STRINGS_INPUT_36_LIMIT,
    STRINGS_INPUT_36_SPIKE,
    STRINGS_INPUT_36_REFRACTORY,
};

// strings_input_36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput36States state;
} StringsInput36;

// strings_input_36 Initialisation function
void StringsInput36Init(StringsInput36* me);

// strings_input_36 Execution function
void StringsInput36Run(StringsInput36* me);

#endif // STRINGS_INPUT_36_H_