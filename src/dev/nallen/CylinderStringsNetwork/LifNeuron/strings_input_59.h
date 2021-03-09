#ifndef STRINGS_INPUT_59_H_
#define STRINGS_INPUT_59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_59 States
enum StringsInput59States {
    STRINGS_INPUT_59_INTEGRATE,
    STRINGS_INPUT_59_LIMIT,
    STRINGS_INPUT_59_SPIKE,
    STRINGS_INPUT_59_REFRACTORY,
};

// strings_input_59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput59States state;
} StringsInput59;

// strings_input_59 Initialisation function
void StringsInput59Init(StringsInput59* me);

// strings_input_59 Execution function
void StringsInput59Run(StringsInput59* me);

#endif // STRINGS_INPUT_59_H_