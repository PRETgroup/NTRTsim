#ifndef STRINGS_INPUT_109_H_
#define STRINGS_INPUT_109_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_109 States
enum StringsInput109States {
    STRINGS_INPUT_109_INTEGRATE,
    STRINGS_INPUT_109_LIMIT,
    STRINGS_INPUT_109_SPIKE,
    STRINGS_INPUT_109_REFRACTORY,
};

// strings_input_109 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput109States state;
} StringsInput109;

// strings_input_109 Initialisation function
void StringsInput109Init(StringsInput109* me);

// strings_input_109 Execution function
void StringsInput109Run(StringsInput109* me);

#endif // STRINGS_INPUT_109_H_