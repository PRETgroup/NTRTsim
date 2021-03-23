#ifndef STRINGS_INPUT_278_H_
#define STRINGS_INPUT_278_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_278 States
enum StringsInput278States {
    STRINGS_INPUT_278_INTEGRATE,
    STRINGS_INPUT_278_LIMIT,
    STRINGS_INPUT_278_SPIKE,
    STRINGS_INPUT_278_REFRACTORY,
};

// strings_input_278 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput278States state;
} StringsInput278;

// strings_input_278 Initialisation function
void StringsInput278Init(StringsInput278* me);

// strings_input_278 Execution function
void StringsInput278Run(StringsInput278* me);

#endif // STRINGS_INPUT_278_H_