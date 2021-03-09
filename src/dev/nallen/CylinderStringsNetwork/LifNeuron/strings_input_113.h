#ifndef STRINGS_INPUT_113_H_
#define STRINGS_INPUT_113_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_113 States
enum StringsInput113States {
    STRINGS_INPUT_113_INTEGRATE,
    STRINGS_INPUT_113_LIMIT,
    STRINGS_INPUT_113_SPIKE,
    STRINGS_INPUT_113_REFRACTORY,
};

// strings_input_113 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput113States state;
} StringsInput113;

// strings_input_113 Initialisation function
void StringsInput113Init(StringsInput113* me);

// strings_input_113 Execution function
void StringsInput113Run(StringsInput113* me);

#endif // STRINGS_INPUT_113_H_