#ifndef STRINGS_INPUT_15_H_
#define STRINGS_INPUT_15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_15 States
enum StringsInput15States {
    STRINGS_INPUT_15_INTEGRATE,
    STRINGS_INPUT_15_LIMIT,
    STRINGS_INPUT_15_SPIKE,
    STRINGS_INPUT_15_REFRACTORY,
};

// strings_input_15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput15States state;
} StringsInput15;

// strings_input_15 Initialisation function
void StringsInput15Init(StringsInput15* me);

// strings_input_15 Execution function
void StringsInput15Run(StringsInput15* me);

#endif // STRINGS_INPUT_15_H_