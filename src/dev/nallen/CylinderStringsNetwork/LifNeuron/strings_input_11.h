#ifndef STRINGS_INPUT_11_H_
#define STRINGS_INPUT_11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_11 States
enum StringsInput11States {
    STRINGS_INPUT_11_INTEGRATE,
    STRINGS_INPUT_11_LIMIT,
    STRINGS_INPUT_11_SPIKE,
    STRINGS_INPUT_11_REFRACTORY,
};

// strings_input_11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput11States state;
} StringsInput11;

// strings_input_11 Initialisation function
void StringsInput11Init(StringsInput11* me);

// strings_input_11 Execution function
void StringsInput11Run(StringsInput11* me);

#endif // STRINGS_INPUT_11_H_