#ifndef STRINGS_INPUT_375_H_
#define STRINGS_INPUT_375_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_375 States
enum StringsInput375States {
    STRINGS_INPUT_375_INTEGRATE,
    STRINGS_INPUT_375_LIMIT,
    STRINGS_INPUT_375_SPIKE,
    STRINGS_INPUT_375_REFRACTORY,
};

// strings_input_375 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput375States state;
} StringsInput375;

// strings_input_375 Initialisation function
void StringsInput375Init(StringsInput375* me);

// strings_input_375 Execution function
void StringsInput375Run(StringsInput375* me);

#endif // STRINGS_INPUT_375_H_