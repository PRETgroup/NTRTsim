#ifndef STRINGS_INPUT_174_H_
#define STRINGS_INPUT_174_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_174 States
enum StringsInput174States {
    STRINGS_INPUT_174_INTEGRATE,
    STRINGS_INPUT_174_LIMIT,
    STRINGS_INPUT_174_SPIKE,
    STRINGS_INPUT_174_REFRACTORY,
};

// strings_input_174 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput174States state;
} StringsInput174;

// strings_input_174 Initialisation function
void StringsInput174Init(StringsInput174* me);

// strings_input_174 Execution function
void StringsInput174Run(StringsInput174* me);

#endif // STRINGS_INPUT_174_H_