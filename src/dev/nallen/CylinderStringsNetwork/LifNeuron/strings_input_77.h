#ifndef STRINGS_INPUT_77_H_
#define STRINGS_INPUT_77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_77 States
enum StringsInput77States {
    STRINGS_INPUT_77_INTEGRATE,
    STRINGS_INPUT_77_LIMIT,
    STRINGS_INPUT_77_SPIKE,
    STRINGS_INPUT_77_REFRACTORY,
};

// strings_input_77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput77States state;
} StringsInput77;

// strings_input_77 Initialisation function
void StringsInput77Init(StringsInput77* me);

// strings_input_77 Execution function
void StringsInput77Run(StringsInput77* me);

#endif // STRINGS_INPUT_77_H_