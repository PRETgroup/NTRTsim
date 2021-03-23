#ifndef STRINGS_INPUT_295_H_
#define STRINGS_INPUT_295_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_295 States
enum StringsInput295States {
    STRINGS_INPUT_295_INTEGRATE,
    STRINGS_INPUT_295_LIMIT,
    STRINGS_INPUT_295_SPIKE,
    STRINGS_INPUT_295_REFRACTORY,
};

// strings_input_295 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput295States state;
} StringsInput295;

// strings_input_295 Initialisation function
void StringsInput295Init(StringsInput295* me);

// strings_input_295 Execution function
void StringsInput295Run(StringsInput295* me);

#endif // STRINGS_INPUT_295_H_