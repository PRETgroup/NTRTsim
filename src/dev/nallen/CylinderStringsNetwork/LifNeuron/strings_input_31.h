#ifndef STRINGS_INPUT_31_H_
#define STRINGS_INPUT_31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_31 States
enum StringsInput31States {
    STRINGS_INPUT_31_INTEGRATE,
    STRINGS_INPUT_31_LIMIT,
    STRINGS_INPUT_31_SPIKE,
    STRINGS_INPUT_31_REFRACTORY,
};

// strings_input_31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput31States state;
} StringsInput31;

// strings_input_31 Initialisation function
void StringsInput31Init(StringsInput31* me);

// strings_input_31 Execution function
void StringsInput31Run(StringsInput31* me);

#endif // STRINGS_INPUT_31_H_