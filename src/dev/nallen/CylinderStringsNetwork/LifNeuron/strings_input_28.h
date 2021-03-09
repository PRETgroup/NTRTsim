#ifndef STRINGS_INPUT_28_H_
#define STRINGS_INPUT_28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_28 States
enum StringsInput28States {
    STRINGS_INPUT_28_INTEGRATE,
    STRINGS_INPUT_28_LIMIT,
    STRINGS_INPUT_28_SPIKE,
    STRINGS_INPUT_28_REFRACTORY,
};

// strings_input_28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput28States state;
} StringsInput28;

// strings_input_28 Initialisation function
void StringsInput28Init(StringsInput28* me);

// strings_input_28 Execution function
void StringsInput28Run(StringsInput28* me);

#endif // STRINGS_INPUT_28_H_