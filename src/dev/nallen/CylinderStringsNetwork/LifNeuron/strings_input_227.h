#ifndef STRINGS_INPUT_227_H_
#define STRINGS_INPUT_227_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_227 States
enum StringsInput227States {
    STRINGS_INPUT_227_INTEGRATE,
    STRINGS_INPUT_227_LIMIT,
    STRINGS_INPUT_227_SPIKE,
    STRINGS_INPUT_227_REFRACTORY,
};

// strings_input_227 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput227States state;
} StringsInput227;

// strings_input_227 Initialisation function
void StringsInput227Init(StringsInput227* me);

// strings_input_227 Execution function
void StringsInput227Run(StringsInput227* me);

#endif // STRINGS_INPUT_227_H_