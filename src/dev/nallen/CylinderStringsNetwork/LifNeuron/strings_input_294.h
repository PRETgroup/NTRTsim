#ifndef STRINGS_INPUT_294_H_
#define STRINGS_INPUT_294_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_294 States
enum StringsInput294States {
    STRINGS_INPUT_294_INTEGRATE,
    STRINGS_INPUT_294_LIMIT,
    STRINGS_INPUT_294_SPIKE,
    STRINGS_INPUT_294_REFRACTORY,
};

// strings_input_294 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput294States state;
} StringsInput294;

// strings_input_294 Initialisation function
void StringsInput294Init(StringsInput294* me);

// strings_input_294 Execution function
void StringsInput294Run(StringsInput294* me);

#endif // STRINGS_INPUT_294_H_