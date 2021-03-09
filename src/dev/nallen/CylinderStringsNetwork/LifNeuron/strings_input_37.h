#ifndef STRINGS_INPUT_37_H_
#define STRINGS_INPUT_37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_37 States
enum StringsInput37States {
    STRINGS_INPUT_37_INTEGRATE,
    STRINGS_INPUT_37_LIMIT,
    STRINGS_INPUT_37_SPIKE,
    STRINGS_INPUT_37_REFRACTORY,
};

// strings_input_37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput37States state;
} StringsInput37;

// strings_input_37 Initialisation function
void StringsInput37Init(StringsInput37* me);

// strings_input_37 Execution function
void StringsInput37Run(StringsInput37* me);

#endif // STRINGS_INPUT_37_H_