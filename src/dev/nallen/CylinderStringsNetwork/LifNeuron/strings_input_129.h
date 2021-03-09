#ifndef STRINGS_INPUT_129_H_
#define STRINGS_INPUT_129_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_129 States
enum StringsInput129States {
    STRINGS_INPUT_129_INTEGRATE,
    STRINGS_INPUT_129_LIMIT,
    STRINGS_INPUT_129_SPIKE,
    STRINGS_INPUT_129_REFRACTORY,
};

// strings_input_129 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput129States state;
} StringsInput129;

// strings_input_129 Initialisation function
void StringsInput129Init(StringsInput129* me);

// strings_input_129 Execution function
void StringsInput129Run(StringsInput129* me);

#endif // STRINGS_INPUT_129_H_