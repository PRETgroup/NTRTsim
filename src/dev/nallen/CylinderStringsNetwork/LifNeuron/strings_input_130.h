#ifndef STRINGS_INPUT_130_H_
#define STRINGS_INPUT_130_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_130 States
enum StringsInput130States {
    STRINGS_INPUT_130_INTEGRATE,
    STRINGS_INPUT_130_LIMIT,
    STRINGS_INPUT_130_SPIKE,
    STRINGS_INPUT_130_REFRACTORY,
};

// strings_input_130 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput130States state;
} StringsInput130;

// strings_input_130 Initialisation function
void StringsInput130Init(StringsInput130* me);

// strings_input_130 Execution function
void StringsInput130Run(StringsInput130* me);

#endif // STRINGS_INPUT_130_H_