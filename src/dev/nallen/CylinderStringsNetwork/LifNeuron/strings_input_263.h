#ifndef STRINGS_INPUT_263_H_
#define STRINGS_INPUT_263_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_263 States
enum StringsInput263States {
    STRINGS_INPUT_263_INTEGRATE,
    STRINGS_INPUT_263_LIMIT,
    STRINGS_INPUT_263_SPIKE,
    STRINGS_INPUT_263_REFRACTORY,
};

// strings_input_263 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput263States state;
} StringsInput263;

// strings_input_263 Initialisation function
void StringsInput263Init(StringsInput263* me);

// strings_input_263 Execution function
void StringsInput263Run(StringsInput263* me);

#endif // STRINGS_INPUT_263_H_