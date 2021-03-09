#ifndef STRINGS_INPUT_83_H_
#define STRINGS_INPUT_83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_83 States
enum StringsInput83States {
    STRINGS_INPUT_83_INTEGRATE,
    STRINGS_INPUT_83_LIMIT,
    STRINGS_INPUT_83_SPIKE,
    STRINGS_INPUT_83_REFRACTORY,
};

// strings_input_83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput83States state;
} StringsInput83;

// strings_input_83 Initialisation function
void StringsInput83Init(StringsInput83* me);

// strings_input_83 Execution function
void StringsInput83Run(StringsInput83* me);

#endif // STRINGS_INPUT_83_H_