#ifndef STRINGS_INPUT_369_H_
#define STRINGS_INPUT_369_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_369 States
enum StringsInput369States {
    STRINGS_INPUT_369_INTEGRATE,
    STRINGS_INPUT_369_LIMIT,
    STRINGS_INPUT_369_SPIKE,
    STRINGS_INPUT_369_REFRACTORY,
};

// strings_input_369 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput369States state;
} StringsInput369;

// strings_input_369 Initialisation function
void StringsInput369Init(StringsInput369* me);

// strings_input_369 Execution function
void StringsInput369Run(StringsInput369* me);

#endif // STRINGS_INPUT_369_H_