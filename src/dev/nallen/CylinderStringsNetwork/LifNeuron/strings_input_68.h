#ifndef STRINGS_INPUT_68_H_
#define STRINGS_INPUT_68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_68 States
enum StringsInput68States {
    STRINGS_INPUT_68_INTEGRATE,
    STRINGS_INPUT_68_LIMIT,
    STRINGS_INPUT_68_SPIKE,
    STRINGS_INPUT_68_REFRACTORY,
};

// strings_input_68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput68States state;
} StringsInput68;

// strings_input_68 Initialisation function
void StringsInput68Init(StringsInput68* me);

// strings_input_68 Execution function
void StringsInput68Run(StringsInput68* me);

#endif // STRINGS_INPUT_68_H_