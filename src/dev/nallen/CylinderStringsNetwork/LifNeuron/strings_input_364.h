#ifndef STRINGS_INPUT_364_H_
#define STRINGS_INPUT_364_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_364 States
enum StringsInput364States {
    STRINGS_INPUT_364_INTEGRATE,
    STRINGS_INPUT_364_LIMIT,
    STRINGS_INPUT_364_SPIKE,
    STRINGS_INPUT_364_REFRACTORY,
};

// strings_input_364 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput364States state;
} StringsInput364;

// strings_input_364 Initialisation function
void StringsInput364Init(StringsInput364* me);

// strings_input_364 Execution function
void StringsInput364Run(StringsInput364* me);

#endif // STRINGS_INPUT_364_H_