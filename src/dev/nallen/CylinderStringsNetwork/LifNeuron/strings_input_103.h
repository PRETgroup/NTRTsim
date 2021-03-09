#ifndef STRINGS_INPUT_103_H_
#define STRINGS_INPUT_103_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_103 States
enum StringsInput103States {
    STRINGS_INPUT_103_INTEGRATE,
    STRINGS_INPUT_103_LIMIT,
    STRINGS_INPUT_103_SPIKE,
    STRINGS_INPUT_103_REFRACTORY,
};

// strings_input_103 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput103States state;
} StringsInput103;

// strings_input_103 Initialisation function
void StringsInput103Init(StringsInput103* me);

// strings_input_103 Execution function
void StringsInput103Run(StringsInput103* me);

#endif // STRINGS_INPUT_103_H_