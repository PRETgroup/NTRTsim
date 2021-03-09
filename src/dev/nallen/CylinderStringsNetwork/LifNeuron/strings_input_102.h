#ifndef STRINGS_INPUT_102_H_
#define STRINGS_INPUT_102_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_102 States
enum StringsInput102States {
    STRINGS_INPUT_102_INTEGRATE,
    STRINGS_INPUT_102_LIMIT,
    STRINGS_INPUT_102_SPIKE,
    STRINGS_INPUT_102_REFRACTORY,
};

// strings_input_102 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput102States state;
} StringsInput102;

// strings_input_102 Initialisation function
void StringsInput102Init(StringsInput102* me);

// strings_input_102 Execution function
void StringsInput102Run(StringsInput102* me);

#endif // STRINGS_INPUT_102_H_