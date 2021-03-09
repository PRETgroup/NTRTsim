#ifndef STRINGS_INPUT_114_H_
#define STRINGS_INPUT_114_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_114 States
enum StringsInput114States {
    STRINGS_INPUT_114_INTEGRATE,
    STRINGS_INPUT_114_LIMIT,
    STRINGS_INPUT_114_SPIKE,
    STRINGS_INPUT_114_REFRACTORY,
};

// strings_input_114 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput114States state;
} StringsInput114;

// strings_input_114 Initialisation function
void StringsInput114Init(StringsInput114* me);

// strings_input_114 Execution function
void StringsInput114Run(StringsInput114* me);

#endif // STRINGS_INPUT_114_H_