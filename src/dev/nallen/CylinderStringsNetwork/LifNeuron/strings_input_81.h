#ifndef STRINGS_INPUT_81_H_
#define STRINGS_INPUT_81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_81 States
enum StringsInput81States {
    STRINGS_INPUT_81_INTEGRATE,
    STRINGS_INPUT_81_LIMIT,
    STRINGS_INPUT_81_SPIKE,
    STRINGS_INPUT_81_REFRACTORY,
};

// strings_input_81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput81States state;
} StringsInput81;

// strings_input_81 Initialisation function
void StringsInput81Init(StringsInput81* me);

// strings_input_81 Execution function
void StringsInput81Run(StringsInput81* me);

#endif // STRINGS_INPUT_81_H_