#ifndef STRINGS_INPUT_84_H_
#define STRINGS_INPUT_84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_84 States
enum StringsInput84States {
    STRINGS_INPUT_84_INTEGRATE,
    STRINGS_INPUT_84_LIMIT,
    STRINGS_INPUT_84_SPIKE,
    STRINGS_INPUT_84_REFRACTORY,
};

// strings_input_84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput84States state;
} StringsInput84;

// strings_input_84 Initialisation function
void StringsInput84Init(StringsInput84* me);

// strings_input_84 Execution function
void StringsInput84Run(StringsInput84* me);

#endif // STRINGS_INPUT_84_H_