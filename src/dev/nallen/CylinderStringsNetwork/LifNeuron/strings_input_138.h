#ifndef STRINGS_INPUT_138_H_
#define STRINGS_INPUT_138_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_138 States
enum StringsInput138States {
    STRINGS_INPUT_138_INTEGRATE,
    STRINGS_INPUT_138_LIMIT,
    STRINGS_INPUT_138_SPIKE,
    STRINGS_INPUT_138_REFRACTORY,
};

// strings_input_138 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput138States state;
} StringsInput138;

// strings_input_138 Initialisation function
void StringsInput138Init(StringsInput138* me);

// strings_input_138 Execution function
void StringsInput138Run(StringsInput138* me);

#endif // STRINGS_INPUT_138_H_