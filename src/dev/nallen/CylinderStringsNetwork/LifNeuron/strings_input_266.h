#ifndef STRINGS_INPUT_266_H_
#define STRINGS_INPUT_266_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_266 States
enum StringsInput266States {
    STRINGS_INPUT_266_INTEGRATE,
    STRINGS_INPUT_266_LIMIT,
    STRINGS_INPUT_266_SPIKE,
    STRINGS_INPUT_266_REFRACTORY,
};

// strings_input_266 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput266States state;
} StringsInput266;

// strings_input_266 Initialisation function
void StringsInput266Init(StringsInput266* me);

// strings_input_266 Execution function
void StringsInput266Run(StringsInput266* me);

#endif // STRINGS_INPUT_266_H_