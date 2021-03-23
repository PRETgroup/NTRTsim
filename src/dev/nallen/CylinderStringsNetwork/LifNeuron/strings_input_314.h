#ifndef STRINGS_INPUT_314_H_
#define STRINGS_INPUT_314_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_314 States
enum StringsInput314States {
    STRINGS_INPUT_314_INTEGRATE,
    STRINGS_INPUT_314_LIMIT,
    STRINGS_INPUT_314_SPIKE,
    STRINGS_INPUT_314_REFRACTORY,
};

// strings_input_314 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput314States state;
} StringsInput314;

// strings_input_314 Initialisation function
void StringsInput314Init(StringsInput314* me);

// strings_input_314 Execution function
void StringsInput314Run(StringsInput314* me);

#endif // STRINGS_INPUT_314_H_