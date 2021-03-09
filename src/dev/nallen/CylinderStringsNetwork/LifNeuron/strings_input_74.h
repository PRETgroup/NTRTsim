#ifndef STRINGS_INPUT_74_H_
#define STRINGS_INPUT_74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_74 States
enum StringsInput74States {
    STRINGS_INPUT_74_INTEGRATE,
    STRINGS_INPUT_74_LIMIT,
    STRINGS_INPUT_74_SPIKE,
    STRINGS_INPUT_74_REFRACTORY,
};

// strings_input_74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput74States state;
} StringsInput74;

// strings_input_74 Initialisation function
void StringsInput74Init(StringsInput74* me);

// strings_input_74 Execution function
void StringsInput74Run(StringsInput74* me);

#endif // STRINGS_INPUT_74_H_