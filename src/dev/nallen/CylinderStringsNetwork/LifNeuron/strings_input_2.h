#ifndef STRINGS_INPUT_2_H_
#define STRINGS_INPUT_2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_2 States
enum StringsInput2States {
    STRINGS_INPUT_2_INTEGRATE,
    STRINGS_INPUT_2_LIMIT,
    STRINGS_INPUT_2_SPIKE,
    STRINGS_INPUT_2_REFRACTORY,
};

// strings_input_2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput2States state;
} StringsInput2;

// strings_input_2 Initialisation function
void StringsInput2Init(StringsInput2* me);

// strings_input_2 Execution function
void StringsInput2Run(StringsInput2* me);

#endif // STRINGS_INPUT_2_H_