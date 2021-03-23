#ifndef STRINGS_INPUT_218_H_
#define STRINGS_INPUT_218_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_218 States
enum StringsInput218States {
    STRINGS_INPUT_218_INTEGRATE,
    STRINGS_INPUT_218_LIMIT,
    STRINGS_INPUT_218_SPIKE,
    STRINGS_INPUT_218_REFRACTORY,
};

// strings_input_218 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput218States state;
} StringsInput218;

// strings_input_218 Initialisation function
void StringsInput218Init(StringsInput218* me);

// strings_input_218 Execution function
void StringsInput218Run(StringsInput218* me);

#endif // STRINGS_INPUT_218_H_