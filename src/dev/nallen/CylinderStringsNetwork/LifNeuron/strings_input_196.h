#ifndef STRINGS_INPUT_196_H_
#define STRINGS_INPUT_196_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_196 States
enum StringsInput196States {
    STRINGS_INPUT_196_INTEGRATE,
    STRINGS_INPUT_196_LIMIT,
    STRINGS_INPUT_196_SPIKE,
    STRINGS_INPUT_196_REFRACTORY,
};

// strings_input_196 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput196States state;
} StringsInput196;

// strings_input_196 Initialisation function
void StringsInput196Init(StringsInput196* me);

// strings_input_196 Execution function
void StringsInput196Run(StringsInput196* me);

#endif // STRINGS_INPUT_196_H_