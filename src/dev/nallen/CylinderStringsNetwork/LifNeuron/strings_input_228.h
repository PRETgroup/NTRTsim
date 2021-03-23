#ifndef STRINGS_INPUT_228_H_
#define STRINGS_INPUT_228_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_228 States
enum StringsInput228States {
    STRINGS_INPUT_228_INTEGRATE,
    STRINGS_INPUT_228_LIMIT,
    STRINGS_INPUT_228_SPIKE,
    STRINGS_INPUT_228_REFRACTORY,
};

// strings_input_228 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput228States state;
} StringsInput228;

// strings_input_228 Initialisation function
void StringsInput228Init(StringsInput228* me);

// strings_input_228 Execution function
void StringsInput228Run(StringsInput228* me);

#endif // STRINGS_INPUT_228_H_