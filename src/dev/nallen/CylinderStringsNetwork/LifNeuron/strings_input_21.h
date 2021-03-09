#ifndef STRINGS_INPUT_21_H_
#define STRINGS_INPUT_21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_21 States
enum StringsInput21States {
    STRINGS_INPUT_21_INTEGRATE,
    STRINGS_INPUT_21_LIMIT,
    STRINGS_INPUT_21_SPIKE,
    STRINGS_INPUT_21_REFRACTORY,
};

// strings_input_21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput21States state;
} StringsInput21;

// strings_input_21 Initialisation function
void StringsInput21Init(StringsInput21* me);

// strings_input_21 Execution function
void StringsInput21Run(StringsInput21* me);

#endif // STRINGS_INPUT_21_H_