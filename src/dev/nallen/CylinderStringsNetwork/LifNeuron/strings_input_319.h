#ifndef STRINGS_INPUT_319_H_
#define STRINGS_INPUT_319_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_319 States
enum StringsInput319States {
    STRINGS_INPUT_319_INTEGRATE,
    STRINGS_INPUT_319_LIMIT,
    STRINGS_INPUT_319_SPIKE,
    STRINGS_INPUT_319_REFRACTORY,
};

// strings_input_319 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput319States state;
} StringsInput319;

// strings_input_319 Initialisation function
void StringsInput319Init(StringsInput319* me);

// strings_input_319 Execution function
void StringsInput319Run(StringsInput319* me);

#endif // STRINGS_INPUT_319_H_