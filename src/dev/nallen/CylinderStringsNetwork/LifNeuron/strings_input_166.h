#ifndef STRINGS_INPUT_166_H_
#define STRINGS_INPUT_166_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_166 States
enum StringsInput166States {
    STRINGS_INPUT_166_INTEGRATE,
    STRINGS_INPUT_166_LIMIT,
    STRINGS_INPUT_166_SPIKE,
    STRINGS_INPUT_166_REFRACTORY,
};

// strings_input_166 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput166States state;
} StringsInput166;

// strings_input_166 Initialisation function
void StringsInput166Init(StringsInput166* me);

// strings_input_166 Execution function
void StringsInput166Run(StringsInput166* me);

#endif // STRINGS_INPUT_166_H_