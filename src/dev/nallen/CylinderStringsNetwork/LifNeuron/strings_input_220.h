#ifndef STRINGS_INPUT_220_H_
#define STRINGS_INPUT_220_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_220 States
enum StringsInput220States {
    STRINGS_INPUT_220_INTEGRATE,
    STRINGS_INPUT_220_LIMIT,
    STRINGS_INPUT_220_SPIKE,
    STRINGS_INPUT_220_REFRACTORY,
};

// strings_input_220 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput220States state;
} StringsInput220;

// strings_input_220 Initialisation function
void StringsInput220Init(StringsInput220* me);

// strings_input_220 Execution function
void StringsInput220Run(StringsInput220* me);

#endif // STRINGS_INPUT_220_H_