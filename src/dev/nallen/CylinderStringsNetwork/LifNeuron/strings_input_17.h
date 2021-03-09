#ifndef STRINGS_INPUT_17_H_
#define STRINGS_INPUT_17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_17 States
enum StringsInput17States {
    STRINGS_INPUT_17_INTEGRATE,
    STRINGS_INPUT_17_LIMIT,
    STRINGS_INPUT_17_SPIKE,
    STRINGS_INPUT_17_REFRACTORY,
};

// strings_input_17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput17States state;
} StringsInput17;

// strings_input_17 Initialisation function
void StringsInput17Init(StringsInput17* me);

// strings_input_17 Execution function
void StringsInput17Run(StringsInput17* me);

#endif // STRINGS_INPUT_17_H_