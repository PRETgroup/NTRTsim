#ifndef STRINGS_INPUT_338_H_
#define STRINGS_INPUT_338_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_338 States
enum StringsInput338States {
    STRINGS_INPUT_338_INTEGRATE,
    STRINGS_INPUT_338_LIMIT,
    STRINGS_INPUT_338_SPIKE,
    STRINGS_INPUT_338_REFRACTORY,
};

// strings_input_338 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput338States state;
} StringsInput338;

// strings_input_338 Initialisation function
void StringsInput338Init(StringsInput338* me);

// strings_input_338 Execution function
void StringsInput338Run(StringsInput338* me);

#endif // STRINGS_INPUT_338_H_