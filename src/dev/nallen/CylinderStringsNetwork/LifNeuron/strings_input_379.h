#ifndef STRINGS_INPUT_379_H_
#define STRINGS_INPUT_379_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_379 States
enum StringsInput379States {
    STRINGS_INPUT_379_INTEGRATE,
    STRINGS_INPUT_379_LIMIT,
    STRINGS_INPUT_379_SPIKE,
    STRINGS_INPUT_379_REFRACTORY,
};

// strings_input_379 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput379States state;
} StringsInput379;

// strings_input_379 Initialisation function
void StringsInput379Init(StringsInput379* me);

// strings_input_379 Execution function
void StringsInput379Run(StringsInput379* me);

#endif // STRINGS_INPUT_379_H_