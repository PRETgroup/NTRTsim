#ifndef STRINGS_INPUT_135_H_
#define STRINGS_INPUT_135_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_135 States
enum StringsInput135States {
    STRINGS_INPUT_135_INTEGRATE,
    STRINGS_INPUT_135_LIMIT,
    STRINGS_INPUT_135_SPIKE,
    STRINGS_INPUT_135_REFRACTORY,
};

// strings_input_135 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput135States state;
} StringsInput135;

// strings_input_135 Initialisation function
void StringsInput135Init(StringsInput135* me);

// strings_input_135 Execution function
void StringsInput135Run(StringsInput135* me);

#endif // STRINGS_INPUT_135_H_