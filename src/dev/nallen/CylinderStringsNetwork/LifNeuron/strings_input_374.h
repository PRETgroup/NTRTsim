#ifndef STRINGS_INPUT_374_H_
#define STRINGS_INPUT_374_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_374 States
enum StringsInput374States {
    STRINGS_INPUT_374_INTEGRATE,
    STRINGS_INPUT_374_LIMIT,
    STRINGS_INPUT_374_SPIKE,
    STRINGS_INPUT_374_REFRACTORY,
};

// strings_input_374 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput374States state;
} StringsInput374;

// strings_input_374 Initialisation function
void StringsInput374Init(StringsInput374* me);

// strings_input_374 Execution function
void StringsInput374Run(StringsInput374* me);

#endif // STRINGS_INPUT_374_H_