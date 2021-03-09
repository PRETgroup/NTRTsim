#ifndef STRINGS_INPUT_12_H_
#define STRINGS_INPUT_12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_12 States
enum StringsInput12States {
    STRINGS_INPUT_12_INTEGRATE,
    STRINGS_INPUT_12_LIMIT,
    STRINGS_INPUT_12_SPIKE,
    STRINGS_INPUT_12_REFRACTORY,
};

// strings_input_12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput12States state;
} StringsInput12;

// strings_input_12 Initialisation function
void StringsInput12Init(StringsInput12* me);

// strings_input_12 Execution function
void StringsInput12Run(StringsInput12* me);

#endif // STRINGS_INPUT_12_H_