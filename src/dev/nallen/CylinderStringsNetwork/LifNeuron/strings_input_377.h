#ifndef STRINGS_INPUT_377_H_
#define STRINGS_INPUT_377_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_377 States
enum StringsInput377States {
    STRINGS_INPUT_377_INTEGRATE,
    STRINGS_INPUT_377_LIMIT,
    STRINGS_INPUT_377_SPIKE,
    STRINGS_INPUT_377_REFRACTORY,
};

// strings_input_377 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput377States state;
} StringsInput377;

// strings_input_377 Initialisation function
void StringsInput377Init(StringsInput377* me);

// strings_input_377 Execution function
void StringsInput377Run(StringsInput377* me);

#endif // STRINGS_INPUT_377_H_