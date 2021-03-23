#ifndef STRINGS_INPUT_372_H_
#define STRINGS_INPUT_372_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_372 States
enum StringsInput372States {
    STRINGS_INPUT_372_INTEGRATE,
    STRINGS_INPUT_372_LIMIT,
    STRINGS_INPUT_372_SPIKE,
    STRINGS_INPUT_372_REFRACTORY,
};

// strings_input_372 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput372States state;
} StringsInput372;

// strings_input_372 Initialisation function
void StringsInput372Init(StringsInput372* me);

// strings_input_372 Execution function
void StringsInput372Run(StringsInput372* me);

#endif // STRINGS_INPUT_372_H_