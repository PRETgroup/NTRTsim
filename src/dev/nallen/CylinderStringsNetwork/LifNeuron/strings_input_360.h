#ifndef STRINGS_INPUT_360_H_
#define STRINGS_INPUT_360_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_360 States
enum StringsInput360States {
    STRINGS_INPUT_360_INTEGRATE,
    STRINGS_INPUT_360_LIMIT,
    STRINGS_INPUT_360_SPIKE,
    STRINGS_INPUT_360_REFRACTORY,
};

// strings_input_360 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput360States state;
} StringsInput360;

// strings_input_360 Initialisation function
void StringsInput360Init(StringsInput360* me);

// strings_input_360 Execution function
void StringsInput360Run(StringsInput360* me);

#endif // STRINGS_INPUT_360_H_