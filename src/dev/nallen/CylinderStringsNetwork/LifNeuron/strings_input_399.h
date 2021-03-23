#ifndef STRINGS_INPUT_399_H_
#define STRINGS_INPUT_399_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_399 States
enum StringsInput399States {
    STRINGS_INPUT_399_INTEGRATE,
    STRINGS_INPUT_399_LIMIT,
    STRINGS_INPUT_399_SPIKE,
    STRINGS_INPUT_399_REFRACTORY,
};

// strings_input_399 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput399States state;
} StringsInput399;

// strings_input_399 Initialisation function
void StringsInput399Init(StringsInput399* me);

// strings_input_399 Execution function
void StringsInput399Run(StringsInput399* me);

#endif // STRINGS_INPUT_399_H_