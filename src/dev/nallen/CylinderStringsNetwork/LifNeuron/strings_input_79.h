#ifndef STRINGS_INPUT_79_H_
#define STRINGS_INPUT_79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_79 States
enum StringsInput79States {
    STRINGS_INPUT_79_INTEGRATE,
    STRINGS_INPUT_79_LIMIT,
    STRINGS_INPUT_79_SPIKE,
    STRINGS_INPUT_79_REFRACTORY,
};

// strings_input_79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput79States state;
} StringsInput79;

// strings_input_79 Initialisation function
void StringsInput79Init(StringsInput79* me);

// strings_input_79 Execution function
void StringsInput79Run(StringsInput79* me);

#endif // STRINGS_INPUT_79_H_