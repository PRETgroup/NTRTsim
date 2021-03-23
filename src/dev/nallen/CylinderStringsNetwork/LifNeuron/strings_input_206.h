#ifndef STRINGS_INPUT_206_H_
#define STRINGS_INPUT_206_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_206 States
enum StringsInput206States {
    STRINGS_INPUT_206_INTEGRATE,
    STRINGS_INPUT_206_LIMIT,
    STRINGS_INPUT_206_SPIKE,
    STRINGS_INPUT_206_REFRACTORY,
};

// strings_input_206 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput206States state;
} StringsInput206;

// strings_input_206 Initialisation function
void StringsInput206Init(StringsInput206* me);

// strings_input_206 Execution function
void StringsInput206Run(StringsInput206* me);

#endif // STRINGS_INPUT_206_H_