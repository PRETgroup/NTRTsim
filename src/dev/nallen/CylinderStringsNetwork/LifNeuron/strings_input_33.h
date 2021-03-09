#ifndef STRINGS_INPUT_33_H_
#define STRINGS_INPUT_33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_33 States
enum StringsInput33States {
    STRINGS_INPUT_33_INTEGRATE,
    STRINGS_INPUT_33_LIMIT,
    STRINGS_INPUT_33_SPIKE,
    STRINGS_INPUT_33_REFRACTORY,
};

// strings_input_33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput33States state;
} StringsInput33;

// strings_input_33 Initialisation function
void StringsInput33Init(StringsInput33* me);

// strings_input_33 Execution function
void StringsInput33Run(StringsInput33* me);

#endif // STRINGS_INPUT_33_H_