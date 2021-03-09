#ifndef STRINGS_INPUT_92_H_
#define STRINGS_INPUT_92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_92 States
enum StringsInput92States {
    STRINGS_INPUT_92_INTEGRATE,
    STRINGS_INPUT_92_LIMIT,
    STRINGS_INPUT_92_SPIKE,
    STRINGS_INPUT_92_REFRACTORY,
};

// strings_input_92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput92States state;
} StringsInput92;

// strings_input_92 Initialisation function
void StringsInput92Init(StringsInput92* me);

// strings_input_92 Execution function
void StringsInput92Run(StringsInput92* me);

#endif // STRINGS_INPUT_92_H_