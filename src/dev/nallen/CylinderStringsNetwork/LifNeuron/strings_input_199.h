#ifndef STRINGS_INPUT_199_H_
#define STRINGS_INPUT_199_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_199 States
enum StringsInput199States {
    STRINGS_INPUT_199_INTEGRATE,
    STRINGS_INPUT_199_LIMIT,
    STRINGS_INPUT_199_SPIKE,
    STRINGS_INPUT_199_REFRACTORY,
};

// strings_input_199 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput199States state;
} StringsInput199;

// strings_input_199 Initialisation function
void StringsInput199Init(StringsInput199* me);

// strings_input_199 Execution function
void StringsInput199Run(StringsInput199* me);

#endif // STRINGS_INPUT_199_H_