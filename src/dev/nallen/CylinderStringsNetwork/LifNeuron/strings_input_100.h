#ifndef STRINGS_INPUT_100_H_
#define STRINGS_INPUT_100_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_100 States
enum StringsInput100States {
    STRINGS_INPUT_100_INTEGRATE,
    STRINGS_INPUT_100_LIMIT,
    STRINGS_INPUT_100_SPIKE,
    STRINGS_INPUT_100_REFRACTORY,
};

// strings_input_100 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput100States state;
} StringsInput100;

// strings_input_100 Initialisation function
void StringsInput100Init(StringsInput100* me);

// strings_input_100 Execution function
void StringsInput100Run(StringsInput100* me);

#endif // STRINGS_INPUT_100_H_