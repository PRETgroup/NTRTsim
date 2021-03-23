#ifndef STRINGS_INPUT_386_H_
#define STRINGS_INPUT_386_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_386 States
enum StringsInput386States {
    STRINGS_INPUT_386_INTEGRATE,
    STRINGS_INPUT_386_LIMIT,
    STRINGS_INPUT_386_SPIKE,
    STRINGS_INPUT_386_REFRACTORY,
};

// strings_input_386 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput386States state;
} StringsInput386;

// strings_input_386 Initialisation function
void StringsInput386Init(StringsInput386* me);

// strings_input_386 Execution function
void StringsInput386Run(StringsInput386* me);

#endif // STRINGS_INPUT_386_H_