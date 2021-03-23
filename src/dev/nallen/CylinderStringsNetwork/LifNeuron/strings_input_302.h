#ifndef STRINGS_INPUT_302_H_
#define STRINGS_INPUT_302_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_302 States
enum StringsInput302States {
    STRINGS_INPUT_302_INTEGRATE,
    STRINGS_INPUT_302_LIMIT,
    STRINGS_INPUT_302_SPIKE,
    STRINGS_INPUT_302_REFRACTORY,
};

// strings_input_302 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput302States state;
} StringsInput302;

// strings_input_302 Initialisation function
void StringsInput302Init(StringsInput302* me);

// strings_input_302 Execution function
void StringsInput302Run(StringsInput302* me);

#endif // STRINGS_INPUT_302_H_