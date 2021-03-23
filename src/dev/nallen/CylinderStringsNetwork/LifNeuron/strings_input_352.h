#ifndef STRINGS_INPUT_352_H_
#define STRINGS_INPUT_352_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_352 States
enum StringsInput352States {
    STRINGS_INPUT_352_INTEGRATE,
    STRINGS_INPUT_352_LIMIT,
    STRINGS_INPUT_352_SPIKE,
    STRINGS_INPUT_352_REFRACTORY,
};

// strings_input_352 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput352States state;
} StringsInput352;

// strings_input_352 Initialisation function
void StringsInput352Init(StringsInput352* me);

// strings_input_352 Execution function
void StringsInput352Run(StringsInput352* me);

#endif // STRINGS_INPUT_352_H_