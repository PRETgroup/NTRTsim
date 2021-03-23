#ifndef STRINGS_INPUT_241_H_
#define STRINGS_INPUT_241_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_241 States
enum StringsInput241States {
    STRINGS_INPUT_241_INTEGRATE,
    STRINGS_INPUT_241_LIMIT,
    STRINGS_INPUT_241_SPIKE,
    STRINGS_INPUT_241_REFRACTORY,
};

// strings_input_241 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput241States state;
} StringsInput241;

// strings_input_241 Initialisation function
void StringsInput241Init(StringsInput241* me);

// strings_input_241 Execution function
void StringsInput241Run(StringsInput241* me);

#endif // STRINGS_INPUT_241_H_