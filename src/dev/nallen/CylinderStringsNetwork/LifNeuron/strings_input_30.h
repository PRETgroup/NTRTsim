#ifndef STRINGS_INPUT_30_H_
#define STRINGS_INPUT_30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_30 States
enum StringsInput30States {
    STRINGS_INPUT_30_INTEGRATE,
    STRINGS_INPUT_30_LIMIT,
    STRINGS_INPUT_30_SPIKE,
    STRINGS_INPUT_30_REFRACTORY,
};

// strings_input_30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput30States state;
} StringsInput30;

// strings_input_30 Initialisation function
void StringsInput30Init(StringsInput30* me);

// strings_input_30 Execution function
void StringsInput30Run(StringsInput30* me);

#endif // STRINGS_INPUT_30_H_