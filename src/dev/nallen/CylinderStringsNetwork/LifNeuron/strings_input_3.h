#ifndef STRINGS_INPUT_3_H_
#define STRINGS_INPUT_3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_3 States
enum StringsInput3States {
    STRINGS_INPUT_3_INTEGRATE,
    STRINGS_INPUT_3_LIMIT,
    STRINGS_INPUT_3_SPIKE,
    STRINGS_INPUT_3_REFRACTORY,
};

// strings_input_3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput3States state;
} StringsInput3;

// strings_input_3 Initialisation function
void StringsInput3Init(StringsInput3* me);

// strings_input_3 Execution function
void StringsInput3Run(StringsInput3* me);

#endif // STRINGS_INPUT_3_H_