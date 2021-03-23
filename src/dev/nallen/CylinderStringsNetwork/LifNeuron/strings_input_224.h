#ifndef STRINGS_INPUT_224_H_
#define STRINGS_INPUT_224_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_224 States
enum StringsInput224States {
    STRINGS_INPUT_224_INTEGRATE,
    STRINGS_INPUT_224_LIMIT,
    STRINGS_INPUT_224_SPIKE,
    STRINGS_INPUT_224_REFRACTORY,
};

// strings_input_224 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput224States state;
} StringsInput224;

// strings_input_224 Initialisation function
void StringsInput224Init(StringsInput224* me);

// strings_input_224 Execution function
void StringsInput224Run(StringsInput224* me);

#endif // STRINGS_INPUT_224_H_