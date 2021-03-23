#ifndef STRINGS_INPUT_366_H_
#define STRINGS_INPUT_366_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_366 States
enum StringsInput366States {
    STRINGS_INPUT_366_INTEGRATE,
    STRINGS_INPUT_366_LIMIT,
    STRINGS_INPUT_366_SPIKE,
    STRINGS_INPUT_366_REFRACTORY,
};

// strings_input_366 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput366States state;
} StringsInput366;

// strings_input_366 Initialisation function
void StringsInput366Init(StringsInput366* me);

// strings_input_366 Execution function
void StringsInput366Run(StringsInput366* me);

#endif // STRINGS_INPUT_366_H_