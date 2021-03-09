#ifndef STRINGS_INPUT_48_H_
#define STRINGS_INPUT_48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_48 States
enum StringsInput48States {
    STRINGS_INPUT_48_INTEGRATE,
    STRINGS_INPUT_48_LIMIT,
    STRINGS_INPUT_48_SPIKE,
    STRINGS_INPUT_48_REFRACTORY,
};

// strings_input_48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput48States state;
} StringsInput48;

// strings_input_48 Initialisation function
void StringsInput48Init(StringsInput48* me);

// strings_input_48 Execution function
void StringsInput48Run(StringsInput48* me);

#endif // STRINGS_INPUT_48_H_