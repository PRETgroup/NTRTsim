#ifndef STRINGS_INPUT_373_H_
#define STRINGS_INPUT_373_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_373 States
enum StringsInput373States {
    STRINGS_INPUT_373_INTEGRATE,
    STRINGS_INPUT_373_LIMIT,
    STRINGS_INPUT_373_SPIKE,
    STRINGS_INPUT_373_REFRACTORY,
};

// strings_input_373 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput373States state;
} StringsInput373;

// strings_input_373 Initialisation function
void StringsInput373Init(StringsInput373* me);

// strings_input_373 Execution function
void StringsInput373Run(StringsInput373* me);

#endif // STRINGS_INPUT_373_H_