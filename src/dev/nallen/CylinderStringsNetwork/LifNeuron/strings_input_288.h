#ifndef STRINGS_INPUT_288_H_
#define STRINGS_INPUT_288_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_288 States
enum StringsInput288States {
    STRINGS_INPUT_288_INTEGRATE,
    STRINGS_INPUT_288_LIMIT,
    STRINGS_INPUT_288_SPIKE,
    STRINGS_INPUT_288_REFRACTORY,
};

// strings_input_288 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput288States state;
} StringsInput288;

// strings_input_288 Initialisation function
void StringsInput288Init(StringsInput288* me);

// strings_input_288 Execution function
void StringsInput288Run(StringsInput288* me);

#endif // STRINGS_INPUT_288_H_