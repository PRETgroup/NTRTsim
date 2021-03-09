#ifndef STRINGS_INPUT_22_H_
#define STRINGS_INPUT_22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_22 States
enum StringsInput22States {
    STRINGS_INPUT_22_INTEGRATE,
    STRINGS_INPUT_22_LIMIT,
    STRINGS_INPUT_22_SPIKE,
    STRINGS_INPUT_22_REFRACTORY,
};

// strings_input_22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput22States state;
} StringsInput22;

// strings_input_22 Initialisation function
void StringsInput22Init(StringsInput22* me);

// strings_input_22 Execution function
void StringsInput22Run(StringsInput22* me);

#endif // STRINGS_INPUT_22_H_