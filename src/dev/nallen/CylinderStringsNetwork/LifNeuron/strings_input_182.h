#ifndef STRINGS_INPUT_182_H_
#define STRINGS_INPUT_182_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_182 States
enum StringsInput182States {
    STRINGS_INPUT_182_INTEGRATE,
    STRINGS_INPUT_182_LIMIT,
    STRINGS_INPUT_182_SPIKE,
    STRINGS_INPUT_182_REFRACTORY,
};

// strings_input_182 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput182States state;
} StringsInput182;

// strings_input_182 Initialisation function
void StringsInput182Init(StringsInput182* me);

// strings_input_182 Execution function
void StringsInput182Run(StringsInput182* me);

#endif // STRINGS_INPUT_182_H_