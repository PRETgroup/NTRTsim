#ifndef STRINGS_INPUT_65_H_
#define STRINGS_INPUT_65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_65 States
enum StringsInput65States {
    STRINGS_INPUT_65_INTEGRATE,
    STRINGS_INPUT_65_LIMIT,
    STRINGS_INPUT_65_SPIKE,
    STRINGS_INPUT_65_REFRACTORY,
};

// strings_input_65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput65States state;
} StringsInput65;

// strings_input_65 Initialisation function
void StringsInput65Init(StringsInput65* me);

// strings_input_65 Execution function
void StringsInput65Run(StringsInput65* me);

#endif // STRINGS_INPUT_65_H_