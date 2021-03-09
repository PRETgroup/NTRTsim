#ifndef STRINGS_INPUT_198_H_
#define STRINGS_INPUT_198_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_198 States
enum StringsInput198States {
    STRINGS_INPUT_198_INTEGRATE,
    STRINGS_INPUT_198_LIMIT,
    STRINGS_INPUT_198_SPIKE,
    STRINGS_INPUT_198_REFRACTORY,
};

// strings_input_198 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput198States state;
} StringsInput198;

// strings_input_198 Initialisation function
void StringsInput198Init(StringsInput198* me);

// strings_input_198 Execution function
void StringsInput198Run(StringsInput198* me);

#endif // STRINGS_INPUT_198_H_