#ifndef STRINGS_INPUT_238_H_
#define STRINGS_INPUT_238_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_238 States
enum StringsInput238States {
    STRINGS_INPUT_238_INTEGRATE,
    STRINGS_INPUT_238_LIMIT,
    STRINGS_INPUT_238_SPIKE,
    STRINGS_INPUT_238_REFRACTORY,
};

// strings_input_238 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput238States state;
} StringsInput238;

// strings_input_238 Initialisation function
void StringsInput238Init(StringsInput238* me);

// strings_input_238 Execution function
void StringsInput238Run(StringsInput238* me);

#endif // STRINGS_INPUT_238_H_