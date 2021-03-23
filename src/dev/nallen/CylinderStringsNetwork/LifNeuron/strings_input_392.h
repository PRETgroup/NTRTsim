#ifndef STRINGS_INPUT_392_H_
#define STRINGS_INPUT_392_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_392 States
enum StringsInput392States {
    STRINGS_INPUT_392_INTEGRATE,
    STRINGS_INPUT_392_LIMIT,
    STRINGS_INPUT_392_SPIKE,
    STRINGS_INPUT_392_REFRACTORY,
};

// strings_input_392 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput392States state;
} StringsInput392;

// strings_input_392 Initialisation function
void StringsInput392Init(StringsInput392* me);

// strings_input_392 Execution function
void StringsInput392Run(StringsInput392* me);

#endif // STRINGS_INPUT_392_H_