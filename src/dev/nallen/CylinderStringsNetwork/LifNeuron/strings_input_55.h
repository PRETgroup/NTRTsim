#ifndef STRINGS_INPUT_55_H_
#define STRINGS_INPUT_55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_55 States
enum StringsInput55States {
    STRINGS_INPUT_55_INTEGRATE,
    STRINGS_INPUT_55_LIMIT,
    STRINGS_INPUT_55_SPIKE,
    STRINGS_INPUT_55_REFRACTORY,
};

// strings_input_55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput55States state;
} StringsInput55;

// strings_input_55 Initialisation function
void StringsInput55Init(StringsInput55* me);

// strings_input_55 Execution function
void StringsInput55Run(StringsInput55* me);

#endif // STRINGS_INPUT_55_H_