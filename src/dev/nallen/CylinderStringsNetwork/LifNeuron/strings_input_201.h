#ifndef STRINGS_INPUT_201_H_
#define STRINGS_INPUT_201_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_201 States
enum StringsInput201States {
    STRINGS_INPUT_201_INTEGRATE,
    STRINGS_INPUT_201_LIMIT,
    STRINGS_INPUT_201_SPIKE,
    STRINGS_INPUT_201_REFRACTORY,
};

// strings_input_201 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput201States state;
} StringsInput201;

// strings_input_201 Initialisation function
void StringsInput201Init(StringsInput201* me);

// strings_input_201 Execution function
void StringsInput201Run(StringsInput201* me);

#endif // STRINGS_INPUT_201_H_