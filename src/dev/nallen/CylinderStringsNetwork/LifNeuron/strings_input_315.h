#ifndef STRINGS_INPUT_315_H_
#define STRINGS_INPUT_315_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_315 States
enum StringsInput315States {
    STRINGS_INPUT_315_INTEGRATE,
    STRINGS_INPUT_315_LIMIT,
    STRINGS_INPUT_315_SPIKE,
    STRINGS_INPUT_315_REFRACTORY,
};

// strings_input_315 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput315States state;
} StringsInput315;

// strings_input_315 Initialisation function
void StringsInput315Init(StringsInput315* me);

// strings_input_315 Execution function
void StringsInput315Run(StringsInput315* me);

#endif // STRINGS_INPUT_315_H_