#ifndef STRINGS_INPUT_335_H_
#define STRINGS_INPUT_335_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_335 States
enum StringsInput335States {
    STRINGS_INPUT_335_INTEGRATE,
    STRINGS_INPUT_335_LIMIT,
    STRINGS_INPUT_335_SPIKE,
    STRINGS_INPUT_335_REFRACTORY,
};

// strings_input_335 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput335States state;
} StringsInput335;

// strings_input_335 Initialisation function
void StringsInput335Init(StringsInput335* me);

// strings_input_335 Execution function
void StringsInput335Run(StringsInput335* me);

#endif // STRINGS_INPUT_335_H_