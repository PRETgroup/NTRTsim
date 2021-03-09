#ifndef STRINGS_INPUT_95_H_
#define STRINGS_INPUT_95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_95 States
enum StringsInput95States {
    STRINGS_INPUT_95_INTEGRATE,
    STRINGS_INPUT_95_LIMIT,
    STRINGS_INPUT_95_SPIKE,
    STRINGS_INPUT_95_REFRACTORY,
};

// strings_input_95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput95States state;
} StringsInput95;

// strings_input_95 Initialisation function
void StringsInput95Init(StringsInput95* me);

// strings_input_95 Execution function
void StringsInput95Run(StringsInput95* me);

#endif // STRINGS_INPUT_95_H_