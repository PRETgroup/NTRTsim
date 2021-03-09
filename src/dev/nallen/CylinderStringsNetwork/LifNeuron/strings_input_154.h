#ifndef STRINGS_INPUT_154_H_
#define STRINGS_INPUT_154_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_154 States
enum StringsInput154States {
    STRINGS_INPUT_154_INTEGRATE,
    STRINGS_INPUT_154_LIMIT,
    STRINGS_INPUT_154_SPIKE,
    STRINGS_INPUT_154_REFRACTORY,
};

// strings_input_154 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput154States state;
} StringsInput154;

// strings_input_154 Initialisation function
void StringsInput154Init(StringsInput154* me);

// strings_input_154 Execution function
void StringsInput154Run(StringsInput154* me);

#endif // STRINGS_INPUT_154_H_