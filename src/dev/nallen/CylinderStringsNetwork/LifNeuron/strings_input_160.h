#ifndef STRINGS_INPUT_160_H_
#define STRINGS_INPUT_160_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_160 States
enum StringsInput160States {
    STRINGS_INPUT_160_INTEGRATE,
    STRINGS_INPUT_160_LIMIT,
    STRINGS_INPUT_160_SPIKE,
    STRINGS_INPUT_160_REFRACTORY,
};

// strings_input_160 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput160States state;
} StringsInput160;

// strings_input_160 Initialisation function
void StringsInput160Init(StringsInput160* me);

// strings_input_160 Execution function
void StringsInput160Run(StringsInput160* me);

#endif // STRINGS_INPUT_160_H_