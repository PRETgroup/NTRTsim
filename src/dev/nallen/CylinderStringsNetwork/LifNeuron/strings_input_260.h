#ifndef STRINGS_INPUT_260_H_
#define STRINGS_INPUT_260_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_260 States
enum StringsInput260States {
    STRINGS_INPUT_260_INTEGRATE,
    STRINGS_INPUT_260_LIMIT,
    STRINGS_INPUT_260_SPIKE,
    STRINGS_INPUT_260_REFRACTORY,
};

// strings_input_260 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput260States state;
} StringsInput260;

// strings_input_260 Initialisation function
void StringsInput260Init(StringsInput260* me);

// strings_input_260 Execution function
void StringsInput260Run(StringsInput260* me);

#endif // STRINGS_INPUT_260_H_