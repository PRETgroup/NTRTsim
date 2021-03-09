#ifndef STRINGS_INPUT_45_H_
#define STRINGS_INPUT_45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_45 States
enum StringsInput45States {
    STRINGS_INPUT_45_INTEGRATE,
    STRINGS_INPUT_45_LIMIT,
    STRINGS_INPUT_45_SPIKE,
    STRINGS_INPUT_45_REFRACTORY,
};

// strings_input_45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput45States state;
} StringsInput45;

// strings_input_45 Initialisation function
void StringsInput45Init(StringsInput45* me);

// strings_input_45 Execution function
void StringsInput45Run(StringsInput45* me);

#endif // STRINGS_INPUT_45_H_