#ifndef STRINGS_INPUT_87_H_
#define STRINGS_INPUT_87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_87 States
enum StringsInput87States {
    STRINGS_INPUT_87_INTEGRATE,
    STRINGS_INPUT_87_LIMIT,
    STRINGS_INPUT_87_SPIKE,
    STRINGS_INPUT_87_REFRACTORY,
};

// strings_input_87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput87States state;
} StringsInput87;

// strings_input_87 Initialisation function
void StringsInput87Init(StringsInput87* me);

// strings_input_87 Execution function
void StringsInput87Run(StringsInput87* me);

#endif // STRINGS_INPUT_87_H_