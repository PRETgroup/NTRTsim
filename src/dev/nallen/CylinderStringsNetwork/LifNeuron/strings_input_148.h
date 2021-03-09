#ifndef STRINGS_INPUT_148_H_
#define STRINGS_INPUT_148_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_148 States
enum StringsInput148States {
    STRINGS_INPUT_148_INTEGRATE,
    STRINGS_INPUT_148_LIMIT,
    STRINGS_INPUT_148_SPIKE,
    STRINGS_INPUT_148_REFRACTORY,
};

// strings_input_148 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput148States state;
} StringsInput148;

// strings_input_148 Initialisation function
void StringsInput148Init(StringsInput148* me);

// strings_input_148 Execution function
void StringsInput148Run(StringsInput148* me);

#endif // STRINGS_INPUT_148_H_