#ifndef STRINGS_INPUT_203_H_
#define STRINGS_INPUT_203_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_203 States
enum StringsInput203States {
    STRINGS_INPUT_203_INTEGRATE,
    STRINGS_INPUT_203_LIMIT,
    STRINGS_INPUT_203_SPIKE,
    STRINGS_INPUT_203_REFRACTORY,
};

// strings_input_203 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput203States state;
} StringsInput203;

// strings_input_203 Initialisation function
void StringsInput203Init(StringsInput203* me);

// strings_input_203 Execution function
void StringsInput203Run(StringsInput203* me);

#endif // STRINGS_INPUT_203_H_