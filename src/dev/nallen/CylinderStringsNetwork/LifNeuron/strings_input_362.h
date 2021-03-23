#ifndef STRINGS_INPUT_362_H_
#define STRINGS_INPUT_362_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_362 States
enum StringsInput362States {
    STRINGS_INPUT_362_INTEGRATE,
    STRINGS_INPUT_362_LIMIT,
    STRINGS_INPUT_362_SPIKE,
    STRINGS_INPUT_362_REFRACTORY,
};

// strings_input_362 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput362States state;
} StringsInput362;

// strings_input_362 Initialisation function
void StringsInput362Init(StringsInput362* me);

// strings_input_362 Execution function
void StringsInput362Run(StringsInput362* me);

#endif // STRINGS_INPUT_362_H_