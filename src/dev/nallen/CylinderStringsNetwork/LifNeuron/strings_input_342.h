#ifndef STRINGS_INPUT_342_H_
#define STRINGS_INPUT_342_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_342 States
enum StringsInput342States {
    STRINGS_INPUT_342_INTEGRATE,
    STRINGS_INPUT_342_LIMIT,
    STRINGS_INPUT_342_SPIKE,
    STRINGS_INPUT_342_REFRACTORY,
};

// strings_input_342 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput342States state;
} StringsInput342;

// strings_input_342 Initialisation function
void StringsInput342Init(StringsInput342* me);

// strings_input_342 Execution function
void StringsInput342Run(StringsInput342* me);

#endif // STRINGS_INPUT_342_H_