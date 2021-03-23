#ifndef STRINGS_INPUT_301_H_
#define STRINGS_INPUT_301_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_301 States
enum StringsInput301States {
    STRINGS_INPUT_301_INTEGRATE,
    STRINGS_INPUT_301_LIMIT,
    STRINGS_INPUT_301_SPIKE,
    STRINGS_INPUT_301_REFRACTORY,
};

// strings_input_301 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput301States state;
} StringsInput301;

// strings_input_301 Initialisation function
void StringsInput301Init(StringsInput301* me);

// strings_input_301 Execution function
void StringsInput301Run(StringsInput301* me);

#endif // STRINGS_INPUT_301_H_