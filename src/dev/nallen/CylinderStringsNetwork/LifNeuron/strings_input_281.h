#ifndef STRINGS_INPUT_281_H_
#define STRINGS_INPUT_281_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_281 States
enum StringsInput281States {
    STRINGS_INPUT_281_INTEGRATE,
    STRINGS_INPUT_281_LIMIT,
    STRINGS_INPUT_281_SPIKE,
    STRINGS_INPUT_281_REFRACTORY,
};

// strings_input_281 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput281States state;
} StringsInput281;

// strings_input_281 Initialisation function
void StringsInput281Init(StringsInput281* me);

// strings_input_281 Execution function
void StringsInput281Run(StringsInput281* me);

#endif // STRINGS_INPUT_281_H_