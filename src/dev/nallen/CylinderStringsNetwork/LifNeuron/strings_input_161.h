#ifndef STRINGS_INPUT_161_H_
#define STRINGS_INPUT_161_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_161 States
enum StringsInput161States {
    STRINGS_INPUT_161_INTEGRATE,
    STRINGS_INPUT_161_LIMIT,
    STRINGS_INPUT_161_SPIKE,
    STRINGS_INPUT_161_REFRACTORY,
};

// strings_input_161 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput161States state;
} StringsInput161;

// strings_input_161 Initialisation function
void StringsInput161Init(StringsInput161* me);

// strings_input_161 Execution function
void StringsInput161Run(StringsInput161* me);

#endif // STRINGS_INPUT_161_H_