#ifndef STRINGS_INPUT_267_H_
#define STRINGS_INPUT_267_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_267 States
enum StringsInput267States {
    STRINGS_INPUT_267_INTEGRATE,
    STRINGS_INPUT_267_LIMIT,
    STRINGS_INPUT_267_SPIKE,
    STRINGS_INPUT_267_REFRACTORY,
};

// strings_input_267 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput267States state;
} StringsInput267;

// strings_input_267 Initialisation function
void StringsInput267Init(StringsInput267* me);

// strings_input_267 Execution function
void StringsInput267Run(StringsInput267* me);

#endif // STRINGS_INPUT_267_H_