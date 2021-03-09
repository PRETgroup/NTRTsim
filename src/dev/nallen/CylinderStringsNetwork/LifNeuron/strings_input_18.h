#ifndef STRINGS_INPUT_18_H_
#define STRINGS_INPUT_18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_18 States
enum StringsInput18States {
    STRINGS_INPUT_18_INTEGRATE,
    STRINGS_INPUT_18_LIMIT,
    STRINGS_INPUT_18_SPIKE,
    STRINGS_INPUT_18_REFRACTORY,
};

// strings_input_18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput18States state;
} StringsInput18;

// strings_input_18 Initialisation function
void StringsInput18Init(StringsInput18* me);

// strings_input_18 Execution function
void StringsInput18Run(StringsInput18* me);

#endif // STRINGS_INPUT_18_H_