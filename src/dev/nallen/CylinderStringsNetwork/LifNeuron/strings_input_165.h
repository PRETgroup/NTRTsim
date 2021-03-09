#ifndef STRINGS_INPUT_165_H_
#define STRINGS_INPUT_165_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_165 States
enum StringsInput165States {
    STRINGS_INPUT_165_INTEGRATE,
    STRINGS_INPUT_165_LIMIT,
    STRINGS_INPUT_165_SPIKE,
    STRINGS_INPUT_165_REFRACTORY,
};

// strings_input_165 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput165States state;
} StringsInput165;

// strings_input_165 Initialisation function
void StringsInput165Init(StringsInput165* me);

// strings_input_165 Execution function
void StringsInput165Run(StringsInput165* me);

#endif // STRINGS_INPUT_165_H_