#ifndef STRINGS_INPUT_209_H_
#define STRINGS_INPUT_209_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_209 States
enum StringsInput209States {
    STRINGS_INPUT_209_INTEGRATE,
    STRINGS_INPUT_209_LIMIT,
    STRINGS_INPUT_209_SPIKE,
    STRINGS_INPUT_209_REFRACTORY,
};

// strings_input_209 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput209States state;
} StringsInput209;

// strings_input_209 Initialisation function
void StringsInput209Init(StringsInput209* me);

// strings_input_209 Execution function
void StringsInput209Run(StringsInput209* me);

#endif // STRINGS_INPUT_209_H_