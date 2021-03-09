#ifndef STRINGS_INPUT_149_H_
#define STRINGS_INPUT_149_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_149 States
enum StringsInput149States {
    STRINGS_INPUT_149_INTEGRATE,
    STRINGS_INPUT_149_LIMIT,
    STRINGS_INPUT_149_SPIKE,
    STRINGS_INPUT_149_REFRACTORY,
};

// strings_input_149 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput149States state;
} StringsInput149;

// strings_input_149 Initialisation function
void StringsInput149Init(StringsInput149* me);

// strings_input_149 Execution function
void StringsInput149Run(StringsInput149* me);

#endif // STRINGS_INPUT_149_H_