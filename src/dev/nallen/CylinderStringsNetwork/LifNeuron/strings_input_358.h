#ifndef STRINGS_INPUT_358_H_
#define STRINGS_INPUT_358_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_358 States
enum StringsInput358States {
    STRINGS_INPUT_358_INTEGRATE,
    STRINGS_INPUT_358_LIMIT,
    STRINGS_INPUT_358_SPIKE,
    STRINGS_INPUT_358_REFRACTORY,
};

// strings_input_358 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput358States state;
} StringsInput358;

// strings_input_358 Initialisation function
void StringsInput358Init(StringsInput358* me);

// strings_input_358 Execution function
void StringsInput358Run(StringsInput358* me);

#endif // STRINGS_INPUT_358_H_