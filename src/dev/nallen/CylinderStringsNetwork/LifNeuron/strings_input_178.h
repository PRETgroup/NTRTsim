#ifndef STRINGS_INPUT_178_H_
#define STRINGS_INPUT_178_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_178 States
enum StringsInput178States {
    STRINGS_INPUT_178_INTEGRATE,
    STRINGS_INPUT_178_LIMIT,
    STRINGS_INPUT_178_SPIKE,
    STRINGS_INPUT_178_REFRACTORY,
};

// strings_input_178 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput178States state;
} StringsInput178;

// strings_input_178 Initialisation function
void StringsInput178Init(StringsInput178* me);

// strings_input_178 Execution function
void StringsInput178Run(StringsInput178* me);

#endif // STRINGS_INPUT_178_H_