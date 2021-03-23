#ifndef STRINGS_INPUT_317_H_
#define STRINGS_INPUT_317_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_317 States
enum StringsInput317States {
    STRINGS_INPUT_317_INTEGRATE,
    STRINGS_INPUT_317_LIMIT,
    STRINGS_INPUT_317_SPIKE,
    STRINGS_INPUT_317_REFRACTORY,
};

// strings_input_317 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput317States state;
} StringsInput317;

// strings_input_317 Initialisation function
void StringsInput317Init(StringsInput317* me);

// strings_input_317 Execution function
void StringsInput317Run(StringsInput317* me);

#endif // STRINGS_INPUT_317_H_