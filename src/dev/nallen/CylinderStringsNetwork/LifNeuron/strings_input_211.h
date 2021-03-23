#ifndef STRINGS_INPUT_211_H_
#define STRINGS_INPUT_211_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_211 States
enum StringsInput211States {
    STRINGS_INPUT_211_INTEGRATE,
    STRINGS_INPUT_211_LIMIT,
    STRINGS_INPUT_211_SPIKE,
    STRINGS_INPUT_211_REFRACTORY,
};

// strings_input_211 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput211States state;
} StringsInput211;

// strings_input_211 Initialisation function
void StringsInput211Init(StringsInput211* me);

// strings_input_211 Execution function
void StringsInput211Run(StringsInput211* me);

#endif // STRINGS_INPUT_211_H_