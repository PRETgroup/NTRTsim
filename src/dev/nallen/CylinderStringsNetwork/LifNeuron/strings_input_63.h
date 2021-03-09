#ifndef STRINGS_INPUT_63_H_
#define STRINGS_INPUT_63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_63 States
enum StringsInput63States {
    STRINGS_INPUT_63_INTEGRATE,
    STRINGS_INPUT_63_LIMIT,
    STRINGS_INPUT_63_SPIKE,
    STRINGS_INPUT_63_REFRACTORY,
};

// strings_input_63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput63States state;
} StringsInput63;

// strings_input_63 Initialisation function
void StringsInput63Init(StringsInput63* me);

// strings_input_63 Execution function
void StringsInput63Run(StringsInput63* me);

#endif // STRINGS_INPUT_63_H_