#ifndef STRINGS_INPUT_388_H_
#define STRINGS_INPUT_388_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_388 States
enum StringsInput388States {
    STRINGS_INPUT_388_INTEGRATE,
    STRINGS_INPUT_388_LIMIT,
    STRINGS_INPUT_388_SPIKE,
    STRINGS_INPUT_388_REFRACTORY,
};

// strings_input_388 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput388States state;
} StringsInput388;

// strings_input_388 Initialisation function
void StringsInput388Init(StringsInput388* me);

// strings_input_388 Execution function
void StringsInput388Run(StringsInput388* me);

#endif // STRINGS_INPUT_388_H_