#ifndef STRINGS_INPUT_371_H_
#define STRINGS_INPUT_371_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_371 States
enum StringsInput371States {
    STRINGS_INPUT_371_INTEGRATE,
    STRINGS_INPUT_371_LIMIT,
    STRINGS_INPUT_371_SPIKE,
    STRINGS_INPUT_371_REFRACTORY,
};

// strings_input_371 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput371States state;
} StringsInput371;

// strings_input_371 Initialisation function
void StringsInput371Init(StringsInput371* me);

// strings_input_371 Execution function
void StringsInput371Run(StringsInput371* me);

#endif // STRINGS_INPUT_371_H_