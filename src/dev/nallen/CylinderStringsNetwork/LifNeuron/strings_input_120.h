#ifndef STRINGS_INPUT_120_H_
#define STRINGS_INPUT_120_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_120 States
enum StringsInput120States {
    STRINGS_INPUT_120_INTEGRATE,
    STRINGS_INPUT_120_LIMIT,
    STRINGS_INPUT_120_SPIKE,
    STRINGS_INPUT_120_REFRACTORY,
};

// strings_input_120 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput120States state;
} StringsInput120;

// strings_input_120 Initialisation function
void StringsInput120Init(StringsInput120* me);

// strings_input_120 Execution function
void StringsInput120Run(StringsInput120* me);

#endif // STRINGS_INPUT_120_H_