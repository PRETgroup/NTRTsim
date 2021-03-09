#ifndef STRINGS_INPUT_126_H_
#define STRINGS_INPUT_126_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_126 States
enum StringsInput126States {
    STRINGS_INPUT_126_INTEGRATE,
    STRINGS_INPUT_126_LIMIT,
    STRINGS_INPUT_126_SPIKE,
    STRINGS_INPUT_126_REFRACTORY,
};

// strings_input_126 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput126States state;
} StringsInput126;

// strings_input_126 Initialisation function
void StringsInput126Init(StringsInput126* me);

// strings_input_126 Execution function
void StringsInput126Run(StringsInput126* me);

#endif // STRINGS_INPUT_126_H_