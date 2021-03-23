#ifndef STRINGS_INPUT_248_H_
#define STRINGS_INPUT_248_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_248 States
enum StringsInput248States {
    STRINGS_INPUT_248_INTEGRATE,
    STRINGS_INPUT_248_LIMIT,
    STRINGS_INPUT_248_SPIKE,
    STRINGS_INPUT_248_REFRACTORY,
};

// strings_input_248 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput248States state;
} StringsInput248;

// strings_input_248 Initialisation function
void StringsInput248Init(StringsInput248* me);

// strings_input_248 Execution function
void StringsInput248Run(StringsInput248* me);

#endif // STRINGS_INPUT_248_H_