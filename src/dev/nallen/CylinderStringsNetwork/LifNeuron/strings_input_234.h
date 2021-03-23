#ifndef STRINGS_INPUT_234_H_
#define STRINGS_INPUT_234_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_234 States
enum StringsInput234States {
    STRINGS_INPUT_234_INTEGRATE,
    STRINGS_INPUT_234_LIMIT,
    STRINGS_INPUT_234_SPIKE,
    STRINGS_INPUT_234_REFRACTORY,
};

// strings_input_234 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput234States state;
} StringsInput234;

// strings_input_234 Initialisation function
void StringsInput234Init(StringsInput234* me);

// strings_input_234 Execution function
void StringsInput234Run(StringsInput234* me);

#endif // STRINGS_INPUT_234_H_