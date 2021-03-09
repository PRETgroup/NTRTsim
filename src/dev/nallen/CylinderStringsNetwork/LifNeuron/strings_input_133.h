#ifndef STRINGS_INPUT_133_H_
#define STRINGS_INPUT_133_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_133 States
enum StringsInput133States {
    STRINGS_INPUT_133_INTEGRATE,
    STRINGS_INPUT_133_LIMIT,
    STRINGS_INPUT_133_SPIKE,
    STRINGS_INPUT_133_REFRACTORY,
};

// strings_input_133 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput133States state;
} StringsInput133;

// strings_input_133 Initialisation function
void StringsInput133Init(StringsInput133* me);

// strings_input_133 Execution function
void StringsInput133Run(StringsInput133* me);

#endif // STRINGS_INPUT_133_H_