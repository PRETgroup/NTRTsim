#ifndef STRINGS_INPUT_365_H_
#define STRINGS_INPUT_365_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_365 States
enum StringsInput365States {
    STRINGS_INPUT_365_INTEGRATE,
    STRINGS_INPUT_365_LIMIT,
    STRINGS_INPUT_365_SPIKE,
    STRINGS_INPUT_365_REFRACTORY,
};

// strings_input_365 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput365States state;
} StringsInput365;

// strings_input_365 Initialisation function
void StringsInput365Init(StringsInput365* me);

// strings_input_365 Execution function
void StringsInput365Run(StringsInput365* me);

#endif // STRINGS_INPUT_365_H_