#ifndef STRINGS_INPUT_25_H_
#define STRINGS_INPUT_25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_25 States
enum StringsInput25States {
    STRINGS_INPUT_25_INTEGRATE,
    STRINGS_INPUT_25_LIMIT,
    STRINGS_INPUT_25_SPIKE,
    STRINGS_INPUT_25_REFRACTORY,
};

// strings_input_25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput25States state;
} StringsInput25;

// strings_input_25 Initialisation function
void StringsInput25Init(StringsInput25* me);

// strings_input_25 Execution function
void StringsInput25Run(StringsInput25* me);

#endif // STRINGS_INPUT_25_H_