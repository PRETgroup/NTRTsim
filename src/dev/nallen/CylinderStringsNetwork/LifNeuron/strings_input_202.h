#ifndef STRINGS_INPUT_202_H_
#define STRINGS_INPUT_202_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_202 States
enum StringsInput202States {
    STRINGS_INPUT_202_INTEGRATE,
    STRINGS_INPUT_202_LIMIT,
    STRINGS_INPUT_202_SPIKE,
    STRINGS_INPUT_202_REFRACTORY,
};

// strings_input_202 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput202States state;
} StringsInput202;

// strings_input_202 Initialisation function
void StringsInput202Init(StringsInput202* me);

// strings_input_202 Execution function
void StringsInput202Run(StringsInput202* me);

#endif // STRINGS_INPUT_202_H_