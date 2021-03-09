#ifndef STRINGS_INPUT_190_H_
#define STRINGS_INPUT_190_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_190 States
enum StringsInput190States {
    STRINGS_INPUT_190_INTEGRATE,
    STRINGS_INPUT_190_LIMIT,
    STRINGS_INPUT_190_SPIKE,
    STRINGS_INPUT_190_REFRACTORY,
};

// strings_input_190 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput190States state;
} StringsInput190;

// strings_input_190 Initialisation function
void StringsInput190Init(StringsInput190* me);

// strings_input_190 Execution function
void StringsInput190Run(StringsInput190* me);

#endif // STRINGS_INPUT_190_H_