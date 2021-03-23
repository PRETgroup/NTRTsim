#ifndef STRINGS_INPUT_389_H_
#define STRINGS_INPUT_389_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_389 States
enum StringsInput389States {
    STRINGS_INPUT_389_INTEGRATE,
    STRINGS_INPUT_389_LIMIT,
    STRINGS_INPUT_389_SPIKE,
    STRINGS_INPUT_389_REFRACTORY,
};

// strings_input_389 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput389States state;
} StringsInput389;

// strings_input_389 Initialisation function
void StringsInput389Init(StringsInput389* me);

// strings_input_389 Execution function
void StringsInput389Run(StringsInput389* me);

#endif // STRINGS_INPUT_389_H_