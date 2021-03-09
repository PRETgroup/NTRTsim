#ifndef STRINGS_INPUT_122_H_
#define STRINGS_INPUT_122_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_122 States
enum StringsInput122States {
    STRINGS_INPUT_122_INTEGRATE,
    STRINGS_INPUT_122_LIMIT,
    STRINGS_INPUT_122_SPIKE,
    STRINGS_INPUT_122_REFRACTORY,
};

// strings_input_122 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput122States state;
} StringsInput122;

// strings_input_122 Initialisation function
void StringsInput122Init(StringsInput122* me);

// strings_input_122 Execution function
void StringsInput122Run(StringsInput122* me);

#endif // STRINGS_INPUT_122_H_