#ifndef STRINGS_INPUT_115_H_
#define STRINGS_INPUT_115_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_115 States
enum StringsInput115States {
    STRINGS_INPUT_115_INTEGRATE,
    STRINGS_INPUT_115_LIMIT,
    STRINGS_INPUT_115_SPIKE,
    STRINGS_INPUT_115_REFRACTORY,
};

// strings_input_115 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput115States state;
} StringsInput115;

// strings_input_115 Initialisation function
void StringsInput115Init(StringsInput115* me);

// strings_input_115 Execution function
void StringsInput115Run(StringsInput115* me);

#endif // STRINGS_INPUT_115_H_