#ifndef STRINGS_INPUT_264_H_
#define STRINGS_INPUT_264_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_264 States
enum StringsInput264States {
    STRINGS_INPUT_264_INTEGRATE,
    STRINGS_INPUT_264_LIMIT,
    STRINGS_INPUT_264_SPIKE,
    STRINGS_INPUT_264_REFRACTORY,
};

// strings_input_264 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput264States state;
} StringsInput264;

// strings_input_264 Initialisation function
void StringsInput264Init(StringsInput264* me);

// strings_input_264 Execution function
void StringsInput264Run(StringsInput264* me);

#endif // STRINGS_INPUT_264_H_