#ifndef STRINGS_INPUT_127_H_
#define STRINGS_INPUT_127_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_127 States
enum StringsInput127States {
    STRINGS_INPUT_127_INTEGRATE,
    STRINGS_INPUT_127_LIMIT,
    STRINGS_INPUT_127_SPIKE,
    STRINGS_INPUT_127_REFRACTORY,
};

// strings_input_127 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput127States state;
} StringsInput127;

// strings_input_127 Initialisation function
void StringsInput127Init(StringsInput127* me);

// strings_input_127 Execution function
void StringsInput127Run(StringsInput127* me);

#endif // STRINGS_INPUT_127_H_