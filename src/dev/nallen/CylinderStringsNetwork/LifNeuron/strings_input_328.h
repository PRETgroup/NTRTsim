#ifndef STRINGS_INPUT_328_H_
#define STRINGS_INPUT_328_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_328 States
enum StringsInput328States {
    STRINGS_INPUT_328_INTEGRATE,
    STRINGS_INPUT_328_LIMIT,
    STRINGS_INPUT_328_SPIKE,
    STRINGS_INPUT_328_REFRACTORY,
};

// strings_input_328 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput328States state;
} StringsInput328;

// strings_input_328 Initialisation function
void StringsInput328Init(StringsInput328* me);

// strings_input_328 Execution function
void StringsInput328Run(StringsInput328* me);

#endif // STRINGS_INPUT_328_H_