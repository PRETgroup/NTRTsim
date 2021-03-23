#ifndef STRINGS_INPUT_262_H_
#define STRINGS_INPUT_262_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_262 States
enum StringsInput262States {
    STRINGS_INPUT_262_INTEGRATE,
    STRINGS_INPUT_262_LIMIT,
    STRINGS_INPUT_262_SPIKE,
    STRINGS_INPUT_262_REFRACTORY,
};

// strings_input_262 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput262States state;
} StringsInput262;

// strings_input_262 Initialisation function
void StringsInput262Init(StringsInput262* me);

// strings_input_262 Execution function
void StringsInput262Run(StringsInput262* me);

#endif // STRINGS_INPUT_262_H_