#ifndef STRINGS_INPUT_253_H_
#define STRINGS_INPUT_253_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_253 States
enum StringsInput253States {
    STRINGS_INPUT_253_INTEGRATE,
    STRINGS_INPUT_253_LIMIT,
    STRINGS_INPUT_253_SPIKE,
    STRINGS_INPUT_253_REFRACTORY,
};

// strings_input_253 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput253States state;
} StringsInput253;

// strings_input_253 Initialisation function
void StringsInput253Init(StringsInput253* me);

// strings_input_253 Execution function
void StringsInput253Run(StringsInput253* me);

#endif // STRINGS_INPUT_253_H_