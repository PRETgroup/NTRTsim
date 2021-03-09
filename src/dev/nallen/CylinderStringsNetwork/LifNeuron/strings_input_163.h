#ifndef STRINGS_INPUT_163_H_
#define STRINGS_INPUT_163_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_163 States
enum StringsInput163States {
    STRINGS_INPUT_163_INTEGRATE,
    STRINGS_INPUT_163_LIMIT,
    STRINGS_INPUT_163_SPIKE,
    STRINGS_INPUT_163_REFRACTORY,
};

// strings_input_163 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput163States state;
} StringsInput163;

// strings_input_163 Initialisation function
void StringsInput163Init(StringsInput163* me);

// strings_input_163 Execution function
void StringsInput163Run(StringsInput163* me);

#endif // STRINGS_INPUT_163_H_