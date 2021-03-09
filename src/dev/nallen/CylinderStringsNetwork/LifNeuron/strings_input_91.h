#ifndef STRINGS_INPUT_91_H_
#define STRINGS_INPUT_91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_91 States
enum StringsInput91States {
    STRINGS_INPUT_91_INTEGRATE,
    STRINGS_INPUT_91_LIMIT,
    STRINGS_INPUT_91_SPIKE,
    STRINGS_INPUT_91_REFRACTORY,
};

// strings_input_91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput91States state;
} StringsInput91;

// strings_input_91 Initialisation function
void StringsInput91Init(StringsInput91* me);

// strings_input_91 Execution function
void StringsInput91Run(StringsInput91* me);

#endif // STRINGS_INPUT_91_H_