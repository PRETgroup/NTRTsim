#ifndef STRINGS_INPUT_193_H_
#define STRINGS_INPUT_193_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_193 States
enum StringsInput193States {
    STRINGS_INPUT_193_INTEGRATE,
    STRINGS_INPUT_193_LIMIT,
    STRINGS_INPUT_193_SPIKE,
    STRINGS_INPUT_193_REFRACTORY,
};

// strings_input_193 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput193States state;
} StringsInput193;

// strings_input_193 Initialisation function
void StringsInput193Init(StringsInput193* me);

// strings_input_193 Execution function
void StringsInput193Run(StringsInput193* me);

#endif // STRINGS_INPUT_193_H_