#ifndef STRINGS_INPUT_320_H_
#define STRINGS_INPUT_320_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_320 States
enum StringsInput320States {
    STRINGS_INPUT_320_INTEGRATE,
    STRINGS_INPUT_320_LIMIT,
    STRINGS_INPUT_320_SPIKE,
    STRINGS_INPUT_320_REFRACTORY,
};

// strings_input_320 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput320States state;
} StringsInput320;

// strings_input_320 Initialisation function
void StringsInput320Init(StringsInput320* me);

// strings_input_320 Execution function
void StringsInput320Run(StringsInput320* me);

#endif // STRINGS_INPUT_320_H_