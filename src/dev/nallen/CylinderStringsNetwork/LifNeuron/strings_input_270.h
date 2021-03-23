#ifndef STRINGS_INPUT_270_H_
#define STRINGS_INPUT_270_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_270 States
enum StringsInput270States {
    STRINGS_INPUT_270_INTEGRATE,
    STRINGS_INPUT_270_LIMIT,
    STRINGS_INPUT_270_SPIKE,
    STRINGS_INPUT_270_REFRACTORY,
};

// strings_input_270 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput270States state;
} StringsInput270;

// strings_input_270 Initialisation function
void StringsInput270Init(StringsInput270* me);

// strings_input_270 Execution function
void StringsInput270Run(StringsInput270* me);

#endif // STRINGS_INPUT_270_H_