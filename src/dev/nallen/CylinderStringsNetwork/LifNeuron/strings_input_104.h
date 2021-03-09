#ifndef STRINGS_INPUT_104_H_
#define STRINGS_INPUT_104_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_104 States
enum StringsInput104States {
    STRINGS_INPUT_104_INTEGRATE,
    STRINGS_INPUT_104_LIMIT,
    STRINGS_INPUT_104_SPIKE,
    STRINGS_INPUT_104_REFRACTORY,
};

// strings_input_104 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput104States state;
} StringsInput104;

// strings_input_104 Initialisation function
void StringsInput104Init(StringsInput104* me);

// strings_input_104 Execution function
void StringsInput104Run(StringsInput104* me);

#endif // STRINGS_INPUT_104_H_