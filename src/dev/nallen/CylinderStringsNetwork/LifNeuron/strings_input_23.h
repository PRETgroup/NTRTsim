#ifndef STRINGS_INPUT_23_H_
#define STRINGS_INPUT_23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_23 States
enum StringsInput23States {
    STRINGS_INPUT_23_INTEGRATE,
    STRINGS_INPUT_23_LIMIT,
    STRINGS_INPUT_23_SPIKE,
    STRINGS_INPUT_23_REFRACTORY,
};

// strings_input_23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput23States state;
} StringsInput23;

// strings_input_23 Initialisation function
void StringsInput23Init(StringsInput23* me);

// strings_input_23 Execution function
void StringsInput23Run(StringsInput23* me);

#endif // STRINGS_INPUT_23_H_