#ifndef STRINGS_INPUT_255_H_
#define STRINGS_INPUT_255_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_255 States
enum StringsInput255States {
    STRINGS_INPUT_255_INTEGRATE,
    STRINGS_INPUT_255_LIMIT,
    STRINGS_INPUT_255_SPIKE,
    STRINGS_INPUT_255_REFRACTORY,
};

// strings_input_255 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput255States state;
} StringsInput255;

// strings_input_255 Initialisation function
void StringsInput255Init(StringsInput255* me);

// strings_input_255 Execution function
void StringsInput255Run(StringsInput255* me);

#endif // STRINGS_INPUT_255_H_