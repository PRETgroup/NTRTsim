#ifndef STRINGS_INPUT_370_H_
#define STRINGS_INPUT_370_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_370 States
enum StringsInput370States {
    STRINGS_INPUT_370_INTEGRATE,
    STRINGS_INPUT_370_LIMIT,
    STRINGS_INPUT_370_SPIKE,
    STRINGS_INPUT_370_REFRACTORY,
};

// strings_input_370 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput370States state;
} StringsInput370;

// strings_input_370 Initialisation function
void StringsInput370Init(StringsInput370* me);

// strings_input_370 Execution function
void StringsInput370Run(StringsInput370* me);

#endif // STRINGS_INPUT_370_H_