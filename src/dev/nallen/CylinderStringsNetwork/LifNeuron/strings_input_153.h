#ifndef STRINGS_INPUT_153_H_
#define STRINGS_INPUT_153_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_153 States
enum StringsInput153States {
    STRINGS_INPUT_153_INTEGRATE,
    STRINGS_INPUT_153_LIMIT,
    STRINGS_INPUT_153_SPIKE,
    STRINGS_INPUT_153_REFRACTORY,
};

// strings_input_153 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput153States state;
} StringsInput153;

// strings_input_153 Initialisation function
void StringsInput153Init(StringsInput153* me);

// strings_input_153 Execution function
void StringsInput153Run(StringsInput153* me);

#endif // STRINGS_INPUT_153_H_