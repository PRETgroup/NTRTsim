#ifndef STRINGS_INPUT_162_H_
#define STRINGS_INPUT_162_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_162 States
enum StringsInput162States {
    STRINGS_INPUT_162_INTEGRATE,
    STRINGS_INPUT_162_LIMIT,
    STRINGS_INPUT_162_SPIKE,
    STRINGS_INPUT_162_REFRACTORY,
};

// strings_input_162 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput162States state;
} StringsInput162;

// strings_input_162 Initialisation function
void StringsInput162Init(StringsInput162* me);

// strings_input_162 Execution function
void StringsInput162Run(StringsInput162* me);

#endif // STRINGS_INPUT_162_H_