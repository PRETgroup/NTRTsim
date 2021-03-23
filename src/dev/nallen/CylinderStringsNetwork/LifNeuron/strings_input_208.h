#ifndef STRINGS_INPUT_208_H_
#define STRINGS_INPUT_208_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_208 States
enum StringsInput208States {
    STRINGS_INPUT_208_INTEGRATE,
    STRINGS_INPUT_208_LIMIT,
    STRINGS_INPUT_208_SPIKE,
    STRINGS_INPUT_208_REFRACTORY,
};

// strings_input_208 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput208States state;
} StringsInput208;

// strings_input_208 Initialisation function
void StringsInput208Init(StringsInput208* me);

// strings_input_208 Execution function
void StringsInput208Run(StringsInput208* me);

#endif // STRINGS_INPUT_208_H_