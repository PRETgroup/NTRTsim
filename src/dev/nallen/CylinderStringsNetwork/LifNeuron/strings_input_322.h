#ifndef STRINGS_INPUT_322_H_
#define STRINGS_INPUT_322_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_322 States
enum StringsInput322States {
    STRINGS_INPUT_322_INTEGRATE,
    STRINGS_INPUT_322_LIMIT,
    STRINGS_INPUT_322_SPIKE,
    STRINGS_INPUT_322_REFRACTORY,
};

// strings_input_322 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput322States state;
} StringsInput322;

// strings_input_322 Initialisation function
void StringsInput322Init(StringsInput322* me);

// strings_input_322 Execution function
void StringsInput322Run(StringsInput322* me);

#endif // STRINGS_INPUT_322_H_