#ifndef STRINGS_INPUT_175_H_
#define STRINGS_INPUT_175_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_175 States
enum StringsInput175States {
    STRINGS_INPUT_175_INTEGRATE,
    STRINGS_INPUT_175_LIMIT,
    STRINGS_INPUT_175_SPIKE,
    STRINGS_INPUT_175_REFRACTORY,
};

// strings_input_175 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput175States state;
} StringsInput175;

// strings_input_175 Initialisation function
void StringsInput175Init(StringsInput175* me);

// strings_input_175 Execution function
void StringsInput175Run(StringsInput175* me);

#endif // STRINGS_INPUT_175_H_