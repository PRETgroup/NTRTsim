#ifndef STRINGS_INPUT_157_H_
#define STRINGS_INPUT_157_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_157 States
enum StringsInput157States {
    STRINGS_INPUT_157_INTEGRATE,
    STRINGS_INPUT_157_LIMIT,
    STRINGS_INPUT_157_SPIKE,
    STRINGS_INPUT_157_REFRACTORY,
};

// strings_input_157 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput157States state;
} StringsInput157;

// strings_input_157 Initialisation function
void StringsInput157Init(StringsInput157* me);

// strings_input_157 Execution function
void StringsInput157Run(StringsInput157* me);

#endif // STRINGS_INPUT_157_H_