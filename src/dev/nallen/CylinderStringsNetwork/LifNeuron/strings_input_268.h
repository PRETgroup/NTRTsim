#ifndef STRINGS_INPUT_268_H_
#define STRINGS_INPUT_268_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_268 States
enum StringsInput268States {
    STRINGS_INPUT_268_INTEGRATE,
    STRINGS_INPUT_268_LIMIT,
    STRINGS_INPUT_268_SPIKE,
    STRINGS_INPUT_268_REFRACTORY,
};

// strings_input_268 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput268States state;
} StringsInput268;

// strings_input_268 Initialisation function
void StringsInput268Init(StringsInput268* me);

// strings_input_268 Execution function
void StringsInput268Run(StringsInput268* me);

#endif // STRINGS_INPUT_268_H_