#ifndef STRINGS_INPUT_376_H_
#define STRINGS_INPUT_376_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_376 States
enum StringsInput376States {
    STRINGS_INPUT_376_INTEGRATE,
    STRINGS_INPUT_376_LIMIT,
    STRINGS_INPUT_376_SPIKE,
    STRINGS_INPUT_376_REFRACTORY,
};

// strings_input_376 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput376States state;
} StringsInput376;

// strings_input_376 Initialisation function
void StringsInput376Init(StringsInput376* me);

// strings_input_376 Execution function
void StringsInput376Run(StringsInput376* me);

#endif // STRINGS_INPUT_376_H_