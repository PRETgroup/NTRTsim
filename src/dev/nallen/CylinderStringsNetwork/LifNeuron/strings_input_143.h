#ifndef STRINGS_INPUT_143_H_
#define STRINGS_INPUT_143_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_143 States
enum StringsInput143States {
    STRINGS_INPUT_143_INTEGRATE,
    STRINGS_INPUT_143_LIMIT,
    STRINGS_INPUT_143_SPIKE,
    STRINGS_INPUT_143_REFRACTORY,
};

// strings_input_143 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput143States state;
} StringsInput143;

// strings_input_143 Initialisation function
void StringsInput143Init(StringsInput143* me);

// strings_input_143 Execution function
void StringsInput143Run(StringsInput143* me);

#endif // STRINGS_INPUT_143_H_