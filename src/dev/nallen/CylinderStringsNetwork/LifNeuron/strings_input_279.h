#ifndef STRINGS_INPUT_279_H_
#define STRINGS_INPUT_279_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_279 States
enum StringsInput279States {
    STRINGS_INPUT_279_INTEGRATE,
    STRINGS_INPUT_279_LIMIT,
    STRINGS_INPUT_279_SPIKE,
    STRINGS_INPUT_279_REFRACTORY,
};

// strings_input_279 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput279States state;
} StringsInput279;

// strings_input_279 Initialisation function
void StringsInput279Init(StringsInput279* me);

// strings_input_279 Execution function
void StringsInput279Run(StringsInput279* me);

#endif // STRINGS_INPUT_279_H_