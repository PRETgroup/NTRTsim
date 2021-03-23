#ifndef STRINGS_INPUT_313_H_
#define STRINGS_INPUT_313_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_313 States
enum StringsInput313States {
    STRINGS_INPUT_313_INTEGRATE,
    STRINGS_INPUT_313_LIMIT,
    STRINGS_INPUT_313_SPIKE,
    STRINGS_INPUT_313_REFRACTORY,
};

// strings_input_313 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput313States state;
} StringsInput313;

// strings_input_313 Initialisation function
void StringsInput313Init(StringsInput313* me);

// strings_input_313 Execution function
void StringsInput313Run(StringsInput313* me);

#endif // STRINGS_INPUT_313_H_