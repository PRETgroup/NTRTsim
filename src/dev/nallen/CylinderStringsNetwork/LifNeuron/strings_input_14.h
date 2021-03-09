#ifndef STRINGS_INPUT_14_H_
#define STRINGS_INPUT_14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_14 States
enum StringsInput14States {
    STRINGS_INPUT_14_INTEGRATE,
    STRINGS_INPUT_14_LIMIT,
    STRINGS_INPUT_14_SPIKE,
    STRINGS_INPUT_14_REFRACTORY,
};

// strings_input_14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput14States state;
} StringsInput14;

// strings_input_14 Initialisation function
void StringsInput14Init(StringsInput14* me);

// strings_input_14 Execution function
void StringsInput14Run(StringsInput14* me);

#endif // STRINGS_INPUT_14_H_