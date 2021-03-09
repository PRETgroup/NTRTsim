#ifndef STRINGS_INPUT_19_H_
#define STRINGS_INPUT_19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_19 States
enum StringsInput19States {
    STRINGS_INPUT_19_INTEGRATE,
    STRINGS_INPUT_19_LIMIT,
    STRINGS_INPUT_19_SPIKE,
    STRINGS_INPUT_19_REFRACTORY,
};

// strings_input_19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput19States state;
} StringsInput19;

// strings_input_19 Initialisation function
void StringsInput19Init(StringsInput19* me);

// strings_input_19 Execution function
void StringsInput19Run(StringsInput19* me);

#endif // STRINGS_INPUT_19_H_