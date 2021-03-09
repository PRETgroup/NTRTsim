#ifndef STRINGS_INPUT_132_H_
#define STRINGS_INPUT_132_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_132 States
enum StringsInput132States {
    STRINGS_INPUT_132_INTEGRATE,
    STRINGS_INPUT_132_LIMIT,
    STRINGS_INPUT_132_SPIKE,
    STRINGS_INPUT_132_REFRACTORY,
};

// strings_input_132 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput132States state;
} StringsInput132;

// strings_input_132 Initialisation function
void StringsInput132Init(StringsInput132* me);

// strings_input_132 Execution function
void StringsInput132Run(StringsInput132* me);

#endif // STRINGS_INPUT_132_H_