#ifndef STRINGS_INPUT_183_H_
#define STRINGS_INPUT_183_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_183 States
enum StringsInput183States {
    STRINGS_INPUT_183_INTEGRATE,
    STRINGS_INPUT_183_LIMIT,
    STRINGS_INPUT_183_SPIKE,
    STRINGS_INPUT_183_REFRACTORY,
};

// strings_input_183 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput183States state;
} StringsInput183;

// strings_input_183 Initialisation function
void StringsInput183Init(StringsInput183* me);

// strings_input_183 Execution function
void StringsInput183Run(StringsInput183* me);

#endif // STRINGS_INPUT_183_H_