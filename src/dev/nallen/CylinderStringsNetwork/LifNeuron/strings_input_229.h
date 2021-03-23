#ifndef STRINGS_INPUT_229_H_
#define STRINGS_INPUT_229_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_229 States
enum StringsInput229States {
    STRINGS_INPUT_229_INTEGRATE,
    STRINGS_INPUT_229_LIMIT,
    STRINGS_INPUT_229_SPIKE,
    STRINGS_INPUT_229_REFRACTORY,
};

// strings_input_229 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput229States state;
} StringsInput229;

// strings_input_229 Initialisation function
void StringsInput229Init(StringsInput229* me);

// strings_input_229 Execution function
void StringsInput229Run(StringsInput229* me);

#endif // STRINGS_INPUT_229_H_