#ifndef STRINGS_INPUT_325_H_
#define STRINGS_INPUT_325_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_325 States
enum StringsInput325States {
    STRINGS_INPUT_325_INTEGRATE,
    STRINGS_INPUT_325_LIMIT,
    STRINGS_INPUT_325_SPIKE,
    STRINGS_INPUT_325_REFRACTORY,
};

// strings_input_325 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput325States state;
} StringsInput325;

// strings_input_325 Initialisation function
void StringsInput325Init(StringsInput325* me);

// strings_input_325 Execution function
void StringsInput325Run(StringsInput325* me);

#endif // STRINGS_INPUT_325_H_