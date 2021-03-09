#ifndef STRINGS_INPUT_150_H_
#define STRINGS_INPUT_150_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_150 States
enum StringsInput150States {
    STRINGS_INPUT_150_INTEGRATE,
    STRINGS_INPUT_150_LIMIT,
    STRINGS_INPUT_150_SPIKE,
    STRINGS_INPUT_150_REFRACTORY,
};

// strings_input_150 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput150States state;
} StringsInput150;

// strings_input_150 Initialisation function
void StringsInput150Init(StringsInput150* me);

// strings_input_150 Execution function
void StringsInput150Run(StringsInput150* me);

#endif // STRINGS_INPUT_150_H_