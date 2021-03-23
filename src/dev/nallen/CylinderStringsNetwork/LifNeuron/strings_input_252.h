#ifndef STRINGS_INPUT_252_H_
#define STRINGS_INPUT_252_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_252 States
enum StringsInput252States {
    STRINGS_INPUT_252_INTEGRATE,
    STRINGS_INPUT_252_LIMIT,
    STRINGS_INPUT_252_SPIKE,
    STRINGS_INPUT_252_REFRACTORY,
};

// strings_input_252 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput252States state;
} StringsInput252;

// strings_input_252 Initialisation function
void StringsInput252Init(StringsInput252* me);

// strings_input_252 Execution function
void StringsInput252Run(StringsInput252* me);

#endif // STRINGS_INPUT_252_H_