#ifndef STRINGS_INPUT_123_H_
#define STRINGS_INPUT_123_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_123 States
enum StringsInput123States {
    STRINGS_INPUT_123_INTEGRATE,
    STRINGS_INPUT_123_LIMIT,
    STRINGS_INPUT_123_SPIKE,
    STRINGS_INPUT_123_REFRACTORY,
};

// strings_input_123 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput123States state;
} StringsInput123;

// strings_input_123 Initialisation function
void StringsInput123Init(StringsInput123* me);

// strings_input_123 Execution function
void StringsInput123Run(StringsInput123* me);

#endif // STRINGS_INPUT_123_H_