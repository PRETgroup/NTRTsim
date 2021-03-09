#ifndef STRINGS_INPUT_164_H_
#define STRINGS_INPUT_164_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_164 States
enum StringsInput164States {
    STRINGS_INPUT_164_INTEGRATE,
    STRINGS_INPUT_164_LIMIT,
    STRINGS_INPUT_164_SPIKE,
    STRINGS_INPUT_164_REFRACTORY,
};

// strings_input_164 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput164States state;
} StringsInput164;

// strings_input_164 Initialisation function
void StringsInput164Init(StringsInput164* me);

// strings_input_164 Execution function
void StringsInput164Run(StringsInput164* me);

#endif // STRINGS_INPUT_164_H_