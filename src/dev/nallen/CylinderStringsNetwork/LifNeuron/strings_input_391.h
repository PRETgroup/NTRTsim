#ifndef STRINGS_INPUT_391_H_
#define STRINGS_INPUT_391_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_391 States
enum StringsInput391States {
    STRINGS_INPUT_391_INTEGRATE,
    STRINGS_INPUT_391_LIMIT,
    STRINGS_INPUT_391_SPIKE,
    STRINGS_INPUT_391_REFRACTORY,
};

// strings_input_391 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput391States state;
} StringsInput391;

// strings_input_391 Initialisation function
void StringsInput391Init(StringsInput391* me);

// strings_input_391 Execution function
void StringsInput391Run(StringsInput391* me);

#endif // STRINGS_INPUT_391_H_