#ifndef STRINGS_INPUT_200_H_
#define STRINGS_INPUT_200_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_200 States
enum StringsInput200States {
    STRINGS_INPUT_200_INTEGRATE,
    STRINGS_INPUT_200_LIMIT,
    STRINGS_INPUT_200_SPIKE,
    STRINGS_INPUT_200_REFRACTORY,
};

// strings_input_200 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput200States state;
} StringsInput200;

// strings_input_200 Initialisation function
void StringsInput200Init(StringsInput200* me);

// strings_input_200 Execution function
void StringsInput200Run(StringsInput200* me);

#endif // STRINGS_INPUT_200_H_