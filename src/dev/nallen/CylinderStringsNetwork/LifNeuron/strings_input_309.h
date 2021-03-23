#ifndef STRINGS_INPUT_309_H_
#define STRINGS_INPUT_309_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_309 States
enum StringsInput309States {
    STRINGS_INPUT_309_INTEGRATE,
    STRINGS_INPUT_309_LIMIT,
    STRINGS_INPUT_309_SPIKE,
    STRINGS_INPUT_309_REFRACTORY,
};

// strings_input_309 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput309States state;
} StringsInput309;

// strings_input_309 Initialisation function
void StringsInput309Init(StringsInput309* me);

// strings_input_309 Execution function
void StringsInput309Run(StringsInput309* me);

#endif // STRINGS_INPUT_309_H_