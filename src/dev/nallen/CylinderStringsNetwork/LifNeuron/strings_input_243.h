#ifndef STRINGS_INPUT_243_H_
#define STRINGS_INPUT_243_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_243 States
enum StringsInput243States {
    STRINGS_INPUT_243_INTEGRATE,
    STRINGS_INPUT_243_LIMIT,
    STRINGS_INPUT_243_SPIKE,
    STRINGS_INPUT_243_REFRACTORY,
};

// strings_input_243 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput243States state;
} StringsInput243;

// strings_input_243 Initialisation function
void StringsInput243Init(StringsInput243* me);

// strings_input_243 Execution function
void StringsInput243Run(StringsInput243* me);

#endif // STRINGS_INPUT_243_H_