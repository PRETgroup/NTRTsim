#ifndef STRINGS_INPUT_47_H_
#define STRINGS_INPUT_47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_47 States
enum StringsInput47States {
    STRINGS_INPUT_47_INTEGRATE,
    STRINGS_INPUT_47_LIMIT,
    STRINGS_INPUT_47_SPIKE,
    STRINGS_INPUT_47_REFRACTORY,
};

// strings_input_47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput47States state;
} StringsInput47;

// strings_input_47 Initialisation function
void StringsInput47Init(StringsInput47* me);

// strings_input_47 Execution function
void StringsInput47Run(StringsInput47* me);

#endif // STRINGS_INPUT_47_H_