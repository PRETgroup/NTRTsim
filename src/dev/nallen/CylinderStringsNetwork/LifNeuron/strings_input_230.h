#ifndef STRINGS_INPUT_230_H_
#define STRINGS_INPUT_230_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_230 States
enum StringsInput230States {
    STRINGS_INPUT_230_INTEGRATE,
    STRINGS_INPUT_230_LIMIT,
    STRINGS_INPUT_230_SPIKE,
    STRINGS_INPUT_230_REFRACTORY,
};

// strings_input_230 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput230States state;
} StringsInput230;

// strings_input_230 Initialisation function
void StringsInput230Init(StringsInput230* me);

// strings_input_230 Execution function
void StringsInput230Run(StringsInput230* me);

#endif // STRINGS_INPUT_230_H_