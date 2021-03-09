#ifndef STRINGS_INPUT_188_H_
#define STRINGS_INPUT_188_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_188 States
enum StringsInput188States {
    STRINGS_INPUT_188_INTEGRATE,
    STRINGS_INPUT_188_LIMIT,
    STRINGS_INPUT_188_SPIKE,
    STRINGS_INPUT_188_REFRACTORY,
};

// strings_input_188 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput188States state;
} StringsInput188;

// strings_input_188 Initialisation function
void StringsInput188Init(StringsInput188* me);

// strings_input_188 Execution function
void StringsInput188Run(StringsInput188* me);

#endif // STRINGS_INPUT_188_H_