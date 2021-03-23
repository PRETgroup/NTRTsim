#ifndef STRINGS_INPUT_259_H_
#define STRINGS_INPUT_259_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_259 States
enum StringsInput259States {
    STRINGS_INPUT_259_INTEGRATE,
    STRINGS_INPUT_259_LIMIT,
    STRINGS_INPUT_259_SPIKE,
    STRINGS_INPUT_259_REFRACTORY,
};

// strings_input_259 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput259States state;
} StringsInput259;

// strings_input_259 Initialisation function
void StringsInput259Init(StringsInput259* me);

// strings_input_259 Execution function
void StringsInput259Run(StringsInput259* me);

#endif // STRINGS_INPUT_259_H_