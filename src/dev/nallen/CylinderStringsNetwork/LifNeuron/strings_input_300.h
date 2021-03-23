#ifndef STRINGS_INPUT_300_H_
#define STRINGS_INPUT_300_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_300 States
enum StringsInput300States {
    STRINGS_INPUT_300_INTEGRATE,
    STRINGS_INPUT_300_LIMIT,
    STRINGS_INPUT_300_SPIKE,
    STRINGS_INPUT_300_REFRACTORY,
};

// strings_input_300 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput300States state;
} StringsInput300;

// strings_input_300 Initialisation function
void StringsInput300Init(StringsInput300* me);

// strings_input_300 Execution function
void StringsInput300Run(StringsInput300* me);

#endif // STRINGS_INPUT_300_H_