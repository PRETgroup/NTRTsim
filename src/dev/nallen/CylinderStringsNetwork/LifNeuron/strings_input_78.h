#ifndef STRINGS_INPUT_78_H_
#define STRINGS_INPUT_78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_78 States
enum StringsInput78States {
    STRINGS_INPUT_78_INTEGRATE,
    STRINGS_INPUT_78_LIMIT,
    STRINGS_INPUT_78_SPIKE,
    STRINGS_INPUT_78_REFRACTORY,
};

// strings_input_78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput78States state;
} StringsInput78;

// strings_input_78 Initialisation function
void StringsInput78Init(StringsInput78* me);

// strings_input_78 Execution function
void StringsInput78Run(StringsInput78* me);

#endif // STRINGS_INPUT_78_H_