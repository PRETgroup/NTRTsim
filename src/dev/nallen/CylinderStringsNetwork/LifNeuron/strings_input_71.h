#ifndef STRINGS_INPUT_71_H_
#define STRINGS_INPUT_71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_71 States
enum StringsInput71States {
    STRINGS_INPUT_71_INTEGRATE,
    STRINGS_INPUT_71_LIMIT,
    STRINGS_INPUT_71_SPIKE,
    STRINGS_INPUT_71_REFRACTORY,
};

// strings_input_71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput71States state;
} StringsInput71;

// strings_input_71 Initialisation function
void StringsInput71Init(StringsInput71* me);

// strings_input_71 Execution function
void StringsInput71Run(StringsInput71* me);

#endif // STRINGS_INPUT_71_H_