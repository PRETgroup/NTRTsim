#ifndef STRINGS_INPUT_125_H_
#define STRINGS_INPUT_125_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_125 States
enum StringsInput125States {
    STRINGS_INPUT_125_INTEGRATE,
    STRINGS_INPUT_125_LIMIT,
    STRINGS_INPUT_125_SPIKE,
    STRINGS_INPUT_125_REFRACTORY,
};

// strings_input_125 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput125States state;
} StringsInput125;

// strings_input_125 Initialisation function
void StringsInput125Init(StringsInput125* me);

// strings_input_125 Execution function
void StringsInput125Run(StringsInput125* me);

#endif // STRINGS_INPUT_125_H_