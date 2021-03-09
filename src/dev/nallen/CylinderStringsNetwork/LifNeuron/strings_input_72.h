#ifndef STRINGS_INPUT_72_H_
#define STRINGS_INPUT_72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_72 States
enum StringsInput72States {
    STRINGS_INPUT_72_INTEGRATE,
    STRINGS_INPUT_72_LIMIT,
    STRINGS_INPUT_72_SPIKE,
    STRINGS_INPUT_72_REFRACTORY,
};

// strings_input_72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput72States state;
} StringsInput72;

// strings_input_72 Initialisation function
void StringsInput72Init(StringsInput72* me);

// strings_input_72 Execution function
void StringsInput72Run(StringsInput72* me);

#endif // STRINGS_INPUT_72_H_