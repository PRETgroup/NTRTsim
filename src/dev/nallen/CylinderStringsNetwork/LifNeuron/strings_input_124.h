#ifndef STRINGS_INPUT_124_H_
#define STRINGS_INPUT_124_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_124 States
enum StringsInput124States {
    STRINGS_INPUT_124_INTEGRATE,
    STRINGS_INPUT_124_LIMIT,
    STRINGS_INPUT_124_SPIKE,
    STRINGS_INPUT_124_REFRACTORY,
};

// strings_input_124 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput124States state;
} StringsInput124;

// strings_input_124 Initialisation function
void StringsInput124Init(StringsInput124* me);

// strings_input_124 Execution function
void StringsInput124Run(StringsInput124* me);

#endif // STRINGS_INPUT_124_H_