#ifndef STRINGS_INPUT_340_H_
#define STRINGS_INPUT_340_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_340 States
enum StringsInput340States {
    STRINGS_INPUT_340_INTEGRATE,
    STRINGS_INPUT_340_LIMIT,
    STRINGS_INPUT_340_SPIKE,
    STRINGS_INPUT_340_REFRACTORY,
};

// strings_input_340 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput340States state;
} StringsInput340;

// strings_input_340 Initialisation function
void StringsInput340Init(StringsInput340* me);

// strings_input_340 Execution function
void StringsInput340Run(StringsInput340* me);

#endif // STRINGS_INPUT_340_H_