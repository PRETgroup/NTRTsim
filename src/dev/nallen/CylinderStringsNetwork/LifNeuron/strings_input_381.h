#ifndef STRINGS_INPUT_381_H_
#define STRINGS_INPUT_381_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_381 States
enum StringsInput381States {
    STRINGS_INPUT_381_INTEGRATE,
    STRINGS_INPUT_381_LIMIT,
    STRINGS_INPUT_381_SPIKE,
    STRINGS_INPUT_381_REFRACTORY,
};

// strings_input_381 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput381States state;
} StringsInput381;

// strings_input_381 Initialisation function
void StringsInput381Init(StringsInput381* me);

// strings_input_381 Execution function
void StringsInput381Run(StringsInput381* me);

#endif // STRINGS_INPUT_381_H_