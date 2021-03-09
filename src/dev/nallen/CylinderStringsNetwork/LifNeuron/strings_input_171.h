#ifndef STRINGS_INPUT_171_H_
#define STRINGS_INPUT_171_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_171 States
enum StringsInput171States {
    STRINGS_INPUT_171_INTEGRATE,
    STRINGS_INPUT_171_LIMIT,
    STRINGS_INPUT_171_SPIKE,
    STRINGS_INPUT_171_REFRACTORY,
};

// strings_input_171 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput171States state;
} StringsInput171;

// strings_input_171 Initialisation function
void StringsInput171Init(StringsInput171* me);

// strings_input_171 Execution function
void StringsInput171Run(StringsInput171* me);

#endif // STRINGS_INPUT_171_H_