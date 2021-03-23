#ifndef STRINGS_INPUT_349_H_
#define STRINGS_INPUT_349_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_349 States
enum StringsInput349States {
    STRINGS_INPUT_349_INTEGRATE,
    STRINGS_INPUT_349_LIMIT,
    STRINGS_INPUT_349_SPIKE,
    STRINGS_INPUT_349_REFRACTORY,
};

// strings_input_349 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput349States state;
} StringsInput349;

// strings_input_349 Initialisation function
void StringsInput349Init(StringsInput349* me);

// strings_input_349 Execution function
void StringsInput349Run(StringsInput349* me);

#endif // STRINGS_INPUT_349_H_