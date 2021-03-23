#ifndef STRINGS_INPUT_272_H_
#define STRINGS_INPUT_272_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_272 States
enum StringsInput272States {
    STRINGS_INPUT_272_INTEGRATE,
    STRINGS_INPUT_272_LIMIT,
    STRINGS_INPUT_272_SPIKE,
    STRINGS_INPUT_272_REFRACTORY,
};

// strings_input_272 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput272States state;
} StringsInput272;

// strings_input_272 Initialisation function
void StringsInput272Init(StringsInput272* me);

// strings_input_272 Execution function
void StringsInput272Run(StringsInput272* me);

#endif // STRINGS_INPUT_272_H_