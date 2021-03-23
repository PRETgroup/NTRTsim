#ifndef STRINGS_INPUT_257_H_
#define STRINGS_INPUT_257_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_257 States
enum StringsInput257States {
    STRINGS_INPUT_257_INTEGRATE,
    STRINGS_INPUT_257_LIMIT,
    STRINGS_INPUT_257_SPIKE,
    STRINGS_INPUT_257_REFRACTORY,
};

// strings_input_257 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput257States state;
} StringsInput257;

// strings_input_257 Initialisation function
void StringsInput257Init(StringsInput257* me);

// strings_input_257 Execution function
void StringsInput257Run(StringsInput257* me);

#endif // STRINGS_INPUT_257_H_