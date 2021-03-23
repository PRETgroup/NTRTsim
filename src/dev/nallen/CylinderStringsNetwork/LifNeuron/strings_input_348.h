#ifndef STRINGS_INPUT_348_H_
#define STRINGS_INPUT_348_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_348 States
enum StringsInput348States {
    STRINGS_INPUT_348_INTEGRATE,
    STRINGS_INPUT_348_LIMIT,
    STRINGS_INPUT_348_SPIKE,
    STRINGS_INPUT_348_REFRACTORY,
};

// strings_input_348 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput348States state;
} StringsInput348;

// strings_input_348 Initialisation function
void StringsInput348Init(StringsInput348* me);

// strings_input_348 Execution function
void StringsInput348Run(StringsInput348* me);

#endif // STRINGS_INPUT_348_H_