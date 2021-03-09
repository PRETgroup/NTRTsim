#ifndef STRINGS_INPUT_42_H_
#define STRINGS_INPUT_42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_42 States
enum StringsInput42States {
    STRINGS_INPUT_42_INTEGRATE,
    STRINGS_INPUT_42_LIMIT,
    STRINGS_INPUT_42_SPIKE,
    STRINGS_INPUT_42_REFRACTORY,
};

// strings_input_42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput42States state;
} StringsInput42;

// strings_input_42 Initialisation function
void StringsInput42Init(StringsInput42* me);

// strings_input_42 Execution function
void StringsInput42Run(StringsInput42* me);

#endif // STRINGS_INPUT_42_H_