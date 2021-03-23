#ifndef STRINGS_INPUT_310_H_
#define STRINGS_INPUT_310_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_310 States
enum StringsInput310States {
    STRINGS_INPUT_310_INTEGRATE,
    STRINGS_INPUT_310_LIMIT,
    STRINGS_INPUT_310_SPIKE,
    STRINGS_INPUT_310_REFRACTORY,
};

// strings_input_310 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput310States state;
} StringsInput310;

// strings_input_310 Initialisation function
void StringsInput310Init(StringsInput310* me);

// strings_input_310 Execution function
void StringsInput310Run(StringsInput310* me);

#endif // STRINGS_INPUT_310_H_