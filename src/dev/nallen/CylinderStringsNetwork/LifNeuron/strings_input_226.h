#ifndef STRINGS_INPUT_226_H_
#define STRINGS_INPUT_226_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_226 States
enum StringsInput226States {
    STRINGS_INPUT_226_INTEGRATE,
    STRINGS_INPUT_226_LIMIT,
    STRINGS_INPUT_226_SPIKE,
    STRINGS_INPUT_226_REFRACTORY,
};

// strings_input_226 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput226States state;
} StringsInput226;

// strings_input_226 Initialisation function
void StringsInput226Init(StringsInput226* me);

// strings_input_226 Execution function
void StringsInput226Run(StringsInput226* me);

#endif // STRINGS_INPUT_226_H_