#ifndef STRINGS_INPUT_185_H_
#define STRINGS_INPUT_185_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_185 States
enum StringsInput185States {
    STRINGS_INPUT_185_INTEGRATE,
    STRINGS_INPUT_185_LIMIT,
    STRINGS_INPUT_185_SPIKE,
    STRINGS_INPUT_185_REFRACTORY,
};

// strings_input_185 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput185States state;
} StringsInput185;

// strings_input_185 Initialisation function
void StringsInput185Init(StringsInput185* me);

// strings_input_185 Execution function
void StringsInput185Run(StringsInput185* me);

#endif // STRINGS_INPUT_185_H_