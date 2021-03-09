#ifndef STRINGS_INPUT_29_H_
#define STRINGS_INPUT_29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_29 States
enum StringsInput29States {
    STRINGS_INPUT_29_INTEGRATE,
    STRINGS_INPUT_29_LIMIT,
    STRINGS_INPUT_29_SPIKE,
    STRINGS_INPUT_29_REFRACTORY,
};

// strings_input_29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput29States state;
} StringsInput29;

// strings_input_29 Initialisation function
void StringsInput29Init(StringsInput29* me);

// strings_input_29 Execution function
void StringsInput29Run(StringsInput29* me);

#endif // STRINGS_INPUT_29_H_