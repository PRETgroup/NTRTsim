#ifndef STRINGS_INPUT_384_H_
#define STRINGS_INPUT_384_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_384 States
enum StringsInput384States {
    STRINGS_INPUT_384_INTEGRATE,
    STRINGS_INPUT_384_LIMIT,
    STRINGS_INPUT_384_SPIKE,
    STRINGS_INPUT_384_REFRACTORY,
};

// strings_input_384 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput384States state;
} StringsInput384;

// strings_input_384 Initialisation function
void StringsInput384Init(StringsInput384* me);

// strings_input_384 Execution function
void StringsInput384Run(StringsInput384* me);

#endif // STRINGS_INPUT_384_H_