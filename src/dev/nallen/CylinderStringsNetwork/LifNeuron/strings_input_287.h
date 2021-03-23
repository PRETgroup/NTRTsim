#ifndef STRINGS_INPUT_287_H_
#define STRINGS_INPUT_287_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_287 States
enum StringsInput287States {
    STRINGS_INPUT_287_INTEGRATE,
    STRINGS_INPUT_287_LIMIT,
    STRINGS_INPUT_287_SPIKE,
    STRINGS_INPUT_287_REFRACTORY,
};

// strings_input_287 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput287States state;
} StringsInput287;

// strings_input_287 Initialisation function
void StringsInput287Init(StringsInput287* me);

// strings_input_287 Execution function
void StringsInput287Run(StringsInput287* me);

#endif // STRINGS_INPUT_287_H_