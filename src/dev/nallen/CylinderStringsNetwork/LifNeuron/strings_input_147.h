#ifndef STRINGS_INPUT_147_H_
#define STRINGS_INPUT_147_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_147 States
enum StringsInput147States {
    STRINGS_INPUT_147_INTEGRATE,
    STRINGS_INPUT_147_LIMIT,
    STRINGS_INPUT_147_SPIKE,
    STRINGS_INPUT_147_REFRACTORY,
};

// strings_input_147 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput147States state;
} StringsInput147;

// strings_input_147 Initialisation function
void StringsInput147Init(StringsInput147* me);

// strings_input_147 Execution function
void StringsInput147Run(StringsInput147* me);

#endif // STRINGS_INPUT_147_H_