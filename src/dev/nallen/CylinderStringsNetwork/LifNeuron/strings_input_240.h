#ifndef STRINGS_INPUT_240_H_
#define STRINGS_INPUT_240_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_240 States
enum StringsInput240States {
    STRINGS_INPUT_240_INTEGRATE,
    STRINGS_INPUT_240_LIMIT,
    STRINGS_INPUT_240_SPIKE,
    STRINGS_INPUT_240_REFRACTORY,
};

// strings_input_240 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput240States state;
} StringsInput240;

// strings_input_240 Initialisation function
void StringsInput240Init(StringsInput240* me);

// strings_input_240 Execution function
void StringsInput240Run(StringsInput240* me);

#endif // STRINGS_INPUT_240_H_