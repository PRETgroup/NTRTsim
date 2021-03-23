#ifndef STRINGS_INPUT_397_H_
#define STRINGS_INPUT_397_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_397 States
enum StringsInput397States {
    STRINGS_INPUT_397_INTEGRATE,
    STRINGS_INPUT_397_LIMIT,
    STRINGS_INPUT_397_SPIKE,
    STRINGS_INPUT_397_REFRACTORY,
};

// strings_input_397 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput397States state;
} StringsInput397;

// strings_input_397 Initialisation function
void StringsInput397Init(StringsInput397* me);

// strings_input_397 Execution function
void StringsInput397Run(StringsInput397* me);

#endif // STRINGS_INPUT_397_H_