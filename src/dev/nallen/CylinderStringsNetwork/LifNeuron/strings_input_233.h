#ifndef STRINGS_INPUT_233_H_
#define STRINGS_INPUT_233_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_233 States
enum StringsInput233States {
    STRINGS_INPUT_233_INTEGRATE,
    STRINGS_INPUT_233_LIMIT,
    STRINGS_INPUT_233_SPIKE,
    STRINGS_INPUT_233_REFRACTORY,
};

// strings_input_233 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput233States state;
} StringsInput233;

// strings_input_233 Initialisation function
void StringsInput233Init(StringsInput233* me);

// strings_input_233 Execution function
void StringsInput233Run(StringsInput233* me);

#endif // STRINGS_INPUT_233_H_