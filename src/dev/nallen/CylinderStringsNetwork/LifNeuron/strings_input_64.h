#ifndef STRINGS_INPUT_64_H_
#define STRINGS_INPUT_64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_64 States
enum StringsInput64States {
    STRINGS_INPUT_64_INTEGRATE,
    STRINGS_INPUT_64_LIMIT,
    STRINGS_INPUT_64_SPIKE,
    STRINGS_INPUT_64_REFRACTORY,
};

// strings_input_64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput64States state;
} StringsInput64;

// strings_input_64 Initialisation function
void StringsInput64Init(StringsInput64* me);

// strings_input_64 Execution function
void StringsInput64Run(StringsInput64* me);

#endif // STRINGS_INPUT_64_H_