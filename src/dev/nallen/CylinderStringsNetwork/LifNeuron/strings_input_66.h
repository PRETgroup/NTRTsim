#ifndef STRINGS_INPUT_66_H_
#define STRINGS_INPUT_66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_66 States
enum StringsInput66States {
    STRINGS_INPUT_66_INTEGRATE,
    STRINGS_INPUT_66_LIMIT,
    STRINGS_INPUT_66_SPIKE,
    STRINGS_INPUT_66_REFRACTORY,
};

// strings_input_66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput66States state;
} StringsInput66;

// strings_input_66 Initialisation function
void StringsInput66Init(StringsInput66* me);

// strings_input_66 Execution function
void StringsInput66Run(StringsInput66* me);

#endif // STRINGS_INPUT_66_H_