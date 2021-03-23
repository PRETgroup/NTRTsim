#ifndef STRINGS_INPUT_256_H_
#define STRINGS_INPUT_256_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_256 States
enum StringsInput256States {
    STRINGS_INPUT_256_INTEGRATE,
    STRINGS_INPUT_256_LIMIT,
    STRINGS_INPUT_256_SPIKE,
    STRINGS_INPUT_256_REFRACTORY,
};

// strings_input_256 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput256States state;
} StringsInput256;

// strings_input_256 Initialisation function
void StringsInput256Init(StringsInput256* me);

// strings_input_256 Execution function
void StringsInput256Run(StringsInput256* me);

#endif // STRINGS_INPUT_256_H_