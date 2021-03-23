#ifndef STRINGS_INPUT_324_H_
#define STRINGS_INPUT_324_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_324 States
enum StringsInput324States {
    STRINGS_INPUT_324_INTEGRATE,
    STRINGS_INPUT_324_LIMIT,
    STRINGS_INPUT_324_SPIKE,
    STRINGS_INPUT_324_REFRACTORY,
};

// strings_input_324 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput324States state;
} StringsInput324;

// strings_input_324 Initialisation function
void StringsInput324Init(StringsInput324* me);

// strings_input_324 Execution function
void StringsInput324Run(StringsInput324* me);

#endif // STRINGS_INPUT_324_H_