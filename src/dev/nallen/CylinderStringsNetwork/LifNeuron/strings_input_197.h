#ifndef STRINGS_INPUT_197_H_
#define STRINGS_INPUT_197_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_197 States
enum StringsInput197States {
    STRINGS_INPUT_197_INTEGRATE,
    STRINGS_INPUT_197_LIMIT,
    STRINGS_INPUT_197_SPIKE,
    STRINGS_INPUT_197_REFRACTORY,
};

// strings_input_197 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput197States state;
} StringsInput197;

// strings_input_197 Initialisation function
void StringsInput197Init(StringsInput197* me);

// strings_input_197 Execution function
void StringsInput197Run(StringsInput197* me);

#endif // STRINGS_INPUT_197_H_