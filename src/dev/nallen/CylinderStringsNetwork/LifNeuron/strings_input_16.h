#ifndef STRINGS_INPUT_16_H_
#define STRINGS_INPUT_16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_16 States
enum StringsInput16States {
    STRINGS_INPUT_16_INTEGRATE,
    STRINGS_INPUT_16_LIMIT,
    STRINGS_INPUT_16_SPIKE,
    STRINGS_INPUT_16_REFRACTORY,
};

// strings_input_16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput16States state;
} StringsInput16;

// strings_input_16 Initialisation function
void StringsInput16Init(StringsInput16* me);

// strings_input_16 Execution function
void StringsInput16Run(StringsInput16* me);

#endif // STRINGS_INPUT_16_H_