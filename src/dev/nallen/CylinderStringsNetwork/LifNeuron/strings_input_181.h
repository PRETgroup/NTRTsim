#ifndef STRINGS_INPUT_181_H_
#define STRINGS_INPUT_181_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_181 States
enum StringsInput181States {
    STRINGS_INPUT_181_INTEGRATE,
    STRINGS_INPUT_181_LIMIT,
    STRINGS_INPUT_181_SPIKE,
    STRINGS_INPUT_181_REFRACTORY,
};

// strings_input_181 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput181States state;
} StringsInput181;

// strings_input_181 Initialisation function
void StringsInput181Init(StringsInput181* me);

// strings_input_181 Execution function
void StringsInput181Run(StringsInput181* me);

#endif // STRINGS_INPUT_181_H_