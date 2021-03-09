#ifndef STRINGS_INPUT_187_H_
#define STRINGS_INPUT_187_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_187 States
enum StringsInput187States {
    STRINGS_INPUT_187_INTEGRATE,
    STRINGS_INPUT_187_LIMIT,
    STRINGS_INPUT_187_SPIKE,
    STRINGS_INPUT_187_REFRACTORY,
};

// strings_input_187 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput187States state;
} StringsInput187;

// strings_input_187 Initialisation function
void StringsInput187Init(StringsInput187* me);

// strings_input_187 Execution function
void StringsInput187Run(StringsInput187* me);

#endif // STRINGS_INPUT_187_H_