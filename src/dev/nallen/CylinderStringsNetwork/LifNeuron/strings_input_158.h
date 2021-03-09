#ifndef STRINGS_INPUT_158_H_
#define STRINGS_INPUT_158_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_158 States
enum StringsInput158States {
    STRINGS_INPUT_158_INTEGRATE,
    STRINGS_INPUT_158_LIMIT,
    STRINGS_INPUT_158_SPIKE,
    STRINGS_INPUT_158_REFRACTORY,
};

// strings_input_158 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput158States state;
} StringsInput158;

// strings_input_158 Initialisation function
void StringsInput158Init(StringsInput158* me);

// strings_input_158 Execution function
void StringsInput158Run(StringsInput158* me);

#endif // STRINGS_INPUT_158_H_