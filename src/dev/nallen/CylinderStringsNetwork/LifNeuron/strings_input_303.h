#ifndef STRINGS_INPUT_303_H_
#define STRINGS_INPUT_303_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_303 States
enum StringsInput303States {
    STRINGS_INPUT_303_INTEGRATE,
    STRINGS_INPUT_303_LIMIT,
    STRINGS_INPUT_303_SPIKE,
    STRINGS_INPUT_303_REFRACTORY,
};

// strings_input_303 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput303States state;
} StringsInput303;

// strings_input_303 Initialisation function
void StringsInput303Init(StringsInput303* me);

// strings_input_303 Execution function
void StringsInput303Run(StringsInput303* me);

#endif // STRINGS_INPUT_303_H_