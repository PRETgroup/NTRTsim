#ifndef STRINGS_INPUT_385_H_
#define STRINGS_INPUT_385_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_385 States
enum StringsInput385States {
    STRINGS_INPUT_385_INTEGRATE,
    STRINGS_INPUT_385_LIMIT,
    STRINGS_INPUT_385_SPIKE,
    STRINGS_INPUT_385_REFRACTORY,
};

// strings_input_385 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput385States state;
} StringsInput385;

// strings_input_385 Initialisation function
void StringsInput385Init(StringsInput385* me);

// strings_input_385 Execution function
void StringsInput385Run(StringsInput385* me);

#endif // STRINGS_INPUT_385_H_