#ifndef STRINGS_INPUT_382_H_
#define STRINGS_INPUT_382_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_382 States
enum StringsInput382States {
    STRINGS_INPUT_382_INTEGRATE,
    STRINGS_INPUT_382_LIMIT,
    STRINGS_INPUT_382_SPIKE,
    STRINGS_INPUT_382_REFRACTORY,
};

// strings_input_382 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput382States state;
} StringsInput382;

// strings_input_382 Initialisation function
void StringsInput382Init(StringsInput382* me);

// strings_input_382 Execution function
void StringsInput382Run(StringsInput382* me);

#endif // STRINGS_INPUT_382_H_