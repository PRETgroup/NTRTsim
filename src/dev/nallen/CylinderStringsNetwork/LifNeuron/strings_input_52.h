#ifndef STRINGS_INPUT_52_H_
#define STRINGS_INPUT_52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_52 States
enum StringsInput52States {
    STRINGS_INPUT_52_INTEGRATE,
    STRINGS_INPUT_52_LIMIT,
    STRINGS_INPUT_52_SPIKE,
    STRINGS_INPUT_52_REFRACTORY,
};

// strings_input_52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput52States state;
} StringsInput52;

// strings_input_52 Initialisation function
void StringsInput52Init(StringsInput52* me);

// strings_input_52 Execution function
void StringsInput52Run(StringsInput52* me);

#endif // STRINGS_INPUT_52_H_