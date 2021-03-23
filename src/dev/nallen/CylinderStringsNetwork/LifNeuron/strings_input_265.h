#ifndef STRINGS_INPUT_265_H_
#define STRINGS_INPUT_265_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_265 States
enum StringsInput265States {
    STRINGS_INPUT_265_INTEGRATE,
    STRINGS_INPUT_265_LIMIT,
    STRINGS_INPUT_265_SPIKE,
    STRINGS_INPUT_265_REFRACTORY,
};

// strings_input_265 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput265States state;
} StringsInput265;

// strings_input_265 Initialisation function
void StringsInput265Init(StringsInput265* me);

// strings_input_265 Execution function
void StringsInput265Run(StringsInput265* me);

#endif // STRINGS_INPUT_265_H_