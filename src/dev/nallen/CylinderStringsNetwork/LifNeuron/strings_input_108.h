#ifndef STRINGS_INPUT_108_H_
#define STRINGS_INPUT_108_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_108 States
enum StringsInput108States {
    STRINGS_INPUT_108_INTEGRATE,
    STRINGS_INPUT_108_LIMIT,
    STRINGS_INPUT_108_SPIKE,
    STRINGS_INPUT_108_REFRACTORY,
};

// strings_input_108 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput108States state;
} StringsInput108;

// strings_input_108 Initialisation function
void StringsInput108Init(StringsInput108* me);

// strings_input_108 Execution function
void StringsInput108Run(StringsInput108* me);

#endif // STRINGS_INPUT_108_H_