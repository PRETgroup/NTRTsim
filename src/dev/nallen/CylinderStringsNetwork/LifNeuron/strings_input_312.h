#ifndef STRINGS_INPUT_312_H_
#define STRINGS_INPUT_312_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_312 States
enum StringsInput312States {
    STRINGS_INPUT_312_INTEGRATE,
    STRINGS_INPUT_312_LIMIT,
    STRINGS_INPUT_312_SPIKE,
    STRINGS_INPUT_312_REFRACTORY,
};

// strings_input_312 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput312States state;
} StringsInput312;

// strings_input_312 Initialisation function
void StringsInput312Init(StringsInput312* me);

// strings_input_312 Execution function
void StringsInput312Run(StringsInput312* me);

#endif // STRINGS_INPUT_312_H_