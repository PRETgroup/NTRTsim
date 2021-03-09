#ifndef STRINGS_INPUT_76_H_
#define STRINGS_INPUT_76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_76 States
enum StringsInput76States {
    STRINGS_INPUT_76_INTEGRATE,
    STRINGS_INPUT_76_LIMIT,
    STRINGS_INPUT_76_SPIKE,
    STRINGS_INPUT_76_REFRACTORY,
};

// strings_input_76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput76States state;
} StringsInput76;

// strings_input_76 Initialisation function
void StringsInput76Init(StringsInput76* me);

// strings_input_76 Execution function
void StringsInput76Run(StringsInput76* me);

#endif // STRINGS_INPUT_76_H_