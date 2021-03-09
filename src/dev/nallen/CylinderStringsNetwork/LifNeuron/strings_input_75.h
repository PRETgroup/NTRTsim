#ifndef STRINGS_INPUT_75_H_
#define STRINGS_INPUT_75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_75 States
enum StringsInput75States {
    STRINGS_INPUT_75_INTEGRATE,
    STRINGS_INPUT_75_LIMIT,
    STRINGS_INPUT_75_SPIKE,
    STRINGS_INPUT_75_REFRACTORY,
};

// strings_input_75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput75States state;
} StringsInput75;

// strings_input_75 Initialisation function
void StringsInput75Init(StringsInput75* me);

// strings_input_75 Execution function
void StringsInput75Run(StringsInput75* me);

#endif // STRINGS_INPUT_75_H_