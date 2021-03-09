#ifndef STRINGS_INPUT_194_H_
#define STRINGS_INPUT_194_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_194 States
enum StringsInput194States {
    STRINGS_INPUT_194_INTEGRATE,
    STRINGS_INPUT_194_LIMIT,
    STRINGS_INPUT_194_SPIKE,
    STRINGS_INPUT_194_REFRACTORY,
};

// strings_input_194 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput194States state;
} StringsInput194;

// strings_input_194 Initialisation function
void StringsInput194Init(StringsInput194* me);

// strings_input_194 Execution function
void StringsInput194Run(StringsInput194* me);

#endif // STRINGS_INPUT_194_H_