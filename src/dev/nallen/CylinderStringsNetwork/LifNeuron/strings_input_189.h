#ifndef STRINGS_INPUT_189_H_
#define STRINGS_INPUT_189_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_189 States
enum StringsInput189States {
    STRINGS_INPUT_189_INTEGRATE,
    STRINGS_INPUT_189_LIMIT,
    STRINGS_INPUT_189_SPIKE,
    STRINGS_INPUT_189_REFRACTORY,
};

// strings_input_189 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput189States state;
} StringsInput189;

// strings_input_189 Initialisation function
void StringsInput189Init(StringsInput189* me);

// strings_input_189 Execution function
void StringsInput189Run(StringsInput189* me);

#endif // STRINGS_INPUT_189_H_