#ifndef STRINGS_INPUT_38_H_
#define STRINGS_INPUT_38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_38 States
enum StringsInput38States {
    STRINGS_INPUT_38_INTEGRATE,
    STRINGS_INPUT_38_LIMIT,
    STRINGS_INPUT_38_SPIKE,
    STRINGS_INPUT_38_REFRACTORY,
};

// strings_input_38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput38States state;
} StringsInput38;

// strings_input_38 Initialisation function
void StringsInput38Init(StringsInput38* me);

// strings_input_38 Execution function
void StringsInput38Run(StringsInput38* me);

#endif // STRINGS_INPUT_38_H_