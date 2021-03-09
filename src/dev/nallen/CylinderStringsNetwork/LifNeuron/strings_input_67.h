#ifndef STRINGS_INPUT_67_H_
#define STRINGS_INPUT_67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_67 States
enum StringsInput67States {
    STRINGS_INPUT_67_INTEGRATE,
    STRINGS_INPUT_67_LIMIT,
    STRINGS_INPUT_67_SPIKE,
    STRINGS_INPUT_67_REFRACTORY,
};

// strings_input_67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput67States state;
} StringsInput67;

// strings_input_67 Initialisation function
void StringsInput67Init(StringsInput67* me);

// strings_input_67 Execution function
void StringsInput67Run(StringsInput67* me);

#endif // STRINGS_INPUT_67_H_