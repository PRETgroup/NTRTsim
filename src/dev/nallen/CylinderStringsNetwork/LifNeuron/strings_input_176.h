#ifndef STRINGS_INPUT_176_H_
#define STRINGS_INPUT_176_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_176 States
enum StringsInput176States {
    STRINGS_INPUT_176_INTEGRATE,
    STRINGS_INPUT_176_LIMIT,
    STRINGS_INPUT_176_SPIKE,
    STRINGS_INPUT_176_REFRACTORY,
};

// strings_input_176 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput176States state;
} StringsInput176;

// strings_input_176 Initialisation function
void StringsInput176Init(StringsInput176* me);

// strings_input_176 Execution function
void StringsInput176Run(StringsInput176* me);

#endif // STRINGS_INPUT_176_H_