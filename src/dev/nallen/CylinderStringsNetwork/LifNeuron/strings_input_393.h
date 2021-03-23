#ifndef STRINGS_INPUT_393_H_
#define STRINGS_INPUT_393_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_393 States
enum StringsInput393States {
    STRINGS_INPUT_393_INTEGRATE,
    STRINGS_INPUT_393_LIMIT,
    STRINGS_INPUT_393_SPIKE,
    STRINGS_INPUT_393_REFRACTORY,
};

// strings_input_393 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput393States state;
} StringsInput393;

// strings_input_393 Initialisation function
void StringsInput393Init(StringsInput393* me);

// strings_input_393 Execution function
void StringsInput393Run(StringsInput393* me);

#endif // STRINGS_INPUT_393_H_