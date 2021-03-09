#ifndef STRINGS_INPUT_10_H_
#define STRINGS_INPUT_10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_10 States
enum StringsInput10States {
    STRINGS_INPUT_10_INTEGRATE,
    STRINGS_INPUT_10_LIMIT,
    STRINGS_INPUT_10_SPIKE,
    STRINGS_INPUT_10_REFRACTORY,
};

// strings_input_10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput10States state;
} StringsInput10;

// strings_input_10 Initialisation function
void StringsInput10Init(StringsInput10* me);

// strings_input_10 Execution function
void StringsInput10Run(StringsInput10* me);

#endif // STRINGS_INPUT_10_H_