#ifndef STRINGS_INPUT_274_H_
#define STRINGS_INPUT_274_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_274 States
enum StringsInput274States {
    STRINGS_INPUT_274_INTEGRATE,
    STRINGS_INPUT_274_LIMIT,
    STRINGS_INPUT_274_SPIKE,
    STRINGS_INPUT_274_REFRACTORY,
};

// strings_input_274 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput274States state;
} StringsInput274;

// strings_input_274 Initialisation function
void StringsInput274Init(StringsInput274* me);

// strings_input_274 Execution function
void StringsInput274Run(StringsInput274* me);

#endif // STRINGS_INPUT_274_H_