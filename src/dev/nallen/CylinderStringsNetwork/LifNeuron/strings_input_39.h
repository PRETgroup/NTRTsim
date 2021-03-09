#ifndef STRINGS_INPUT_39_H_
#define STRINGS_INPUT_39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_39 States
enum StringsInput39States {
    STRINGS_INPUT_39_INTEGRATE,
    STRINGS_INPUT_39_LIMIT,
    STRINGS_INPUT_39_SPIKE,
    STRINGS_INPUT_39_REFRACTORY,
};

// strings_input_39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput39States state;
} StringsInput39;

// strings_input_39 Initialisation function
void StringsInput39Init(StringsInput39* me);

// strings_input_39 Execution function
void StringsInput39Run(StringsInput39* me);

#endif // STRINGS_INPUT_39_H_