#ifndef STRINGS_INPUT_213_H_
#define STRINGS_INPUT_213_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_213 States
enum StringsInput213States {
    STRINGS_INPUT_213_INTEGRATE,
    STRINGS_INPUT_213_LIMIT,
    STRINGS_INPUT_213_SPIKE,
    STRINGS_INPUT_213_REFRACTORY,
};

// strings_input_213 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput213States state;
} StringsInput213;

// strings_input_213 Initialisation function
void StringsInput213Init(StringsInput213* me);

// strings_input_213 Execution function
void StringsInput213Run(StringsInput213* me);

#endif // STRINGS_INPUT_213_H_