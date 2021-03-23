#ifndef STRINGS_INPUT_219_H_
#define STRINGS_INPUT_219_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_219 States
enum StringsInput219States {
    STRINGS_INPUT_219_INTEGRATE,
    STRINGS_INPUT_219_LIMIT,
    STRINGS_INPUT_219_SPIKE,
    STRINGS_INPUT_219_REFRACTORY,
};

// strings_input_219 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput219States state;
} StringsInput219;

// strings_input_219 Initialisation function
void StringsInput219Init(StringsInput219* me);

// strings_input_219 Execution function
void StringsInput219Run(StringsInput219* me);

#endif // STRINGS_INPUT_219_H_