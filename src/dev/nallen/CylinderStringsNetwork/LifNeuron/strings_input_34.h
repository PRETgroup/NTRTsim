#ifndef STRINGS_INPUT_34_H_
#define STRINGS_INPUT_34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_34 States
enum StringsInput34States {
    STRINGS_INPUT_34_INTEGRATE,
    STRINGS_INPUT_34_LIMIT,
    STRINGS_INPUT_34_SPIKE,
    STRINGS_INPUT_34_REFRACTORY,
};

// strings_input_34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput34States state;
} StringsInput34;

// strings_input_34 Initialisation function
void StringsInput34Init(StringsInput34* me);

// strings_input_34 Execution function
void StringsInput34Run(StringsInput34* me);

#endif // STRINGS_INPUT_34_H_