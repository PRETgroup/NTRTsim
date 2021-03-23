#ifndef STRINGS_INPUT_214_H_
#define STRINGS_INPUT_214_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_214 States
enum StringsInput214States {
    STRINGS_INPUT_214_INTEGRATE,
    STRINGS_INPUT_214_LIMIT,
    STRINGS_INPUT_214_SPIKE,
    STRINGS_INPUT_214_REFRACTORY,
};

// strings_input_214 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput214States state;
} StringsInput214;

// strings_input_214 Initialisation function
void StringsInput214Init(StringsInput214* me);

// strings_input_214 Execution function
void StringsInput214Run(StringsInput214* me);

#endif // STRINGS_INPUT_214_H_