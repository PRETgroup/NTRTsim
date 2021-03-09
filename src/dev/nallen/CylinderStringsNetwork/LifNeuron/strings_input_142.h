#ifndef STRINGS_INPUT_142_H_
#define STRINGS_INPUT_142_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_142 States
enum StringsInput142States {
    STRINGS_INPUT_142_INTEGRATE,
    STRINGS_INPUT_142_LIMIT,
    STRINGS_INPUT_142_SPIKE,
    STRINGS_INPUT_142_REFRACTORY,
};

// strings_input_142 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput142States state;
} StringsInput142;

// strings_input_142 Initialisation function
void StringsInput142Init(StringsInput142* me);

// strings_input_142 Execution function
void StringsInput142Run(StringsInput142* me);

#endif // STRINGS_INPUT_142_H_