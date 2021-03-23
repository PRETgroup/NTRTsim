#ifndef STRINGS_INPUT_280_H_
#define STRINGS_INPUT_280_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_280 States
enum StringsInput280States {
    STRINGS_INPUT_280_INTEGRATE,
    STRINGS_INPUT_280_LIMIT,
    STRINGS_INPUT_280_SPIKE,
    STRINGS_INPUT_280_REFRACTORY,
};

// strings_input_280 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput280States state;
} StringsInput280;

// strings_input_280 Initialisation function
void StringsInput280Init(StringsInput280* me);

// strings_input_280 Execution function
void StringsInput280Run(StringsInput280* me);

#endif // STRINGS_INPUT_280_H_