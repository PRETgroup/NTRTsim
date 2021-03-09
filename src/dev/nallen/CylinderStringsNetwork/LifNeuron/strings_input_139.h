#ifndef STRINGS_INPUT_139_H_
#define STRINGS_INPUT_139_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_139 States
enum StringsInput139States {
    STRINGS_INPUT_139_INTEGRATE,
    STRINGS_INPUT_139_LIMIT,
    STRINGS_INPUT_139_SPIKE,
    STRINGS_INPUT_139_REFRACTORY,
};

// strings_input_139 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput139States state;
} StringsInput139;

// strings_input_139 Initialisation function
void StringsInput139Init(StringsInput139* me);

// strings_input_139 Execution function
void StringsInput139Run(StringsInput139* me);

#endif // STRINGS_INPUT_139_H_