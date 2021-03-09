#ifndef STRINGS_INPUT_192_H_
#define STRINGS_INPUT_192_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_192 States
enum StringsInput192States {
    STRINGS_INPUT_192_INTEGRATE,
    STRINGS_INPUT_192_LIMIT,
    STRINGS_INPUT_192_SPIKE,
    STRINGS_INPUT_192_REFRACTORY,
};

// strings_input_192 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput192States state;
} StringsInput192;

// strings_input_192 Initialisation function
void StringsInput192Init(StringsInput192* me);

// strings_input_192 Execution function
void StringsInput192Run(StringsInput192* me);

#endif // STRINGS_INPUT_192_H_