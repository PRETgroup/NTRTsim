#ifndef STRINGS_INPUT_221_H_
#define STRINGS_INPUT_221_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_221 States
enum StringsInput221States {
    STRINGS_INPUT_221_INTEGRATE,
    STRINGS_INPUT_221_LIMIT,
    STRINGS_INPUT_221_SPIKE,
    STRINGS_INPUT_221_REFRACTORY,
};

// strings_input_221 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput221States state;
} StringsInput221;

// strings_input_221 Initialisation function
void StringsInput221Init(StringsInput221* me);

// strings_input_221 Execution function
void StringsInput221Run(StringsInput221* me);

#endif // STRINGS_INPUT_221_H_