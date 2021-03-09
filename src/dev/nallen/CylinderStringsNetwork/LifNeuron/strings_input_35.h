#ifndef STRINGS_INPUT_35_H_
#define STRINGS_INPUT_35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_35 States
enum StringsInput35States {
    STRINGS_INPUT_35_INTEGRATE,
    STRINGS_INPUT_35_LIMIT,
    STRINGS_INPUT_35_SPIKE,
    STRINGS_INPUT_35_REFRACTORY,
};

// strings_input_35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput35States state;
} StringsInput35;

// strings_input_35 Initialisation function
void StringsInput35Init(StringsInput35* me);

// strings_input_35 Execution function
void StringsInput35Run(StringsInput35* me);

#endif // STRINGS_INPUT_35_H_