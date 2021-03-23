#ifndef STRINGS_INPUT_235_H_
#define STRINGS_INPUT_235_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_235 States
enum StringsInput235States {
    STRINGS_INPUT_235_INTEGRATE,
    STRINGS_INPUT_235_LIMIT,
    STRINGS_INPUT_235_SPIKE,
    STRINGS_INPUT_235_REFRACTORY,
};

// strings_input_235 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput235States state;
} StringsInput235;

// strings_input_235 Initialisation function
void StringsInput235Init(StringsInput235* me);

// strings_input_235 Execution function
void StringsInput235Run(StringsInput235* me);

#endif // STRINGS_INPUT_235_H_