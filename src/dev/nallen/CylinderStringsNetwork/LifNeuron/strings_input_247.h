#ifndef STRINGS_INPUT_247_H_
#define STRINGS_INPUT_247_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_247 States
enum StringsInput247States {
    STRINGS_INPUT_247_INTEGRATE,
    STRINGS_INPUT_247_LIMIT,
    STRINGS_INPUT_247_SPIKE,
    STRINGS_INPUT_247_REFRACTORY,
};

// strings_input_247 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput247States state;
} StringsInput247;

// strings_input_247 Initialisation function
void StringsInput247Init(StringsInput247* me);

// strings_input_247 Execution function
void StringsInput247Run(StringsInput247* me);

#endif // STRINGS_INPUT_247_H_