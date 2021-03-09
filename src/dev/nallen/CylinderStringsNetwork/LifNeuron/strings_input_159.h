#ifndef STRINGS_INPUT_159_H_
#define STRINGS_INPUT_159_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_159 States
enum StringsInput159States {
    STRINGS_INPUT_159_INTEGRATE,
    STRINGS_INPUT_159_LIMIT,
    STRINGS_INPUT_159_SPIKE,
    STRINGS_INPUT_159_REFRACTORY,
};

// strings_input_159 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput159States state;
} StringsInput159;

// strings_input_159 Initialisation function
void StringsInput159Init(StringsInput159* me);

// strings_input_159 Execution function
void StringsInput159Run(StringsInput159* me);

#endif // STRINGS_INPUT_159_H_