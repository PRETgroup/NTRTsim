#ifndef STRINGS_INPUT_96_H_
#define STRINGS_INPUT_96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_96 States
enum StringsInput96States {
    STRINGS_INPUT_96_INTEGRATE,
    STRINGS_INPUT_96_LIMIT,
    STRINGS_INPUT_96_SPIKE,
    STRINGS_INPUT_96_REFRACTORY,
};

// strings_input_96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput96States state;
} StringsInput96;

// strings_input_96 Initialisation function
void StringsInput96Init(StringsInput96* me);

// strings_input_96 Execution function
void StringsInput96Run(StringsInput96* me);

#endif // STRINGS_INPUT_96_H_