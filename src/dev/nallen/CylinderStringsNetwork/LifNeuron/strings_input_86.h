#ifndef STRINGS_INPUT_86_H_
#define STRINGS_INPUT_86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_86 States
enum StringsInput86States {
    STRINGS_INPUT_86_INTEGRATE,
    STRINGS_INPUT_86_LIMIT,
    STRINGS_INPUT_86_SPIKE,
    STRINGS_INPUT_86_REFRACTORY,
};

// strings_input_86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput86States state;
} StringsInput86;

// strings_input_86 Initialisation function
void StringsInput86Init(StringsInput86* me);

// strings_input_86 Execution function
void StringsInput86Run(StringsInput86* me);

#endif // STRINGS_INPUT_86_H_