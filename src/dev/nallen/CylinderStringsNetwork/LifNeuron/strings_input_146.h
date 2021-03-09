#ifndef STRINGS_INPUT_146_H_
#define STRINGS_INPUT_146_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_146 States
enum StringsInput146States {
    STRINGS_INPUT_146_INTEGRATE,
    STRINGS_INPUT_146_LIMIT,
    STRINGS_INPUT_146_SPIKE,
    STRINGS_INPUT_146_REFRACTORY,
};

// strings_input_146 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput146States state;
} StringsInput146;

// strings_input_146 Initialisation function
void StringsInput146Init(StringsInput146* me);

// strings_input_146 Execution function
void StringsInput146Run(StringsInput146* me);

#endif // STRINGS_INPUT_146_H_