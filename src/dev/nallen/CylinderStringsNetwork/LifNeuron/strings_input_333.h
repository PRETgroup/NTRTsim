#ifndef STRINGS_INPUT_333_H_
#define STRINGS_INPUT_333_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_333 States
enum StringsInput333States {
    STRINGS_INPUT_333_INTEGRATE,
    STRINGS_INPUT_333_LIMIT,
    STRINGS_INPUT_333_SPIKE,
    STRINGS_INPUT_333_REFRACTORY,
};

// strings_input_333 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput333States state;
} StringsInput333;

// strings_input_333 Initialisation function
void StringsInput333Init(StringsInput333* me);

// strings_input_333 Execution function
void StringsInput333Run(StringsInput333* me);

#endif // STRINGS_INPUT_333_H_