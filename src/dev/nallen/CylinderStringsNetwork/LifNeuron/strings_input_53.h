#ifndef STRINGS_INPUT_53_H_
#define STRINGS_INPUT_53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_53 States
enum StringsInput53States {
    STRINGS_INPUT_53_INTEGRATE,
    STRINGS_INPUT_53_LIMIT,
    STRINGS_INPUT_53_SPIKE,
    STRINGS_INPUT_53_REFRACTORY,
};

// strings_input_53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput53States state;
} StringsInput53;

// strings_input_53 Initialisation function
void StringsInput53Init(StringsInput53* me);

// strings_input_53 Execution function
void StringsInput53Run(StringsInput53* me);

#endif // STRINGS_INPUT_53_H_