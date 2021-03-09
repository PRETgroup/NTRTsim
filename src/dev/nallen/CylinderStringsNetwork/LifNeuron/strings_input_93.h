#ifndef STRINGS_INPUT_93_H_
#define STRINGS_INPUT_93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_93 States
enum StringsInput93States {
    STRINGS_INPUT_93_INTEGRATE,
    STRINGS_INPUT_93_LIMIT,
    STRINGS_INPUT_93_SPIKE,
    STRINGS_INPUT_93_REFRACTORY,
};

// strings_input_93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput93States state;
} StringsInput93;

// strings_input_93 Initialisation function
void StringsInput93Init(StringsInput93* me);

// strings_input_93 Execution function
void StringsInput93Run(StringsInput93* me);

#endif // STRINGS_INPUT_93_H_