#ifndef STRINGS_INPUT_121_H_
#define STRINGS_INPUT_121_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_121 States
enum StringsInput121States {
    STRINGS_INPUT_121_INTEGRATE,
    STRINGS_INPUT_121_LIMIT,
    STRINGS_INPUT_121_SPIKE,
    STRINGS_INPUT_121_REFRACTORY,
};

// strings_input_121 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput121States state;
} StringsInput121;

// strings_input_121 Initialisation function
void StringsInput121Init(StringsInput121* me);

// strings_input_121 Execution function
void StringsInput121Run(StringsInput121* me);

#endif // STRINGS_INPUT_121_H_