#ifndef STRINGS_INPUT_277_H_
#define STRINGS_INPUT_277_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_277 States
enum StringsInput277States {
    STRINGS_INPUT_277_INTEGRATE,
    STRINGS_INPUT_277_LIMIT,
    STRINGS_INPUT_277_SPIKE,
    STRINGS_INPUT_277_REFRACTORY,
};

// strings_input_277 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput277States state;
} StringsInput277;

// strings_input_277 Initialisation function
void StringsInput277Init(StringsInput277* me);

// strings_input_277 Execution function
void StringsInput277Run(StringsInput277* me);

#endif // STRINGS_INPUT_277_H_