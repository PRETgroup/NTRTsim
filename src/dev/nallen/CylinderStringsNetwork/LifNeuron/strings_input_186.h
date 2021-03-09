#ifndef STRINGS_INPUT_186_H_
#define STRINGS_INPUT_186_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_186 States
enum StringsInput186States {
    STRINGS_INPUT_186_INTEGRATE,
    STRINGS_INPUT_186_LIMIT,
    STRINGS_INPUT_186_SPIKE,
    STRINGS_INPUT_186_REFRACTORY,
};

// strings_input_186 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput186States state;
} StringsInput186;

// strings_input_186 Initialisation function
void StringsInput186Init(StringsInput186* me);

// strings_input_186 Execution function
void StringsInput186Run(StringsInput186* me);

#endif // STRINGS_INPUT_186_H_