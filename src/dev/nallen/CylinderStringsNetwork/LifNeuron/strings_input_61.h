#ifndef STRINGS_INPUT_61_H_
#define STRINGS_INPUT_61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_61 States
enum StringsInput61States {
    STRINGS_INPUT_61_INTEGRATE,
    STRINGS_INPUT_61_LIMIT,
    STRINGS_INPUT_61_SPIKE,
    STRINGS_INPUT_61_REFRACTORY,
};

// strings_input_61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput61States state;
} StringsInput61;

// strings_input_61 Initialisation function
void StringsInput61Init(StringsInput61* me);

// strings_input_61 Execution function
void StringsInput61Run(StringsInput61* me);

#endif // STRINGS_INPUT_61_H_