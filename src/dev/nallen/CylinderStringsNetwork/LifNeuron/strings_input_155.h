#ifndef STRINGS_INPUT_155_H_
#define STRINGS_INPUT_155_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_155 States
enum StringsInput155States {
    STRINGS_INPUT_155_INTEGRATE,
    STRINGS_INPUT_155_LIMIT,
    STRINGS_INPUT_155_SPIKE,
    STRINGS_INPUT_155_REFRACTORY,
};

// strings_input_155 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput155States state;
} StringsInput155;

// strings_input_155 Initialisation function
void StringsInput155Init(StringsInput155* me);

// strings_input_155 Execution function
void StringsInput155Run(StringsInput155* me);

#endif // STRINGS_INPUT_155_H_