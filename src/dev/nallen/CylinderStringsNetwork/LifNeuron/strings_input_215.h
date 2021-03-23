#ifndef STRINGS_INPUT_215_H_
#define STRINGS_INPUT_215_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_215 States
enum StringsInput215States {
    STRINGS_INPUT_215_INTEGRATE,
    STRINGS_INPUT_215_LIMIT,
    STRINGS_INPUT_215_SPIKE,
    STRINGS_INPUT_215_REFRACTORY,
};

// strings_input_215 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput215States state;
} StringsInput215;

// strings_input_215 Initialisation function
void StringsInput215Init(StringsInput215* me);

// strings_input_215 Execution function
void StringsInput215Run(StringsInput215* me);

#endif // STRINGS_INPUT_215_H_