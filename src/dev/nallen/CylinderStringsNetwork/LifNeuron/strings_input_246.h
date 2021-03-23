#ifndef STRINGS_INPUT_246_H_
#define STRINGS_INPUT_246_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_246 States
enum StringsInput246States {
    STRINGS_INPUT_246_INTEGRATE,
    STRINGS_INPUT_246_LIMIT,
    STRINGS_INPUT_246_SPIKE,
    STRINGS_INPUT_246_REFRACTORY,
};

// strings_input_246 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput246States state;
} StringsInput246;

// strings_input_246 Initialisation function
void StringsInput246Init(StringsInput246* me);

// strings_input_246 Execution function
void StringsInput246Run(StringsInput246* me);

#endif // STRINGS_INPUT_246_H_