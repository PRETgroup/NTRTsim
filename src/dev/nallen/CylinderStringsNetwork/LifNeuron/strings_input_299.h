#ifndef STRINGS_INPUT_299_H_
#define STRINGS_INPUT_299_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_299 States
enum StringsInput299States {
    STRINGS_INPUT_299_INTEGRATE,
    STRINGS_INPUT_299_LIMIT,
    STRINGS_INPUT_299_SPIKE,
    STRINGS_INPUT_299_REFRACTORY,
};

// strings_input_299 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput299States state;
} StringsInput299;

// strings_input_299 Initialisation function
void StringsInput299Init(StringsInput299* me);

// strings_input_299 Execution function
void StringsInput299Run(StringsInput299* me);

#endif // STRINGS_INPUT_299_H_