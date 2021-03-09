#ifndef STRINGS_INPUT_88_H_
#define STRINGS_INPUT_88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_88 States
enum StringsInput88States {
    STRINGS_INPUT_88_INTEGRATE,
    STRINGS_INPUT_88_LIMIT,
    STRINGS_INPUT_88_SPIKE,
    STRINGS_INPUT_88_REFRACTORY,
};

// strings_input_88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput88States state;
} StringsInput88;

// strings_input_88 Initialisation function
void StringsInput88Init(StringsInput88* me);

// strings_input_88 Execution function
void StringsInput88Run(StringsInput88* me);

#endif // STRINGS_INPUT_88_H_