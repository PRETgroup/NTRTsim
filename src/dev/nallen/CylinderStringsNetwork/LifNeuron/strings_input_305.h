#ifndef STRINGS_INPUT_305_H_
#define STRINGS_INPUT_305_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_305 States
enum StringsInput305States {
    STRINGS_INPUT_305_INTEGRATE,
    STRINGS_INPUT_305_LIMIT,
    STRINGS_INPUT_305_SPIKE,
    STRINGS_INPUT_305_REFRACTORY,
};

// strings_input_305 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput305States state;
} StringsInput305;

// strings_input_305 Initialisation function
void StringsInput305Init(StringsInput305* me);

// strings_input_305 Execution function
void StringsInput305Run(StringsInput305* me);

#endif // STRINGS_INPUT_305_H_