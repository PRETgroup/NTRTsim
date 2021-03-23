#ifndef STRINGS_INPUT_350_H_
#define STRINGS_INPUT_350_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_350 States
enum StringsInput350States {
    STRINGS_INPUT_350_INTEGRATE,
    STRINGS_INPUT_350_LIMIT,
    STRINGS_INPUT_350_SPIKE,
    STRINGS_INPUT_350_REFRACTORY,
};

// strings_input_350 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput350States state;
} StringsInput350;

// strings_input_350 Initialisation function
void StringsInput350Init(StringsInput350* me);

// strings_input_350 Execution function
void StringsInput350Run(StringsInput350* me);

#endif // STRINGS_INPUT_350_H_