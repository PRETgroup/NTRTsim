#ifndef STRINGS_INPUT_20_H_
#define STRINGS_INPUT_20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_20 States
enum StringsInput20States {
    STRINGS_INPUT_20_INTEGRATE,
    STRINGS_INPUT_20_LIMIT,
    STRINGS_INPUT_20_SPIKE,
    STRINGS_INPUT_20_REFRACTORY,
};

// strings_input_20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput20States state;
} StringsInput20;

// strings_input_20 Initialisation function
void StringsInput20Init(StringsInput20* me);

// strings_input_20 Execution function
void StringsInput20Run(StringsInput20* me);

#endif // STRINGS_INPUT_20_H_