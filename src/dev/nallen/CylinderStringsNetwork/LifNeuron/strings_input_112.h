#ifndef STRINGS_INPUT_112_H_
#define STRINGS_INPUT_112_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_112 States
enum StringsInput112States {
    STRINGS_INPUT_112_INTEGRATE,
    STRINGS_INPUT_112_LIMIT,
    STRINGS_INPUT_112_SPIKE,
    STRINGS_INPUT_112_REFRACTORY,
};

// strings_input_112 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput112States state;
} StringsInput112;

// strings_input_112 Initialisation function
void StringsInput112Init(StringsInput112* me);

// strings_input_112 Execution function
void StringsInput112Run(StringsInput112* me);

#endif // STRINGS_INPUT_112_H_