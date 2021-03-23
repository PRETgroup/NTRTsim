#ifndef STRINGS_INPUT_354_H_
#define STRINGS_INPUT_354_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_354 States
enum StringsInput354States {
    STRINGS_INPUT_354_INTEGRATE,
    STRINGS_INPUT_354_LIMIT,
    STRINGS_INPUT_354_SPIKE,
    STRINGS_INPUT_354_REFRACTORY,
};

// strings_input_354 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput354States state;
} StringsInput354;

// strings_input_354 Initialisation function
void StringsInput354Init(StringsInput354* me);

// strings_input_354 Execution function
void StringsInput354Run(StringsInput354* me);

#endif // STRINGS_INPUT_354_H_