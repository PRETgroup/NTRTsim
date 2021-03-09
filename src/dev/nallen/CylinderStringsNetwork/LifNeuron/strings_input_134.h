#ifndef STRINGS_INPUT_134_H_
#define STRINGS_INPUT_134_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_134 States
enum StringsInput134States {
    STRINGS_INPUT_134_INTEGRATE,
    STRINGS_INPUT_134_LIMIT,
    STRINGS_INPUT_134_SPIKE,
    STRINGS_INPUT_134_REFRACTORY,
};

// strings_input_134 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput134States state;
} StringsInput134;

// strings_input_134 Initialisation function
void StringsInput134Init(StringsInput134* me);

// strings_input_134 Execution function
void StringsInput134Run(StringsInput134* me);

#endif // STRINGS_INPUT_134_H_