#ifndef STRINGS_INPUT_275_H_
#define STRINGS_INPUT_275_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_275 States
enum StringsInput275States {
    STRINGS_INPUT_275_INTEGRATE,
    STRINGS_INPUT_275_LIMIT,
    STRINGS_INPUT_275_SPIKE,
    STRINGS_INPUT_275_REFRACTORY,
};

// strings_input_275 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput275States state;
} StringsInput275;

// strings_input_275 Initialisation function
void StringsInput275Init(StringsInput275* me);

// strings_input_275 Execution function
void StringsInput275Run(StringsInput275* me);

#endif // STRINGS_INPUT_275_H_