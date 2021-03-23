#ifndef STRINGS_INPUT_250_H_
#define STRINGS_INPUT_250_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_250 States
enum StringsInput250States {
    STRINGS_INPUT_250_INTEGRATE,
    STRINGS_INPUT_250_LIMIT,
    STRINGS_INPUT_250_SPIKE,
    STRINGS_INPUT_250_REFRACTORY,
};

// strings_input_250 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput250States state;
} StringsInput250;

// strings_input_250 Initialisation function
void StringsInput250Init(StringsInput250* me);

// strings_input_250 Execution function
void StringsInput250Run(StringsInput250* me);

#endif // STRINGS_INPUT_250_H_