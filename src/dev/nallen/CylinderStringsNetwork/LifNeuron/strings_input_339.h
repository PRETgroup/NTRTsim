#ifndef STRINGS_INPUT_339_H_
#define STRINGS_INPUT_339_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_339 States
enum StringsInput339States {
    STRINGS_INPUT_339_INTEGRATE,
    STRINGS_INPUT_339_LIMIT,
    STRINGS_INPUT_339_SPIKE,
    STRINGS_INPUT_339_REFRACTORY,
};

// strings_input_339 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput339States state;
} StringsInput339;

// strings_input_339 Initialisation function
void StringsInput339Init(StringsInput339* me);

// strings_input_339 Execution function
void StringsInput339Run(StringsInput339* me);

#endif // STRINGS_INPUT_339_H_