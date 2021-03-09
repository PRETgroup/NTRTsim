#ifndef STRINGS_INPUT_70_H_
#define STRINGS_INPUT_70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_70 States
enum StringsInput70States {
    STRINGS_INPUT_70_INTEGRATE,
    STRINGS_INPUT_70_LIMIT,
    STRINGS_INPUT_70_SPIKE,
    STRINGS_INPUT_70_REFRACTORY,
};

// strings_input_70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput70States state;
} StringsInput70;

// strings_input_70 Initialisation function
void StringsInput70Init(StringsInput70* me);

// strings_input_70 Execution function
void StringsInput70Run(StringsInput70* me);

#endif // STRINGS_INPUT_70_H_