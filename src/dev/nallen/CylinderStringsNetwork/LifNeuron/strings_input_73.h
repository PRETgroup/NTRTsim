#ifndef STRINGS_INPUT_73_H_
#define STRINGS_INPUT_73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_73 States
enum StringsInput73States {
    STRINGS_INPUT_73_INTEGRATE,
    STRINGS_INPUT_73_LIMIT,
    STRINGS_INPUT_73_SPIKE,
    STRINGS_INPUT_73_REFRACTORY,
};

// strings_input_73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput73States state;
} StringsInput73;

// strings_input_73 Initialisation function
void StringsInput73Init(StringsInput73* me);

// strings_input_73 Execution function
void StringsInput73Run(StringsInput73* me);

#endif // STRINGS_INPUT_73_H_