#ifndef STRINGS_INPUT_85_H_
#define STRINGS_INPUT_85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_85 States
enum StringsInput85States {
    STRINGS_INPUT_85_INTEGRATE,
    STRINGS_INPUT_85_LIMIT,
    STRINGS_INPUT_85_SPIKE,
    STRINGS_INPUT_85_REFRACTORY,
};

// strings_input_85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput85States state;
} StringsInput85;

// strings_input_85 Initialisation function
void StringsInput85Init(StringsInput85* me);

// strings_input_85 Execution function
void StringsInput85Run(StringsInput85* me);

#endif // STRINGS_INPUT_85_H_