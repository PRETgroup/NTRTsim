#ifndef STRINGS_INPUT_323_H_
#define STRINGS_INPUT_323_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_323 States
enum StringsInput323States {
    STRINGS_INPUT_323_INTEGRATE,
    STRINGS_INPUT_323_LIMIT,
    STRINGS_INPUT_323_SPIKE,
    STRINGS_INPUT_323_REFRACTORY,
};

// strings_input_323 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput323States state;
} StringsInput323;

// strings_input_323 Initialisation function
void StringsInput323Init(StringsInput323* me);

// strings_input_323 Execution function
void StringsInput323Run(StringsInput323* me);

#endif // STRINGS_INPUT_323_H_