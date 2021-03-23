#ifndef STRINGS_INPUT_297_H_
#define STRINGS_INPUT_297_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_297 States
enum StringsInput297States {
    STRINGS_INPUT_297_INTEGRATE,
    STRINGS_INPUT_297_LIMIT,
    STRINGS_INPUT_297_SPIKE,
    STRINGS_INPUT_297_REFRACTORY,
};

// strings_input_297 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput297States state;
} StringsInput297;

// strings_input_297 Initialisation function
void StringsInput297Init(StringsInput297* me);

// strings_input_297 Execution function
void StringsInput297Run(StringsInput297* me);

#endif // STRINGS_INPUT_297_H_