#ifndef STRINGS_INPUT_345_H_
#define STRINGS_INPUT_345_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_345 States
enum StringsInput345States {
    STRINGS_INPUT_345_INTEGRATE,
    STRINGS_INPUT_345_LIMIT,
    STRINGS_INPUT_345_SPIKE,
    STRINGS_INPUT_345_REFRACTORY,
};

// strings_input_345 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput345States state;
} StringsInput345;

// strings_input_345 Initialisation function
void StringsInput345Init(StringsInput345* me);

// strings_input_345 Execution function
void StringsInput345Run(StringsInput345* me);

#endif // STRINGS_INPUT_345_H_