#ifndef STRINGS_INPUT_27_H_
#define STRINGS_INPUT_27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_27 States
enum StringsInput27States {
    STRINGS_INPUT_27_INTEGRATE,
    STRINGS_INPUT_27_LIMIT,
    STRINGS_INPUT_27_SPIKE,
    STRINGS_INPUT_27_REFRACTORY,
};

// strings_input_27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput27States state;
} StringsInput27;

// strings_input_27 Initialisation function
void StringsInput27Init(StringsInput27* me);

// strings_input_27 Execution function
void StringsInput27Run(StringsInput27* me);

#endif // STRINGS_INPUT_27_H_