#ifndef STRINGS_INPUT_355_H_
#define STRINGS_INPUT_355_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_355 States
enum StringsInput355States {
    STRINGS_INPUT_355_INTEGRATE,
    STRINGS_INPUT_355_LIMIT,
    STRINGS_INPUT_355_SPIKE,
    STRINGS_INPUT_355_REFRACTORY,
};

// strings_input_355 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput355States state;
} StringsInput355;

// strings_input_355 Initialisation function
void StringsInput355Init(StringsInput355* me);

// strings_input_355 Execution function
void StringsInput355Run(StringsInput355* me);

#endif // STRINGS_INPUT_355_H_