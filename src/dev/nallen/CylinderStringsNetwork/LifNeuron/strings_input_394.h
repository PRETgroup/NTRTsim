#ifndef STRINGS_INPUT_394_H_
#define STRINGS_INPUT_394_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_394 States
enum StringsInput394States {
    STRINGS_INPUT_394_INTEGRATE,
    STRINGS_INPUT_394_LIMIT,
    STRINGS_INPUT_394_SPIKE,
    STRINGS_INPUT_394_REFRACTORY,
};

// strings_input_394 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput394States state;
} StringsInput394;

// strings_input_394 Initialisation function
void StringsInput394Init(StringsInput394* me);

// strings_input_394 Execution function
void StringsInput394Run(StringsInput394* me);

#endif // STRINGS_INPUT_394_H_