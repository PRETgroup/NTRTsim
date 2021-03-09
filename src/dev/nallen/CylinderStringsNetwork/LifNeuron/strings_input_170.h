#ifndef STRINGS_INPUT_170_H_
#define STRINGS_INPUT_170_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_170 States
enum StringsInput170States {
    STRINGS_INPUT_170_INTEGRATE,
    STRINGS_INPUT_170_LIMIT,
    STRINGS_INPUT_170_SPIKE,
    STRINGS_INPUT_170_REFRACTORY,
};

// strings_input_170 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput170States state;
} StringsInput170;

// strings_input_170 Initialisation function
void StringsInput170Init(StringsInput170* me);

// strings_input_170 Execution function
void StringsInput170Run(StringsInput170* me);

#endif // STRINGS_INPUT_170_H_