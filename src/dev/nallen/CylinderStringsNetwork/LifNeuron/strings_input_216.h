#ifndef STRINGS_INPUT_216_H_
#define STRINGS_INPUT_216_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_216 States
enum StringsInput216States {
    STRINGS_INPUT_216_INTEGRATE,
    STRINGS_INPUT_216_LIMIT,
    STRINGS_INPUT_216_SPIKE,
    STRINGS_INPUT_216_REFRACTORY,
};

// strings_input_216 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput216States state;
} StringsInput216;

// strings_input_216 Initialisation function
void StringsInput216Init(StringsInput216* me);

// strings_input_216 Execution function
void StringsInput216Run(StringsInput216* me);

#endif // STRINGS_INPUT_216_H_