#ifndef STRINGS_INPUT_307_H_
#define STRINGS_INPUT_307_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_307 States
enum StringsInput307States {
    STRINGS_INPUT_307_INTEGRATE,
    STRINGS_INPUT_307_LIMIT,
    STRINGS_INPUT_307_SPIKE,
    STRINGS_INPUT_307_REFRACTORY,
};

// strings_input_307 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput307States state;
} StringsInput307;

// strings_input_307 Initialisation function
void StringsInput307Init(StringsInput307* me);

// strings_input_307 Execution function
void StringsInput307Run(StringsInput307* me);

#endif // STRINGS_INPUT_307_H_