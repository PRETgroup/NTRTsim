#ifndef STRINGS_INPUT_306_H_
#define STRINGS_INPUT_306_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_306 States
enum StringsInput306States {
    STRINGS_INPUT_306_INTEGRATE,
    STRINGS_INPUT_306_LIMIT,
    STRINGS_INPUT_306_SPIKE,
    STRINGS_INPUT_306_REFRACTORY,
};

// strings_input_306 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput306States state;
} StringsInput306;

// strings_input_306 Initialisation function
void StringsInput306Init(StringsInput306* me);

// strings_input_306 Execution function
void StringsInput306Run(StringsInput306* me);

#endif // STRINGS_INPUT_306_H_