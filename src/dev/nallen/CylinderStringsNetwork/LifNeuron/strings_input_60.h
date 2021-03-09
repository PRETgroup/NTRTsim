#ifndef STRINGS_INPUT_60_H_
#define STRINGS_INPUT_60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_60 States
enum StringsInput60States {
    STRINGS_INPUT_60_INTEGRATE,
    STRINGS_INPUT_60_LIMIT,
    STRINGS_INPUT_60_SPIKE,
    STRINGS_INPUT_60_REFRACTORY,
};

// strings_input_60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput60States state;
} StringsInput60;

// strings_input_60 Initialisation function
void StringsInput60Init(StringsInput60* me);

// strings_input_60 Execution function
void StringsInput60Run(StringsInput60* me);

#endif // STRINGS_INPUT_60_H_