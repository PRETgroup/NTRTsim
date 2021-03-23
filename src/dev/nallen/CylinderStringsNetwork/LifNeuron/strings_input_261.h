#ifndef STRINGS_INPUT_261_H_
#define STRINGS_INPUT_261_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_261 States
enum StringsInput261States {
    STRINGS_INPUT_261_INTEGRATE,
    STRINGS_INPUT_261_LIMIT,
    STRINGS_INPUT_261_SPIKE,
    STRINGS_INPUT_261_REFRACTORY,
};

// strings_input_261 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput261States state;
} StringsInput261;

// strings_input_261 Initialisation function
void StringsInput261Init(StringsInput261* me);

// strings_input_261 Execution function
void StringsInput261Run(StringsInput261* me);

#endif // STRINGS_INPUT_261_H_