#ifndef STRINGS_INPUT_231_H_
#define STRINGS_INPUT_231_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_231 States
enum StringsInput231States {
    STRINGS_INPUT_231_INTEGRATE,
    STRINGS_INPUT_231_LIMIT,
    STRINGS_INPUT_231_SPIKE,
    STRINGS_INPUT_231_REFRACTORY,
};

// strings_input_231 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput231States state;
} StringsInput231;

// strings_input_231 Initialisation function
void StringsInput231Init(StringsInput231* me);

// strings_input_231 Execution function
void StringsInput231Run(StringsInput231* me);

#endif // STRINGS_INPUT_231_H_