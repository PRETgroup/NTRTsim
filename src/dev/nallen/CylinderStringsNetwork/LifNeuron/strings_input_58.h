#ifndef STRINGS_INPUT_58_H_
#define STRINGS_INPUT_58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_58 States
enum StringsInput58States {
    STRINGS_INPUT_58_INTEGRATE,
    STRINGS_INPUT_58_LIMIT,
    STRINGS_INPUT_58_SPIKE,
    STRINGS_INPUT_58_REFRACTORY,
};

// strings_input_58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput58States state;
} StringsInput58;

// strings_input_58 Initialisation function
void StringsInput58Init(StringsInput58* me);

// strings_input_58 Execution function
void StringsInput58Run(StringsInput58* me);

#endif // STRINGS_INPUT_58_H_