#ifndef STRINGS_INPUT_156_H_
#define STRINGS_INPUT_156_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_156 States
enum StringsInput156States {
    STRINGS_INPUT_156_INTEGRATE,
    STRINGS_INPUT_156_LIMIT,
    STRINGS_INPUT_156_SPIKE,
    STRINGS_INPUT_156_REFRACTORY,
};

// strings_input_156 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput156States state;
} StringsInput156;

// strings_input_156 Initialisation function
void StringsInput156Init(StringsInput156* me);

// strings_input_156 Execution function
void StringsInput156Run(StringsInput156* me);

#endif // STRINGS_INPUT_156_H_