#ifndef STRINGS_INPUT_128_H_
#define STRINGS_INPUT_128_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_128 States
enum StringsInput128States {
    STRINGS_INPUT_128_INTEGRATE,
    STRINGS_INPUT_128_LIMIT,
    STRINGS_INPUT_128_SPIKE,
    STRINGS_INPUT_128_REFRACTORY,
};

// strings_input_128 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput128States state;
} StringsInput128;

// strings_input_128 Initialisation function
void StringsInput128Init(StringsInput128* me);

// strings_input_128 Execution function
void StringsInput128Run(StringsInput128* me);

#endif // STRINGS_INPUT_128_H_