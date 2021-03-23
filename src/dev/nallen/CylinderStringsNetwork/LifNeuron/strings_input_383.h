#ifndef STRINGS_INPUT_383_H_
#define STRINGS_INPUT_383_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_383 States
enum StringsInput383States {
    STRINGS_INPUT_383_INTEGRATE,
    STRINGS_INPUT_383_LIMIT,
    STRINGS_INPUT_383_SPIKE,
    STRINGS_INPUT_383_REFRACTORY,
};

// strings_input_383 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput383States state;
} StringsInput383;

// strings_input_383 Initialisation function
void StringsInput383Init(StringsInput383* me);

// strings_input_383 Execution function
void StringsInput383Run(StringsInput383* me);

#endif // STRINGS_INPUT_383_H_