#ifndef STRINGS_INPUT_222_H_
#define STRINGS_INPUT_222_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_222 States
enum StringsInput222States {
    STRINGS_INPUT_222_INTEGRATE,
    STRINGS_INPUT_222_LIMIT,
    STRINGS_INPUT_222_SPIKE,
    STRINGS_INPUT_222_REFRACTORY,
};

// strings_input_222 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput222States state;
} StringsInput222;

// strings_input_222 Initialisation function
void StringsInput222Init(StringsInput222* me);

// strings_input_222 Execution function
void StringsInput222Run(StringsInput222* me);

#endif // STRINGS_INPUT_222_H_