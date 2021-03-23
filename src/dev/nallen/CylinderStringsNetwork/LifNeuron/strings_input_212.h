#ifndef STRINGS_INPUT_212_H_
#define STRINGS_INPUT_212_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_212 States
enum StringsInput212States {
    STRINGS_INPUT_212_INTEGRATE,
    STRINGS_INPUT_212_LIMIT,
    STRINGS_INPUT_212_SPIKE,
    STRINGS_INPUT_212_REFRACTORY,
};

// strings_input_212 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput212States state;
} StringsInput212;

// strings_input_212 Initialisation function
void StringsInput212Init(StringsInput212* me);

// strings_input_212 Execution function
void StringsInput212Run(StringsInput212* me);

#endif // STRINGS_INPUT_212_H_