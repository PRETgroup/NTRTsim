#ifndef STRINGS_INPUT_8_H_
#define STRINGS_INPUT_8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_8 States
enum StringsInput8States {
    STRINGS_INPUT_8_INTEGRATE,
    STRINGS_INPUT_8_LIMIT,
    STRINGS_INPUT_8_SPIKE,
    STRINGS_INPUT_8_REFRACTORY,
};

// strings_input_8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput8States state;
} StringsInput8;

// strings_input_8 Initialisation function
void StringsInput8Init(StringsInput8* me);

// strings_input_8 Execution function
void StringsInput8Run(StringsInput8* me);

#endif // STRINGS_INPUT_8_H_