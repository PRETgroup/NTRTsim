#ifndef STRINGS_INPUT_344_H_
#define STRINGS_INPUT_344_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_344 States
enum StringsInput344States {
    STRINGS_INPUT_344_INTEGRATE,
    STRINGS_INPUT_344_LIMIT,
    STRINGS_INPUT_344_SPIKE,
    STRINGS_INPUT_344_REFRACTORY,
};

// strings_input_344 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput344States state;
} StringsInput344;

// strings_input_344 Initialisation function
void StringsInput344Init(StringsInput344* me);

// strings_input_344 Execution function
void StringsInput344Run(StringsInput344* me);

#endif // STRINGS_INPUT_344_H_