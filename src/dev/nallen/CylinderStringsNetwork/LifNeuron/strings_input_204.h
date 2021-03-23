#ifndef STRINGS_INPUT_204_H_
#define STRINGS_INPUT_204_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_204 States
enum StringsInput204States {
    STRINGS_INPUT_204_INTEGRATE,
    STRINGS_INPUT_204_LIMIT,
    STRINGS_INPUT_204_SPIKE,
    STRINGS_INPUT_204_REFRACTORY,
};

// strings_input_204 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput204States state;
} StringsInput204;

// strings_input_204 Initialisation function
void StringsInput204Init(StringsInput204* me);

// strings_input_204 Execution function
void StringsInput204Run(StringsInput204* me);

#endif // STRINGS_INPUT_204_H_