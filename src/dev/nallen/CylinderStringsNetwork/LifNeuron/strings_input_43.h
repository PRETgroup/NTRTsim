#ifndef STRINGS_INPUT_43_H_
#define STRINGS_INPUT_43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_43 States
enum StringsInput43States {
    STRINGS_INPUT_43_INTEGRATE,
    STRINGS_INPUT_43_LIMIT,
    STRINGS_INPUT_43_SPIKE,
    STRINGS_INPUT_43_REFRACTORY,
};

// strings_input_43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput43States state;
} StringsInput43;

// strings_input_43 Initialisation function
void StringsInput43Init(StringsInput43* me);

// strings_input_43 Execution function
void StringsInput43Run(StringsInput43* me);

#endif // STRINGS_INPUT_43_H_