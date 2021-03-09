#ifndef STRINGS_INPUT_13_H_
#define STRINGS_INPUT_13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_13 States
enum StringsInput13States {
    STRINGS_INPUT_13_INTEGRATE,
    STRINGS_INPUT_13_LIMIT,
    STRINGS_INPUT_13_SPIKE,
    STRINGS_INPUT_13_REFRACTORY,
};

// strings_input_13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput13States state;
} StringsInput13;

// strings_input_13 Initialisation function
void StringsInput13Init(StringsInput13* me);

// strings_input_13 Execution function
void StringsInput13Run(StringsInput13* me);

#endif // STRINGS_INPUT_13_H_