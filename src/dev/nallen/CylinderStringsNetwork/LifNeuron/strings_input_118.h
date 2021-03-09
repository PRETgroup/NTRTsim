#ifndef STRINGS_INPUT_118_H_
#define STRINGS_INPUT_118_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_118 States
enum StringsInput118States {
    STRINGS_INPUT_118_INTEGRATE,
    STRINGS_INPUT_118_LIMIT,
    STRINGS_INPUT_118_SPIKE,
    STRINGS_INPUT_118_REFRACTORY,
};

// strings_input_118 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput118States state;
} StringsInput118;

// strings_input_118 Initialisation function
void StringsInput118Init(StringsInput118* me);

// strings_input_118 Execution function
void StringsInput118Run(StringsInput118* me);

#endif // STRINGS_INPUT_118_H_