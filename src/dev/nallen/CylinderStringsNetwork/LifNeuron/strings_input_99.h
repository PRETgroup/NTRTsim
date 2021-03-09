#ifndef STRINGS_INPUT_99_H_
#define STRINGS_INPUT_99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_99 States
enum StringsInput99States {
    STRINGS_INPUT_99_INTEGRATE,
    STRINGS_INPUT_99_LIMIT,
    STRINGS_INPUT_99_SPIKE,
    STRINGS_INPUT_99_REFRACTORY,
};

// strings_input_99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput99States state;
} StringsInput99;

// strings_input_99 Initialisation function
void StringsInput99Init(StringsInput99* me);

// strings_input_99 Execution function
void StringsInput99Run(StringsInput99* me);

#endif // STRINGS_INPUT_99_H_