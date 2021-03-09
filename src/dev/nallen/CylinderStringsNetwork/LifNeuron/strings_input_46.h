#ifndef STRINGS_INPUT_46_H_
#define STRINGS_INPUT_46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_46 States
enum StringsInput46States {
    STRINGS_INPUT_46_INTEGRATE,
    STRINGS_INPUT_46_LIMIT,
    STRINGS_INPUT_46_SPIKE,
    STRINGS_INPUT_46_REFRACTORY,
};

// strings_input_46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput46States state;
} StringsInput46;

// strings_input_46 Initialisation function
void StringsInput46Init(StringsInput46* me);

// strings_input_46 Execution function
void StringsInput46Run(StringsInput46* me);

#endif // STRINGS_INPUT_46_H_