#ifndef STRINGS_INPUT_140_H_
#define STRINGS_INPUT_140_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_140 States
enum StringsInput140States {
    STRINGS_INPUT_140_INTEGRATE,
    STRINGS_INPUT_140_LIMIT,
    STRINGS_INPUT_140_SPIKE,
    STRINGS_INPUT_140_REFRACTORY,
};

// strings_input_140 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput140States state;
} StringsInput140;

// strings_input_140 Initialisation function
void StringsInput140Init(StringsInput140* me);

// strings_input_140 Execution function
void StringsInput140Run(StringsInput140* me);

#endif // STRINGS_INPUT_140_H_