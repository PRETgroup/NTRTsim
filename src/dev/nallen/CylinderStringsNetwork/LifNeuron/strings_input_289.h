#ifndef STRINGS_INPUT_289_H_
#define STRINGS_INPUT_289_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_289 States
enum StringsInput289States {
    STRINGS_INPUT_289_INTEGRATE,
    STRINGS_INPUT_289_LIMIT,
    STRINGS_INPUT_289_SPIKE,
    STRINGS_INPUT_289_REFRACTORY,
};

// strings_input_289 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput289States state;
} StringsInput289;

// strings_input_289 Initialisation function
void StringsInput289Init(StringsInput289* me);

// strings_input_289 Execution function
void StringsInput289Run(StringsInput289* me);

#endif // STRINGS_INPUT_289_H_