#ifndef STRINGS_INPUT_131_H_
#define STRINGS_INPUT_131_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_131 States
enum StringsInput131States {
    STRINGS_INPUT_131_INTEGRATE,
    STRINGS_INPUT_131_LIMIT,
    STRINGS_INPUT_131_SPIKE,
    STRINGS_INPUT_131_REFRACTORY,
};

// strings_input_131 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput131States state;
} StringsInput131;

// strings_input_131 Initialisation function
void StringsInput131Init(StringsInput131* me);

// strings_input_131 Execution function
void StringsInput131Run(StringsInput131* me);

#endif // STRINGS_INPUT_131_H_