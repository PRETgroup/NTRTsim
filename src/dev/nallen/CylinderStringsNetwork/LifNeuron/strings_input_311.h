#ifndef STRINGS_INPUT_311_H_
#define STRINGS_INPUT_311_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_311 States
enum StringsInput311States {
    STRINGS_INPUT_311_INTEGRATE,
    STRINGS_INPUT_311_LIMIT,
    STRINGS_INPUT_311_SPIKE,
    STRINGS_INPUT_311_REFRACTORY,
};

// strings_input_311 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput311States state;
} StringsInput311;

// strings_input_311 Initialisation function
void StringsInput311Init(StringsInput311* me);

// strings_input_311 Execution function
void StringsInput311Run(StringsInput311* me);

#endif // STRINGS_INPUT_311_H_