#ifndef STRINGS_INPUT_144_H_
#define STRINGS_INPUT_144_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_144 States
enum StringsInput144States {
    STRINGS_INPUT_144_INTEGRATE,
    STRINGS_INPUT_144_LIMIT,
    STRINGS_INPUT_144_SPIKE,
    STRINGS_INPUT_144_REFRACTORY,
};

// strings_input_144 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput144States state;
} StringsInput144;

// strings_input_144 Initialisation function
void StringsInput144Init(StringsInput144* me);

// strings_input_144 Execution function
void StringsInput144Run(StringsInput144* me);

#endif // STRINGS_INPUT_144_H_