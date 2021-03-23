#ifndef STRINGS_INPUT_361_H_
#define STRINGS_INPUT_361_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_361 States
enum StringsInput361States {
    STRINGS_INPUT_361_INTEGRATE,
    STRINGS_INPUT_361_LIMIT,
    STRINGS_INPUT_361_SPIKE,
    STRINGS_INPUT_361_REFRACTORY,
};

// strings_input_361 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput361States state;
} StringsInput361;

// strings_input_361 Initialisation function
void StringsInput361Init(StringsInput361* me);

// strings_input_361 Execution function
void StringsInput361Run(StringsInput361* me);

#endif // STRINGS_INPUT_361_H_