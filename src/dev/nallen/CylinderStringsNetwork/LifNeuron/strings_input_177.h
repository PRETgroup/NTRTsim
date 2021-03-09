#ifndef STRINGS_INPUT_177_H_
#define STRINGS_INPUT_177_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_177 States
enum StringsInput177States {
    STRINGS_INPUT_177_INTEGRATE,
    STRINGS_INPUT_177_LIMIT,
    STRINGS_INPUT_177_SPIKE,
    STRINGS_INPUT_177_REFRACTORY,
};

// strings_input_177 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput177States state;
} StringsInput177;

// strings_input_177 Initialisation function
void StringsInput177Init(StringsInput177* me);

// strings_input_177 Execution function
void StringsInput177Run(StringsInput177* me);

#endif // STRINGS_INPUT_177_H_