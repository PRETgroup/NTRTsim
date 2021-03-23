#ifndef STRINGS_INPUT_353_H_
#define STRINGS_INPUT_353_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_353 States
enum StringsInput353States {
    STRINGS_INPUT_353_INTEGRATE,
    STRINGS_INPUT_353_LIMIT,
    STRINGS_INPUT_353_SPIKE,
    STRINGS_INPUT_353_REFRACTORY,
};

// strings_input_353 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput353States state;
} StringsInput353;

// strings_input_353 Initialisation function
void StringsInput353Init(StringsInput353* me);

// strings_input_353 Execution function
void StringsInput353Run(StringsInput353* me);

#endif // STRINGS_INPUT_353_H_