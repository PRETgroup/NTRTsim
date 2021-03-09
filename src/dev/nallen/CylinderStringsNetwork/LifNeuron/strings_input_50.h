#ifndef STRINGS_INPUT_50_H_
#define STRINGS_INPUT_50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_50 States
enum StringsInput50States {
    STRINGS_INPUT_50_INTEGRATE,
    STRINGS_INPUT_50_LIMIT,
    STRINGS_INPUT_50_SPIKE,
    STRINGS_INPUT_50_REFRACTORY,
};

// strings_input_50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput50States state;
} StringsInput50;

// strings_input_50 Initialisation function
void StringsInput50Init(StringsInput50* me);

// strings_input_50 Execution function
void StringsInput50Run(StringsInput50* me);

#endif // STRINGS_INPUT_50_H_