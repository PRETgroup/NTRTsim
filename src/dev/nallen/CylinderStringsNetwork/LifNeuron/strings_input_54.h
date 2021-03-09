#ifndef STRINGS_INPUT_54_H_
#define STRINGS_INPUT_54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_54 States
enum StringsInput54States {
    STRINGS_INPUT_54_INTEGRATE,
    STRINGS_INPUT_54_LIMIT,
    STRINGS_INPUT_54_SPIKE,
    STRINGS_INPUT_54_REFRACTORY,
};

// strings_input_54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput54States state;
} StringsInput54;

// strings_input_54 Initialisation function
void StringsInput54Init(StringsInput54* me);

// strings_input_54 Execution function
void StringsInput54Run(StringsInput54* me);

#endif // STRINGS_INPUT_54_H_