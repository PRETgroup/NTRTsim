#ifndef STRINGS_INPUT_172_H_
#define STRINGS_INPUT_172_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_172 States
enum StringsInput172States {
    STRINGS_INPUT_172_INTEGRATE,
    STRINGS_INPUT_172_LIMIT,
    STRINGS_INPUT_172_SPIKE,
    STRINGS_INPUT_172_REFRACTORY,
};

// strings_input_172 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput172States state;
} StringsInput172;

// strings_input_172 Initialisation function
void StringsInput172Init(StringsInput172* me);

// strings_input_172 Execution function
void StringsInput172Run(StringsInput172* me);

#endif // STRINGS_INPUT_172_H_