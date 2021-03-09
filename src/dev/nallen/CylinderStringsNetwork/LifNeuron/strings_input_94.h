#ifndef STRINGS_INPUT_94_H_
#define STRINGS_INPUT_94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_94 States
enum StringsInput94States {
    STRINGS_INPUT_94_INTEGRATE,
    STRINGS_INPUT_94_LIMIT,
    STRINGS_INPUT_94_SPIKE,
    STRINGS_INPUT_94_REFRACTORY,
};

// strings_input_94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput94States state;
} StringsInput94;

// strings_input_94 Initialisation function
void StringsInput94Init(StringsInput94* me);

// strings_input_94 Execution function
void StringsInput94Run(StringsInput94* me);

#endif // STRINGS_INPUT_94_H_