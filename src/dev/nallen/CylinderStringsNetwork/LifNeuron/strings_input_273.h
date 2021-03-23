#ifndef STRINGS_INPUT_273_H_
#define STRINGS_INPUT_273_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_273 States
enum StringsInput273States {
    STRINGS_INPUT_273_INTEGRATE,
    STRINGS_INPUT_273_LIMIT,
    STRINGS_INPUT_273_SPIKE,
    STRINGS_INPUT_273_REFRACTORY,
};

// strings_input_273 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput273States state;
} StringsInput273;

// strings_input_273 Initialisation function
void StringsInput273Init(StringsInput273* me);

// strings_input_273 Execution function
void StringsInput273Run(StringsInput273* me);

#endif // STRINGS_INPUT_273_H_