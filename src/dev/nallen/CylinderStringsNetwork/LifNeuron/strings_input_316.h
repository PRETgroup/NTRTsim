#ifndef STRINGS_INPUT_316_H_
#define STRINGS_INPUT_316_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_316 States
enum StringsInput316States {
    STRINGS_INPUT_316_INTEGRATE,
    STRINGS_INPUT_316_LIMIT,
    STRINGS_INPUT_316_SPIKE,
    STRINGS_INPUT_316_REFRACTORY,
};

// strings_input_316 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput316States state;
} StringsInput316;

// strings_input_316 Initialisation function
void StringsInput316Init(StringsInput316* me);

// strings_input_316 Execution function
void StringsInput316Run(StringsInput316* me);

#endif // STRINGS_INPUT_316_H_