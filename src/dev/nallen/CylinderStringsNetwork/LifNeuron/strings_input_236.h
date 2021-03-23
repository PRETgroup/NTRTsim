#ifndef STRINGS_INPUT_236_H_
#define STRINGS_INPUT_236_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_236 States
enum StringsInput236States {
    STRINGS_INPUT_236_INTEGRATE,
    STRINGS_INPUT_236_LIMIT,
    STRINGS_INPUT_236_SPIKE,
    STRINGS_INPUT_236_REFRACTORY,
};

// strings_input_236 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput236States state;
} StringsInput236;

// strings_input_236 Initialisation function
void StringsInput236Init(StringsInput236* me);

// strings_input_236 Execution function
void StringsInput236Run(StringsInput236* me);

#endif // STRINGS_INPUT_236_H_