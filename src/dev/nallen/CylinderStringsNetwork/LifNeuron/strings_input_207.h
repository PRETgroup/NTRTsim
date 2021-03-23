#ifndef STRINGS_INPUT_207_H_
#define STRINGS_INPUT_207_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_207 States
enum StringsInput207States {
    STRINGS_INPUT_207_INTEGRATE,
    STRINGS_INPUT_207_LIMIT,
    STRINGS_INPUT_207_SPIKE,
    STRINGS_INPUT_207_REFRACTORY,
};

// strings_input_207 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput207States state;
} StringsInput207;

// strings_input_207 Initialisation function
void StringsInput207Init(StringsInput207* me);

// strings_input_207 Execution function
void StringsInput207Run(StringsInput207* me);

#endif // STRINGS_INPUT_207_H_