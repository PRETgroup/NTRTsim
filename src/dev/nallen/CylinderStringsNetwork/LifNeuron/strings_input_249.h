#ifndef STRINGS_INPUT_249_H_
#define STRINGS_INPUT_249_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_249 States
enum StringsInput249States {
    STRINGS_INPUT_249_INTEGRATE,
    STRINGS_INPUT_249_LIMIT,
    STRINGS_INPUT_249_SPIKE,
    STRINGS_INPUT_249_REFRACTORY,
};

// strings_input_249 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput249States state;
} StringsInput249;

// strings_input_249 Initialisation function
void StringsInput249Init(StringsInput249* me);

// strings_input_249 Execution function
void StringsInput249Run(StringsInput249* me);

#endif // STRINGS_INPUT_249_H_