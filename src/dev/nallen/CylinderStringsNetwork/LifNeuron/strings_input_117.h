#ifndef STRINGS_INPUT_117_H_
#define STRINGS_INPUT_117_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_117 States
enum StringsInput117States {
    STRINGS_INPUT_117_INTEGRATE,
    STRINGS_INPUT_117_LIMIT,
    STRINGS_INPUT_117_SPIKE,
    STRINGS_INPUT_117_REFRACTORY,
};

// strings_input_117 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput117States state;
} StringsInput117;

// strings_input_117 Initialisation function
void StringsInput117Init(StringsInput117* me);

// strings_input_117 Execution function
void StringsInput117Run(StringsInput117* me);

#endif // STRINGS_INPUT_117_H_