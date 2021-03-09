#ifndef STRINGS_INPUT_1_H_
#define STRINGS_INPUT_1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_1 States
enum StringsInput1States {
    STRINGS_INPUT_1_INTEGRATE,
    STRINGS_INPUT_1_LIMIT,
    STRINGS_INPUT_1_SPIKE,
    STRINGS_INPUT_1_REFRACTORY,
};

// strings_input_1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput1States state;
} StringsInput1;

// strings_input_1 Initialisation function
void StringsInput1Init(StringsInput1* me);

// strings_input_1 Execution function
void StringsInput1Run(StringsInput1* me);

#endif // STRINGS_INPUT_1_H_