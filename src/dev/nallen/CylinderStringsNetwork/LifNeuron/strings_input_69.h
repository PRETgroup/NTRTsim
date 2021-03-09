#ifndef STRINGS_INPUT_69_H_
#define STRINGS_INPUT_69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_69 States
enum StringsInput69States {
    STRINGS_INPUT_69_INTEGRATE,
    STRINGS_INPUT_69_LIMIT,
    STRINGS_INPUT_69_SPIKE,
    STRINGS_INPUT_69_REFRACTORY,
};

// strings_input_69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput69States state;
} StringsInput69;

// strings_input_69 Initialisation function
void StringsInput69Init(StringsInput69* me);

// strings_input_69 Execution function
void StringsInput69Run(StringsInput69* me);

#endif // STRINGS_INPUT_69_H_