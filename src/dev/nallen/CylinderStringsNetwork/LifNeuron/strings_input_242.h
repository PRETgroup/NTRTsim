#ifndef STRINGS_INPUT_242_H_
#define STRINGS_INPUT_242_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_242 States
enum StringsInput242States {
    STRINGS_INPUT_242_INTEGRATE,
    STRINGS_INPUT_242_LIMIT,
    STRINGS_INPUT_242_SPIKE,
    STRINGS_INPUT_242_REFRACTORY,
};

// strings_input_242 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput242States state;
} StringsInput242;

// strings_input_242 Initialisation function
void StringsInput242Init(StringsInput242* me);

// strings_input_242 Execution function
void StringsInput242Run(StringsInput242* me);

#endif // STRINGS_INPUT_242_H_