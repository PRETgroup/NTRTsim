#ifndef STRINGS_INPUT_225_H_
#define STRINGS_INPUT_225_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_225 States
enum StringsInput225States {
    STRINGS_INPUT_225_INTEGRATE,
    STRINGS_INPUT_225_LIMIT,
    STRINGS_INPUT_225_SPIKE,
    STRINGS_INPUT_225_REFRACTORY,
};

// strings_input_225 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput225States state;
} StringsInput225;

// strings_input_225 Initialisation function
void StringsInput225Init(StringsInput225* me);

// strings_input_225 Execution function
void StringsInput225Run(StringsInput225* me);

#endif // STRINGS_INPUT_225_H_