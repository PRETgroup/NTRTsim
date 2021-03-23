#ifndef STRINGS_INPUT_332_H_
#define STRINGS_INPUT_332_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_332 States
enum StringsInput332States {
    STRINGS_INPUT_332_INTEGRATE,
    STRINGS_INPUT_332_LIMIT,
    STRINGS_INPUT_332_SPIKE,
    STRINGS_INPUT_332_REFRACTORY,
};

// strings_input_332 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput332States state;
} StringsInput332;

// strings_input_332 Initialisation function
void StringsInput332Init(StringsInput332* me);

// strings_input_332 Execution function
void StringsInput332Run(StringsInput332* me);

#endif // STRINGS_INPUT_332_H_