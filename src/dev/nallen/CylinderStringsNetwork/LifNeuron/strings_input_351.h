#ifndef STRINGS_INPUT_351_H_
#define STRINGS_INPUT_351_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_351 States
enum StringsInput351States {
    STRINGS_INPUT_351_INTEGRATE,
    STRINGS_INPUT_351_LIMIT,
    STRINGS_INPUT_351_SPIKE,
    STRINGS_INPUT_351_REFRACTORY,
};

// strings_input_351 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput351States state;
} StringsInput351;

// strings_input_351 Initialisation function
void StringsInput351Init(StringsInput351* me);

// strings_input_351 Execution function
void StringsInput351Run(StringsInput351* me);

#endif // STRINGS_INPUT_351_H_