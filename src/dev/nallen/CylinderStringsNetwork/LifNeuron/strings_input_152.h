#ifndef STRINGS_INPUT_152_H_
#define STRINGS_INPUT_152_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_152 States
enum StringsInput152States {
    STRINGS_INPUT_152_INTEGRATE,
    STRINGS_INPUT_152_LIMIT,
    STRINGS_INPUT_152_SPIKE,
    STRINGS_INPUT_152_REFRACTORY,
};

// strings_input_152 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput152States state;
} StringsInput152;

// strings_input_152 Initialisation function
void StringsInput152Init(StringsInput152* me);

// strings_input_152 Execution function
void StringsInput152Run(StringsInput152* me);

#endif // STRINGS_INPUT_152_H_