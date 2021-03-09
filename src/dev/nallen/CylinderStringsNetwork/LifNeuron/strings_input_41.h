#ifndef STRINGS_INPUT_41_H_
#define STRINGS_INPUT_41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_41 States
enum StringsInput41States {
    STRINGS_INPUT_41_INTEGRATE,
    STRINGS_INPUT_41_LIMIT,
    STRINGS_INPUT_41_SPIKE,
    STRINGS_INPUT_41_REFRACTORY,
};

// strings_input_41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput41States state;
} StringsInput41;

// strings_input_41 Initialisation function
void StringsInput41Init(StringsInput41* me);

// strings_input_41 Execution function
void StringsInput41Run(StringsInput41* me);

#endif // STRINGS_INPUT_41_H_