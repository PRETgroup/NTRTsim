#ifndef STRINGS_INPUT_217_H_
#define STRINGS_INPUT_217_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_217 States
enum StringsInput217States {
    STRINGS_INPUT_217_INTEGRATE,
    STRINGS_INPUT_217_LIMIT,
    STRINGS_INPUT_217_SPIKE,
    STRINGS_INPUT_217_REFRACTORY,
};

// strings_input_217 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput217States state;
} StringsInput217;

// strings_input_217 Initialisation function
void StringsInput217Init(StringsInput217* me);

// strings_input_217 Execution function
void StringsInput217Run(StringsInput217* me);

#endif // STRINGS_INPUT_217_H_