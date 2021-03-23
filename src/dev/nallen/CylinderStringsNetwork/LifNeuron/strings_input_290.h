#ifndef STRINGS_INPUT_290_H_
#define STRINGS_INPUT_290_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_290 States
enum StringsInput290States {
    STRINGS_INPUT_290_INTEGRATE,
    STRINGS_INPUT_290_LIMIT,
    STRINGS_INPUT_290_SPIKE,
    STRINGS_INPUT_290_REFRACTORY,
};

// strings_input_290 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput290States state;
} StringsInput290;

// strings_input_290 Initialisation function
void StringsInput290Init(StringsInput290* me);

// strings_input_290 Execution function
void StringsInput290Run(StringsInput290* me);

#endif // STRINGS_INPUT_290_H_