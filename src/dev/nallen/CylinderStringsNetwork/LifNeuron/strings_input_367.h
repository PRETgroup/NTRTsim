#ifndef STRINGS_INPUT_367_H_
#define STRINGS_INPUT_367_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_367 States
enum StringsInput367States {
    STRINGS_INPUT_367_INTEGRATE,
    STRINGS_INPUT_367_LIMIT,
    STRINGS_INPUT_367_SPIKE,
    STRINGS_INPUT_367_REFRACTORY,
};

// strings_input_367 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput367States state;
} StringsInput367;

// strings_input_367 Initialisation function
void StringsInput367Init(StringsInput367* me);

// strings_input_367 Execution function
void StringsInput367Run(StringsInput367* me);

#endif // STRINGS_INPUT_367_H_