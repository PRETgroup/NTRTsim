#ifndef STRINGS_INPUT_5_H_
#define STRINGS_INPUT_5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_5 States
enum StringsInput5States {
    STRINGS_INPUT_5_INTEGRATE,
    STRINGS_INPUT_5_LIMIT,
    STRINGS_INPUT_5_SPIKE,
    STRINGS_INPUT_5_REFRACTORY,
};

// strings_input_5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput5States state;
} StringsInput5;

// strings_input_5 Initialisation function
void StringsInput5Init(StringsInput5* me);

// strings_input_5 Execution function
void StringsInput5Run(StringsInput5* me);

#endif // STRINGS_INPUT_5_H_