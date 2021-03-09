#ifndef STRINGS_INPUT_90_H_
#define STRINGS_INPUT_90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_90 States
enum StringsInput90States {
    STRINGS_INPUT_90_INTEGRATE,
    STRINGS_INPUT_90_LIMIT,
    STRINGS_INPUT_90_SPIKE,
    STRINGS_INPUT_90_REFRACTORY,
};

// strings_input_90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput90States state;
} StringsInput90;

// strings_input_90 Initialisation function
void StringsInput90Init(StringsInput90* me);

// strings_input_90 Execution function
void StringsInput90Run(StringsInput90* me);

#endif // STRINGS_INPUT_90_H_