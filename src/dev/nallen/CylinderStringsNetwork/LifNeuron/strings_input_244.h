#ifndef STRINGS_INPUT_244_H_
#define STRINGS_INPUT_244_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_244 States
enum StringsInput244States {
    STRINGS_INPUT_244_INTEGRATE,
    STRINGS_INPUT_244_LIMIT,
    STRINGS_INPUT_244_SPIKE,
    STRINGS_INPUT_244_REFRACTORY,
};

// strings_input_244 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput244States state;
} StringsInput244;

// strings_input_244 Initialisation function
void StringsInput244Init(StringsInput244* me);

// strings_input_244 Execution function
void StringsInput244Run(StringsInput244* me);

#endif // STRINGS_INPUT_244_H_