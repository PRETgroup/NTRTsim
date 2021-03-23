#ifndef STRINGS_INPUT_205_H_
#define STRINGS_INPUT_205_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_205 States
enum StringsInput205States {
    STRINGS_INPUT_205_INTEGRATE,
    STRINGS_INPUT_205_LIMIT,
    STRINGS_INPUT_205_SPIKE,
    STRINGS_INPUT_205_REFRACTORY,
};

// strings_input_205 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput205States state;
} StringsInput205;

// strings_input_205 Initialisation function
void StringsInput205Init(StringsInput205* me);

// strings_input_205 Execution function
void StringsInput205Run(StringsInput205* me);

#endif // STRINGS_INPUT_205_H_