#ifndef STRINGS_INPUT_89_H_
#define STRINGS_INPUT_89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_89 States
enum StringsInput89States {
    STRINGS_INPUT_89_INTEGRATE,
    STRINGS_INPUT_89_LIMIT,
    STRINGS_INPUT_89_SPIKE,
    STRINGS_INPUT_89_REFRACTORY,
};

// strings_input_89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput89States state;
} StringsInput89;

// strings_input_89 Initialisation function
void StringsInput89Init(StringsInput89* me);

// strings_input_89 Execution function
void StringsInput89Run(StringsInput89* me);

#endif // STRINGS_INPUT_89_H_