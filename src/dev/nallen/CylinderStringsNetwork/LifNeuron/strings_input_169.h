#ifndef STRINGS_INPUT_169_H_
#define STRINGS_INPUT_169_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_169 States
enum StringsInput169States {
    STRINGS_INPUT_169_INTEGRATE,
    STRINGS_INPUT_169_LIMIT,
    STRINGS_INPUT_169_SPIKE,
    STRINGS_INPUT_169_REFRACTORY,
};

// strings_input_169 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput169States state;
} StringsInput169;

// strings_input_169 Initialisation function
void StringsInput169Init(StringsInput169* me);

// strings_input_169 Execution function
void StringsInput169Run(StringsInput169* me);

#endif // STRINGS_INPUT_169_H_