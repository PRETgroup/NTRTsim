#ifndef STRINGS_INPUT_237_H_
#define STRINGS_INPUT_237_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_237 States
enum StringsInput237States {
    STRINGS_INPUT_237_INTEGRATE,
    STRINGS_INPUT_237_LIMIT,
    STRINGS_INPUT_237_SPIKE,
    STRINGS_INPUT_237_REFRACTORY,
};

// strings_input_237 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput237States state;
} StringsInput237;

// strings_input_237 Initialisation function
void StringsInput237Init(StringsInput237* me);

// strings_input_237 Execution function
void StringsInput237Run(StringsInput237* me);

#endif // STRINGS_INPUT_237_H_