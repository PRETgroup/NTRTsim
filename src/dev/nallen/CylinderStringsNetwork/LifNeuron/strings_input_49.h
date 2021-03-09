#ifndef STRINGS_INPUT_49_H_
#define STRINGS_INPUT_49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_49 States
enum StringsInput49States {
    STRINGS_INPUT_49_INTEGRATE,
    STRINGS_INPUT_49_LIMIT,
    STRINGS_INPUT_49_SPIKE,
    STRINGS_INPUT_49_REFRACTORY,
};

// strings_input_49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput49States state;
} StringsInput49;

// strings_input_49 Initialisation function
void StringsInput49Init(StringsInput49* me);

// strings_input_49 Execution function
void StringsInput49Run(StringsInput49* me);

#endif // STRINGS_INPUT_49_H_