#ifndef STRINGS_INPUT_291_H_
#define STRINGS_INPUT_291_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_291 States
enum StringsInput291States {
    STRINGS_INPUT_291_INTEGRATE,
    STRINGS_INPUT_291_LIMIT,
    STRINGS_INPUT_291_SPIKE,
    STRINGS_INPUT_291_REFRACTORY,
};

// strings_input_291 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput291States state;
} StringsInput291;

// strings_input_291 Initialisation function
void StringsInput291Init(StringsInput291* me);

// strings_input_291 Execution function
void StringsInput291Run(StringsInput291* me);

#endif // STRINGS_INPUT_291_H_