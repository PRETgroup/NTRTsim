#ifndef STRINGS_INPUT_330_H_
#define STRINGS_INPUT_330_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_330 States
enum StringsInput330States {
    STRINGS_INPUT_330_INTEGRATE,
    STRINGS_INPUT_330_LIMIT,
    STRINGS_INPUT_330_SPIKE,
    STRINGS_INPUT_330_REFRACTORY,
};

// strings_input_330 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput330States state;
} StringsInput330;

// strings_input_330 Initialisation function
void StringsInput330Init(StringsInput330* me);

// strings_input_330 Execution function
void StringsInput330Run(StringsInput330* me);

#endif // STRINGS_INPUT_330_H_