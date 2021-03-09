#ifndef STRINGS_INPUT_191_H_
#define STRINGS_INPUT_191_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_191 States
enum StringsInput191States {
    STRINGS_INPUT_191_INTEGRATE,
    STRINGS_INPUT_191_LIMIT,
    STRINGS_INPUT_191_SPIKE,
    STRINGS_INPUT_191_REFRACTORY,
};

// strings_input_191 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput191States state;
} StringsInput191;

// strings_input_191 Initialisation function
void StringsInput191Init(StringsInput191* me);

// strings_input_191 Execution function
void StringsInput191Run(StringsInput191* me);

#endif // STRINGS_INPUT_191_H_