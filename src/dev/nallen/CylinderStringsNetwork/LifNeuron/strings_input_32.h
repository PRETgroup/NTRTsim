#ifndef STRINGS_INPUT_32_H_
#define STRINGS_INPUT_32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_32 States
enum StringsInput32States {
    STRINGS_INPUT_32_INTEGRATE,
    STRINGS_INPUT_32_LIMIT,
    STRINGS_INPUT_32_SPIKE,
    STRINGS_INPUT_32_REFRACTORY,
};

// strings_input_32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput32States state;
} StringsInput32;

// strings_input_32 Initialisation function
void StringsInput32Init(StringsInput32* me);

// strings_input_32 Execution function
void StringsInput32Run(StringsInput32* me);

#endif // STRINGS_INPUT_32_H_