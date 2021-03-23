#ifndef STRINGS_INPUT_387_H_
#define STRINGS_INPUT_387_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_387 States
enum StringsInput387States {
    STRINGS_INPUT_387_INTEGRATE,
    STRINGS_INPUT_387_LIMIT,
    STRINGS_INPUT_387_SPIKE,
    STRINGS_INPUT_387_REFRACTORY,
};

// strings_input_387 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput387States state;
} StringsInput387;

// strings_input_387 Initialisation function
void StringsInput387Init(StringsInput387* me);

// strings_input_387 Execution function
void StringsInput387Run(StringsInput387* me);

#endif // STRINGS_INPUT_387_H_