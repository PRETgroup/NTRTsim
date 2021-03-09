#ifndef STRINGS_INPUT_57_H_
#define STRINGS_INPUT_57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_57 States
enum StringsInput57States {
    STRINGS_INPUT_57_INTEGRATE,
    STRINGS_INPUT_57_LIMIT,
    STRINGS_INPUT_57_SPIKE,
    STRINGS_INPUT_57_REFRACTORY,
};

// strings_input_57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput57States state;
} StringsInput57;

// strings_input_57 Initialisation function
void StringsInput57Init(StringsInput57* me);

// strings_input_57 Execution function
void StringsInput57Run(StringsInput57* me);

#endif // STRINGS_INPUT_57_H_