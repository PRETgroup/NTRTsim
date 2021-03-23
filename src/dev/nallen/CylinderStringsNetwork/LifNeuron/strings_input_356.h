#ifndef STRINGS_INPUT_356_H_
#define STRINGS_INPUT_356_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_356 States
enum StringsInput356States {
    STRINGS_INPUT_356_INTEGRATE,
    STRINGS_INPUT_356_LIMIT,
    STRINGS_INPUT_356_SPIKE,
    STRINGS_INPUT_356_REFRACTORY,
};

// strings_input_356 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput356States state;
} StringsInput356;

// strings_input_356 Initialisation function
void StringsInput356Init(StringsInput356* me);

// strings_input_356 Execution function
void StringsInput356Run(StringsInput356* me);

#endif // STRINGS_INPUT_356_H_