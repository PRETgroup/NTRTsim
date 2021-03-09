#ifndef STRINGS_INPUT_168_H_
#define STRINGS_INPUT_168_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_168 States
enum StringsInput168States {
    STRINGS_INPUT_168_INTEGRATE,
    STRINGS_INPUT_168_LIMIT,
    STRINGS_INPUT_168_SPIKE,
    STRINGS_INPUT_168_REFRACTORY,
};

// strings_input_168 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput168States state;
} StringsInput168;

// strings_input_168 Initialisation function
void StringsInput168Init(StringsInput168* me);

// strings_input_168 Execution function
void StringsInput168Run(StringsInput168* me);

#endif // STRINGS_INPUT_168_H_