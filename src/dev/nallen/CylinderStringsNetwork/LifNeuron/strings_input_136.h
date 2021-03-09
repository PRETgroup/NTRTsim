#ifndef STRINGS_INPUT_136_H_
#define STRINGS_INPUT_136_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_136 States
enum StringsInput136States {
    STRINGS_INPUT_136_INTEGRATE,
    STRINGS_INPUT_136_LIMIT,
    STRINGS_INPUT_136_SPIKE,
    STRINGS_INPUT_136_REFRACTORY,
};

// strings_input_136 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput136States state;
} StringsInput136;

// strings_input_136 Initialisation function
void StringsInput136Init(StringsInput136* me);

// strings_input_136 Execution function
void StringsInput136Run(StringsInput136* me);

#endif // STRINGS_INPUT_136_H_