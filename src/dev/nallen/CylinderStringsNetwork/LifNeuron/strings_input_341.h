#ifndef STRINGS_INPUT_341_H_
#define STRINGS_INPUT_341_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_341 States
enum StringsInput341States {
    STRINGS_INPUT_341_INTEGRATE,
    STRINGS_INPUT_341_LIMIT,
    STRINGS_INPUT_341_SPIKE,
    STRINGS_INPUT_341_REFRACTORY,
};

// strings_input_341 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput341States state;
} StringsInput341;

// strings_input_341 Initialisation function
void StringsInput341Init(StringsInput341* me);

// strings_input_341 Execution function
void StringsInput341Run(StringsInput341* me);

#endif // STRINGS_INPUT_341_H_