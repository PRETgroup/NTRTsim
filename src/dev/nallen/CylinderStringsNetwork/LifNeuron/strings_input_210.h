#ifndef STRINGS_INPUT_210_H_
#define STRINGS_INPUT_210_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_210 States
enum StringsInput210States {
    STRINGS_INPUT_210_INTEGRATE,
    STRINGS_INPUT_210_LIMIT,
    STRINGS_INPUT_210_SPIKE,
    STRINGS_INPUT_210_REFRACTORY,
};

// strings_input_210 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput210States state;
} StringsInput210;

// strings_input_210 Initialisation function
void StringsInput210Init(StringsInput210* me);

// strings_input_210 Execution function
void StringsInput210Run(StringsInput210* me);

#endif // STRINGS_INPUT_210_H_