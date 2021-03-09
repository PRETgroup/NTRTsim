#ifndef STRINGS_INPUT_24_H_
#define STRINGS_INPUT_24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_24 States
enum StringsInput24States {
    STRINGS_INPUT_24_INTEGRATE,
    STRINGS_INPUT_24_LIMIT,
    STRINGS_INPUT_24_SPIKE,
    STRINGS_INPUT_24_REFRACTORY,
};

// strings_input_24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput24States state;
} StringsInput24;

// strings_input_24 Initialisation function
void StringsInput24Init(StringsInput24* me);

// strings_input_24 Execution function
void StringsInput24Run(StringsInput24* me);

#endif // STRINGS_INPUT_24_H_