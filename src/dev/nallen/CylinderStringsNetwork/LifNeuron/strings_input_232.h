#ifndef STRINGS_INPUT_232_H_
#define STRINGS_INPUT_232_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_232 States
enum StringsInput232States {
    STRINGS_INPUT_232_INTEGRATE,
    STRINGS_INPUT_232_LIMIT,
    STRINGS_INPUT_232_SPIKE,
    STRINGS_INPUT_232_REFRACTORY,
};

// strings_input_232 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput232States state;
} StringsInput232;

// strings_input_232 Initialisation function
void StringsInput232Init(StringsInput232* me);

// strings_input_232 Execution function
void StringsInput232Run(StringsInput232* me);

#endif // STRINGS_INPUT_232_H_