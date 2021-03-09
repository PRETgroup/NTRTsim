#ifndef STRINGS_INPUT_98_H_
#define STRINGS_INPUT_98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_98 States
enum StringsInput98States {
    STRINGS_INPUT_98_INTEGRATE,
    STRINGS_INPUT_98_LIMIT,
    STRINGS_INPUT_98_SPIKE,
    STRINGS_INPUT_98_REFRACTORY,
};

// strings_input_98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput98States state;
} StringsInput98;

// strings_input_98 Initialisation function
void StringsInput98Init(StringsInput98* me);

// strings_input_98 Execution function
void StringsInput98Run(StringsInput98* me);

#endif // STRINGS_INPUT_98_H_