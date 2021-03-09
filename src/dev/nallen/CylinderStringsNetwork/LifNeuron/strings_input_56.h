#ifndef STRINGS_INPUT_56_H_
#define STRINGS_INPUT_56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_56 States
enum StringsInput56States {
    STRINGS_INPUT_56_INTEGRATE,
    STRINGS_INPUT_56_LIMIT,
    STRINGS_INPUT_56_SPIKE,
    STRINGS_INPUT_56_REFRACTORY,
};

// strings_input_56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput56States state;
} StringsInput56;

// strings_input_56 Initialisation function
void StringsInput56Init(StringsInput56* me);

// strings_input_56 Execution function
void StringsInput56Run(StringsInput56* me);

#endif // STRINGS_INPUT_56_H_