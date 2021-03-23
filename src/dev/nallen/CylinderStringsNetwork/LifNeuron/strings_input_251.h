#ifndef STRINGS_INPUT_251_H_
#define STRINGS_INPUT_251_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_251 States
enum StringsInput251States {
    STRINGS_INPUT_251_INTEGRATE,
    STRINGS_INPUT_251_LIMIT,
    STRINGS_INPUT_251_SPIKE,
    STRINGS_INPUT_251_REFRACTORY,
};

// strings_input_251 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput251States state;
} StringsInput251;

// strings_input_251 Initialisation function
void StringsInput251Init(StringsInput251* me);

// strings_input_251 Execution function
void StringsInput251Run(StringsInput251* me);

#endif // STRINGS_INPUT_251_H_