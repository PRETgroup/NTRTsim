#ifndef STRINGS_INPUT_4_H_
#define STRINGS_INPUT_4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_4 States
enum StringsInput4States {
    STRINGS_INPUT_4_INTEGRATE,
    STRINGS_INPUT_4_LIMIT,
    STRINGS_INPUT_4_SPIKE,
    STRINGS_INPUT_4_REFRACTORY,
};

// strings_input_4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput4States state;
} StringsInput4;

// strings_input_4 Initialisation function
void StringsInput4Init(StringsInput4* me);

// strings_input_4 Execution function
void StringsInput4Run(StringsInput4* me);

#endif // STRINGS_INPUT_4_H_