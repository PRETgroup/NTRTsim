#ifndef STRINGS_INPUT_239_H_
#define STRINGS_INPUT_239_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_239 States
enum StringsInput239States {
    STRINGS_INPUT_239_INTEGRATE,
    STRINGS_INPUT_239_LIMIT,
    STRINGS_INPUT_239_SPIKE,
    STRINGS_INPUT_239_REFRACTORY,
};

// strings_input_239 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput239States state;
} StringsInput239;

// strings_input_239 Initialisation function
void StringsInput239Init(StringsInput239* me);

// strings_input_239 Execution function
void StringsInput239Run(StringsInput239* me);

#endif // STRINGS_INPUT_239_H_