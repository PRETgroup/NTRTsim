#ifndef STRINGS_INPUT_80_H_
#define STRINGS_INPUT_80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_80 States
enum StringsInput80States {
    STRINGS_INPUT_80_INTEGRATE,
    STRINGS_INPUT_80_LIMIT,
    STRINGS_INPUT_80_SPIKE,
    STRINGS_INPUT_80_REFRACTORY,
};

// strings_input_80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput80States state;
} StringsInput80;

// strings_input_80 Initialisation function
void StringsInput80Init(StringsInput80* me);

// strings_input_80 Execution function
void StringsInput80Run(StringsInput80* me);

#endif // STRINGS_INPUT_80_H_