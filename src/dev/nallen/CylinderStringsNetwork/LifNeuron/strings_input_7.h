#ifndef STRINGS_INPUT_7_H_
#define STRINGS_INPUT_7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_7 States
enum StringsInput7States {
    STRINGS_INPUT_7_INTEGRATE,
    STRINGS_INPUT_7_LIMIT,
    STRINGS_INPUT_7_SPIKE,
    STRINGS_INPUT_7_REFRACTORY,
};

// strings_input_7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput7States state;
} StringsInput7;

// strings_input_7 Initialisation function
void StringsInput7Init(StringsInput7* me);

// strings_input_7 Execution function
void StringsInput7Run(StringsInput7* me);

#endif // STRINGS_INPUT_7_H_