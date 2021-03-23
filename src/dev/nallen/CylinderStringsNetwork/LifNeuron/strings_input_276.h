#ifndef STRINGS_INPUT_276_H_
#define STRINGS_INPUT_276_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_276 States
enum StringsInput276States {
    STRINGS_INPUT_276_INTEGRATE,
    STRINGS_INPUT_276_LIMIT,
    STRINGS_INPUT_276_SPIKE,
    STRINGS_INPUT_276_REFRACTORY,
};

// strings_input_276 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput276States state;
} StringsInput276;

// strings_input_276 Initialisation function
void StringsInput276Init(StringsInput276* me);

// strings_input_276 Execution function
void StringsInput276Run(StringsInput276* me);

#endif // STRINGS_INPUT_276_H_