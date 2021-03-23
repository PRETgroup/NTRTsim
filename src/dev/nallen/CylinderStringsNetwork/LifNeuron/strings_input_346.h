#ifndef STRINGS_INPUT_346_H_
#define STRINGS_INPUT_346_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_346 States
enum StringsInput346States {
    STRINGS_INPUT_346_INTEGRATE,
    STRINGS_INPUT_346_LIMIT,
    STRINGS_INPUT_346_SPIKE,
    STRINGS_INPUT_346_REFRACTORY,
};

// strings_input_346 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput346States state;
} StringsInput346;

// strings_input_346 Initialisation function
void StringsInput346Init(StringsInput346* me);

// strings_input_346 Execution function
void StringsInput346Run(StringsInput346* me);

#endif // STRINGS_INPUT_346_H_