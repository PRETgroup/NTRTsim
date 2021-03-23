#ifndef STRINGS_INPUT_304_H_
#define STRINGS_INPUT_304_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_304 States
enum StringsInput304States {
    STRINGS_INPUT_304_INTEGRATE,
    STRINGS_INPUT_304_LIMIT,
    STRINGS_INPUT_304_SPIKE,
    STRINGS_INPUT_304_REFRACTORY,
};

// strings_input_304 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput304States state;
} StringsInput304;

// strings_input_304 Initialisation function
void StringsInput304Init(StringsInput304* me);

// strings_input_304 Execution function
void StringsInput304Run(StringsInput304* me);

#endif // STRINGS_INPUT_304_H_