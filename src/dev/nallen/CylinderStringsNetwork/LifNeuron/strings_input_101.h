#ifndef STRINGS_INPUT_101_H_
#define STRINGS_INPUT_101_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_101 States
enum StringsInput101States {
    STRINGS_INPUT_101_INTEGRATE,
    STRINGS_INPUT_101_LIMIT,
    STRINGS_INPUT_101_SPIKE,
    STRINGS_INPUT_101_REFRACTORY,
};

// strings_input_101 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput101States state;
} StringsInput101;

// strings_input_101 Initialisation function
void StringsInput101Init(StringsInput101* me);

// strings_input_101 Execution function
void StringsInput101Run(StringsInput101* me);

#endif // STRINGS_INPUT_101_H_