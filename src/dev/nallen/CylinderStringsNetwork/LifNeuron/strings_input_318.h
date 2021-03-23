#ifndef STRINGS_INPUT_318_H_
#define STRINGS_INPUT_318_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_318 States
enum StringsInput318States {
    STRINGS_INPUT_318_INTEGRATE,
    STRINGS_INPUT_318_LIMIT,
    STRINGS_INPUT_318_SPIKE,
    STRINGS_INPUT_318_REFRACTORY,
};

// strings_input_318 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput318States state;
} StringsInput318;

// strings_input_318 Initialisation function
void StringsInput318Init(StringsInput318* me);

// strings_input_318 Execution function
void StringsInput318Run(StringsInput318* me);

#endif // STRINGS_INPUT_318_H_