#ifndef STRINGS_INPUT_363_H_
#define STRINGS_INPUT_363_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_363 States
enum StringsInput363States {
    STRINGS_INPUT_363_INTEGRATE,
    STRINGS_INPUT_363_LIMIT,
    STRINGS_INPUT_363_SPIKE,
    STRINGS_INPUT_363_REFRACTORY,
};

// strings_input_363 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput363States state;
} StringsInput363;

// strings_input_363 Initialisation function
void StringsInput363Init(StringsInput363* me);

// strings_input_363 Execution function
void StringsInput363Run(StringsInput363* me);

#endif // STRINGS_INPUT_363_H_