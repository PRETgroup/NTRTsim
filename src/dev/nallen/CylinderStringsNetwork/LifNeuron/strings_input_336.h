#ifndef STRINGS_INPUT_336_H_
#define STRINGS_INPUT_336_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_336 States
enum StringsInput336States {
    STRINGS_INPUT_336_INTEGRATE,
    STRINGS_INPUT_336_LIMIT,
    STRINGS_INPUT_336_SPIKE,
    STRINGS_INPUT_336_REFRACTORY,
};

// strings_input_336 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput336States state;
} StringsInput336;

// strings_input_336 Initialisation function
void StringsInput336Init(StringsInput336* me);

// strings_input_336 Execution function
void StringsInput336Run(StringsInput336* me);

#endif // STRINGS_INPUT_336_H_